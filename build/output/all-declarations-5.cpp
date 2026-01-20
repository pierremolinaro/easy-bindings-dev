#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------
//  Enum autolayoutEnabledBindingForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration::GGS_autolayoutEnabledBindingForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inAssociatedValue0
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_enabled ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autolayoutEnabledBindingForGeneration_2E_enabled (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::method_extractEnabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & outAssociatedValue_binding,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enabled) {
    outAssociatedValue_binding.drop () ;
    String s ;
    s.appendCString ("method @autolayoutEnabledBindingForGeneration.enabled invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_binding = ptr->mProperty_binding ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration::getter_getEnabled (UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  if (mEnum == Enumeration::enum_enabled) {
    const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autolayoutEnabledBindingForGeneration_2E_enabled (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::getAssociatedValuesFor_enabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_binding) const {
  const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
  out_binding = ptr->mProperty_binding ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [3] = {
  "(not built)",
  "none",
  "enabled"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isEnabled (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enabled == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autolayoutEnabledBindingForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutEnabledBindingForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ("autolayoutEnabledBindingForGeneration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutEnabledBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutEnabledBindingForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  const GGS_autolayoutEnabledBindingForGeneration * p = (const GGS_autolayoutEnabledBindingForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutEnabledBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
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
// List type @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GGS_string & in_mParameterName,
                                                                                      const GGS_string & in_mParameterValue
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (in_mParameterName, in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<list @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (count()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count() > 1) ? "s" : "") ;
  ioString.appendCString ("):") ;
  if (isValid ()) {
    for (uint32_t i = 0 ; i < count () ; i++) {
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation) ;
      ioString.appendString ("|-at ") ;
      ioString.appendUnsigned (i) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                     const GGS_string & inOperand1
                                                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::addAssignOperation (const GGS_string & inOperand0,
                                                                               const GGS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_append (const GGS_string inOperand0,
                                                                          const GGS_string inOperand1,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                 const GGS_string inOperand1,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && inInsertionIndex.isValid () && newElement.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx <= mArray.count ()) {
      mArray.insertObjectAtIndex (newElement, idx COMMA_THERE) ;
    }else{
      String message = "cannot insert at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                 GGS_string & outOperand1,
                                                                                 const GGS_uint inRemoveIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterValue ;
      mArray.removeObjectAtIndex (idx COMMA_HERE) ;
    }else{
      String message = "cannot remove at index " ;
      message.appendSigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GGS_string & outOperand0,
                                                                            GGS_string & outOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GGS_string & outOperand0,
                                                                           GGS_string & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::method_first (GGS_string & outOperand0,
                                                                         GGS_string & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::method_last (GGS_string & outOperand0,
                                                                        GGS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mArray.setCapacity (1 + result.mArray.count () + inOperand.mArray.count ()) ;
    for (int32_t i = 0 ; i < inOperand.mArray.count () ; i++) {
      result.mArray.appendObject (inOperand.mArray (i COMMA_HERE)) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::subList (const int32_t inStart,
                                                                                                                    const int32_t inLength,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  const bool ok = (inStart >= 0) && (inLength >= 0) && ((inStart + inLength) <= int32_t (count ())) ;
  if (ok) {
    result.mArray.setCapacity (std::max (16, inLength)) ;
    for (int32_t i = inStart ; i < (inStart + inLength) ; i++) {
      result.mArray.appendObject (mArray (i COMMA_HERE)) ;
    }
  }else{
    String message = "cannot get sublist [start: " ;
    message.appendSigned (inStart) ;
    message.appendCString (", length: ") ;
    message.appendSigned (inLength) ;
    message.appendCString ("], list count is ") ;
    message.appendSigned (mArray.count ()) ;
    inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inList,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inList.isValid ()) {
    mArray.setCapacity (1 + mArray.count () + inList.mArray.count ()) ;
    for (int32_t i=0 ; i < int32_t (inList.count ()) ; i++) {
      mArray.appendObject (inList.mArray (i COMMA_HERE)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GGS_string inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterName ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterValueAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue = inOperand ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterValueAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue ;
    }else{
      String message = "cannot access at index " ;
      message.appendUnsigned (idx) ;
      message.appendCString (", list count is ") ;
      message.appendSigned (mArray.count ()) ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------
// Down Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationParameterList::DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationParameterList::UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ("autoLayoutViewInstructionGenerationParameterList",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationParameterList::staticTypeDescriptor (void) const {
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

GGS_autoLayoutComputedViewInstructionGeneration GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutComputedViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutComputedViewInstructionGeneration (p) ;
    }
  }
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration_2E_weak ("autoLayoutComputedViewInstructionGeneration.weak",
                                                                                                        & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutComputedViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
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
  UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList enumerator_79920 (temp_0) ;
  while (enumerator_79920.hasCurrentObject ()) {
    ioArgument_ioStr.plusAssignOperation(constinArgument_inIndentation.add_operation (GGS_string ("  ."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)).add_operation (enumerator_79920.current_mFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1907)) ;
    UpEnumerator_autoLayoutViewInstructionGenerationParameterList enumerator_80023 (enumerator_79920.current_mParameters (HERE)) ;
    while (enumerator_80023.hasCurrentObject ()) {
      ioArgument_ioStr.plusAssignOperation(enumerator_80023.current_mParameterName (HERE).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)).add_operation (enumerator_80023.current_mParameterValue (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1909)) ;
      enumerator_80023.gotoNextObject () ;
      if (enumerator_80023.hasCurrentObject ()) {
        ioArgument_ioStr.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1910)) ;
      }
    }
    ioArgument_ioStr.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 1912)) ;
    enumerator_79920.gotoNextObject () ;
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

ComparisonResult GGS_enumerationDeclarationAST_2E_weak::objectCompare (const GGS_enumerationDeclarationAST_2E_weak & inOperand) const {
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

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak & GGS_enumerationDeclarationAST_2E_weak::operator = (const GGS_enumerationDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak::GGS_enumerationDeclarationAST_2E_weak (const GGS_enumerationDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_enumerationDeclarationAST result ;
  if (isValid ()) {
    const cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumerationDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST GGS_enumerationDeclarationAST_2E_weak::bang_enumerationDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumerationDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumerationDeclarationAST) ;
      result = GGS_enumerationDeclarationAST ((cPtr_enumerationDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumerationDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ("enumerationDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationDeclarationAST_2E_weak GGS_enumerationDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumerationDeclarationAST_2E_weak result ;
  const GGS_enumerationDeclarationAST_2E_weak * p = (const GGS_enumerationDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @enumConstantMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::~ GGS_enumConstantMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap::GGS_enumConstantMap (const GGS_enumConstantMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap & GGS_enumConstantMap::operator = (const GGS_enumConstantMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumConstantMap::getter_hasKey (const GGS_string & inKey
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumConstantMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                    const GGS_uint & inLevel
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumConstantMap::getter_locationForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumConstantMap::getter_keyList (Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumConstantMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::performInsert (const GGS_enumConstantMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_enumConstantMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>
GGS_enumConstantMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_enumConstantMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>>
GGS_enumConstantMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_enumConstantMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element_3F_ GGS_enumConstantMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumConstantMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_enumConstantMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_enumConstantMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mIndex = info->mProperty_mIndex ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::class_func_mapWithMapToOverride (const GGS_enumConstantMap & inMapToOverride
                                                                          COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::getter_overriddenMap (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_enumConstantMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_insertKey (GGS_lstring inLKey,
                                            GGS_uint inArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  const GGS_enumConstantMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "there is already a '%K' constant" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::method_searchKey (GGS_lstring inLKey,
                                            GGS_uint & outArgument0,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' constant is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mIndex ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumConstantMap::getter_mIndexForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIndex ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::setter_setMIndexForKey (GGS_uint inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_enumConstantMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIndex = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_enumConstantMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIndex:") ;
    inArray (i COMMA_HERE)->mProperty_mIndex.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumConstantMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> array = sortedInfoArray () ;
    GGS_enumConstantMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_enumConstantMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_enumConstantMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumConstantMap::objectCompare (const GGS_enumConstantMap & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> left = sortedInfoArray () ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumConstantMap_2E_element>> right = inOperand.sortedInfoArray () ;
      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;
      }
    }
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @enumConstantMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumConstantMap::DownEnumerator_enumConstantMap (const GGS_enumConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element DownEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @enumConstantMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumConstantMap::UpEnumerator_enumConstantMap (const GGS_enumConstantMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap_2E_element UpEnumerator_enumConstantMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumConstantMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_enumConstantMap::current_mIndex (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIndex ;
}


//--------------------------------------------------------------------------------------------------
//     @enumConstantMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumConstantMap ("enumConstantMap",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumConstantMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumConstantMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumConstantMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumConstantMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumConstantMap GGS_enumConstantMap::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_enumConstantMap result ;
  const GGS_enumConstantMap * p = (const GGS_enumConstantMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumConstantMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumConstantMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//@enumFunAssociationSortedList' sorted list
//--------------------------------------------------------------------------------------------------

static int32_t compareForSorting_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList_2E_element & inLeft,
                                                               const GGS_enumFunAssociationSortedList_2E_element & inRight) {
  ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = inLeft.mProperty_mIndex.objectCompare (inRight.mProperty_mIndex) ;
  }
  return int32_t (result) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList::GGS_enumFunAssociationSortedList (void) :
mSharedArray () {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFunAssociationSortedList::objectCompare (const GGS_enumFunAssociationSortedList & inOperand) const {
    ComparisonResult result = ComparisonResult::invalid ;
    if (isValid () && inOperand.isValid ()) {
      if (count () < inOperand.count ()) {
        result = ComparisonResult::firstOperandLowerThanSecond ;
      }else if (count () > inOperand.count ()) {
        result = ComparisonResult::firstOperandGreaterThanSecond ;
      }else{
        result = ComparisonResult::operandEqual ;
        for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
          const GGS_enumFunAssociationSortedList_2E_element left = mSharedArray (i COMMA_HERE) ;
          const GGS_enumFunAssociationSortedList_2E_element right = inOperand.mSharedArray (i COMMA_HERE) ;
          result = left.objectCompare (right) ;
        }
      }
    }
    return result ;
  }

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumFunAssociationSortedList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::plusPlusAssignOperation (const GGS_enumFunAssociationSortedList_2E_element & inElement
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    mSharedArray.appendObject (inElement) ;
    mSharedArray.quickSortUsingFunction (compareForSorting_enumFunAssociationSortedList) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::class_func_emptySortedList (UNUSED_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::class_func_sortedListWithValue (const GGS_uint & inOperand0,
                                                                                                   const GGS_string & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result = class_func_emptySortedList (THERE) ;
  const GGS_enumFunAssociationSortedList_2E_element newElement (inOperand0, inOperand1) ;
  result.plusPlusAssignOperation (newElement COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::addAssignOperation (const GGS_uint & inOperand0,
                                                           const GGS_string & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  const GGS_enumFunAssociationSortedList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_insert (const GGS_uint inOperand0,
                                                      const GGS_string inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_enumFunAssociationSortedList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::plusAssignOperation (const GGS_enumFunAssociationSortedList inSortedList,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSortedList.isValid ()) {
    mSharedArray.setCapacity (mSharedArray.capacity () + inSortedList.mSharedArray.capacity ()) ;
    for (int32_t i=0 ; i<inSortedList.count () ; i++) {
      mSharedArray.appendObject (inSortedList.mSharedArray (i COMMA_HERE)) ;
    }
    mSharedArray.quickSortUsingFunction (compareForSorting_enumFunAssociationSortedList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_popSmallest (GGS_uint & outOperand0,
                                                           GGS_string & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popSmallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mIndex ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mAssociatedString ;
      mSharedArray.removeObjectAtIndex (0 COMMA_HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::setter_popGreatest (GGS_uint & outOperand0,
                                                           GGS_string & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'popGreatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mIndex ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mAssociatedString ;
      mSharedArray.removeLastObject (HERE) ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::method_smallest (GGS_uint & outOperand0,
                                                        GGS_string & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'smallest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray (0 COMMA_HERE).mProperty_mIndex ;
      outOperand1 = mSharedArray (0 COMMA_HERE).mProperty_mAssociatedString ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::method_greatest (GGS_uint & outOperand0,
                                                        GGS_string & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (count () == 0) {
      inCompiler->onTheFlyRunTimeError ("'greatest' method invoked on an empty list" COMMA_THERE) ;
    }else{
      outOperand0 = mSharedArray.lastObject (HERE).mProperty_mIndex ;
      outOperand1 = mSharedArray.lastObject (HERE).mProperty_mAssociatedString ;
      found = true ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList::description (String & ioString,
                                          const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendSigned (count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((count () > 1) ? "s" : "") ;
  ioString.appendCString (")>") ;
}

//--------------------------------------------------------------------------------------------------
// Down Enumerator for @enumFunAssociationSortedList
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumFunAssociationSortedList::DownEnumerator_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mElementArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element DownEnumerator_enumFunAssociationSortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint DownEnumerator_enumFunAssociationSortedList::current_mIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_enumFunAssociationSortedList::current_mAssociatedString (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAssociatedString ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @enumFunAssociationSortedList
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumFunAssociationSortedList::UpEnumerator_enumFunAssociationSortedList (const GGS_enumFunAssociationSortedList & inEnumeratedObject) :
mElementArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element UpEnumerator_enumFunAssociationSortedList::current (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint UpEnumerator_enumFunAssociationSortedList::current_mIndex (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mIndex ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_enumFunAssociationSortedList::current_mAssociatedString (LOCATION_ARGS) const {
  return mElementArray (mIndex COMMA_THERE).mProperty_mAssociatedString ;
}



//--------------------------------------------------------------------------------------------------
//     @enumFunAssociationSortedList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList ("enumFunAssociationSortedList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFunAssociationSortedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFunAssociationSortedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFunAssociationSortedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  const GGS_enumFunAssociationSortedList * p = (const GGS_enumFunAssociationSortedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFunAssociationSortedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @enumFuncMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap::GGS_enumFuncMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap::~ GGS_enumFuncMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap::GGS_enumFuncMap (const GGS_enumFuncMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap & GGS_enumFuncMap::operator = (const GGS_enumFuncMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumFuncMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumFuncMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumFuncMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumFuncMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_enumFuncMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      String message = "'locationForKey' map reader run-time error: the '" ;
      message.appendString (inKey.stringValue ()) ;
      message.appendCString ("' does not exist in map") ;
      inCompiler->onTheFlyRunTimeError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_lkey.mProperty_location ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumFuncMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_enumFuncMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumFuncMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::performInsert (const GGS_enumFuncMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_enumFuncMap_2E_element>> existingNode ;
    const bool allowReplacing = false ;
    mSharedRoot.insulate (THERE) ;
    mSharedRoot->insertOrReplaceInfo (
      inElement,
      allowReplacing,
      existingNode
      COMMA_THERE
    ) ;
    const GGS_lstring lkey = inElement.mProperty_lkey ;
    if (existingNode.isNotNil ()) {
      const GGS_location lstring_existingKey_location = existingNode->mSharedInfo->mProperty_lkey.mProperty_location ;
      inCompiler->semanticErrorWith_K_L_message (lkey, inInsertErrorMessage, lstring_existingKey_location COMMA_THERE) ;
    }else if ((inShadowErrorMessage != nullptr) && (mSharedRoot->overriddenRoot ().isNotNil ())) {
      const auto existingInfo = mSharedRoot->overriddenRoot ()->infoForKey (lkey.mProperty_string.stringValue()) ;
      if (existingInfo.isNotNil ()) {
        const GGS_location lstring_existingKey_location = existingInfo->mProperty_lkey.mProperty_location ;
        inCompiler->semanticErrorWith_K_L_message (lkey, inShadowErrorMessage, lstring_existingKey_location COMMA_THERE) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------

const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>
GGS_enumFuncMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_enumFuncMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>>
GGS_enumFuncMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_enumFuncMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element_3F_ GGS_enumFuncMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumFuncMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_enumFuncMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_enumFuncMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mAssociationSortedList = info->mProperty_mAssociationSortedList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::class_func_mapWithMapToOverride (const GGS_enumFuncMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_enumFuncMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_enumFuncMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_enumFunAssociationSortedList inArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_enumFuncMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "there is already a '%K' enum function" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_enumFunAssociationSortedList & outArgument0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' enum function is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mAssociationSortedList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFuncMap::getter_mAssociationSortedListForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_enumFunAssociationSortedList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAssociationSortedList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::setter_setMAssociationSortedListForKey (GGS_enumFunAssociationSortedList inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_enumFuncMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAssociationSortedList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_enumFuncMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> & inArray,
                                                        String & ioString,
                                                        const int32_t inIndentation) {
  const int32_t n = inArray.count () ;
  ioString.appendString (" (") ;
  ioString.appendSigned (n) ;
  ioString.appendString (" object") ;
  if (n > 1) {
    ioString.appendString ("s") ;
  }
  ioString.appendString ("):") ;
  for (int32_t i = 0 ; i < n ; i++) {
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation) ;
    ioString.appendString ("|-at ") ;
    ioString.appendSigned (i) ;
    ioString.appendString (": key '") ;
    ioString.appendString (inArray (i COMMA_HERE)->mProperty_lkey.mProperty_string.stringValue ()) ;
    ioString.appendString ("'") ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAssociationSortedList:") ;
    inArray (i COMMA_HERE)->mProperty_mAssociationSortedList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFuncMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> array = sortedInfoArray () ;
    GGS_enumFuncMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_enumFuncMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_enumFuncMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFuncMap::objectCompare (const GGS_enumFuncMap & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (count () < inOperand.count ()) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (count () > inOperand.count ()) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> left = sortedInfoArray () ;
      const GenericArray <SharedGenericPtrWithValueSemantics <GGS_enumFuncMap_2E_element>> right = inOperand.sortedInfoArray () ;
      for (int32_t i = 0 ; (i < count ()) && (result == ComparisonResult::operandEqual) ; i++) {
        result = left (i COMMA_HERE).value ().objectCompare (right (i COMMA_HERE).value ()) ;
      }
    }
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @enumFuncMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumFuncMap::DownEnumerator_enumFuncMap (const GGS_enumFuncMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element DownEnumerator_enumFuncMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumFuncMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList DownEnumerator_enumFuncMap::current_mAssociationSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAssociationSortedList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @enumFuncMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumFuncMap::UpEnumerator_enumFuncMap (const GGS_enumFuncMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap_2E_element UpEnumerator_enumFuncMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumFuncMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList UpEnumerator_enumFuncMap::current_mAssociationSortedList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAssociationSortedList ;
}


//--------------------------------------------------------------------------------------------------
//     @enumFuncMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFuncMap ("enumFuncMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFuncMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFuncMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFuncMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFuncMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumFuncMap::extractObject (const GGS_object & inObject,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  GGS_enumFuncMap result ;
  const GGS_enumFuncMap * p = (const GGS_enumFuncMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFuncMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFuncMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumForGeneration::objectCompare (const GGS_enumForGeneration & inOperand) const {
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

GGS_enumForGeneration::GGS_enumForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::
init_21__21__21__21_ (const GGS_string & in_mEnumName,
                      const GGS_lstringlist & in_mEnumConstantList,
                      const GGS_enumFuncMap & in_mEnumFuncMap,
                      const GGS_bool & in_mCaseIterable,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_enumForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_enumForGeneration (inCompiler COMMA_THERE)) ;
  object->enumForGeneration_init_21__21__21__21_ (in_mEnumName, in_mEnumConstantList, in_mEnumFuncMap, in_mCaseIterable, inCompiler) ;
  const GGS_enumForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_enumForGeneration::
enumForGeneration_init_21__21__21__21_ (const GGS_string & in_mEnumName,
                                        const GGS_lstringlist & in_mEnumConstantList,
                                        const GGS_enumFuncMap & in_mEnumFuncMap,
                                        const GGS_bool & in_mCaseIterable,
                                        Compiler * /* inCompiler */) {
  mProperty_mEnumName = in_mEnumName ;
  mProperty_mEnumConstantList = in_mEnumConstantList ;
  mProperty_mEnumFuncMap = in_mEnumFuncMap ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration::GGS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::class_func_new (const GGS_string & in_mEnumName,
                                                             const GGS_lstringlist & in_mEnumConstantList,
                                                             const GGS_enumFuncMap & in_mEnumFuncMap,
                                                             const GGS_bool & in_mCaseIterable,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration result ;
  macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (in_mEnumName, in_mEnumConstantList, in_mEnumFuncMap, in_mCaseIterable,  inCompiler COMMA_THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_enumForGeneration::readProperty_mEnumName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_enumForGeneration::readProperty_mEnumConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstringlist () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumFuncMap GGS_enumForGeneration::readProperty_mEnumFuncMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_enumFuncMap () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumFuncMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_enumForGeneration::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEnumName (),
mProperty_mEnumConstantList (),
mProperty_mEnumFuncMap (),
mProperty_mCaseIterable () {
}

//--------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (const GGS_string & in_mEnumName,
                                                const GGS_lstringlist & in_mEnumConstantList,
                                                const GGS_enumFuncMap & in_mEnumFuncMap,
                                                const GGS_bool & in_mCaseIterable,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEnumName (),
mProperty_mEnumConstantList (),
mProperty_mEnumFuncMap (),
mProperty_mCaseIterable () {
  mProperty_mEnumName = in_mEnumName ;
  mProperty_mEnumConstantList = in_mEnumConstantList ;
  mProperty_mEnumFuncMap = in_mEnumFuncMap ;
  mProperty_mCaseIterable = in_mCaseIterable ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@enumForGeneration:") ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mEnumFuncMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList, mProperty_mEnumFuncMap, mProperty_mCaseIterable, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEnumName.printNonNullClassInstanceProperties ("mEnumName") ;
    mProperty_mEnumConstantList.printNonNullClassInstanceProperties ("mEnumConstantList") ;
    mProperty_mEnumFuncMap.printNonNullClassInstanceProperties ("mEnumFuncMap") ;
    mProperty_mCaseIterable.printNonNullClassInstanceProperties ("mCaseIterable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @enumForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration result ;
  const GGS_enumForGeneration * p = (const GGS_enumForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumForGeneration_2E_weak::objectCompare (const GGS_enumForGeneration_2E_weak & inOperand) const {
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

GGS_enumForGeneration_2E_weak::GGS_enumForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak & GGS_enumForGeneration_2E_weak::operator = (const GGS_enumForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak::GGS_enumForGeneration_2E_weak (const GGS_enumForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak GGS_enumForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_enumForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_enumForGeneration result ;
  if (isValid ()) {
    const cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_enumForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration GGS_enumForGeneration_2E_weak::bang_enumForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_enumForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumForGeneration) ;
      result = GGS_enumForGeneration ((cPtr_enumForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @enumForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ("enumForGeneration.weak",
                                                                              & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak GGS_enumForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_enumForGeneration_2E_weak result ;
  const GGS_enumForGeneration_2E_weak * p = (const GGS_enumForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     L E X I Q U E                                                                             
//
//--------------------------------------------------------------------------------------------------

#include "utf32.h"
#include "scanner_actions.h"
#include "LexiqueIntrospection.h"

//--------------------------------------------------------------------------------------------------

cTokenFor_easyBindings_5F_lexique::cTokenFor_easyBindings_5F_lexique (void) :
mLexicalAttribute_floatValue (),
mLexicalAttribute_tokenString (),
mLexicalAttribute_uint_33__32_value () {
}

//--------------------------------------------------------------------------------------------------

Lexique_easyBindings_5F_lexique::Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                                                                  const String & inSourceFileName
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceFileName COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

Lexique_easyBindings_5F_lexique::Lexique_easyBindings_5F_lexique (Compiler * inCallerCompiler,
                                                                  const String & inSourceString,
                                                                  const String & inStringForError
                                                                  COMMA_LOCATION_ARGS) :
Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------
//                        Lexical error message list                                             
//--------------------------------------------------------------------------------------------------

static const char * gLexicalMessage_easyBindings_5F_lexique_attributeError = "in an attribute name, a letter, a digit or a dot should follow the '@' character" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge = "decimal number too large" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError = "invalid float number" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd = "string does not end with '\"'" ;

static const char * gLexicalMessage_easyBindings_5F_lexique_internalError = "internal error" ;

//--------------------------------------------------------------------------------------------------
//                getMessageForTerminal                                                          
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::getMessageForTerminal (const int32_t inTerminalIndex) const {
  String result = "<unknown>" ;
  if ((inTerminalIndex >= 0) && (inTerminalIndex < 105)) {
    static const char * syntaxErrorMessageArray [105] = {kEndOfSourceLexicalErrorMessage,
        "an identifier (beginning with a lower-case letter)",
        "an identifier (beginning with a upper-case letter)",
        "an attribute @...",
        "a binding name (identifier prefixed by '$')",
        "a controller name (identifier prefixed by '#')",
        "a view name (identifier prefixed by '\\')",
        "a 32-bit unsigned decimal number",
        "a float number",
        "a character string constant \"...\"",
        "a comment",
        "the 'abstract' keyword",
        "the 'action' keyword",
        "the 'all' keyword",
        "the 'arrayController' keyword",
        "the 'autolayout' keyword",
        "the 'autoLayoutDocument' keyword",
        "the 'binding' keyword",
        "the 'calledBy' keyword",
        "the 'class' keyword",
        "the 'classForSwift' keyword",
        "the 'column' keyword",
        "the 'computed' keyword",
        "the 'configurator' keyword",
        "the 'default' keyword",
        "the 'dependsFrom' keyword",
        "the 'divider' keyword",
        "the 'enum' keyword",
        "the 'editableColumn' keyword",
        "the 'entity' keyword",
        "the 'extern' keyword",
        "the 'externDelegate' keyword",
        "the 'externFunc' keyword",
        "the 'func' keyword",
        "the 'graphic' keyword",
        "the 'graphviz' keyword",
        "the 'gutter' keyword",
        "the 'handlingOpposite' keyword",
        "the 'hStack' keyword",
        "the 'include' keyword",
        "the 'inverse' keyword",
        "the 'linker' keyword",
        "the 'mainxib' keyword",
        "the 'menuItem' keyword",
        "the 'no' keyword",
        "the 'newView' keyword",
        "the 'none' keyword",
        "the 'one' keyword",
        "the 'outlet' keyword",
        "the 'outletArray' keyword",
        "the 'override' keyword",
        "the 'prefs' keyword",
        "the 'property' keyword",
        "the 'proxy' keyword",
        "the 'root' keyword",
        "the 'selectionController' keyword",
        "the 'self' keyword",
        "the 'separator' keyword",
        "the 'signature' keyword",
        "the 'sortkey' keyword",
        "the 'space' keyword",
        "the 'stackView' keyword",
        "the 'standalone' keyword",
        "the 'struct' keyword",
        "the 'super' keyword",
        "the 'tableViewController' keyword",
        "the 'toMany' keyword",
        "the 'toOne' keyword",
        "the 'transient' keyword",
        "the 'typeView' keyword",
        "the 'version' keyword",
        "the 'vStack' keyword",
        "the 'versionShouldChange' keyword",
        "the 'view' keyword",
        "the 'weak' keyword",
        "the 'withVScroller' keyword",
        "the 'xcodeproject' keyword",
        "the 'yes' keyword",
        "the '$enabled' keyword",
        "the '$graphicController' keyword",
        "the '$hidden' keyword",
        "the '$tableValue' keyword",
        "the '$run' keyword",
        "the ':' delimitor",
        "the ',' delimitor",
        "the ';' delimitor",
        "the '!' delimitor",
        "the '[' delimitor",
        "the ']' delimitor",
        "the '{' delimitor",
        "the '}' delimitor",
        "the '(' delimitor",
        "the ')' delimitor",
        "the '.' delimitor",
        "the '|' delimitor",
        "the '&' delimitor",
        "the '<' delimitor",
        "the '>' delimitor",
        "the '<=' delimitor",
        "the '>=' delimitor",
        "the '!=' delimitor",
        "the '==' delimitor",
        "the '^' delimitor",
        "the '-' delimitor",
        "the '=' delimitor"
    } ;
    result = syntaxErrorMessageArray [inTerminalIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                      U N I C O D E    S T R I N G S                                           
//--------------------------------------------------------------------------------------------------

//--- Unicode string for '$!$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__21_ = {
  utf32 ('!'),
} ;

//--- Unicode string for '$!=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__21__3D_ = {
  utf32 ('!'),
  utf32 ('='),
} ;

//--- Unicode string for '$&$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__26_ = {
  utf32 ('&'),
} ;

//--- Unicode string for '$($'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__28_ = {
  utf32 ('('),
} ;

//--- Unicode string for '$)$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__29_ = {
  utf32 (')'),
} ;

//--- Unicode string for '$,$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2C_ = {
  utf32 (','),
} ;

//--- Unicode string for '$-$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2D_ = {
  utf32 ('-'),
} ;

//--- Unicode string for '$.$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2E_ = {
  utf32 ('.'),
} ;

//--- Unicode string for '$//$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__2F__2F_ = {
  utf32 ('/'),
  utf32 ('/'),
} ;

//--- Unicode string for '$:$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3A_ = {
  utf32 (':'),
} ;

//--- Unicode string for '$;$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3B_ = {
  utf32 (';'),
} ;

//--- Unicode string for '$<$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3C_ = {
  utf32 ('<'),
} ;

//--- Unicode string for '$<=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3C__3D_ = {
  utf32 ('<'),
  utf32 ('='),
} ;

//--- Unicode string for '$=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3D_ = {
  utf32 ('='),
} ;

//--- Unicode string for '$==$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3D__3D_ = {
  utf32 ('='),
  utf32 ('='),
} ;

//--- Unicode string for '$>$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3E_ = {
  utf32 ('>'),
} ;

//--- Unicode string for '$>=$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__3E__3D_ = {
  utf32 ('>'),
  utf32 ('='),
} ;

//--- Unicode string for '$[$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5B_ = {
  utf32 ('['),
} ;

//--- Unicode string for '$\\\"$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5C__22_ = {
  utf32 ('\\'),
  utf32 ('\"'),
} ;

//--- Unicode string for '$\\n$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5C_n = {
  utf32 ('\\'),
  utf32 ('n'),
} ;

//--- Unicode string for '$]$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5D_ = {
  utf32 (']'),
} ;

//--- Unicode string for '$^$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__5E_ = {
  utf32 ('^'),
} ;

//--- Unicode string for '$abstract$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_abstract = {
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$action$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_action = {
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$all$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_all = {
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('l'),
} ;

//--- Unicode string for '$arrayController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_arrayController = {
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('y'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$autoLayoutDocument$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument = {
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('L'),
  utf32 ('a'),
  utf32 ('y'),
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('D'),
  utf32 ('o'),
  utf32 ('c'),
  utf32 ('u'),
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$autolayout$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_autolayout = {
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('y'),
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('t'),
} ;

//--- Unicode string for '$binding$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_binding = {
  utf32 ('b'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
} ;

//--- Unicode string for '$calledBy$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_calledBy = {
  utf32 ('c'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('B'),
  utf32 ('y'),
} ;

//--- Unicode string for '$class$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_class = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
} ;

//--- Unicode string for '$classForSwift$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_classForSwift = {
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('a'),
  utf32 ('s'),
  utf32 ('s'),
  utf32 ('F'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('S'),
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('f'),
  utf32 ('t'),
} ;

//--- Unicode string for '$column$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_column = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('m'),
  utf32 ('n'),
} ;

//--- Unicode string for '$computed$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_computed = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('m'),
  utf32 ('p'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$configurator$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_configurator = {
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('f'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$default$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_default = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('a'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('t'),
} ;

//--- Unicode string for '$dependsFrom$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_dependsFrom = {
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('s'),
  utf32 ('F'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('m'),
} ;

//--- Unicode string for '$divider$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_divider = {
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$editableColumn$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_editableColumn = {
  utf32 ('e'),
  utf32 ('d'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('m'),
  utf32 ('n'),
} ;

//--- Unicode string for '$enabled$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_enabled = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('d'),
} ;

//--- Unicode string for '$entity$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_entity = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('y'),
} ;

//--- Unicode string for '$enum$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_enum = {
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('m'),
} ;

//--- Unicode string for '$extern$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_extern = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
} ;

//--- Unicode string for '$externDelegate$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_externDelegate = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
  utf32 ('D'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('g'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$externFunc$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_externFunc = {
  utf32 ('e'),
  utf32 ('x'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('n'),
  utf32 ('F'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$func$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_func = {
  utf32 ('f'),
  utf32 ('u'),
  utf32 ('n'),
  utf32 ('c'),
} ;

//--- Unicode string for '$graphic$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphic = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('c'),
} ;

//--- Unicode string for '$graphicController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphicController = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('c'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$graphviz$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_graphviz = {
  utf32 ('g'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('p'),
  utf32 ('h'),
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('z'),
} ;

//--- Unicode string for '$gutter$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_gutter = {
  utf32 ('g'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$hStack$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_hStack = {
  utf32 ('h'),
  utf32 ('S'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$handlingOpposite$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_handlingOpposite = {
  utf32 ('h'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('g'),
  utf32 ('O'),
  utf32 ('p'),
  utf32 ('p'),
  utf32 ('o'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('e'),
} ;

//--- Unicode string for '$hidden$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_hidden = {
  utf32 ('h'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('n'),
} ;

//--- Unicode string for '$include$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_include = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('c'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$inverse$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_inverse = {
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('e'),
} ;

//--- Unicode string for '$linker$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_linker = {
  utf32 ('l'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$mainxib$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_mainxib = {
  utf32 ('m'),
  utf32 ('a'),
  utf32 ('i'),
  utf32 ('n'),
  utf32 ('x'),
  utf32 ('i'),
  utf32 ('b'),
} ;

//--- Unicode string for '$menuItem$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_menuItem = {
  utf32 ('m'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('u'),
  utf32 ('I'),
  utf32 ('t'),
  utf32 ('e'),
  utf32 ('m'),
} ;

//--- Unicode string for '$newView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_newView = {
  utf32 ('n'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('V'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('w'),
} ;

//--- Unicode string for '$no$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_no = {
  utf32 ('n'),
  utf32 ('o'),
} ;

//--- Unicode string for '$none$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_none = {
  utf32 ('n'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$one$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_one = {
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$outlet$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_outlet = {
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
} ;

//--- Unicode string for '$outletArray$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_outletArray = {
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('t'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('t'),
  utf32 ('A'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('y'),
} ;

//--- Unicode string for '$override$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_override = {
  utf32 ('o'),
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('r'),
  utf32 ('i'),
  utf32 ('d'),
  utf32 ('e'),
} ;

//--- Unicode string for '$prefs$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_prefs = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('e'),
  utf32 ('f'),
  utf32 ('s'),
} ;

//--- Unicode string for '$property$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_property = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('y'),
} ;

//--- Unicode string for '$proxy$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_proxy = {
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('x'),
  utf32 ('y'),
} ;

//--- Unicode string for '$root$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_root = {
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('o'),
  utf32 ('t'),
} ;

//--- Unicode string for '$run$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_run = {
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('n'),
} ;

//--- Unicode string for '$selectionController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_selectionController = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$self$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_self = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('l'),
  utf32 ('f'),
} ;

//--- Unicode string for '$separator$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_separator = {
  utf32 ('s'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('r'),
} ;

//--- Unicode string for '$signature$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_signature = {
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('g'),
  utf32 ('n'),
  utf32 ('a'),
  utf32 ('t'),
  utf32 ('u'),
  utf32 ('r'),
  utf32 ('e'),
} ;

//--- Unicode string for '$sortkey$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_sortkey = {
  utf32 ('s'),
  utf32 ('o'),
  utf32 ('r'),
  utf32 ('t'),
  utf32 ('k'),
  utf32 ('e'),
  utf32 ('y'),
} ;

//--- Unicode string for '$space$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_space = {
  utf32 ('s'),
  utf32 ('p'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('e'),
} ;

//--- Unicode string for '$stackView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_stackView = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('k'),
  utf32 ('V'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('w'),
} ;

//--- Unicode string for '$standalone$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_standalone = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('d'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$struct$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_struct = {
  utf32 ('s'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('u'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$super$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_super = {
  utf32 ('s'),
  utf32 ('u'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$tableValue$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_tableValue = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('V'),
  utf32 ('a'),
  utf32 ('l'),
  utf32 ('u'),
  utf32 ('e'),
} ;

//--- Unicode string for '$tableViewController$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_tableViewController = {
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('b'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('V'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('w'),
  utf32 ('C'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$toMany$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_toMany = {
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('M'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('y'),
} ;

//--- Unicode string for '$toOne$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_toOne = {
  utf32 ('t'),
  utf32 ('o'),
  utf32 ('O'),
  utf32 ('n'),
  utf32 ('e'),
} ;

//--- Unicode string for '$transient$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_transient = {
  utf32 ('t'),
  utf32 ('r'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('n'),
  utf32 ('t'),
} ;

//--- Unicode string for '$typeView$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_typeView = {
  utf32 ('t'),
  utf32 ('y'),
  utf32 ('p'),
  utf32 ('e'),
  utf32 ('V'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('w'),
} ;

//--- Unicode string for '$vStack$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_vStack = {
  utf32 ('v'),
  utf32 ('S'),
  utf32 ('t'),
  utf32 ('a'),
  utf32 ('c'),
  utf32 ('k'),
} ;

//--- Unicode string for '$version$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_version = {
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
} ;

//--- Unicode string for '$versionShouldChange$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_versionShouldChange = {
  utf32 ('v'),
  utf32 ('e'),
  utf32 ('r'),
  utf32 ('s'),
  utf32 ('i'),
  utf32 ('o'),
  utf32 ('n'),
  utf32 ('S'),
  utf32 ('h'),
  utf32 ('o'),
  utf32 ('u'),
  utf32 ('l'),
  utf32 ('d'),
  utf32 ('C'),
  utf32 ('h'),
  utf32 ('a'),
  utf32 ('n'),
  utf32 ('g'),
  utf32 ('e'),
} ;

//--- Unicode string for '$view$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_view = {
  utf32 ('v'),
  utf32 ('i'),
  utf32 ('e'),
  utf32 ('w'),
} ;

//--- Unicode string for '$weak$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_weak = {
  utf32 ('w'),
  utf32 ('e'),
  utf32 ('a'),
  utf32 ('k'),
} ;

//--- Unicode string for '$withVScroller$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_withVScroller = {
  utf32 ('w'),
  utf32 ('i'),
  utf32 ('t'),
  utf32 ('h'),
  utf32 ('V'),
  utf32 ('S'),
  utf32 ('c'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('l'),
  utf32 ('l'),
  utf32 ('e'),
  utf32 ('r'),
} ;

//--- Unicode string for '$xcodeproject$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_xcodeproject = {
  utf32 ('x'),
  utf32 ('c'),
  utf32 ('o'),
  utf32 ('d'),
  utf32 ('e'),
  utf32 ('p'),
  utf32 ('r'),
  utf32 ('o'),
  utf32 ('j'),
  utf32 ('e'),
  utf32 ('c'),
  utf32 ('t'),
} ;

//--- Unicode string for '$yes$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique_yes = {
  utf32 ('y'),
  utf32 ('e'),
  utf32 ('s'),
} ;

//--- Unicode string for '${$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7B_ = {
  utf32 ('{'),
} ;

//--- Unicode string for '$|$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7C_ = {
  utf32 ('|'),
} ;

//--- Unicode string for '$}$'
static const std::initializer_list <utf32> kUnicodeString_easyBindings_5F_lexique__7D_ = {
  utf32 ('}'),
} ;

//--------------------------------------------------------------------------------------------------
//             Key words table 'delimitorsList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_delimitorsList = 22 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_delimitorsList [ktable_size_easyBindings_5F_lexique_delimitorsList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21_, Lexique_easyBindings_5F_lexique::kToken__21_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__26_, Lexique_easyBindings_5F_lexique::kToken__26_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__28_, Lexique_easyBindings_5F_lexique::kToken__28_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__29_, Lexique_easyBindings_5F_lexique::kToken__29_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2C_, Lexique_easyBindings_5F_lexique::kToken__2C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2D_, Lexique_easyBindings_5F_lexique::kToken__2D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__2E_, Lexique_easyBindings_5F_lexique::kToken__2E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3A_, Lexique_easyBindings_5F_lexique::kToken__3A_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3B_, Lexique_easyBindings_5F_lexique::kToken__3B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C_, Lexique_easyBindings_5F_lexique::kToken__3C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D_, Lexique_easyBindings_5F_lexique::kToken__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E_, Lexique_easyBindings_5F_lexique::kToken__3E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5B_, Lexique_easyBindings_5F_lexique::kToken__5B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5D_, Lexique_easyBindings_5F_lexique::kToken__5D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__5E_, Lexique_easyBindings_5F_lexique::kToken__5E_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7B_, Lexique_easyBindings_5F_lexique::kToken__7B_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7C_, Lexique_easyBindings_5F_lexique::kToken__7C_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__7D_, Lexique_easyBindings_5F_lexique::kToken__7D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__21__3D_, Lexique_easyBindings_5F_lexique::kToken__21__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3C__3D_, Lexique_easyBindings_5F_lexique::kToken__3C__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3D__3D_, Lexique_easyBindings_5F_lexique::kToken__3D__3D_),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique__3E__3D_, Lexique_easyBindings_5F_lexique::kToken__3E__3D_)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_delimitorsList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_delimitorsList, ktable_size_easyBindings_5F_lexique_delimitorsList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'lowerCaseKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList = 67 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList [ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_no, Lexique_easyBindings_5F_lexique::kToken_no),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_all, Lexique_easyBindings_5F_lexique::kToken_all),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_one, Lexique_easyBindings_5F_lexique::kToken_one),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_yes, Lexique_easyBindings_5F_lexique::kToken_yes),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enum, Lexique_easyBindings_5F_lexique::kToken_enum),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_func, Lexique_easyBindings_5F_lexique::kToken_func),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_none, Lexique_easyBindings_5F_lexique::kToken_none),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_root, Lexique_easyBindings_5F_lexique::kToken_root),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_self, Lexique_easyBindings_5F_lexique::kToken_self),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_view, Lexique_easyBindings_5F_lexique::kToken_view),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_weak, Lexique_easyBindings_5F_lexique::kToken_weak),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_class, Lexique_easyBindings_5F_lexique::kToken_class),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_prefs, Lexique_easyBindings_5F_lexique::kToken_prefs),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_proxy, Lexique_easyBindings_5F_lexique::kToken_proxy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_space, Lexique_easyBindings_5F_lexique::kToken_space),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_super, Lexique_easyBindings_5F_lexique::kToken_super),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toOne, Lexique_easyBindings_5F_lexique::kToken_toOne),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_action, Lexique_easyBindings_5F_lexique::kToken_action),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_column, Lexique_easyBindings_5F_lexique::kToken_column),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_entity, Lexique_easyBindings_5F_lexique::kToken_entity),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_extern, Lexique_easyBindings_5F_lexique::kToken_extern),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_gutter, Lexique_easyBindings_5F_lexique::kToken_gutter),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hStack, Lexique_easyBindings_5F_lexique::kToken_hStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_linker, Lexique_easyBindings_5F_lexique::kToken_linker),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outlet, Lexique_easyBindings_5F_lexique::kToken_outlet),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_struct, Lexique_easyBindings_5F_lexique::kToken_struct),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_toMany, Lexique_easyBindings_5F_lexique::kToken_toMany),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_vStack, Lexique_easyBindings_5F_lexique::kToken_vStack),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_binding, Lexique_easyBindings_5F_lexique::kToken_binding),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_default, Lexique_easyBindings_5F_lexique::kToken_default),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_divider, Lexique_easyBindings_5F_lexique::kToken_divider),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphic, Lexique_easyBindings_5F_lexique::kToken_graphic),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_include, Lexique_easyBindings_5F_lexique::kToken_include),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_inverse, Lexique_easyBindings_5F_lexique::kToken_inverse),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_mainxib, Lexique_easyBindings_5F_lexique::kToken_mainxib),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_newView, Lexique_easyBindings_5F_lexique::kToken_newView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_sortkey, Lexique_easyBindings_5F_lexique::kToken_sortkey),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_version, Lexique_easyBindings_5F_lexique::kToken_version),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_abstract, Lexique_easyBindings_5F_lexique::kToken_abstract),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_calledBy, Lexique_easyBindings_5F_lexique::kToken_calledBy),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_computed, Lexique_easyBindings_5F_lexique::kToken_computed),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphviz, Lexique_easyBindings_5F_lexique::kToken_graphviz),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_menuItem, Lexique_easyBindings_5F_lexique::kToken_menuItem),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_override, Lexique_easyBindings_5F_lexique::kToken_override),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_property, Lexique_easyBindings_5F_lexique::kToken_property),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_typeView, Lexique_easyBindings_5F_lexique::kToken_typeView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_separator, Lexique_easyBindings_5F_lexique::kToken_separator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_signature, Lexique_easyBindings_5F_lexique::kToken_signature),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_stackView, Lexique_easyBindings_5F_lexique::kToken_stackView),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_transient, Lexique_easyBindings_5F_lexique::kToken_transient),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autolayout, Lexique_easyBindings_5F_lexique::kToken_autolayout),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externFunc, Lexique_easyBindings_5F_lexique::kToken_externFunc),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_standalone, Lexique_easyBindings_5F_lexique::kToken_standalone),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_dependsFrom, Lexique_easyBindings_5F_lexique::kToken_dependsFrom),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_outletArray, Lexique_easyBindings_5F_lexique::kToken_outletArray),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_configurator, Lexique_easyBindings_5F_lexique::kToken_configurator),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_xcodeproject, Lexique_easyBindings_5F_lexique::kToken_xcodeproject),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_classForSwift, Lexique_easyBindings_5F_lexique::kToken_classForSwift),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_withVScroller, Lexique_easyBindings_5F_lexique::kToken_withVScroller),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_editableColumn, Lexique_easyBindings_5F_lexique::kToken_editableColumn),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_externDelegate, Lexique_easyBindings_5F_lexique::kToken_externDelegate),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_arrayController, Lexique_easyBindings_5F_lexique::kToken_arrayController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_handlingOpposite, Lexique_easyBindings_5F_lexique::kToken_handlingOpposite),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_autoLayoutDocument, Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_selectionController, Lexique_easyBindings_5F_lexique::kToken_selectionController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableViewController, Lexique_easyBindings_5F_lexique::kToken_tableViewController),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_versionShouldChange, Lexique_easyBindings_5F_lexique::kToken_versionShouldChange)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_lowerCaseKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_lowerCaseKeyWordList, ktable_size_easyBindings_5F_lexique_lowerCaseKeyWordList) ;
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'reservedBindingNameKeyWordList'      
//--------------------------------------------------------------------------------------------------

static const int32_t ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList = 5 ;

static const C_unicode_lexique_table_entry ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList [ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList] = {
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_run, Lexique_easyBindings_5F_lexique::kToken_run),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_hidden, Lexique_easyBindings_5F_lexique::kToken_hidden),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_enabled, Lexique_easyBindings_5F_lexique::kToken_enabled),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_tableValue, Lexique_easyBindings_5F_lexique::kToken_tableValue),
  C_unicode_lexique_table_entry (kUnicodeString_easyBindings_5F_lexique_graphicController, Lexique_easyBindings_5F_lexique::kToken_graphicController)
} ;

int32_t Lexique_easyBindings_5F_lexique::search_into_reservedBindingNameKeyWordList (const String & inSearchedString) {
  return searchInList (inSearchedString, ktable_for_easyBindings_5F_lexique_reservedBindingNameKeyWordList, ktable_size_easyBindings_5F_lexique_reservedBindingNameKeyWordList) ;
}


//--------------------------------------------------------------------------------------------------
//                          getCurrentTokenString                                                
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::getCurrentTokenString (const cToken * inTokenPtr) const {
  const cTokenFor_easyBindings_5F_lexique * ptr = (const cTokenFor_easyBindings_5F_lexique *) inTokenPtr ;
  String s ;
  if (ptr == nullptr) {
    s.appendCString ("$$") ;
  }else{
    switch (ptr->mTokenCode) {
    case kToken_:
      s.appendCString ("$$") ;
      break ;
    case kToken_identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_Identifier:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("Identifier") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken__40_attribute:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("@attribute") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_bindingName:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("bindingName") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_controllerName:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("controllerName") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_viewName:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("viewName") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_integer:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_integer") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendUnsigned (ptr->mLexicalAttribute_uint_33__32_value) ;
      break ;
    case kToken_literal_5F_double:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_double") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendDouble (ptr->mLexicalAttribute_floatValue) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_literal_5F_string:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("literal_string") ;
      s.appendChar (utf32 ('$')) ;
      s.appendChar (utf32 (' ')) ;
      s.appendStringAsCLiteralStringConstant (ptr->mLexicalAttribute_tokenString) ;
      break ;
    case kToken_comment:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("comment") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_abstract:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("abstract") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_action:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("action") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_all:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("all") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_arrayController:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("arrayController") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_autolayout:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("autolayout") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_autoLayoutDocument:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("autoLayoutDocument") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_binding:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("binding") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_calledBy:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("calledBy") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_class:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("class") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_classForSwift:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("classForSwift") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_column:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("column") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_computed:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("computed") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_configurator:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("configurator") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_default:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("default") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_dependsFrom:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("dependsFrom") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_divider:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("divider") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enum:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enum") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_editableColumn:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("editableColumn") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_entity:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("entity") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_extern:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("extern") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_externDelegate:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("externDelegate") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_externFunc:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("externFunc") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_func:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("func") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graphic:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graphic") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graphviz:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graphviz") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_gutter:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("gutter") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_handlingOpposite:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("handlingOpposite") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_hStack:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("hStack") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_include:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("include") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_inverse:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("inverse") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_linker:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("linker") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_mainxib:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("mainxib") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_menuItem:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("menuItem") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_no:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("no") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_newView:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("newView") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_none:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("none") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_one:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("one") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_outlet:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("outlet") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_outletArray:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("outletArray") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_override:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("override") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_prefs:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("prefs") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_property:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("property") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_proxy:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("proxy") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_root:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("root") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_selectionController:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("selectionController") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_self:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("self") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_separator:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("separator") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_signature:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("signature") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_sortkey:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("sortkey") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_space:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("space") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_stackView:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("stackView") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_standalone:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("standalone") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_struct:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("struct") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_super:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("super") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tableViewController:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tableViewController") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_toMany:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("toMany") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_toOne:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("toOne") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_transient:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("transient") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_typeView:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("typeView") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_version:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("version") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_vStack:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("vStack") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_versionShouldChange:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("versionShouldChange") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_view:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("view") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_weak:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("weak") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_withVScroller:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("withVScroller") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_xcodeproject:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("xcodeproject") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_yes:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("yes") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_enabled:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("enabled") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_graphicController:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("graphicController") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_hidden:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("hidden") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_tableValue:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("tableValue") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken_run:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("run") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3A_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (":") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (",") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (";") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("[") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("]") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7B_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("{") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("}") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__28_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("(") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__29_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (")") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (".") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__7C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("|") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__26_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("&") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3C__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("<=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3E__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString (">=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__21__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("!=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("==") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__5E_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("^") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__2D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("-") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    case kToken__3D_:
      s.appendChar (utf32 ('$')) ;
      s.appendCString ("=") ;
      s.appendChar (utf32 ('$')) ;
      break ;
    default:
      break ;
    }
  }
  return s ;
}

//--------------------------------------------------------------------------------------------------
//                           Template Delimiters                                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//                           Template Replacements                                               
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//            Terminal Symbols as end of script in template mark                                 
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//               INTERNAL PARSE LEXICAL TOKEN                                         
//--------------------------------------------------------------------------------------------------

void Lexique_easyBindings_5F_lexique::internalParseLexicalToken (cTokenFor_easyBindings_5F_lexique & token) {
  bool loop = true ;
  token.mLexicalAttribute_floatValue = 0.0 ;
  token.mLexicalAttribute_tokenString.removeAllKeepingCapacity () ;
  token.mLexicalAttribute_uint_33__32_value = 0 ;
  mTokenStartLocation = mCurrentLocation ;
  try{
    if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_lowerCaseKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_identifier ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z'))) {
      do {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        if (testForChar_isUnicodeLetter () || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_Identifier ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('@'))) {
      if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
        do {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          if (testForChar_isUnicodeLetter () || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9')) || testForInputUTF32Char (utf32 ('.'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
      }else{
        lexicalError (gLexicalMessage_easyBindings_5F_lexique_attributeError COMMA_LINE_AND_SOURCE_FILE) ;
      }
      token.mTokenCode = kToken__40_attribute ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('$'))) {
      do {
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32Char (utf32 ('_')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (token.mTokenCode == -1) {
        token.mTokenCode = search_into_reservedBindingNameKeyWordList (token.mLexicalAttribute_tokenString) ;
      }
      if (token.mTokenCode == -1) {
        token.mTokenCode = kToken_bindingName ;
      }
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('#'))) {
      do {
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_controllerName ;
      enterToken (token) ;
    }else if (testForInputUTF32Char (utf32 ('\\'))) {
      do {
        if (testForInputUTF32CharRange (utf32 ('a'), utf32 ('z')) || testForInputUTF32CharRange (utf32 ('A'), utf32 ('Z')) || testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      token.mTokenCode = kToken_viewName ;
      enterToken (token) ;
    }else if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
      ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
      do {
        if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32Char (utf32 ('_'))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('.'))) {
        ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('.')) ;
        do {
          if (testForInputUTF32CharRange (utf32 ('0'), utf32 ('9'))) {
            ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
          }else if (testForInputUTF32Char (utf32 ('_'))) {
          }else{
            loop = false ;
          }
        }while (loop) ;
        loop = true ;
        ::scanner_routine_convertStringToDouble (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_floatValue, gLexicalMessage_easyBindings_5F_lexique_floatNumberConversionError) ;
        token.mTokenCode = kToken_literal_5F_double ;
        enterToken (token) ;
      }else{
        ::scanner_routine_convertDecimalStringIntoUInt (*this, token.mLexicalAttribute_tokenString, token.mLexicalAttribute_uint_33__32_value, gLexicalMessage_easyBindings_5F_lexique_decimalNumberTooLarge, gLexicalMessage_easyBindings_5F_lexique_internalError) ;
        token.mTokenCode = kToken_literal_5F_integer ;
        enterToken (token) ;
      }
    }else if (testForInputUTF32Char (utf32 ('\"'))) {
      do {
        if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C_n, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\n')) ;
        }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5C__22_, true)) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, utf32 ('\"')) ;
        }else if (testForInputUTF32Char (utf32 (' ')) || testForInputUTF32Char (utf32 ('!')) || testForInputUTF32CharRange (utf32 ('#'), utf32 (65533))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else if (testForInputUTF32CharRange (utf32 (65536), utf32 (1114111))) {
          ::scanner_routine_enterCharacterIntoString (*this, token.mLexicalAttribute_tokenString, previousChar ()) ;
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      if (testForInputUTF32Char (utf32 ('\"'))) {
        token.mTokenCode = kToken_literal_5F_string ;
        enterToken (token) ;
      }else{
        lexicalError (gLexicalMessage_easyBindings_5F_lexique_incorrectStringEnd COMMA_LINE_AND_SOURCE_FILE) ;
      }
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E__3D_, true)) {
      token.mTokenCode = kToken__3E__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D__3D_, true)) {
      token.mTokenCode = kToken__3D__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C__3D_, true)) {
      token.mTokenCode = kToken__3C__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21__3D_, true)) {
      token.mTokenCode = kToken__21__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7D_, true)) {
      token.mTokenCode = kToken__7D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7C_, true)) {
      token.mTokenCode = kToken__7C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__7B_, true)) {
      token.mTokenCode = kToken__7B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5E_, true)) {
      token.mTokenCode = kToken__5E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5D_, true)) {
      token.mTokenCode = kToken__5D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__5B_, true)) {
      token.mTokenCode = kToken__5B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3E_, true)) {
      token.mTokenCode = kToken__3E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3D_, true)) {
      token.mTokenCode = kToken__3D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3C_, true)) {
      token.mTokenCode = kToken__3C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3B_, true)) {
      token.mTokenCode = kToken__3B_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__3A_, true)) {
      token.mTokenCode = kToken__3A_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2E_, true)) {
      token.mTokenCode = kToken__2E_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2D_, true)) {
      token.mTokenCode = kToken__2D_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2C_, true)) {
      token.mTokenCode = kToken__2C_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__29_, true)) {
      token.mTokenCode = kToken__29_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__28_, true)) {
      token.mTokenCode = kToken__28_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__26_, true)) {
      token.mTokenCode = kToken__26_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__21_, true)) {
      token.mTokenCode = kToken__21_ ;
      enterToken (token) ;
    }else if (testForInputUTF32String (kUnicodeString_easyBindings_5F_lexique__2F__2F_, true)) {
      do {
        if (testForInputUTF32CharRange (utf32 (1), utf32 ('\t')) || testForInputUTF32Char (utf32 ('\v')) || testForInputUTF32Char (utf32 ('\f')) || testForInputUTF32CharRange (utf32 (14), utf32 (65533))) {
        }else{
          loop = false ;
        }
      }while (loop) ;
      loop = true ;
      enterDroppedTerminal (kToken_comment) ;
    }else if (testForInputUTF32CharRange (utf32 (1), utf32 (' '))) {
    }else if (testForInputUTF32Char (utf32 ('\0'))) { // End of source text ? 
      token.mTokenCode = kToken_ ; // Empty string code
    }else{ // Unknown input character
      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;
      token.mTokenCode = -1 ; // No token
      advance () ; // ... go throught unknown character
    }
  }catch (const C_lexicalErrorException &) {
    token.mTokenCode = -1 ; // No token
    advance () ; // ... go throught unknown character
  }
}

//--------------------------------------------------------------------------------------------------
//               P A R S E    L E X I C A L    T O K E N                                         
//--------------------------------------------------------------------------------------------------

bool Lexique_easyBindings_5F_lexique::parseLexicalToken (void) {
  cTokenFor_easyBindings_5F_lexique token ;
  token.mTokenCode = -1 ;
  while ((token.mTokenCode < 0) && (mCurrentChar.u32 () != '\0')) {
    internalParseLexicalToken (token) ;
  }
  if (mCurrentChar.u32 () == '\0') {
    token.mTokenCode = 0 ;
    enterToken (token) ;
  }
  return token.mTokenCode > 0 ;
}

//--------------------------------------------------------------------------------------------------
//                         E N T E R    T O K E N                                                
//--------------------------------------------------------------------------------------------------

void Lexique_easyBindings_5F_lexique::enterToken (cTokenFor_easyBindings_5F_lexique & ioToken) {
  cTokenFor_easyBindings_5F_lexique * ptr = nullptr ;
  macroMyNew (ptr, cTokenFor_easyBindings_5F_lexique ()) ;
  ptr->mTokenCode = ioToken.mTokenCode ;
  ptr->mStartLocation = mTokenStartLocation ;
  ptr->mEndLocation = mTokenEndLocation ;
  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;
  ioToken.mTemplateStringBeforeToken = "" ;
  ptr->mLexicalAttribute_floatValue = ioToken.mLexicalAttribute_floatValue ;
  ptr->mLexicalAttribute_tokenString = ioToken.mLexicalAttribute_tokenString ;
  ptr->mLexicalAttribute_uint_33__32_value = ioToken.mLexicalAttribute_uint_33__32_value ;
  enterTokenFromPointer (ptr) ;
}

//--------------------------------------------------------------------------------------------------
//               A T T R I B U T E   A C C E S S                                                 
//--------------------------------------------------------------------------------------------------

double Lexique_easyBindings_5F_lexique::attributeValue_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_floatValue ;
}

//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::attributeValue_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_tokenString ;
}

//--------------------------------------------------------------------------------------------------

uint32_t Lexique_easyBindings_5F_lexique::attributeValue_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  return ptr->mLexicalAttribute_uint_33__32_value ;
}

//--------------------------------------------------------------------------------------------------
//         A S S I G N    F R O M    A T T R I B U T E                                           
//--------------------------------------------------------------------------------------------------

GGS_ldouble Lexique_easyBindings_5F_lexique::synthetizedAttribute_floatValue (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_double value (ptr->mLexicalAttribute_floatValue) ;
  GGS_ldouble result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring Lexique_easyBindings_5F_lexique::synthetizedAttribute_tokenString (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_string value (ptr->mLexicalAttribute_tokenString) ;
  GGS_lstring result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_luint Lexique_easyBindings_5F_lexique::synthetizedAttribute_uint_33__32_value (void) const {
  cTokenFor_easyBindings_5F_lexique * ptr = (cTokenFor_easyBindings_5F_lexique *) currentTokenPtr (HERE) ;
  macroValidSharedObject (ptr, cTokenFor_easyBindings_5F_lexique) ;
  GGS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;
  GGS_uint value (ptr->mLexicalAttribute_uint_33__32_value) ;
  GGS_luint result (value, currentLocation) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
//                         I N T R O S P E C T I O N                                             
//--------------------------------------------------------------------------------------------------

GGS_stringlist Lexique_easyBindings_5F_lexique::symbols (LOCATION_ARGS) {
  GGS_stringlist result = GGS_stringlist::class_func_emptyList (THERE) ;
  result.addAssignOperation (GGS_string ("identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("Identifier") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("@attribute") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("bindingName") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("controllerName") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("viewName") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_integer") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_double") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("literal_string") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("comment") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("abstract") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("action") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("all") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("arrayController") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("autolayout") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("autoLayoutDocument") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("binding") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("calledBy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("class") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("classForSwift") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("column") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("computed") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("configurator") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("default") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("dependsFrom") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("divider") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enum") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("editableColumn") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("entity") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("extern") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("externDelegate") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("externFunc") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("func") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graphic") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graphviz") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("gutter") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("handlingOpposite") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("hStack") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("include") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("inverse") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("linker") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("mainxib") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("menuItem") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("no") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("newView") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("none") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("one") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("outlet") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("outletArray") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("override") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("prefs") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("property") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("proxy") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("root") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("selectionController") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("self") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("separator") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("signature") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("sortkey") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("space") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("stackView") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("standalone") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("struct") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("super") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tableViewController") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("toMany") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("toOne") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("transient") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("typeView") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("version") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("vStack") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("versionShouldChange") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("view") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("weak") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("withVScroller") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("xcodeproject") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("yes") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("enabled") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("graphicController") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("hidden") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("tableValue") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("run") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (":") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (",") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (";") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("[") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("]") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("{") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("}") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("(") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (")") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (".") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("|") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("&") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("<=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string (">=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("!=") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("==") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("^") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("-") COMMA_HERE) ;
  result.addAssignOperation (GGS_string ("=") COMMA_HERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordLists_easyBindings_5F_lexique (GenericUniqueArray <String> & ioList) {
  ioList.appendObject ("easyBindings_lexique:delimitorsList") ;
  ioList.appendObject ("easyBindings_lexique:lowerCaseKeyWordList") ;
  ioList.appendObject ("easyBindings_lexique:reservedBindingNameKeyWordList") ;
}

//--------------------------------------------------------------------------------------------------

static void getKeywordsForIdentifier_easyBindings_5F_lexique (const String & inIdentifier,
                                                              bool & ioFound,
                                                              GenericUniqueArray <String> & ioList) {
  if (inIdentifier == "easyBindings_lexique:delimitorsList") {
    ioFound = true ;
    ioList.appendObject ("!") ;
    ioList.appendObject ("&") ;
    ioList.appendObject ("(") ;
    ioList.appendObject (")") ;
    ioList.appendObject (",") ;
    ioList.appendObject ("-") ;
    ioList.appendObject (".") ;
    ioList.appendObject (":") ;
    ioList.appendObject (";") ;
    ioList.appendObject ("<") ;
    ioList.appendObject ("=") ;
    ioList.appendObject (">") ;
    ioList.appendObject ("[") ;
    ioList.appendObject ("]") ;
    ioList.appendObject ("^") ;
    ioList.appendObject ("{") ;
    ioList.appendObject ("|") ;
    ioList.appendObject ("}") ;
    ioList.appendObject ("!=") ;
    ioList.appendObject ("<=") ;
    ioList.appendObject ("==") ;
    ioList.appendObject (">=") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:lowerCaseKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("no") ;
    ioList.appendObject ("all") ;
    ioList.appendObject ("one") ;
    ioList.appendObject ("yes") ;
    ioList.appendObject ("enum") ;
    ioList.appendObject ("func") ;
    ioList.appendObject ("none") ;
    ioList.appendObject ("root") ;
    ioList.appendObject ("self") ;
    ioList.appendObject ("view") ;
    ioList.appendObject ("weak") ;
    ioList.appendObject ("class") ;
    ioList.appendObject ("prefs") ;
    ioList.appendObject ("proxy") ;
    ioList.appendObject ("space") ;
    ioList.appendObject ("super") ;
    ioList.appendObject ("toOne") ;
    ioList.appendObject ("action") ;
    ioList.appendObject ("column") ;
    ioList.appendObject ("entity") ;
    ioList.appendObject ("extern") ;
    ioList.appendObject ("gutter") ;
    ioList.appendObject ("hStack") ;
    ioList.appendObject ("linker") ;
    ioList.appendObject ("outlet") ;
    ioList.appendObject ("struct") ;
    ioList.appendObject ("toMany") ;
    ioList.appendObject ("vStack") ;
    ioList.appendObject ("binding") ;
    ioList.appendObject ("default") ;
    ioList.appendObject ("divider") ;
    ioList.appendObject ("graphic") ;
    ioList.appendObject ("include") ;
    ioList.appendObject ("inverse") ;
    ioList.appendObject ("mainxib") ;
    ioList.appendObject ("newView") ;
    ioList.appendObject ("sortkey") ;
    ioList.appendObject ("version") ;
    ioList.appendObject ("abstract") ;
    ioList.appendObject ("calledBy") ;
    ioList.appendObject ("computed") ;
    ioList.appendObject ("graphviz") ;
    ioList.appendObject ("menuItem") ;
    ioList.appendObject ("override") ;
    ioList.appendObject ("property") ;
    ioList.appendObject ("typeView") ;
    ioList.appendObject ("separator") ;
    ioList.appendObject ("signature") ;
    ioList.appendObject ("stackView") ;
    ioList.appendObject ("transient") ;
    ioList.appendObject ("autolayout") ;
    ioList.appendObject ("externFunc") ;
    ioList.appendObject ("standalone") ;
    ioList.appendObject ("dependsFrom") ;
    ioList.appendObject ("outletArray") ;
    ioList.appendObject ("configurator") ;
    ioList.appendObject ("xcodeproject") ;
    ioList.appendObject ("classForSwift") ;
    ioList.appendObject ("withVScroller") ;
    ioList.appendObject ("editableColumn") ;
    ioList.appendObject ("externDelegate") ;
    ioList.appendObject ("arrayController") ;
    ioList.appendObject ("handlingOpposite") ;
    ioList.appendObject ("autoLayoutDocument") ;
    ioList.appendObject ("selectionController") ;
    ioList.appendObject ("tableViewController") ;
    ioList.appendObject ("versionShouldChange") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
  if (inIdentifier == "easyBindings_lexique:reservedBindingNameKeyWordList") {
    ioFound = true ;
    ioList.appendObject ("run") ;
    ioList.appendObject ("hidden") ;
    ioList.appendObject ("enabled") ;
    ioList.appendObject ("tableValue") ;
    ioList.appendObject ("graphicController") ;
    ioList.sortArrayUsingCompareMethod() ;
  }
}

//--------------------------------------------------------------------------------------------------

static LexiqueIntrospection lexiqueIntrospection_easyBindings_5F_lexique
__attribute__ ((used))
__attribute__ ((unused)) (getKeywordLists_easyBindings_5F_lexique, getKeywordsForIdentifier_easyBindings_5F_lexique) ;

//--------------------------------------------------------------------------------------------------
//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           
//--------------------------------------------------------------------------------------------------

uint32_t Lexique_easyBindings_5F_lexique::styleIndexForTerminal (const int32_t inTerminalIndex) const {
  static const uint32_t kTerminalSymbolStyles [105] = {0,
    2 /* easyBindings_lexique_1_identifier */,
    3 /* easyBindings_lexique_1_Identifier */,
    4 /* easyBindings_lexique_1__40_attribute */,
    5 /* easyBindings_lexique_1_bindingName */,
    7 /* easyBindings_lexique_1_controllerName */,
    8 /* easyBindings_lexique_1_viewName */,
    9 /* easyBindings_lexique_1_literal_5F_integer */,
    10 /* easyBindings_lexique_1_literal_5F_double */,
    11 /* easyBindings_lexique_1_literal_5F_string */,
    13 /* easyBindings_lexique_1_comment */,
    1 /* easyBindings_lexique_1_abstract */,
    1 /* easyBindings_lexique_1_action */,
    1 /* easyBindings_lexique_1_all */,
    1 /* easyBindings_lexique_1_arrayController */,
    1 /* easyBindings_lexique_1_autolayout */,
    1 /* easyBindings_lexique_1_autoLayoutDocument */,
    1 /* easyBindings_lexique_1_binding */,
    1 /* easyBindings_lexique_1_calledBy */,
    1 /* easyBindings_lexique_1_class */,
    1 /* easyBindings_lexique_1_classForSwift */,
    1 /* easyBindings_lexique_1_column */,
    1 /* easyBindings_lexique_1_computed */,
    1 /* easyBindings_lexique_1_configurator */,
    1 /* easyBindings_lexique_1_default */,
    1 /* easyBindings_lexique_1_dependsFrom */,
    1 /* easyBindings_lexique_1_divider */,
    1 /* easyBindings_lexique_1_enum */,
    1 /* easyBindings_lexique_1_editableColumn */,
    1 /* easyBindings_lexique_1_entity */,
    1 /* easyBindings_lexique_1_extern */,
    1 /* easyBindings_lexique_1_externDelegate */,
    1 /* easyBindings_lexique_1_externFunc */,
    1 /* easyBindings_lexique_1_func */,
    1 /* easyBindings_lexique_1_graphic */,
    1 /* easyBindings_lexique_1_graphviz */,
    1 /* easyBindings_lexique_1_gutter */,
    1 /* easyBindings_lexique_1_handlingOpposite */,
    1 /* easyBindings_lexique_1_hStack */,
    1 /* easyBindings_lexique_1_include */,
    1 /* easyBindings_lexique_1_inverse */,
    1 /* easyBindings_lexique_1_linker */,
    1 /* easyBindings_lexique_1_mainxib */,
    1 /* easyBindings_lexique_1_menuItem */,
    1 /* easyBindings_lexique_1_no */,
    1 /* easyBindings_lexique_1_newView */,
    1 /* easyBindings_lexique_1_none */,
    1 /* easyBindings_lexique_1_one */,
    1 /* easyBindings_lexique_1_outlet */,
    1 /* easyBindings_lexique_1_outletArray */,
    1 /* easyBindings_lexique_1_override */,
    1 /* easyBindings_lexique_1_prefs */,
    1 /* easyBindings_lexique_1_property */,
    1 /* easyBindings_lexique_1_proxy */,
    1 /* easyBindings_lexique_1_root */,
    1 /* easyBindings_lexique_1_selectionController */,
    1 /* easyBindings_lexique_1_self */,
    1 /* easyBindings_lexique_1_separator */,
    1 /* easyBindings_lexique_1_signature */,
    1 /* easyBindings_lexique_1_sortkey */,
    1 /* easyBindings_lexique_1_space */,
    1 /* easyBindings_lexique_1_stackView */,
    1 /* easyBindings_lexique_1_standalone */,
    1 /* easyBindings_lexique_1_struct */,
    1 /* easyBindings_lexique_1_super */,
    1 /* easyBindings_lexique_1_tableViewController */,
    1 /* easyBindings_lexique_1_toMany */,
    1 /* easyBindings_lexique_1_toOne */,
    1 /* easyBindings_lexique_1_transient */,
    1 /* easyBindings_lexique_1_typeView */,
    1 /* easyBindings_lexique_1_version */,
    1 /* easyBindings_lexique_1_vStack */,
    1 /* easyBindings_lexique_1_versionShouldChange */,
    1 /* easyBindings_lexique_1_view */,
    1 /* easyBindings_lexique_1_weak */,
    1 /* easyBindings_lexique_1_withVScroller */,
    1 /* easyBindings_lexique_1_xcodeproject */,
    1 /* easyBindings_lexique_1_yes */,
    6 /* easyBindings_lexique_1_enabled */,
    6 /* easyBindings_lexique_1_graphicController */,
    6 /* easyBindings_lexique_1_hidden */,
    6 /* easyBindings_lexique_1_tableValue */,
    6 /* easyBindings_lexique_1_run */,
    12 /* easyBindings_lexique_1__3A_ */,
    12 /* easyBindings_lexique_1__2C_ */,
    12 /* easyBindings_lexique_1__3B_ */,
    12 /* easyBindings_lexique_1__21_ */,
    12 /* easyBindings_lexique_1__5B_ */,
    12 /* easyBindings_lexique_1__5D_ */,
    12 /* easyBindings_lexique_1__7B_ */,
    12 /* easyBindings_lexique_1__7D_ */,
    12 /* easyBindings_lexique_1__28_ */,
    12 /* easyBindings_lexique_1__29_ */,
    12 /* easyBindings_lexique_1__2E_ */,
    12 /* easyBindings_lexique_1__7C_ */,
    12 /* easyBindings_lexique_1__26_ */,
    12 /* easyBindings_lexique_1__3C_ */,
    12 /* easyBindings_lexique_1__3E_ */,
    12 /* easyBindings_lexique_1__3C__3D_ */,
    12 /* easyBindings_lexique_1__3E__3D_ */,
    12 /* easyBindings_lexique_1__21__3D_ */,
    12 /* easyBindings_lexique_1__3D__3D_ */,
    12 /* easyBindings_lexique_1__5E_ */,
    12 /* easyBindings_lexique_1__2D_ */,
    12 /* easyBindings_lexique_1__3D_ */
  } ;
  return (inTerminalIndex >= 0) ? kTerminalSymbolStyles [inTerminalIndex] : 0 ;
}

//--------------------------------------------------------------------------------------------------
//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      
//--------------------------------------------------------------------------------------------------

String Lexique_easyBindings_5F_lexique::styleNameForIndex (const uint32_t inStyleIndex) const {
  String result ;
  if (inStyleIndex < 14) {
    static const char * kStyleArray [14] = {
      "",
      "keywordsStyle",
      "idfStyle",
      "IdfStyle",
      "attributeStyle",
      "bindingNameStyle",
      "reservedBindingNameStyle",
      "controllerNameStyle",
      "viewNameStyle",
      "integerStyle",
      "floatStyle",
      "stringStyle",
      "delimitersStyle",
      "commentStyle"
    } ;
    result = kStyleArray [inStyleIndex] ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) :
mProperty_mEntityName (inSource.mProperty_mEntityName),
mProperty_mObsoleteEntityNames (inSource.mProperty_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element & GGS_entityListForGeneratingEBManagedObjectContext_2E_element::operator = (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inSource) {
  mProperty_mEntityName = inSource.mProperty_mEntityName ;
  mProperty_mObsoleteEntityNames = inSource.mProperty_mObsoleteEntityNames ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element GGS_entityListForGeneratingEBManagedObjectContext_2E_element::init_21__21_ (const GGS_string & in_mEntityName,
                                                                                                                                         const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntityName = in_mEntityName ;
  result.mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element::GGS_entityListForGeneratingEBManagedObjectContext_2E_element (const GGS_string & inOperand0,
                                                                                                                            const GGS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element GGS_entityListForGeneratingEBManagedObjectContext_2E_element::class_func_new (const GGS_string & in_mEntityName,
                                                                                                                                           const GGS_lstringlist & in_mObsoleteEntityNames,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEntityName = in_mEntityName ;
  result.mProperty_mObsoleteEntityNames = in_mObsoleteEntityNames ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_entityListForGeneratingEBManagedObjectContext_2E_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext_2E_element::description (String & ioString,
                                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @entityListForGeneratingEBManagedObjectContext.element:") ;
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
//     @entityListForGeneratingEBManagedObjectContext.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ("entityListForGeneratingEBManagedObjectContext.element",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityListForGeneratingEBManagedObjectContext_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityListForGeneratingEBManagedObjectContext_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityListForGeneratingEBManagedObjectContext_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element GGS_entityListForGeneratingEBManagedObjectContext_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext_2E_element result ;
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element * p = (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityListForGeneratingEBManagedObjectContext_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (void) :
mProperty_mOwnerName (),
mProperty_mSelectionControllerName (),
mProperty_mBoundControllerName (),
mProperty_mBoundControllerPropertyName (),
mProperty_mBaseTypeName (),
mProperty_mSelectionTypeName (),
mProperty_mSelectionObservablePropertyMap (),
mProperty_mPropertyGenerationList () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (const GGS_selectionControllerForGeneration_2E_element & inSource) :
mProperty_mOwnerName (inSource.mProperty_mOwnerName),
mProperty_mSelectionControllerName (inSource.mProperty_mSelectionControllerName),
mProperty_mBoundControllerName (inSource.mProperty_mBoundControllerName),
mProperty_mBoundControllerPropertyName (inSource.mProperty_mBoundControllerPropertyName),
mProperty_mBaseTypeName (inSource.mProperty_mBaseTypeName),
mProperty_mSelectionTypeName (inSource.mProperty_mSelectionTypeName),
mProperty_mSelectionObservablePropertyMap (inSource.mProperty_mSelectionObservablePropertyMap),
mProperty_mPropertyGenerationList (inSource.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element & GGS_selectionControllerForGeneration_2E_element::operator = (const GGS_selectionControllerForGeneration_2E_element & inSource) {
  mProperty_mOwnerName = inSource.mProperty_mOwnerName ;
  mProperty_mSelectionControllerName = inSource.mProperty_mSelectionControllerName ;
  mProperty_mBoundControllerName = inSource.mProperty_mBoundControllerName ;
  mProperty_mBoundControllerPropertyName = inSource.mProperty_mBoundControllerPropertyName ;
  mProperty_mBaseTypeName = inSource.mProperty_mBaseTypeName ;
  mProperty_mSelectionTypeName = inSource.mProperty_mSelectionTypeName ;
  mProperty_mSelectionObservablePropertyMap = inSource.mProperty_mSelectionObservablePropertyMap ;
  mProperty_mPropertyGenerationList = inSource.mProperty_mPropertyGenerationList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element GGS_selectionControllerForGeneration_2E_element::init_21__21__21__21__21__21__21__21_ (const GGS_string & in_mOwnerName,
                                                                                                                                       const GGS_string & in_mSelectionControllerName,
                                                                                                                                       const GGS_string & in_mBoundControllerName,
                                                                                                                                       const GGS_string & in_mBoundControllerPropertyName,
                                                                                                                                       const GGS_string & in_mBaseTypeName,
                                                                                                                                       const GGS_string & in_mSelectionTypeName,
                                                                                                                                       const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                                                       const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOwnerName = in_mOwnerName ;
  result.mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  result.mProperty_mBoundControllerName = in_mBoundControllerName ;
  result.mProperty_mBoundControllerPropertyName = in_mBoundControllerPropertyName ;
  result.mProperty_mBaseTypeName = in_mBaseTypeName ;
  result.mProperty_mSelectionTypeName = in_mSelectionTypeName ;
  result.mProperty_mSelectionObservablePropertyMap = in_mSelectionObservablePropertyMap ;
  result.mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element::GGS_selectionControllerForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                  const GGS_string & inOperand1,
                                                                                                  const GGS_string & inOperand2,
                                                                                                  const GGS_string & inOperand3,
                                                                                                  const GGS_string & inOperand4,
                                                                                                  const GGS_string & inOperand5,
                                                                                                  const GGS_propertyMap & inOperand6,
                                                                                                  const GGS_propertyGenerationList & inOperand7) :
mProperty_mOwnerName (inOperand0),
mProperty_mSelectionControllerName (inOperand1),
mProperty_mBoundControllerName (inOperand2),
mProperty_mBoundControllerPropertyName (inOperand3),
mProperty_mBaseTypeName (inOperand4),
mProperty_mSelectionTypeName (inOperand5),
mProperty_mSelectionObservablePropertyMap (inOperand6),
mProperty_mPropertyGenerationList (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element GGS_selectionControllerForGeneration_2E_element::class_func_new (const GGS_string & in_mOwnerName,
                                                                                                                 const GGS_string & in_mSelectionControllerName,
                                                                                                                 const GGS_string & in_mBoundControllerName,
                                                                                                                 const GGS_string & in_mBoundControllerPropertyName,
                                                                                                                 const GGS_string & in_mBaseTypeName,
                                                                                                                 const GGS_string & in_mSelectionTypeName,
                                                                                                                 const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                                 const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOwnerName = in_mOwnerName ;
  result.mProperty_mSelectionControllerName = in_mSelectionControllerName ;
  result.mProperty_mBoundControllerName = in_mBoundControllerName ;
  result.mProperty_mBoundControllerPropertyName = in_mBoundControllerPropertyName ;
  result.mProperty_mBaseTypeName = in_mBaseTypeName ;
  result.mProperty_mSelectionTypeName = in_mSelectionTypeName ;
  result.mProperty_mSelectionObservablePropertyMap = in_mSelectionObservablePropertyMap ;
  result.mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_selectionControllerForGeneration_2E_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mSelectionControllerName.drop () ;
  mProperty_mBoundControllerName.drop () ;
  mProperty_mBoundControllerPropertyName.drop () ;
  mProperty_mBaseTypeName.drop () ;
  mProperty_mSelectionTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
  mProperty_mPropertyGenerationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration_2E_element::description (String & ioString,
                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @selectionControllerForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @selectionControllerForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ("selectionControllerForGeneration.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_selectionControllerForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_selectionControllerForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element GGS_selectionControllerForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration_2E_element result ;
  const GGS_selectionControllerForGeneration_2E_element * p = (const GGS_selectionControllerForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_selectionControllerForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element & GGS_transientPropertyGenerationList_2E_element::operator = (const GGS_transientPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element GGS_transientPropertyGenerationList_2E_element::init_21_ (const GGS_transientPropertyGeneration & in_mProperty,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element::GGS_transientPropertyGenerationList_2E_element (const GGS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element GGS_transientPropertyGenerationList_2E_element::class_func_new (const GGS_transientPropertyGeneration & in_mProperty,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientPropertyGenerationList_2E_element::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ("transientPropertyGenerationList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientPropertyGenerationList_2E_element GGS_transientPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientPropertyGenerationList_2E_element result ;
  const GGS_transientPropertyGenerationList_2E_element * p = (const GGS_transientPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString (),
mProperty_mDefaultValueAsString (),
mProperty_mProtocolName () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_transientDependencyListForGeneration_2E_element & inSource) :
mProperty_mDependency (inSource.mProperty_mDependency),
mProperty_mFunctionArgumentName (inSource.mProperty_mFunctionArgumentName),
mProperty_mFunctionArgumentTypeString (inSource.mProperty_mFunctionArgumentTypeString),
mProperty_mDefaultValueAsString (inSource.mProperty_mDefaultValueAsString),
mProperty_mProtocolName (inSource.mProperty_mProtocolName) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element & GGS_transientDependencyListForGeneration_2E_element::operator = (const GGS_transientDependencyListForGeneration_2E_element & inSource) {
  mProperty_mDependency = inSource.mProperty_mDependency ;
  mProperty_mFunctionArgumentName = inSource.mProperty_mFunctionArgumentName ;
  mProperty_mFunctionArgumentTypeString = inSource.mProperty_mFunctionArgumentTypeString ;
  mProperty_mDefaultValueAsString = inSource.mProperty_mDefaultValueAsString ;
  mProperty_mProtocolName = inSource.mProperty_mProtocolName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::init_21__21__21__21__21_ (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                                   const GGS_string & in_mFunctionArgumentName,
                                                                                                                                   const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                                   const GGS_string & in_mDefaultValueAsString,
                                                                                                                                   const GGS_string & in_mProtocolName,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDependency = in_mDependency ;
  result.mProperty_mFunctionArgumentName = in_mFunctionArgumentName ;
  result.mProperty_mFunctionArgumentTypeString = in_mFunctionArgumentTypeString ;
  result.mProperty_mDefaultValueAsString = in_mDefaultValueAsString ;
  result.mProperty_mProtocolName = in_mProtocolName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_observablePropertyAST & inOperand0,
                                                                                                          const GGS_string & inOperand1,
                                                                                                          const GGS_string & inOperand2,
                                                                                                          const GGS_string & inOperand3,
                                                                                                          const GGS_string & inOperand4) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2),
mProperty_mDefaultValueAsString (inOperand3),
mProperty_mProtocolName (inOperand4) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::class_func_new (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                         const GGS_string & in_mFunctionArgumentName,
                                                                                                                         const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                         const GGS_string & in_mDefaultValueAsString,
                                                                                                                         const GGS_string & in_mProtocolName,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDependency = in_mDependency ;
  result.mProperty_mFunctionArgumentName = in_mFunctionArgumentName ;
  result.mProperty_mFunctionArgumentTypeString = in_mFunctionArgumentTypeString ;
  result.mProperty_mDefaultValueAsString = in_mDefaultValueAsString ;
  result.mProperty_mProtocolName = in_mProtocolName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientDependencyListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () && mProperty_mDefaultValueAsString.isValid () && mProperty_mProtocolName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
  mProperty_mDefaultValueAsString.drop () ;
  mProperty_mProtocolName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientDependencyListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mDependency.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionArgumentName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFunctionArgumentTypeString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDefaultValueAsString.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProtocolName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ("transientDependencyListForGeneration.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientDependencyListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientDependencyListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientDependencyListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  const GGS_transientDependencyListForGeneration_2E_element * p = (const GGS_transientDependencyListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientDependencyListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientDependencyListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (void) :
mProperty_oppositeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) :
mProperty_oppositeName (inSource.mProperty_oppositeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) {
  mProperty_oppositeName = inSource.mProperty_oppositeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::init_21_ (const GGS_string & in_oppositeName,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeName = in_oppositeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (const GGS_string & inOperand0) :
mProperty_oppositeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::class_func_new (const GGS_string & in_oppositeName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_oppositeName = in_oppositeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::isValid (void) const {
  return mProperty_oppositeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::drop (void) {
  mProperty_oppositeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyRelationshipOptionGeneration.hasOpposite:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_oppositeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionGeneration.hasOpposite generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ("toManyRelationshipOptionGeneration.hasOpposite",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite result ;
  const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite * p = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration.hasOpposite", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @toManyRelationshipOptionGeneration_2E_hasOpposite_3F_
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::init_nil (void) {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::isValid (void) const {
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

bool GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toManyRelationshipOptionGeneration_2E_hasOpposite () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::description (String & ioString,
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
//     @toManyRelationshipOptionGeneration.hasOpposite? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ("toManyRelationshipOptionGeneration.hasOpposite?",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ result ;
  const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ * p = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration.hasOpposite?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance::GGS_toManyRelationshipOptionGeneration_2E_hasDependance (void) :
mProperty_masterPropertyName (),
mProperty_masterPropertySwiftTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance::GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) :
mProperty_masterPropertyName (inSource.mProperty_masterPropertyName),
mProperty_masterPropertySwiftTypeName (inSource.mProperty_masterPropertySwiftTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance & GGS_toManyRelationshipOptionGeneration_2E_hasDependance::operator = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) {
  mProperty_masterPropertyName = inSource.mProperty_masterPropertyName ;
  mProperty_masterPropertySwiftTypeName = inSource.mProperty_masterPropertySwiftTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance GGS_toManyRelationshipOptionGeneration_2E_hasDependance::init_21__21_ (const GGS_string & in_masterPropertyName,
                                                                                                                               const GGS_string & in_masterPropertySwiftTypeName,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_masterPropertyName = in_masterPropertyName ;
  result.mProperty_masterPropertySwiftTypeName = in_masterPropertySwiftTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasDependance::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance::GGS_toManyRelationshipOptionGeneration_2E_hasDependance (const GGS_string & inOperand0,
                                                                                                                  const GGS_string & inOperand1) :
mProperty_masterPropertyName (inOperand0),
mProperty_masterPropertySwiftTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance GGS_toManyRelationshipOptionGeneration_2E_hasDependance::class_func_new (const GGS_string & in_masterPropertyName,
                                                                                                                                 const GGS_string & in_masterPropertySwiftTypeName,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_masterPropertyName = in_masterPropertyName ;
  result.mProperty_masterPropertySwiftTypeName = in_masterPropertySwiftTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionGeneration_2E_hasDependance::isValid (void) const {
  return mProperty_masterPropertyName.isValid () && mProperty_masterPropertySwiftTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasDependance::drop (void) {
  mProperty_masterPropertyName.drop () ;
  mProperty_masterPropertySwiftTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasDependance::description (String & ioString,
                                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyRelationshipOptionGeneration.hasDependance:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_masterPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_masterPropertySwiftTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionGeneration.hasDependance generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ("toManyRelationshipOptionGeneration.hasDependance",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration_2E_hasDependance::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration_2E_hasDependance::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration_2E_hasDependance (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance GGS_toManyRelationshipOptionGeneration_2E_hasDependance::extractObject (const GGS_object & inObject,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance result ;
  const GGS_toManyRelationshipOptionGeneration_2E_hasDependance * p = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration.hasDependance", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @toManyRelationshipOptionGeneration_2E_hasDependance_3F_
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::init_nil (void) {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::isValid (void) const {
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

bool GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_toManyRelationshipOptionGeneration_2E_hasDependance () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::description (String & ioString,
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
//     @toManyRelationshipOptionGeneration.hasDependance? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ("toManyRelationshipOptionGeneration.hasDependance?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ result ;
  const GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ * p = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration.hasDependance?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element::GGS_mainXibDescriptorList_2E_element (void) :
mProperty_mLine () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element::GGS_mainXibDescriptorList_2E_element (const GGS_mainXibDescriptorList_2E_element & inSource) :
mProperty_mLine (inSource.mProperty_mLine) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element & GGS_mainXibDescriptorList_2E_element::operator = (const GGS_mainXibDescriptorList_2E_element & inSource) {
  mProperty_mLine = inSource.mProperty_mLine ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element GGS_mainXibDescriptorList_2E_element::init_21_ (const GGS_mainXibLineDescriptorList & in_mLine,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLine = in_mLine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element::GGS_mainXibDescriptorList_2E_element (const GGS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element GGS_mainXibDescriptorList_2E_element::class_func_new (const GGS_mainXibLineDescriptorList & in_mLine,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLine = in_mLine ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibDescriptorList_2E_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList_2E_element::drop (void) {
  mProperty_mLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList_2E_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mainXibDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mLine.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ("mainXibDescriptorList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element GGS_mainXibDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_mainXibDescriptorList_2E_element result ;
  const GGS_mainXibDescriptorList_2E_element * p = (const GGS_mainXibDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element::GGS_mainXibLineDescriptorList_2E_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element::GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibLineDescriptorList_2E_element & inSource) :
mProperty_mElement (inSource.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element & GGS_mainXibLineDescriptorList_2E_element::operator = (const GGS_mainXibLineDescriptorList_2E_element & inSource) {
  mProperty_mElement = inSource.mProperty_mElement ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element GGS_mainXibLineDescriptorList_2E_element::init_21_ (const GGS_mainXibElement & in_mElement,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element::GGS_mainXibLineDescriptorList_2E_element (const GGS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element GGS_mainXibLineDescriptorList_2E_element::class_func_new (const GGS_mainXibElement & in_mElement,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mElement = in_mElement ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_mainXibLineDescriptorList_2E_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList_2E_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @mainXibLineDescriptorList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @mainXibLineDescriptorList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2E_element ("mainXibLineDescriptorList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibLineDescriptorList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibLineDescriptorList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibLineDescriptorList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element GGS_mainXibLineDescriptorList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList_2E_element result ;
  const GGS_mainXibLineDescriptorList_2E_element * p = (const GGS_mainXibLineDescriptorList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibLineDescriptorList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (void) :
mProperty_mEditable (),
mProperty_mSortPropertyName (),
mProperty_mDisplayedPropertyName (),
mProperty_mColumnObjectTypeName (),
mProperty_mRunAction (),
mProperty_mActualParameterList () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) :
mProperty_mEditable (inSource.mProperty_mEditable),
mProperty_mSortPropertyName (inSource.mProperty_mSortPropertyName),
mProperty_mDisplayedPropertyName (inSource.mProperty_mDisplayedPropertyName),
mProperty_mColumnObjectTypeName (inSource.mProperty_mColumnObjectTypeName),
mProperty_mRunAction (inSource.mProperty_mRunAction),
mProperty_mActualParameterList (inSource.mProperty_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::operator = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inSource) {
  mProperty_mEditable = inSource.mProperty_mEditable ;
  mProperty_mSortPropertyName = inSource.mProperty_mSortPropertyName ;
  mProperty_mDisplayedPropertyName = inSource.mProperty_mDisplayedPropertyName ;
  mProperty_mColumnObjectTypeName = inSource.mProperty_mColumnObjectTypeName ;
  mProperty_mRunAction = inSource.mProperty_mRunAction ;
  mProperty_mActualParameterList = inSource.mProperty_mActualParameterList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::init_21__21__21__21__21__21_ (const GGS_bool & in_mEditable,
                                                                                                                                                                                 const GGS_string & in_mSortPropertyName,
                                                                                                                                                                                 const GGS_string & in_mDisplayedPropertyName,
                                                                                                                                                                                 const GGS_string & in_mColumnObjectTypeName,
                                                                                                                                                                                 const GGS_string & in_mRunAction,
                                                                                                                                                                                 const GGS__32_stringlist & in_mActualParameterList,
                                                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEditable = in_mEditable ;
  result.mProperty_mSortPropertyName = in_mSortPropertyName ;
  result.mProperty_mDisplayedPropertyName = in_mDisplayedPropertyName ;
  result.mProperty_mColumnObjectTypeName = in_mColumnObjectTypeName ;
  result.mProperty_mRunAction = in_mRunAction ;
  result.mProperty_mActualParameterList = in_mActualParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (const GGS_bool & inOperand0,
                                                                                                                                                    const GGS_string & inOperand1,
                                                                                                                                                    const GGS_string & inOperand2,
                                                                                                                                                    const GGS_string & inOperand3,
                                                                                                                                                    const GGS_string & inOperand4,
                                                                                                                                                    const GGS__32_stringlist & inOperand5) :
mProperty_mEditable (inOperand0),
mProperty_mSortPropertyName (inOperand1),
mProperty_mDisplayedPropertyName (inOperand2),
mProperty_mColumnObjectTypeName (inOperand3),
mProperty_mRunAction (inOperand4),
mProperty_mActualParameterList (inOperand5) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::class_func_new (const GGS_bool & in_mEditable,
                                                                                                                                                                   const GGS_string & in_mSortPropertyName,
                                                                                                                                                                   const GGS_string & in_mDisplayedPropertyName,
                                                                                                                                                                   const GGS_string & in_mColumnObjectTypeName,
                                                                                                                                                                   const GGS_string & in_mRunAction,
                                                                                                                                                                   const GGS__32_stringlist & in_mActualParameterList,
                                                                                                                                                                   Compiler * inCompiler
                                                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEditable = in_mEditable ;
  result.mProperty_mSortPropertyName = in_mSortPropertyName ;
  result.mProperty_mDisplayedPropertyName = in_mDisplayedPropertyName ;
  result.mProperty_mColumnObjectTypeName = in_mColumnObjectTypeName ;
  result.mProperty_mRunAction = in_mRunAction ;
  result.mProperty_mActualParameterList = in_mActualParameterList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::isValid (void) const {
  return mProperty_mEditable.isValid () && mProperty_mSortPropertyName.isValid () && mProperty_mDisplayedPropertyName.isValid () && mProperty_mColumnObjectTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mActualParameterList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::drop (void) {
  mProperty_mEditable.drop () ;
  mProperty_mSortPropertyName.drop () ;
  mProperty_mDisplayedPropertyName.drop () ;
  mProperty_mColumnObjectTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mActualParameterList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::description (String & ioString,
                                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutTableViewControllerBoundColumnListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mEditable.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDisplayedPropertyName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mColumnObjectTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerBoundColumnListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ("autoLayoutTableViewControllerBoundColumnListForGeneration.element",
                                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                                                  Compiler * inCompiler
                                                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element result ;
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element * p = (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) :
mProperty_mColumnName (inSource.mProperty_mColumnName),
mProperty_mSortPropertyKind (inSource.mProperty_mSortPropertyKind),
mProperty_mObservablePropertyForSorting (inSource.mProperty_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::operator = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inSource) {
  mProperty_mColumnName = inSource.mProperty_mColumnName ;
  mProperty_mSortPropertyKind = inSource.mProperty_mSortPropertyKind ;
  mProperty_mObservablePropertyForSorting = inSource.mProperty_mObservablePropertyForSorting ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mColumnName,
                                                                                                                                                                       const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                                       const GGS_string & in_mObservablePropertyForSorting,
                                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mColumnName = in_mColumnName ;
  result.mProperty_mSortPropertyKind = in_mSortPropertyKind ;
  result.mProperty_mObservablePropertyForSorting = in_mObservablePropertyForSorting ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                                                                      const GGS_propertyKind & inOperand1,
                                                                                                                                                      const GGS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::class_func_new (const GGS_string & in_mColumnName,
                                                                                                                                                                     const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                                     const GGS_string & in_mObservablePropertyForSorting,
                                                                                                                                                                     Compiler * inCompiler
                                                                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mColumnName = in_mColumnName ;
  result.mProperty_mSortPropertyKind = in_mSortPropertyKind ;
  result.mProperty_mObservablePropertyForSorting = in_mObservablePropertyForSorting ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::description (String & ioString,
                                                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutTableViewControllerSortedColumnListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mColumnName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSortPropertyKind.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mObservablePropertyForSorting.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerSortedColumnListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ("autoLayoutTableViewControllerSortedColumnListForGeneration.element",
                                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element result ;
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element * p = (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (void) :
mProperty_kind () {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (const GGS_classKind_2E_atomic & inSource) :
mProperty_kind (inSource.mProperty_kind) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic & GGS_classKind_2E_atomic::operator = (const GGS_classKind_2E_atomic & inSource) {
  mProperty_kind = inSource.mProperty_kind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classKind_2E_atomic GGS_classKind_2E_atomic::init_21_ (const GGS_typeKind & in_kind,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_atomic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_kind = in_kind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic::GGS_classKind_2E_atomic (const GGS_typeKind & inOperand0) :
mProperty_kind (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic GGS_classKind_2E_atomic::class_func_new (const GGS_typeKind & in_kind,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_atomic result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_kind = in_kind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_atomic::isValid (void) const {
  return mProperty_kind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::drop (void) {
  mProperty_kind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classKind.atomic:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_kind.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.atomic generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic ("classKind.atomic",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_atomic::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_atomic ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_atomic::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_atomic (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic GGS_classKind_2E_atomic::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_atomic result ;
  const GGS_classKind_2E_atomic * p = (const GGS_classKind_2E_atomic *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_atomic *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.atomic", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classKind_2E_atomic_3F_
//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_::GGS_classKind_2E_atomic_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_::GGS_classKind_2E_atomic_3F_ (const GGS_classKind_2E_atomic & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_ GGS_classKind_2E_atomic_3F_::init_nil (void) {
  GGS_classKind_2E_atomic_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_atomic_3F_::isValid (void) const {
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

bool GGS_classKind_2E_atomic_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classKind_2E_atomic () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_atomic_3F_::description (String & ioString,
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
//     @classKind.atomic? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ("classKind.atomic?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_atomic_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_atomic_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_atomic_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_ GGS_classKind_2E_atomic_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_atomic_3F_ result ;
  const GGS_classKind_2E_atomic_3F_ * p = (const GGS_classKind_2E_atomic_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_atomic_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.atomic?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity::GGS_classKind_2E_entity (void) :
mProperty_superEntityName (),
mProperty_isGraphic (),
mProperty_isAbstract (),
mProperty_handlingOpposite () {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity::GGS_classKind_2E_entity (const GGS_classKind_2E_entity & inSource) :
mProperty_superEntityName (inSource.mProperty_superEntityName),
mProperty_isGraphic (inSource.mProperty_isGraphic),
mProperty_isAbstract (inSource.mProperty_isAbstract),
mProperty_handlingOpposite (inSource.mProperty_handlingOpposite) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity & GGS_classKind_2E_entity::operator = (const GGS_classKind_2E_entity & inSource) {
  mProperty_superEntityName = inSource.mProperty_superEntityName ;
  mProperty_isGraphic = inSource.mProperty_isGraphic ;
  mProperty_isAbstract = inSource.mProperty_isAbstract ;
  mProperty_handlingOpposite = inSource.mProperty_handlingOpposite ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_classKind_2E_entity GGS_classKind_2E_entity::init_21__21__21__21_ (const GGS_string & in_superEntityName,
                                                                       const GGS_bool & in_isGraphic,
                                                                       const GGS_bool & in_isAbstract,
                                                                       const GGS_bool & in_handlingOpposite,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_entity result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_isGraphic = in_isGraphic ;
  result.mProperty_isAbstract = in_isAbstract ;
  result.mProperty_handlingOpposite = in_handlingOpposite ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity::GGS_classKind_2E_entity (const GGS_string & inOperand0,
                                                  const GGS_bool & inOperand1,
                                                  const GGS_bool & inOperand2,
                                                  const GGS_bool & inOperand3) :
mProperty_superEntityName (inOperand0),
mProperty_isGraphic (inOperand1),
mProperty_isAbstract (inOperand2),
mProperty_handlingOpposite (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity GGS_classKind_2E_entity::class_func_new (const GGS_string & in_superEntityName,
                                                                 const GGS_bool & in_isGraphic,
                                                                 const GGS_bool & in_isAbstract,
                                                                 const GGS_bool & in_handlingOpposite,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind_2E_entity result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_superEntityName = in_superEntityName ;
  result.mProperty_isGraphic = in_isGraphic ;
  result.mProperty_isAbstract = in_isAbstract ;
  result.mProperty_handlingOpposite = in_handlingOpposite ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_entity::isValid (void) const {
  return mProperty_superEntityName.isValid () && mProperty_isGraphic.isValid () && mProperty_isAbstract.isValid () && mProperty_handlingOpposite.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::drop (void) {
  mProperty_superEntityName.drop () ;
  mProperty_isGraphic.drop () ;
  mProperty_isAbstract.drop () ;
  mProperty_handlingOpposite.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity::description (String & ioString,
                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @classKind.entity:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_superEntityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isGraphic.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_isAbstract.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_handlingOpposite.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @classKind.entity generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity ("classKind.entity",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_entity::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_entity ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_entity::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_entity (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity GGS_classKind_2E_entity::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_entity result ;
  const GGS_classKind_2E_entity * p = (const GGS_classKind_2E_entity *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_entity *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.entity", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @classKind_2E_entity_3F_
//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_::GGS_classKind_2E_entity_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_::GGS_classKind_2E_entity_3F_ (const GGS_classKind_2E_entity & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_ GGS_classKind_2E_entity_3F_::init_nil (void) {
  GGS_classKind_2E_entity_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classKind_2E_entity_3F_::isValid (void) const {
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

bool GGS_classKind_2E_entity_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_classKind_2E_entity () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind_2E_entity_3F_::description (String & ioString,
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
//     @classKind.entity? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ("classKind.entity?",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind_2E_entity_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind_2E_entity_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind_2E_entity_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_ GGS_classKind_2E_entity_3F_::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_classKind_2E_entity_3F_ result ;
  const GGS_classKind_2E_entity_3F_ * p = (const GGS_classKind_2E_entity_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind_2E_entity_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind.entity?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (const GGS_propertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element & GGS_propertyGenerationList_2E_element::operator = (const GGS_propertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyGenerationList_2E_element GGS_propertyGenerationList_2E_element::init_21_ (const GGS_propertyGeneration & in_mProperty,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element::GGS_propertyGenerationList_2E_element (const GGS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element GGS_propertyGenerationList_2E_element::class_func_new (const GGS_propertyGeneration & in_mProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ("propertyGenerationList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element GGS_propertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_propertyGenerationList_2E_element result ;
  const GGS_propertyGenerationList_2E_element * p = (const GGS_propertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (void) :
mProperty_isAbstract () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (const GGS_propertyAccessibility_2E_transient & inSource) :
mProperty_isAbstract (inSource.mProperty_isAbstract) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient & GGS_propertyAccessibility_2E_transient::operator = (const GGS_propertyAccessibility_2E_transient & inSource) {
  mProperty_isAbstract = inSource.mProperty_isAbstract ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient GGS_propertyAccessibility_2E_transient::init_21_ (const GGS_bool & in_isAbstract,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility_2E_transient result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isAbstract = in_isAbstract ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient::GGS_propertyAccessibility_2E_transient (const GGS_bool & inOperand0) :
mProperty_isAbstract (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient GGS_propertyAccessibility_2E_transient::class_func_new (const GGS_bool & in_isAbstract,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility_2E_transient result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_isAbstract = in_isAbstract ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyAccessibility_2E_transient::isValid (void) const {
  return mProperty_isAbstract.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::drop (void) {
  mProperty_isAbstract.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyAccessibility.transient:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_isAbstract.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyAccessibility.transient generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ("propertyAccessibility.transient",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessibility_2E_transient::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessibility_2E_transient::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessibility_2E_transient (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient GGS_propertyAccessibility_2E_transient::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_propertyAccessibility_2E_transient result ;
  const GGS_propertyAccessibility_2E_transient * p = (const GGS_propertyAccessibility_2E_transient *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessibility_2E_transient *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility.transient", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyAccessibility_2E_transient_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_::GGS_propertyAccessibility_2E_transient_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_::GGS_propertyAccessibility_2E_transient_3F_ (const GGS_propertyAccessibility_2E_transient & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_ GGS_propertyAccessibility_2E_transient_3F_::init_nil (void) {
  GGS_propertyAccessibility_2E_transient_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyAccessibility_2E_transient_3F_::isValid (void) const {
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

bool GGS_propertyAccessibility_2E_transient_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyAccessibility_2E_transient () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility_2E_transient_3F_::description (String & ioString,
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
//     @propertyAccessibility.transient? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ("propertyAccessibility.transient?",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessibility_2E_transient_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessibility_2E_transient_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessibility_2E_transient_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_ GGS_propertyAccessibility_2E_transient_3F_::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyAccessibility_2E_transient_3F_ result ;
  const GGS_propertyAccessibility_2E_transient_3F_ * p = (const GGS_propertyAccessibility_2E_transient_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessibility_2E_transient_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility.transient?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (void) :
mProperty_enumTypeName (),
mProperty_constantMap (),
mProperty_funcMap () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (const GGS_typeKind_2E_enumType & inSource) :
mProperty_enumTypeName (inSource.mProperty_enumTypeName),
mProperty_constantMap (inSource.mProperty_constantMap),
mProperty_funcMap (inSource.mProperty_funcMap) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType & GGS_typeKind_2E_enumType::operator = (const GGS_typeKind_2E_enumType & inSource) {
  mProperty_enumTypeName = inSource.mProperty_enumTypeName ;
  mProperty_constantMap = inSource.mProperty_constantMap ;
  mProperty_funcMap = inSource.mProperty_funcMap ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_enumType GGS_typeKind_2E_enumType::init_21__21__21_ (const GGS_string & in_enumTypeName,
                                                                     const GGS_enumConstantMap & in_constantMap,
                                                                     const GGS_enumFuncMap & in_funcMap,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumTypeName = in_enumTypeName ;
  result.mProperty_constantMap = in_constantMap ;
  result.mProperty_funcMap = in_funcMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType::GGS_typeKind_2E_enumType (const GGS_string & inOperand0,
                                                    const GGS_enumConstantMap & inOperand1,
                                                    const GGS_enumFuncMap & inOperand2) :
mProperty_enumTypeName (inOperand0),
mProperty_constantMap (inOperand1),
mProperty_funcMap (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType GGS_typeKind_2E_enumType::class_func_new (const GGS_string & in_enumTypeName,
                                                                   const GGS_enumConstantMap & in_constantMap,
                                                                   const GGS_enumFuncMap & in_funcMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_enumType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_enumTypeName = in_enumTypeName ;
  result.mProperty_constantMap = in_constantMap ;
  result.mProperty_funcMap = in_funcMap ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumType::objectCompare (const GGS_typeKind_2E_enumType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_enumTypeName.objectCompare (inOperand.mProperty_enumTypeName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_constantMap.objectCompare (inOperand.mProperty_constantMap) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_funcMap.objectCompare (inOperand.mProperty_funcMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumType::isValid (void) const {
  return mProperty_enumTypeName.isValid () && mProperty_constantMap.isValid () && mProperty_funcMap.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::drop (void) {
  mProperty_enumTypeName.drop () ;
  mProperty_constantMap.drop () ;
  mProperty_funcMap.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.enumType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_enumTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_constantMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_funcMap.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.enumType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ("typeKind.enumType",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType GGS_typeKind_2E_enumType::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumType result ;
  const GGS_typeKind_2E_enumType * p = (const GGS_typeKind_2E_enumType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_enumType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_::GGS_typeKind_2E_enumType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_::GGS_typeKind_2E_enumType_3F_ (const GGS_typeKind_2E_enumType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind_2E_enumType_3F_::init_nil (void) {
  GGS_typeKind_2E_enumType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_enumType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_enumType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_enumType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_enumType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_enumType_3F_::objectCompare (const GGS_typeKind_2E_enumType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_enumType_3F_::description (String & ioString,
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
//     @typeKind.enumType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ("typeKind.enumType?",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_enumType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_enumType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_enumType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_enumType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind_2E_enumType_3F_::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_enumType_3F_ result ;
  const GGS_typeKind_2E_enumType_3F_ * p = (const GGS_typeKind_2E_enumType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_enumType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.enumType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (void) :
mProperty_entityName (),
mProperty_graphic () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (const GGS_typeKind_2E_entityType & inSource) :
mProperty_entityName (inSource.mProperty_entityName),
mProperty_graphic (inSource.mProperty_graphic) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType & GGS_typeKind_2E_entityType::operator = (const GGS_typeKind_2E_entityType & inSource) {
  mProperty_entityName = inSource.mProperty_entityName ;
  mProperty_graphic = inSource.mProperty_graphic ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_entityType GGS_typeKind_2E_entityType::init_21__21_ (const GGS_string & in_entityName,
                                                                     const GGS_bool & in_graphic,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_entityType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_entityName = in_entityName ;
  result.mProperty_graphic = in_graphic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType::GGS_typeKind_2E_entityType (const GGS_string & inOperand0,
                                                        const GGS_bool & inOperand1) :
mProperty_entityName (inOperand0),
mProperty_graphic (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType GGS_typeKind_2E_entityType::class_func_new (const GGS_string & in_entityName,
                                                                       const GGS_bool & in_graphic,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_entityType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_entityName = in_entityName ;
  result.mProperty_graphic = in_graphic ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_entityType::objectCompare (const GGS_typeKind_2E_entityType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_entityName.objectCompare (inOperand.mProperty_entityName) ;
  }
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_graphic.objectCompare (inOperand.mProperty_graphic) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_entityType::isValid (void) const {
  return mProperty_entityName.isValid () && mProperty_graphic.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::drop (void) {
  mProperty_entityName.drop () ;
  mProperty_graphic.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType::description (String & ioString,
                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.entityType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_entityName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_graphic.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.entityType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType ("typeKind.entityType",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_entityType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_entityType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_entityType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_entityType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType GGS_typeKind_2E_entityType::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_entityType result ;
  const GGS_typeKind_2E_entityType * p = (const GGS_typeKind_2E_entityType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_entityType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.entityType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_entityType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_::GGS_typeKind_2E_entityType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_::GGS_typeKind_2E_entityType_3F_ (const GGS_typeKind_2E_entityType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind_2E_entityType_3F_::init_nil (void) {
  GGS_typeKind_2E_entityType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_entityType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_entityType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_entityType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_entityType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_entityType_3F_::objectCompare (const GGS_typeKind_2E_entityType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_entityType_3F_::description (String & ioString,
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
//     @typeKind.entityType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ("typeKind.entityType?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_entityType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_entityType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_entityType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_entityType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind_2E_entityType_3F_::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_entityType_3F_ result ;
  const GGS_typeKind_2E_entityType_3F_ * p = (const GGS_typeKind_2E_entityType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_entityType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.entityType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (void) :
mProperty_className () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (const GGS_typeKind_2E_classType & inSource) :
mProperty_className (inSource.mProperty_className) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType & GGS_typeKind_2E_classType::operator = (const GGS_typeKind_2E_classType & inSource) {
  mProperty_className = inSource.mProperty_className ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_classType GGS_typeKind_2E_classType::init_21_ (const GGS_string & in_className,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_className = in_className ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType::GGS_typeKind_2E_classType (const GGS_string & inOperand0) :
mProperty_className (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType GGS_typeKind_2E_classType::class_func_new (const GGS_string & in_className,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_classType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_className = in_className ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_classType::objectCompare (const GGS_typeKind_2E_classType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_className.objectCompare (inOperand.mProperty_className) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_classType::isValid (void) const {
  return mProperty_className.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::drop (void) {
  mProperty_className.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.classType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_className.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.classType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType ("typeKind.classType",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_classType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_classType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_classType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_classType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType GGS_typeKind_2E_classType::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_classType result ;
  const GGS_typeKind_2E_classType * p = (const GGS_typeKind_2E_classType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_classType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.classType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_classType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_::GGS_typeKind_2E_classType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_::GGS_typeKind_2E_classType_3F_ (const GGS_typeKind_2E_classType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind_2E_classType_3F_::init_nil (void) {
  GGS_typeKind_2E_classType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_classType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_classType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_classType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_classType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_classType_3F_::objectCompare (const GGS_typeKind_2E_classType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_classType_3F_::description (String & ioString,
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
//     @typeKind.classType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ("typeKind.classType?",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_classType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_classType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_classType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_classType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind_2E_classType_3F_::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_classType_3F_ result ;
  const GGS_typeKind_2E_classType_3F_ * p = (const GGS_typeKind_2E_classType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_classType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.classType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (void) :
mProperty_externTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (const GGS_typeKind_2E_transientPropertyExternType & inSource) :
mProperty_externTypeName (inSource.mProperty_externTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType & GGS_typeKind_2E_transientPropertyExternType::operator = (const GGS_typeKind_2E_transientPropertyExternType & inSource) {
  mProperty_externTypeName = inSource.mProperty_externTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType GGS_typeKind_2E_transientPropertyExternType::init_21_ (const GGS_string & in_externTypeName,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_transientPropertyExternType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_externTypeName = in_externTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType::GGS_typeKind_2E_transientPropertyExternType (const GGS_string & inOperand0) :
mProperty_externTypeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType GGS_typeKind_2E_transientPropertyExternType::class_func_new (const GGS_string & in_externTypeName,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind_2E_transientPropertyExternType result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_externTypeName = in_externTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_transientPropertyExternType::objectCompare (const GGS_typeKind_2E_transientPropertyExternType & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_externTypeName.objectCompare (inOperand.mProperty_externTypeName) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_transientPropertyExternType::isValid (void) const {
  return mProperty_externTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::drop (void) {
  mProperty_externTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKind.transientPropertyExternType:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_externTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKind.transientPropertyExternType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ("typeKind.transientPropertyExternType",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_transientPropertyExternType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_transientPropertyExternType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_transientPropertyExternType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType GGS_typeKind_2E_transientPropertyExternType::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_transientPropertyExternType result ;
  const GGS_typeKind_2E_transientPropertyExternType * p = (const GGS_typeKind_2E_transientPropertyExternType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_transientPropertyExternType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.transientPropertyExternType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @typeKind_2E_transientPropertyExternType_3F_
//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_::GGS_typeKind_2E_transientPropertyExternType_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_::GGS_typeKind_2E_transientPropertyExternType_3F_ (const GGS_typeKind_2E_transientPropertyExternType & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind_2E_transientPropertyExternType_3F_::init_nil (void) {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKind_2E_transientPropertyExternType_3F_::isValid (void) const {
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

bool GGS_typeKind_2E_transientPropertyExternType_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind_2E_transientPropertyExternType_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_typeKind_2E_transientPropertyExternType () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind_2E_transientPropertyExternType_3F_::objectCompare (const GGS_typeKind_2E_transientPropertyExternType_3F_ & inOperand) const {
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

void GGS_typeKind_2E_transientPropertyExternType_3F_::description (String & ioString,
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
//     @typeKind.transientPropertyExternType? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ("typeKind.transientPropertyExternType?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind_2E_transientPropertyExternType_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind_2E_transientPropertyExternType_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind_2E_transientPropertyExternType_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind_2E_transientPropertyExternType_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind_2E_transientPropertyExternType_3F_::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  const GGS_typeKind_2E_transientPropertyExternType_3F_ * p = (const GGS_typeKind_2E_transientPropertyExternType_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind_2E_transientPropertyExternType_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind.transientPropertyExternType?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (void) :
mProperty_type (),
mProperty_accessibility () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (const GGS_propertyKind_2E_property & inSource) :
mProperty_type (inSource.mProperty_type),
mProperty_accessibility (inSource.mProperty_accessibility) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property & GGS_propertyKind_2E_property::operator = (const GGS_propertyKind_2E_property & inSource) {
  mProperty_type = inSource.mProperty_type ;
  mProperty_accessibility = inSource.mProperty_accessibility ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_property GGS_propertyKind_2E_property::init_21__21_ (const GGS_typeKind & in_type,
                                                                         const GGS_propertyAccessibility & in_accessibility,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_accessibility = in_accessibility ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property::GGS_propertyKind_2E_property (const GGS_typeKind & inOperand0,
                                                            const GGS_propertyAccessibility & inOperand1) :
mProperty_type (inOperand0),
mProperty_accessibility (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property GGS_propertyKind_2E_property::class_func_new (const GGS_typeKind & in_type,
                                                                           const GGS_propertyAccessibility & in_accessibility,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_property result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_type = in_type ;
  result.mProperty_accessibility = in_accessibility ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_property::isValid (void) const {
  return mProperty_type.isValid () && mProperty_accessibility.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::drop (void) {
  mProperty_type.drop () ;
  mProperty_accessibility.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.property:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_type.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_accessibility.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.property generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property ("propertyKind.property",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_property::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_property ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_property::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_property (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property GGS_propertyKind_2E_property::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_property result ;
  const GGS_propertyKind_2E_property * p = (const GGS_propertyKind_2E_property *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_property *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.property", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKind_2E_property_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_::GGS_propertyKind_2E_property_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_::GGS_propertyKind_2E_property_3F_ (const GGS_propertyKind_2E_property & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_ GGS_propertyKind_2E_property_3F_::init_nil (void) {
  GGS_propertyKind_2E_property_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_property_3F_::isValid (void) const {
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

bool GGS_propertyKind_2E_property_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_property () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_property_3F_::description (String & ioString,
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
//     @propertyKind.property? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ("propertyKind.property?",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_property_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_property_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_property_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_property_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_property_3F_ GGS_propertyKind_2E_property_3F_::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_property_3F_ result ;
  const GGS_propertyKind_2E_property_3F_ * p = (const GGS_propertyKind_2E_property_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_property_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.property?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (void) :
mProperty_typeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (const GGS_propertyKind_2E_selectionController & inSource) :
mProperty_typeName (inSource.mProperty_typeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController & GGS_propertyKind_2E_selectionController::operator = (const GGS_propertyKind_2E_selectionController & inSource) {
  mProperty_typeName = inSource.mProperty_typeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_propertyKind_2E_selectionController GGS_propertyKind_2E_selectionController::init_21_ (const GGS_string & in_typeName,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_selectionController result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController::GGS_propertyKind_2E_selectionController (const GGS_string & inOperand0) :
mProperty_typeName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController GGS_propertyKind_2E_selectionController::class_func_new (const GGS_string & in_typeName,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind_2E_selectionController result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_typeName = in_typeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_selectionController::isValid (void) const {
  return mProperty_typeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::drop (void) {
  mProperty_typeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("<struct @propertyKind.selectionController:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_typeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @propertyKind.selectionController generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ("propertyKind.selectionController",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_selectionController::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_selectionController ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_selectionController::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_selectionController (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController GGS_propertyKind_2E_selectionController::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_selectionController result ;
  const GGS_propertyKind_2E_selectionController * p = (const GGS_propertyKind_2E_selectionController *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_selectionController *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.selectionController", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @propertyKind_2E_selectionController_3F_
//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_::GGS_propertyKind_2E_selectionController_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_::GGS_propertyKind_2E_selectionController_3F_ (const GGS_propertyKind_2E_selectionController & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_ GGS_propertyKind_2E_selectionController_3F_::init_nil (void) {
  GGS_propertyKind_2E_selectionController_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyKind_2E_selectionController_3F_::isValid (void) const {
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

bool GGS_propertyKind_2E_selectionController_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_propertyKind_2E_selectionController () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyKind_2E_selectionController_3F_::description (String & ioString,
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
//     @propertyKind.selectionController? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ("propertyKind.selectionController?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind_2E_selectionController_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyKind_2E_selectionController_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyKind_2E_selectionController_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyKind_2E_selectionController_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind_2E_selectionController_3F_ GGS_propertyKind_2E_selectionController_3F_::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_propertyKind_2E_selectionController_3F_ result ;
  const GGS_propertyKind_2E_selectionController_3F_ * p = (const GGS_propertyKind_2E_selectionController_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyKind_2E_selectionController_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyKind.selectionController?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element::GGS_atomicPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element::GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element & GGS_atomicPropertyGenerationList_2E_element::operator = (const GGS_atomicPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element GGS_atomicPropertyGenerationList_2E_element::init_21_ (const GGS_atomicPropertyGeneration & in_mProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element::GGS_atomicPropertyGenerationList_2E_element (const GGS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element GGS_atomicPropertyGenerationList_2E_element::class_func_new (const GGS_atomicPropertyGeneration & in_mProperty,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_atomicPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @atomicPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2E_element ("atomicPropertyGenerationList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element GGS_atomicPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList_2E_element result ;
  const GGS_atomicPropertyGenerationList_2E_element * p = (const GGS_atomicPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element & GGS_toManyProxyGenerationList_2E_element::operator = (const GGS_toManyProxyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element GGS_toManyProxyGenerationList_2E_element::init_21_ (const GGS_toManyProxyGeneration & in_mProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element::GGS_toManyProxyGenerationList_2E_element (const GGS_toManyProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element GGS_toManyProxyGenerationList_2E_element::class_func_new (const GGS_toManyProxyGeneration & in_mProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyProxyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyProxyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyProxyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ("toManyProxyGenerationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyProxyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyProxyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element GGS_toManyProxyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList_2E_element result ;
  const GGS_toManyProxyGenerationList_2E_element * p = (const GGS_toManyProxyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyProxyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyProxyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element & GGS_atomicProxyGenerationList_2E_element::operator = (const GGS_atomicProxyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element GGS_atomicProxyGenerationList_2E_element::init_21_ (const GGS_atomicProxyGeneration & in_mProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element::GGS_atomicProxyGenerationList_2E_element (const GGS_atomicProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element GGS_atomicProxyGenerationList_2E_element::class_func_new (const GGS_atomicProxyGeneration & in_mProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_atomicProxyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList_2E_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @atomicProxyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicProxyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ("atomicProxyGenerationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicProxyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicProxyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element GGS_atomicProxyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList_2E_element result ;
  const GGS_atomicProxyGenerationList_2E_element * p = (const GGS_atomicProxyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicProxyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicProxyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (const GGS_XCodeGroupList_2E_element & inSource) :
mProperty_mGroupReference (inSource.mProperty_mGroupReference),
mProperty_mGroupName (inSource.mProperty_mGroupName),
mProperty_mGroupPath (inSource.mProperty_mGroupPath),
mProperty_mChildrenRefs (inSource.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element & GGS_XCodeGroupList_2E_element::operator = (const GGS_XCodeGroupList_2E_element & inSource) {
  mProperty_mGroupReference = inSource.mProperty_mGroupReference ;
  mProperty_mGroupName = inSource.mProperty_mGroupName ;
  mProperty_mGroupPath = inSource.mProperty_mGroupPath ;
  mProperty_mChildrenRefs = inSource.mProperty_mChildrenRefs ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::init_21__21__21__21_ (const GGS_string & in_mGroupReference,
                                                                                   const GGS_string & in_mGroupName,
                                                                                   const GGS_string & in_mGroupPath,
                                                                                   const GGS_stringlist & in_mChildrenRefs,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element::GGS_XCodeGroupList_2E_element (const GGS_string & inOperand0,
                                                              const GGS_string & inOperand1,
                                                              const GGS_string & inOperand2,
                                                              const GGS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::class_func_new (const GGS_string & in_mGroupReference,
                                                                             const GGS_string & in_mGroupName,
                                                                             const GGS_string & in_mGroupPath,
                                                                             const GGS_stringlist & in_mChildrenRefs,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mGroupReference = in_mGroupReference ;
  result.mProperty_mGroupName = in_mGroupName ;
  result.mProperty_mGroupPath = in_mGroupPath ;
  result.mProperty_mChildrenRefs = in_mChildrenRefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeGroupList_2E_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList_2E_element::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeGroupList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ("XCodeGroupList.element",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeGroupList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element GGS_XCodeGroupList_2E_element::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList_2E_element result ;
  const GGS_XCodeGroupList_2E_element * p = (const GGS_XCodeGroupList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (const GGS_XCodeToolTargetList_2E_element & inSource) :
mProperty_mTargetRef (inSource.mProperty_mTargetRef),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mProductFileReference (inSource.mProperty_mProductFileReference),
mProperty_mProductFileName (inSource.mProperty_mProductFileName),
mProperty_mBuildPhaseRefList (inSource.mProperty_mBuildPhaseRefList),
mProperty_mBuildPhaseRef (inSource.mProperty_mBuildPhaseRef),
mProperty_mBuildConfigurationListRef (inSource.mProperty_mBuildConfigurationListRef),
mProperty_mBuildConfigurationSettingList (inSource.mProperty_mBuildConfigurationSettingList),
mProperty_mBuildConfigurationRef (inSource.mProperty_mBuildConfigurationRef),
mProperty_mFrameworksFileRefList (inSource.mProperty_mFrameworksFileRefList),
mProperty_mFrameworkBuildPhaseRef (inSource.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element & GGS_XCodeToolTargetList_2E_element::operator = (const GGS_XCodeToolTargetList_2E_element & inSource) {
  mProperty_mTargetRef = inSource.mProperty_mTargetRef ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mProductFileReference = inSource.mProperty_mProductFileReference ;
  mProperty_mProductFileName = inSource.mProperty_mProductFileName ;
  mProperty_mBuildPhaseRefList = inSource.mProperty_mBuildPhaseRefList ;
  mProperty_mBuildPhaseRef = inSource.mProperty_mBuildPhaseRef ;
  mProperty_mBuildConfigurationListRef = inSource.mProperty_mBuildConfigurationListRef ;
  mProperty_mBuildConfigurationSettingList = inSource.mProperty_mBuildConfigurationSettingList ;
  mProperty_mBuildConfigurationRef = inSource.mProperty_mBuildConfigurationRef ;
  mProperty_mFrameworksFileRefList = inSource.mProperty_mFrameworksFileRefList ;
  mProperty_mFrameworkBuildPhaseRef = inSource.mProperty_mFrameworkBuildPhaseRef ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                         const GGS_string & in_mTargetName,
                                                                                                                         const GGS_string & in_mProductFileReference,
                                                                                                                         const GGS_string & in_mProductFileName,
                                                                                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                         const GGS_string & in_mBuildPhaseRef,
                                                                                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                         const GGS_string & in_mBuildConfigurationRef,
                                                                                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                         const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element::GGS_XCodeToolTargetList_2E_element (const GGS_string & inOperand0,
                                                                        const GGS_string & inOperand1,
                                                                        const GGS_string & inOperand2,
                                                                        const GGS_string & inOperand3,
                                                                        const GGS_stringlist & inOperand4,
                                                                        const GGS_string & inOperand5,
                                                                        const GGS_string & inOperand6,
                                                                        const GGS_stringlist & inOperand7,
                                                                        const GGS_string & inOperand8,
                                                                        const GGS_stringlist & inOperand9,
                                                                        const GGS_string & inOperand10) :
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

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::class_func_new (const GGS_string & in_mTargetRef,
                                                                                       const GGS_string & in_mTargetName,
                                                                                       const GGS_string & in_mProductFileReference,
                                                                                       const GGS_string & in_mProductFileName,
                                                                                       const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                       const GGS_string & in_mBuildPhaseRef,
                                                                                       const GGS_string & in_mBuildConfigurationListRef,
                                                                                       const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                       const GGS_string & in_mBuildConfigurationRef,
                                                                                       const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                       const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeToolTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList_2E_element::description (String & ioString,
                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeToolTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ("XCodeToolTargetList.element",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeToolTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element GGS_XCodeToolTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList_2E_element result ;
  const GGS_XCodeToolTargetList_2E_element * p = (const GGS_XCodeToolTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (void) :
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

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (const GGS_XCodeAppTargetList_2E_element & inSource) :
mProperty_mTargetRef (inSource.mProperty_mTargetRef),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mProductFileReference (inSource.mProperty_mProductFileReference),
mProperty_mProductFileName (inSource.mProperty_mProductFileName),
mProperty_mBuildPhaseRefList (inSource.mProperty_mBuildPhaseRefList),
mProperty_mBuildPhaseRef (inSource.mProperty_mBuildPhaseRef),
mProperty_mBuildConfigurationListRef (inSource.mProperty_mBuildConfigurationListRef),
mProperty_mBuildConfigurationSettingList (inSource.mProperty_mBuildConfigurationSettingList),
mProperty_mBuildConfigurationRef (inSource.mProperty_mBuildConfigurationRef),
mProperty_mFrameworksFileRefList (inSource.mProperty_mFrameworksFileRefList),
mProperty_mFrameworkBuildPhaseRef (inSource.mProperty_mFrameworkBuildPhaseRef),
mProperty_mDependentTargets (inSource.mProperty_mDependentTargets),
mProperty_mResourceBuildRef (inSource.mProperty_mResourceBuildRef),
mProperty_mResourceFileBuildRefs (inSource.mProperty_mResourceFileBuildRefs),
mProperty_mInfoPListFile (inSource.mProperty_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element & GGS_XCodeAppTargetList_2E_element::operator = (const GGS_XCodeAppTargetList_2E_element & inSource) {
  mProperty_mTargetRef = inSource.mProperty_mTargetRef ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mProductFileReference = inSource.mProperty_mProductFileReference ;
  mProperty_mProductFileName = inSource.mProperty_mProductFileName ;
  mProperty_mBuildPhaseRefList = inSource.mProperty_mBuildPhaseRefList ;
  mProperty_mBuildPhaseRef = inSource.mProperty_mBuildPhaseRef ;
  mProperty_mBuildConfigurationListRef = inSource.mProperty_mBuildConfigurationListRef ;
  mProperty_mBuildConfigurationSettingList = inSource.mProperty_mBuildConfigurationSettingList ;
  mProperty_mBuildConfigurationRef = inSource.mProperty_mBuildConfigurationRef ;
  mProperty_mFrameworksFileRefList = inSource.mProperty_mFrameworksFileRefList ;
  mProperty_mFrameworkBuildPhaseRef = inSource.mProperty_mFrameworkBuildPhaseRef ;
  mProperty_mDependentTargets = inSource.mProperty_mDependentTargets ;
  mProperty_mResourceBuildRef = inSource.mProperty_mResourceBuildRef ;
  mProperty_mResourceFileBuildRefs = inSource.mProperty_mResourceFileBuildRefs ;
  mProperty_mInfoPListFile = inSource.mProperty_mInfoPListFile ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mTargetRef,
                                                                                                                                       const GGS_string & in_mTargetName,
                                                                                                                                       const GGS_string & in_mProductFileReference,
                                                                                                                                       const GGS_string & in_mProductFileName,
                                                                                                                                       const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                                                                       const GGS_string & in_mBuildPhaseRef,
                                                                                                                                       const GGS_string & in_mBuildConfigurationListRef,
                                                                                                                                       const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                                                                       const GGS_string & in_mBuildConfigurationRef,
                                                                                                                                       const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                                                                       const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                                                                       const GGS__32_stringlist & in_mDependentTargets,
                                                                                                                                       const GGS_string & in_mResourceBuildRef,
                                                                                                                                       const GGS_stringlist & in_mResourceFileBuildRefs,
                                                                                                                                       const GGS_string & in_mInfoPListFile,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  result.mProperty_mInfoPListFile = in_mInfoPListFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element::GGS_XCodeAppTargetList_2E_element (const GGS_string & inOperand0,
                                                                      const GGS_string & inOperand1,
                                                                      const GGS_string & inOperand2,
                                                                      const GGS_string & inOperand3,
                                                                      const GGS_stringlist & inOperand4,
                                                                      const GGS_string & inOperand5,
                                                                      const GGS_string & inOperand6,
                                                                      const GGS_stringlist & inOperand7,
                                                                      const GGS_string & inOperand8,
                                                                      const GGS_stringlist & inOperand9,
                                                                      const GGS_string & inOperand10,
                                                                      const GGS__32_stringlist & inOperand11,
                                                                      const GGS_string & inOperand12,
                                                                      const GGS_stringlist & inOperand13,
                                                                      const GGS_string & inOperand14) :
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

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::class_func_new (const GGS_string & in_mTargetRef,
                                                                                     const GGS_string & in_mTargetName,
                                                                                     const GGS_string & in_mProductFileReference,
                                                                                     const GGS_string & in_mProductFileName,
                                                                                     const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                     const GGS_string & in_mBuildPhaseRef,
                                                                                     const GGS_string & in_mBuildConfigurationListRef,
                                                                                     const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                     const GGS_string & in_mBuildConfigurationRef,
                                                                                     const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                     const GGS_string & in_mFrameworkBuildPhaseRef,
                                                                                     const GGS__32_stringlist & in_mDependentTargets,
                                                                                     const GGS_string & in_mResourceBuildRef,
                                                                                     const GGS_stringlist & in_mResourceFileBuildRefs,
                                                                                     const GGS_string & in_mInfoPListFile,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTargetRef = in_mTargetRef ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mProductFileReference = in_mProductFileReference ;
  result.mProperty_mProductFileName = in_mProductFileName ;
  result.mProperty_mBuildPhaseRefList = in_mBuildPhaseRefList ;
  result.mProperty_mBuildPhaseRef = in_mBuildPhaseRef ;
  result.mProperty_mBuildConfigurationListRef = in_mBuildConfigurationListRef ;
  result.mProperty_mBuildConfigurationSettingList = in_mBuildConfigurationSettingList ;
  result.mProperty_mBuildConfigurationRef = in_mBuildConfigurationRef ;
  result.mProperty_mFrameworksFileRefList = in_mFrameworksFileRefList ;
  result.mProperty_mFrameworkBuildPhaseRef = in_mFrameworkBuildPhaseRef ;
  result.mProperty_mDependentTargets = in_mDependentTargets ;
  result.mProperty_mResourceBuildRef = in_mResourceBuildRef ;
  result.mProperty_mResourceFileBuildRefs = in_mResourceFileBuildRefs ;
  result.mProperty_mInfoPListFile = in_mInfoPListFile ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_XCodeAppTargetList_2E_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::drop (void) {
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

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @XCodeAppTargetList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ("XCodeAppTargetList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeAppTargetList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element GGS_XCodeAppTargetList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList_2E_element result ;
  const GGS_XCodeAppTargetList_2E_element * p = (const GGS_XCodeAppTargetList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (const GGS_BuildFileList_2E_element & inSource) :
mProperty_mFileReference (inSource.mProperty_mFileReference),
mProperty_mFileName (inSource.mProperty_mFileName),
mProperty_mBuildReference (inSource.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element & GGS_BuildFileList_2E_element::operator = (const GGS_BuildFileList_2E_element & inSource) {
  mProperty_mFileReference = inSource.mProperty_mFileReference ;
  mProperty_mFileName = inSource.mProperty_mFileName ;
  mProperty_mBuildReference = inSource.mProperty_mBuildReference ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::init_21__21__21_ (const GGS_string & in_mFileReference,
                                                                             const GGS_string & in_mFileName,
                                                                             const GGS_string & in_mBuildReference,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element::GGS_BuildFileList_2E_element (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::class_func_new (const GGS_string & in_mFileReference,
                                                                           const GGS_string & in_mFileName,
                                                                           const GGS_string & in_mBuildReference,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileReference = in_mFileReference ;
  result.mProperty_mFileName = in_mFileName ;
  result.mProperty_mBuildReference = in_mBuildReference ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_BuildFileList_2E_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList_2E_element::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @BuildFileList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @BuildFileList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList_2E_element ("BuildFileList.element",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_BuildFileList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element GGS_BuildFileList_2E_element::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_BuildFileList_2E_element result ;
  const GGS_BuildFileList_2E_element * p = (const GGS_BuildFileList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (void) :
mProperty_expression () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (const GGS_multipleBindingDescriptor_2E_binding & inSource) :
mProperty_expression (inSource.mProperty_expression) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding & GGS_multipleBindingDescriptor_2E_binding::operator = (const GGS_multipleBindingDescriptor_2E_binding & inSource) {
  mProperty_expression = inSource.mProperty_expression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding GGS_multipleBindingDescriptor_2E_binding::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_expression,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding::GGS_multipleBindingDescriptor_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0) :
mProperty_expression (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding GGS_multipleBindingDescriptor_2E_binding::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_expression,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_expression = in_expression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor_2E_binding::objectCompare (const GGS_multipleBindingDescriptor_2E_binding & inOperand) const {
   ComparisonResult result = ComparisonResult::operandEqual ;
  if (result == ComparisonResult::operandEqual) {
    result = mProperty_expression.objectCompare (inOperand.mProperty_expression) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingDescriptor_2E_binding::isValid (void) const {
  return mProperty_expression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::drop (void) {
  mProperty_expression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @multipleBindingDescriptor.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_expression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @multipleBindingDescriptor.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ("multipleBindingDescriptor.binding",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingDescriptor_2E_binding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingDescriptor_2E_binding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding GGS_multipleBindingDescriptor_2E_binding::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor_2E_binding result ;
  const GGS_multipleBindingDescriptor_2E_binding * p = (const GGS_multipleBindingDescriptor_2E_binding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingDescriptor_2E_binding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor.binding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @multipleBindingDescriptor_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_::GGS_multipleBindingDescriptor_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_::GGS_multipleBindingDescriptor_2E_binding_3F_ (const GGS_multipleBindingDescriptor_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_ GGS_multipleBindingDescriptor_2E_binding_3F_::init_nil (void) {
  GGS_multipleBindingDescriptor_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingDescriptor_2E_binding_3F_::isValid (void) const {
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

bool GGS_multipleBindingDescriptor_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_multipleBindingDescriptor_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor_2E_binding_3F_::objectCompare (const GGS_multipleBindingDescriptor_2E_binding_3F_ & inOperand) const {
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

void GGS_multipleBindingDescriptor_2E_binding_3F_::description (String & ioString,
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
//     @multipleBindingDescriptor.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ("multipleBindingDescriptor.binding?",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingDescriptor_2E_binding_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingDescriptor_2E_binding_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_ GGS_multipleBindingDescriptor_2E_binding_3F_::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor_2E_binding_3F_ result ;
  const GGS_multipleBindingDescriptor_2E_binding_3F_ * p = (const GGS_multipleBindingDescriptor_2E_binding_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingDescriptor_2E_binding_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor.binding?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (const GGS_multipleBindingGenerationList_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectExpression (inSource.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element & GGS_multipleBindingGenerationList_2E_element::operator = (const GGS_multipleBindingGenerationList_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectExpression = inSource.mProperty_mBoundObjectExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element GGS_multipleBindingGenerationList_2E_element::init_21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                             const GGS_string & in_mBindingName,
                                                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element::GGS_multipleBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element GGS_multipleBindingGenerationList_2E_element::class_func_new (const GGS_string & in_mOutletName,
                                                                                                           const GGS_string & in_mBindingName,
                                                                                                           const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_multipleBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @multipleBindingGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOutletName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @multipleBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ("multipleBindingGenerationList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element GGS_multipleBindingGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList_2E_element result ;
  const GGS_multipleBindingGenerationList_2E_element * p = (const GGS_multipleBindingGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element::GGS_validationStubRoutineListForGeneration_2E_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element::GGS_validationStubRoutineListForGeneration_2E_element (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) :
mProperty_mObjectTypeName (inSource.mProperty_mObjectTypeName),
mProperty_mModelName (inSource.mProperty_mModelName),
mProperty_mModelTypeName (inSource.mProperty_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element & GGS_validationStubRoutineListForGeneration_2E_element::operator = (const GGS_validationStubRoutineListForGeneration_2E_element & inSource) {
  mProperty_mObjectTypeName = inSource.mProperty_mObjectTypeName ;
  mProperty_mModelName = inSource.mProperty_mModelName ;
  mProperty_mModelTypeName = inSource.mProperty_mModelTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element GGS_validationStubRoutineListForGeneration_2E_element::init_21__21__21_ (const GGS_string & in_mObjectTypeName,
                                                                                                                               const GGS_string & in_mModelName,
                                                                                                                               const GGS_string & in_mModelTypeName,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObjectTypeName = in_mObjectTypeName ;
  result.mProperty_mModelName = in_mModelName ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element::GGS_validationStubRoutineListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                                              const GGS_string & inOperand1,
                                                                                                              const GGS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element GGS_validationStubRoutineListForGeneration_2E_element::class_func_new (const GGS_string & in_mObjectTypeName,
                                                                                                                             const GGS_string & in_mModelName,
                                                                                                                             const GGS_string & in_mModelTypeName,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObjectTypeName = in_mObjectTypeName ;
  result.mProperty_mModelName = in_mModelName ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_validationStubRoutineListForGeneration_2E_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration_2E_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration_2E_element::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @validationStubRoutineListForGeneration.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mObjectTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModelName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @validationStubRoutineListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ("validationStubRoutineListForGeneration.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_validationStubRoutineListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_validationStubRoutineListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_validationStubRoutineListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element GGS_validationStubRoutineListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration_2E_element result ;
  const GGS_validationStubRoutineListForGeneration_2E_element * p = (const GGS_validationStubRoutineListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_validationStubRoutineListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (const GGS_outletBindingSpecificationModelList_2E_element & inSource) :
mProperty_mModelType (inSource.mProperty_mModelType),
mProperty_mModelShouldBeWritableProperty (inSource.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element & GGS_outletBindingSpecificationModelList_2E_element::operator = (const GGS_outletBindingSpecificationModelList_2E_element & inSource) {
  mProperty_mModelType = inSource.mProperty_mModelType ;
  mProperty_mModelShouldBeWritableProperty = inSource.mProperty_mModelShouldBeWritableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element GGS_outletBindingSpecificationModelList_2E_element::init_21__21_ (const GGS_typeKind & in_mModelType,
                                                                                                                     const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element::GGS_outletBindingSpecificationModelList_2E_element (const GGS_typeKind & inOperand0,
                                                                                                        const GGS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element GGS_outletBindingSpecificationModelList_2E_element::class_func_new (const GGS_typeKind & in_mModelType,
                                                                                                                       const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationModelList_2E_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList_2E_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingSpecificationModelList.element:") ;
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
//     @outletBindingSpecificationModelList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ("outletBindingSpecificationModelList.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationModelList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationModelList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationModelList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element GGS_outletBindingSpecificationModelList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList_2E_element result ;
  const GGS_outletBindingSpecificationModelList_2E_element * p = (const GGS_outletBindingSpecificationModelList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationModelList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element::GGS_autoLayoutOutletLinkerGenerationList_2E_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameAndTypeNameList () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element::GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) :
mProperty_mLinkerName (inSource.mProperty_mLinkerName),
mProperty_mOutletNameAndTypeNameList (inSource.mProperty_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element & GGS_autoLayoutOutletLinkerGenerationList_2E_element::operator = (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inSource) {
  mProperty_mLinkerName = inSource.mProperty_mLinkerName ;
  mProperty_mOutletNameAndTypeNameList = inSource.mProperty_mOutletNameAndTypeNameList ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element GGS_autoLayoutOutletLinkerGenerationList_2E_element::init_21__21_ (const GGS_string & in_mLinkerName,
                                                                                                                       const GGS__32_stringlist & in_mOutletNameAndTypeNameList,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameAndTypeNameList = in_mOutletNameAndTypeNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element::GGS_autoLayoutOutletLinkerGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                          const GGS__32_stringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameAndTypeNameList (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element GGS_autoLayoutOutletLinkerGenerationList_2E_element::class_func_new (const GGS_string & in_mLinkerName,
                                                                                                                         const GGS__32_stringlist & in_mOutletNameAndTypeNameList,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mLinkerName = in_mLinkerName ;
  result.mProperty_mOutletNameAndTypeNameList = in_mOutletNameAndTypeNameList ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutOutletLinkerGenerationList_2E_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameAndTypeNameList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList_2E_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameAndTypeNameList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList_2E_element::description (String & ioString,
                                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutOutletLinkerGenerationList.element:") ;
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
//     @autoLayoutOutletLinkerGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ("autoLayoutOutletLinkerGenerationList.element",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletLinkerGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletLinkerGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletLinkerGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element GGS_autoLayoutOutletLinkerGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList_2E_element result ;
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element * p = (const GGS_autoLayoutOutletLinkerGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletLinkerGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (const GGS_transientExternTypeList_2E_element & inSource) :
mProperty_mTypeName (inSource.mProperty_mTypeName),
mProperty_mIsClass (inSource.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element & GGS_transientExternTypeList_2E_element::operator = (const GGS_transientExternTypeList_2E_element & inSource) {
  mProperty_mTypeName = inSource.mProperty_mTypeName ;
  mProperty_mIsClass = inSource.mProperty_mIsClass ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientExternTypeList_2E_element GGS_transientExternTypeList_2E_element::init_21__21_ (const GGS_string & in_mTypeName,
                                                                                             const GGS_bool & in_mIsClass,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientExternTypeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mIsClass = in_mIsClass ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element::GGS_transientExternTypeList_2E_element (const GGS_string & inOperand0,
                                                                                const GGS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element GGS_transientExternTypeList_2E_element::class_func_new (const GGS_string & in_mTypeName,
                                                                                               const GGS_bool & in_mIsClass,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientExternTypeList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTypeName = in_mTypeName ;
  result.mProperty_mIsClass = in_mIsClass ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientExternTypeList_2E_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList_2E_element::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @transientExternTypeList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientExternTypeList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientExternTypeList_2E_element ("transientExternTypeList.element",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientExternTypeList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientExternTypeList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientExternTypeList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element GGS_transientExternTypeList_2E_element::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList_2E_element result ;
  const GGS_transientExternTypeList_2E_element * p = (const GGS_transientExternTypeList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientExternTypeList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (void) :
mProperty_mFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (const GGS_fileGenerationList_2E_element & inSource) :
mProperty_mFileGeneration (inSource.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element & GGS_fileGenerationList_2E_element::operator = (const GGS_fileGenerationList_2E_element & inSource) {
  mProperty_mFileGeneration = inSource.mProperty_mFileGeneration ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_fileGenerationList_2E_element GGS_fileGenerationList_2E_element::init_21_ (const GGS_abstractFileGeneration & in_mFileGeneration,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fileGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileGeneration = in_mFileGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element::GGS_fileGenerationList_2E_element (const GGS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element GGS_fileGenerationList_2E_element::class_func_new (const GGS_abstractFileGeneration & in_mFileGeneration,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_fileGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFileGeneration = in_mFileGeneration ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_fileGenerationList_2E_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @fileGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @fileGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_fileGenerationList_2E_element ("fileGenerationList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_fileGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element GGS_fileGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList_2E_element result ;
  const GGS_fileGenerationList_2E_element * p = (const GGS_fileGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (const GGS_outletBindingModelList_2E_element & inSource) :
mProperty_mKind (inSource.mProperty_mKind),
mProperty_mErrorLocation (inSource.mProperty_mErrorLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element & GGS_outletBindingModelList_2E_element::operator = (const GGS_outletBindingModelList_2E_element & inSource) {
  mProperty_mKind = inSource.mProperty_mKind ;
  mProperty_mErrorLocation = inSource.mProperty_mErrorLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingModelList_2E_element GGS_outletBindingModelList_2E_element::init_21__21_ (const GGS_propertyKind & in_mKind,
                                                                                           const GGS_location & in_mErrorLocation,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element::GGS_outletBindingModelList_2E_element (const GGS_propertyKind & inOperand0,
                                                                              const GGS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element GGS_outletBindingModelList_2E_element::class_func_new (const GGS_propertyKind & in_mKind,
                                                                                             const GGS_location & in_mErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingModelList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mKind = in_mKind ;
  result.mProperty_mErrorLocation = in_mErrorLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingModelList_2E_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingModelList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingModelList.element:") ;
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
//     @outletBindingModelList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ("outletBindingModelList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingModelList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingModelList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingModelList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingModelList_2E_element GGS_outletBindingModelList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_outletBindingModelList_2E_element result ;
  const GGS_outletBindingModelList_2E_element * p = (const GGS_outletBindingModelList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingModelList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingModelList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (const GGS_tableViewBindingGenerationList_2E_element & inSource) :
mProperty_mTableValueBindingOutletName (inSource.mProperty_mTableValueBindingOutletName),
mProperty_mTableValueBindingControllerName (inSource.mProperty_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element & GGS_tableViewBindingGenerationList_2E_element::operator = (const GGS_tableViewBindingGenerationList_2E_element & inSource) {
  mProperty_mTableValueBindingOutletName = inSource.mProperty_mTableValueBindingOutletName ;
  mProperty_mTableValueBindingControllerName = inSource.mProperty_mTableValueBindingControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element GGS_tableViewBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mTableValueBindingOutletName,
                                                                                                           const GGS_string & in_mTableValueBindingControllerName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTableValueBindingOutletName = in_mTableValueBindingOutletName ;
  result.mProperty_mTableValueBindingControllerName = in_mTableValueBindingControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element::GGS_tableViewBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                              const GGS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element GGS_tableViewBindingGenerationList_2E_element::class_func_new (const GGS_string & in_mTableValueBindingOutletName,
                                                                                                             const GGS_string & in_mTableValueBindingControllerName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mTableValueBindingOutletName = in_mTableValueBindingOutletName ;
  result.mProperty_mTableValueBindingControllerName = in_mTableValueBindingControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_tableViewBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @tableViewBindingGenerationList.element:") ;
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
//     @tableViewBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ("tableViewBindingGenerationList.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableViewBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableViewBindingGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableViewBindingGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element GGS_tableViewBindingGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList_2E_element result ;
  const GGS_tableViewBindingGenerationList_2E_element * p = (const GGS_tableViewBindingGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableViewBindingGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) :
mProperty_mEBViewOutletName (inSource.mProperty_mEBViewOutletName),
mProperty_mArrayControllerControllerName (inSource.mProperty_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element & GGS_ebViewGraphicControllerBindingGenerationList_2E_element::operator = (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inSource) {
  mProperty_mEBViewOutletName = inSource.mProperty_mEBViewOutletName ;
  mProperty_mArrayControllerControllerName = inSource.mProperty_mArrayControllerControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element GGS_ebViewGraphicControllerBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mEBViewOutletName,
                                                                                                                                       const GGS_string & in_mArrayControllerControllerName,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEBViewOutletName = in_mEBViewOutletName ;
  result.mProperty_mArrayControllerControllerName = in_mArrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element::GGS_ebViewGraphicControllerBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                          const GGS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element GGS_ebViewGraphicControllerBindingGenerationList_2E_element::class_func_new (const GGS_string & in_mEBViewOutletName,
                                                                                                                                         const GGS_string & in_mArrayControllerControllerName,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mEBViewOutletName = in_mEBViewOutletName ;
  result.mProperty_mArrayControllerControllerName = in_mArrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_ebViewGraphicControllerBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList_2E_element::description (String & ioString,
                                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @ebViewGraphicControllerBindingGenerationList.element:") ;
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
//     @ebViewGraphicControllerBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ("ebViewGraphicControllerBindingGenerationList.element",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ebViewGraphicControllerBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ebViewGraphicControllerBindingGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ebViewGraphicControllerBindingGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element GGS_ebViewGraphicControllerBindingGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList_2E_element result ;
  const GGS_ebViewGraphicControllerBindingGenerationList_2E_element * p = (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ebViewGraphicControllerBindingGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (const GGS_boundObjectList_2E_element & inSource) :
mProperty_mBoundObjectString (inSource.mProperty_mBoundObjectString),
mProperty_mKind (inSource.mProperty_mKind) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element & GGS_boundObjectList_2E_element::operator = (const GGS_boundObjectList_2E_element & inSource) {
  mProperty_mBoundObjectString = inSource.mProperty_mBoundObjectString ;
  mProperty_mKind = inSource.mProperty_mKind ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_boundObjectList_2E_element GGS_boundObjectList_2E_element::init_21__21_ (const GGS_string & in_mBoundObjectString,
                                                                             const GGS_propertyKind & in_mKind,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_boundObjectList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBoundObjectString = in_mBoundObjectString ;
  result.mProperty_mKind = in_mKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element::GGS_boundObjectList_2E_element (const GGS_string & inOperand0,
                                                                const GGS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element GGS_boundObjectList_2E_element::class_func_new (const GGS_string & in_mBoundObjectString,
                                                                               const GGS_propertyKind & in_mKind,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_boundObjectList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBoundObjectString = in_mBoundObjectString ;
  result.mProperty_mKind = in_mKind ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_boundObjectList_2E_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_boundObjectList_2E_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @boundObjectList.element:") ;
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
//     @boundObjectList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boundObjectList_2E_element ("boundObjectList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boundObjectList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boundObjectList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boundObjectList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList_2E_element GGS_boundObjectList_2E_element::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_boundObjectList_2E_element result ;
  const GGS_boundObjectList_2E_element * p = (const GGS_boundObjectList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boundObjectList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boundObjectList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (const GGS_regularBindingsGenerationList_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectList (inSource.mProperty_mBoundObjectList),
mProperty_mBindingOptionsString (inSource.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element & GGS_regularBindingsGenerationList_2E_element::operator = (const GGS_regularBindingsGenerationList_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectList = inSource.mProperty_mBoundObjectList ;
  mProperty_mBindingOptionsString = inSource.mProperty_mBindingOptionsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element GGS_regularBindingsGenerationList_2E_element::init_21__21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                                 const GGS_string & in_mBindingName,
                                                                                                                 const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                 const GGS_string & in_mBindingOptionsString,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element::GGS_regularBindingsGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_boundObjectList & inOperand2,
                                                                                            const GGS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element GGS_regularBindingsGenerationList_2E_element::class_func_new (const GGS_string & in_mOutletName,
                                                                                                           const GGS_string & in_mBindingName,
                                                                                                           const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                           const GGS_string & in_mBindingOptionsString,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_regularBindingsGenerationList_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList_2E_element::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @regularBindingsGenerationList.element:") ;
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
//     @regularBindingsGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ("regularBindingsGenerationList.element",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularBindingsGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularBindingsGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element GGS_regularBindingsGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList_2E_element result ;
  const GGS_regularBindingsGenerationList_2E_element * p = (const GGS_regularBindingsGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularBindingsGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (const GGS_actionBindingListForGeneration_2E_element & inSource) :
mProperty_mOutletName (inSource.mProperty_mOutletName),
mProperty_mTargetName (inSource.mProperty_mTargetName),
mProperty_mActionName (inSource.mProperty_mActionName),
mProperty_mTargetTypeName (inSource.mProperty_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element & GGS_actionBindingListForGeneration_2E_element::operator = (const GGS_actionBindingListForGeneration_2E_element & inSource) {
  mProperty_mOutletName = inSource.mProperty_mOutletName ;
  mProperty_mTargetName = inSource.mProperty_mTargetName ;
  mProperty_mActionName = inSource.mProperty_mActionName ;
  mProperty_mTargetTypeName = inSource.mProperty_mTargetTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element GGS_actionBindingListForGeneration_2E_element::init_21__21__21__21_ (const GGS_string & in_mOutletName,
                                                                                                                   const GGS_string & in_mTargetName,
                                                                                                                   const GGS_string & in_mActionName,
                                                                                                                   const GGS_string & in_mTargetTypeName,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mActionName = in_mActionName ;
  result.mProperty_mTargetTypeName = in_mTargetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element::GGS_actionBindingListForGeneration_2E_element (const GGS_string & inOperand0,
                                                                                              const GGS_string & inOperand1,
                                                                                              const GGS_string & inOperand2,
                                                                                              const GGS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element GGS_actionBindingListForGeneration_2E_element::class_func_new (const GGS_string & in_mOutletName,
                                                                                                             const GGS_string & in_mTargetName,
                                                                                                             const GGS_string & in_mActionName,
                                                                                                             const GGS_string & in_mTargetTypeName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOutletName = in_mOutletName ;
  result.mProperty_mTargetName = in_mTargetName ;
  result.mProperty_mActionName = in_mActionName ;
  result.mProperty_mTargetTypeName = in_mTargetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionBindingListForGeneration_2E_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration_2E_element::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<struct @actionBindingListForGeneration.element:") ;
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
//     @actionBindingListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ("actionBindingListForGeneration.element",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionBindingListForGeneration_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionBindingListForGeneration_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionBindingListForGeneration_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element GGS_actionBindingListForGeneration_2E_element::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration_2E_element result ;
  const GGS_actionBindingListForGeneration_2E_element * p = (const GGS_actionBindingListForGeneration_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionBindingListForGeneration_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element::GGS_typeKindList_2E_element (void) :
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element::GGS_typeKindList_2E_element (const GGS_typeKindList_2E_element & inSource) :
mProperty_mType (inSource.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element & GGS_typeKindList_2E_element::operator = (const GGS_typeKindList_2E_element & inSource) {
  mProperty_mType = inSource.mProperty_mType ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_typeKindList_2E_element GGS_typeKindList_2E_element::init_21_ (const GGS_typeKind & in_mType,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element::GGS_typeKindList_2E_element (const GGS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element GGS_typeKindList_2E_element::class_func_new (const GGS_typeKind & in_mType,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mType = in_mType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_typeKindList_2E_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList_2E_element::drop (void) {
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList_2E_element::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @typeKindList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @typeKindList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList_2E_element ("typeKindList.element",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKindList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKindList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element GGS_typeKindList_2E_element::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_typeKindList_2E_element result ;
  const GGS_typeKindList_2E_element * p = (const GGS_typeKindList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKindList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty::GGS_observablePropertyAST_2E_selfWithoutProperty (void) :
mProperty_issueLocation () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty::GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) :
mProperty_issueLocation (inSource.mProperty_issueLocation) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty & GGS_observablePropertyAST_2E_selfWithoutProperty::operator = (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) {
  mProperty_issueLocation = inSource.mProperty_issueLocation ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty GGS_observablePropertyAST_2E_selfWithoutProperty::init_21_ (const GGS_location & in_issueLocation,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfWithoutProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_issueLocation = in_issueLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfWithoutProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty::GGS_observablePropertyAST_2E_selfWithoutProperty (const GGS_location & inOperand0) :
mProperty_issueLocation (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty GGS_observablePropertyAST_2E_selfWithoutProperty::class_func_new (const GGS_location & in_issueLocation,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfWithoutProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_issueLocation = in_issueLocation ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfWithoutProperty::isValid (void) const {
  return mProperty_issueLocation.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfWithoutProperty::drop (void) {
  mProperty_issueLocation.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfWithoutProperty::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.selfWithoutProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_issueLocation.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.selfWithoutProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ("observablePropertyAST.selfWithoutProperty",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfWithoutProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfWithoutProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfWithoutProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty GGS_observablePropertyAST_2E_selfWithoutProperty::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfWithoutProperty result ;
  const GGS_observablePropertyAST_2E_selfWithoutProperty * p = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfWithoutProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfWithoutProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @observablePropertyAST_2E_selfWithoutProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (const GGS_observablePropertyAST_2E_selfWithoutProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::isValid (void) const {
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

bool GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_selfWithoutProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::description (String & ioString,
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
//     @observablePropertyAST.selfWithoutProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ("observablePropertyAST.selfWithoutProperty?",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ * p = (const GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.selfWithoutProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty::GGS_observablePropertyAST_2E_signatureProperty (void) :
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty::GGS_observablePropertyAST_2E_signatureProperty (const GGS_observablePropertyAST_2E_signatureProperty & inSource) :
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty & GGS_observablePropertyAST_2E_signatureProperty::operator = (const GGS_observablePropertyAST_2E_signatureProperty & inSource) {
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty GGS_observablePropertyAST_2E_signatureProperty::init_21_ (const GGS_location & in_location,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_signatureProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_signatureProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty::GGS_observablePropertyAST_2E_signatureProperty (const GGS_location & inOperand0) :
mProperty_location (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty GGS_observablePropertyAST_2E_signatureProperty::class_func_new (const GGS_location & in_location,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_signatureProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_signatureProperty::isValid (void) const {
  return mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_signatureProperty::drop (void) {
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_signatureProperty::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.signatureProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.signatureProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ("observablePropertyAST.signatureProperty",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_signatureProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_signatureProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_signatureProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty GGS_observablePropertyAST_2E_signatureProperty::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_signatureProperty result ;
  const GGS_observablePropertyAST_2E_signatureProperty * p = (const GGS_observablePropertyAST_2E_signatureProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_signatureProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.signatureProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @observablePropertyAST_2E_signatureProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_::GGS_observablePropertyAST_2E_signatureProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_::GGS_observablePropertyAST_2E_signatureProperty_3F_ (const GGS_observablePropertyAST_2E_signatureProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_ GGS_observablePropertyAST_2E_signatureProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_signatureProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_signatureProperty_3F_::isValid (void) const {
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

bool GGS_observablePropertyAST_2E_signatureProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_signatureProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_signatureProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_signatureProperty_3F_::description (String & ioString,
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
//     @observablePropertyAST.signatureProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ("observablePropertyAST.signatureProperty?",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_signatureProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_signatureProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_signatureProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_ GGS_observablePropertyAST_2E_signatureProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_signatureProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_signatureProperty_3F_ * p = (const GGS_observablePropertyAST_2E_signatureProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_signatureProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.signatureProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty::GGS_observablePropertyAST_2E_versionProperty (void) :
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty::GGS_observablePropertyAST_2E_versionProperty (const GGS_observablePropertyAST_2E_versionProperty & inSource) :
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty & GGS_observablePropertyAST_2E_versionProperty::operator = (const GGS_observablePropertyAST_2E_versionProperty & inSource) {
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty GGS_observablePropertyAST_2E_versionProperty::init_21_ (const GGS_location & in_location,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty::GGS_observablePropertyAST_2E_versionProperty (const GGS_location & inOperand0) :
mProperty_location (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty GGS_observablePropertyAST_2E_versionProperty::class_func_new (const GGS_location & in_location,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_versionProperty::isValid (void) const {
  return mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionProperty::drop (void) {
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionProperty::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.versionProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.versionProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ("observablePropertyAST.versionProperty",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_versionProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_versionProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_versionProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty GGS_observablePropertyAST_2E_versionProperty::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionProperty result ;
  const GGS_observablePropertyAST_2E_versionProperty * p = (const GGS_observablePropertyAST_2E_versionProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_versionProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.versionProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @observablePropertyAST_2E_versionProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_::GGS_observablePropertyAST_2E_versionProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_::GGS_observablePropertyAST_2E_versionProperty_3F_ (const GGS_observablePropertyAST_2E_versionProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_ GGS_observablePropertyAST_2E_versionProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_versionProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_versionProperty_3F_::isValid (void) const {
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

bool GGS_observablePropertyAST_2E_versionProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_versionProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionProperty_3F_::description (String & ioString,
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
//     @observablePropertyAST.versionProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ("observablePropertyAST.versionProperty?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_versionProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_versionProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_versionProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_ GGS_observablePropertyAST_2E_versionProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_versionProperty_3F_ * p = (const GGS_observablePropertyAST_2E_versionProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_versionProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.versionProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty::GGS_observablePropertyAST_2E_versionShouldChangeProperty (void) :
mProperty_location () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty::GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) :
mProperty_location (inSource.mProperty_location) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty & GGS_observablePropertyAST_2E_versionShouldChangeProperty::operator = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) {
  mProperty_location = inSource.mProperty_location ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty GGS_observablePropertyAST_2E_versionShouldChangeProperty::init_21_ (const GGS_location & in_location,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionShouldChangeProperty::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty::GGS_observablePropertyAST_2E_versionShouldChangeProperty (const GGS_location & inOperand0) :
mProperty_location (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty GGS_observablePropertyAST_2E_versionShouldChangeProperty::class_func_new (const GGS_location & in_location,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_location = in_location ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_versionShouldChangeProperty::isValid (void) const {
  return mProperty_location.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionShouldChangeProperty::drop (void) {
  mProperty_location.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionShouldChangeProperty::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyAST.versionShouldChangeProperty:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_location.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST.versionShouldChangeProperty generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ("observablePropertyAST.versionShouldChangeProperty",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_versionShouldChangeProperty::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_versionShouldChangeProperty::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_versionShouldChangeProperty (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty GGS_observablePropertyAST_2E_versionShouldChangeProperty::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty result ;
  const GGS_observablePropertyAST_2E_versionShouldChangeProperty * p = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_versionShouldChangeProperty *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.versionShouldChangeProperty", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @observablePropertyAST_2E_versionShouldChangeProperty_3F_
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (const GGS_observablePropertyAST_2E_versionShouldChangeProperty & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::init_nil (void) {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::isValid (void) const {
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

bool GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_observablePropertyAST_2E_versionShouldChangeProperty () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::description (String & ioString,
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
//     @observablePropertyAST.versionShouldChangeProperty? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ("observablePropertyAST.versionShouldChangeProperty?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ result ;
  const GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ * p = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST.versionShouldChangeProperty?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element::GGS_observablePropertyList_2E_element (void) :
mProperty_mObservableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element::GGS_observablePropertyList_2E_element (const GGS_observablePropertyList_2E_element & inSource) :
mProperty_mObservableProperty (inSource.mProperty_mObservableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element & GGS_observablePropertyList_2E_element::operator = (const GGS_observablePropertyList_2E_element & inSource) {
  mProperty_mObservableProperty = inSource.mProperty_mObservableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_observablePropertyList_2E_element GGS_observablePropertyList_2E_element::init_21_ (const GGS_observablePropertyAST & in_mObservableProperty,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObservableProperty = in_mObservableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element::GGS_observablePropertyList_2E_element (const GGS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element GGS_observablePropertyList_2E_element::class_func_new (const GGS_observablePropertyAST & in_mObservableProperty,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mObservableProperty = in_mObservableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_observablePropertyList_2E_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList_2E_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @observablePropertyList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mObservableProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @observablePropertyList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList_2E_element ("observablePropertyList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element GGS_observablePropertyList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_observablePropertyList_2E_element result ;
  const GGS_observablePropertyList_2E_element * p = (const GGS_observablePropertyList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element & GGS_toOnePropertyGenerationList_2E_element::operator = (const GGS_toOnePropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::init_21_ (const GGS_toOnePropertyGeneration & in_mProperty,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element::GGS_toOnePropertyGenerationList_2E_element (const GGS_toOnePropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::class_func_new (const GGS_toOnePropertyGeneration & in_mProperty,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toOnePropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList_2E_element::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toOnePropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ("toOnePropertyGenerationList.element",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOnePropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element GGS_toOnePropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList_2E_element result ;
  const GGS_toOnePropertyGenerationList_2E_element * p = (const GGS_toOnePropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (void) :
mProperty_hidden () {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (const GGS_optionalHiddenBinding_2E_binding & inSource) :
mProperty_hidden (inSource.mProperty_hidden) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding & GGS_optionalHiddenBinding_2E_binding::operator = (const GGS_optionalHiddenBinding_2E_binding & inSource) {
  mProperty_hidden = inSource.mProperty_hidden ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding GGS_optionalHiddenBinding_2E_binding::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionAST & in_hidden,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_hidden = in_hidden ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding::GGS_optionalHiddenBinding_2E_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inOperand0) :
mProperty_hidden (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding GGS_optionalHiddenBinding_2E_binding::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionAST & in_hidden,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_hidden = in_hidden ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalHiddenBinding_2E_binding::isValid (void) const {
  return mProperty_hidden.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::drop (void) {
  mProperty_hidden.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @optionalHiddenBinding.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_hidden.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @optionalHiddenBinding.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ("optionalHiddenBinding.binding",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalHiddenBinding_2E_binding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalHiddenBinding_2E_binding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding GGS_optionalHiddenBinding_2E_binding::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_optionalHiddenBinding_2E_binding result ;
  const GGS_optionalHiddenBinding_2E_binding * p = (const GGS_optionalHiddenBinding_2E_binding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalHiddenBinding_2E_binding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalHiddenBinding.binding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @optionalHiddenBinding_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_::GGS_optionalHiddenBinding_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_::GGS_optionalHiddenBinding_2E_binding_3F_ (const GGS_optionalHiddenBinding_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_ GGS_optionalHiddenBinding_2E_binding_3F_::init_nil (void) {
  GGS_optionalHiddenBinding_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_optionalHiddenBinding_2E_binding_3F_::isValid (void) const {
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

bool GGS_optionalHiddenBinding_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_optionalHiddenBinding_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding_2E_binding_3F_::description (String & ioString,
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
//     @optionalHiddenBinding.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ("optionalHiddenBinding.binding?",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalHiddenBinding_2E_binding_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalHiddenBinding_2E_binding_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_ GGS_optionalHiddenBinding_2E_binding_3F_::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_optionalHiddenBinding_2E_binding_3F_ result ;
  const GGS_optionalHiddenBinding_2E_binding_3F_ * p = (const GGS_optionalHiddenBinding_2E_binding_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalHiddenBinding_2E_binding_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalHiddenBinding.binding?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (void) :
mProperty_value () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) :
mProperty_value (inSource.mProperty_value) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string & GGS_astAutoLayoutViewInstructionParameterValue_2E_string::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) {
  mProperty_value = inSource.mProperty_value ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string GGS_astAutoLayoutViewInstructionParameterValue_2E_string::init_21_ (const GGS_string & in_value,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string::GGS_astAutoLayoutViewInstructionParameterValue_2E_string (const GGS_string & inOperand0) :
mProperty_value (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string GGS_astAutoLayoutViewInstructionParameterValue_2E_string::class_func_new (const GGS_string & in_value,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_value = in_value ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string::isValid (void) const {
  return mProperty_value.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::drop (void) {
  mProperty_value.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.string:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_value.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.string generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ("astAutoLayoutViewInstructionParameterValue.string",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_string::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_string (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string GGS_astAutoLayoutViewInstructionParameterValue_2E_string::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_string * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.string", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_string_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_string () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.string? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ("astAutoLayoutViewInstructionParameterValue.string?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.string?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (void) :
mProperty_title (),
mProperty_run (),
mProperty_enabled () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) :
mProperty_title (inSource.mProperty_title),
mProperty_run (inSource.mProperty_run),
mProperty_enabled (inSource.mProperty_enabled) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) {
  mProperty_title = inSource.mProperty_title ;
  mProperty_run = inSource.mProperty_run ;
  mProperty_enabled = inSource.mProperty_enabled ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::init_21__21__21_ (const GGS_string & in_title,
                                                                                                                                         const GGS_runActionDescriptor & in_run,
                                                                                                                                         const GGS_multipleBindingDescriptor & in_enabled,
                                                                                                                                         Compiler * inCompiler
                                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_title = in_title ;
  result.mProperty_run = in_run ;
  result.mProperty_enabled = in_enabled ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (const GGS_string & inOperand0,
                                                                                                                        const GGS_runActionDescriptor & inOperand1,
                                                                                                                        const GGS_multipleBindingDescriptor & inOperand2) :
mProperty_title (inOperand0),
mProperty_run (inOperand1),
mProperty_enabled (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::class_func_new (const GGS_string & in_title,
                                                                                                                                       const GGS_runActionDescriptor & in_run,
                                                                                                                                       const GGS_multipleBindingDescriptor & in_enabled,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_title = in_title ;
  result.mProperty_run = in_run ;
  result.mProperty_enabled = in_enabled ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::isValid (void) const {
  return mProperty_title.isValid () && mProperty_run.isValid () && mProperty_enabled.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::drop (void) {
  mProperty_title.drop () ;
  mProperty_run.drop () ;
  mProperty_enabled.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.menuItem:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_title.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_run.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_enabled.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.menuItem generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ("astAutoLayoutViewInstructionParameterValue.menuItem",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.menuItem", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.menuItem? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ("astAutoLayoutViewInstructionParameterValue.menuItem?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.menuItem?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (void) :
mProperty_instruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) :
mProperty_instruction (inSource.mProperty_instruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::operator = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) {
  mProperty_instruction = inSource.mProperty_instruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::init_21_ (const GGS_astAbstractViewInstructionDeclaration & in_instruction,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instruction = in_instruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (const GGS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_instruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::class_func_new (const GGS_astAbstractViewInstructionDeclaration & in_instruction,
                                                                                                                                       Compiler * inCompiler
                                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_instruction = in_instruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::isValid (void) const {
  return mProperty_instruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::drop (void) {
  mProperty_instruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::description (String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astAutoLayoutViewInstructionParameterValue.viewFunc:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_instruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue.viewFunc generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ("astAutoLayoutViewInstructionParameterValue.viewFunc",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::extractObject (const GGS_object & inObject,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.viewFunc", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::init_nil (void) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::isValid (void) const {
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

bool GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::description (String & ioString,
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
//     @astAutoLayoutViewInstructionParameterValue.viewFunc? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ("astAutoLayoutViewInstructionParameterValue.viewFunc?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ result ;
  const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ * p = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue.viewFunc?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (const GGS_astViewInstructionList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element & GGS_astViewInstructionList_2E_element::operator = (const GGS_astViewInstructionList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astViewInstructionList_2E_element GGS_astViewInstructionList_2E_element::init_21_ (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element::GGS_astViewInstructionList_2E_element (const GGS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element GGS_astViewInstructionList_2E_element::class_func_new (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewInstructionList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astViewInstructionList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList_2E_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astViewInstructionList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astViewInstructionList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ("astViewInstructionList.element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astViewInstructionList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astViewInstructionList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astViewInstructionList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element GGS_astViewInstructionList_2E_element::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astViewInstructionList_2E_element result ;
  const GGS_astViewInstructionList_2E_element * p = (const GGS_astViewInstructionList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astViewInstructionList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element & GGS_implicitViewFunctionGenerationList_2E_element::operator = (const GGS_implicitViewFunctionGenerationList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element GGS_implicitViewFunctionGenerationList_2E_element::init_21_ (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element::GGS_implicitViewFunctionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element GGS_implicitViewFunctionGenerationList_2E_element::class_func_new (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_implicitViewFunctionGenerationList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList_2E_element::description (String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @implicitViewFunctionGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @implicitViewFunctionGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ("implicitViewFunctionGenerationList.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitViewFunctionGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitViewFunctionGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitViewFunctionGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element GGS_implicitViewFunctionGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList_2E_element result ;
  const GGS_implicitViewFunctionGenerationList_2E_element * p = (const GGS_implicitViewFunctionGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitViewFunctionGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (const GGS_viewGenerationList_2E_element & inSource) :
mProperty_mViewName (inSource.mProperty_mViewName),
mProperty_mView (inSource.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element & GGS_viewGenerationList_2E_element::operator = (const GGS_viewGenerationList_2E_element & inSource) {
  mProperty_mViewName = inSource.mProperty_mViewName ;
  mProperty_mView = inSource.mProperty_mView ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_viewGenerationList_2E_element GGS_viewGenerationList_2E_element::init_21__21_ (const GGS_string & in_mViewName,
                                                                                   const GGS_abstractViewGeneration & in_mView,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_viewGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element::GGS_viewGenerationList_2E_element (const GGS_string & inOperand0,
                                                                      const GGS_abstractViewGeneration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element GGS_viewGenerationList_2E_element::class_func_new (const GGS_string & in_mViewName,
                                                                                     const GGS_abstractViewGeneration & in_mView,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_viewGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mViewName = in_mViewName ;
  result.mProperty_mView = in_mView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_viewGenerationList_2E_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList_2E_element::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.appendCString ("<struct @viewGenerationList.element:") ;
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
//     @viewGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_viewGenerationList_2E_element ("viewGenerationList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_viewGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_viewGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_viewGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element GGS_viewGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_viewGenerationList_2E_element result ;
  const GGS_viewGenerationList_2E_element * p = (const GGS_viewGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_viewGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectList (inSource.mProperty_mBoundObjectList),
mProperty_mBindingOptionsString (inSource.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element & GGS_autoLayoutRegularBindingsGenerationList_2E_element::operator = (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectList = inSource.mProperty_mBoundObjectList ;
  mProperty_mBindingOptionsString = inSource.mProperty_mBindingOptionsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element GGS_autoLayoutRegularBindingsGenerationList_2E_element::init_21__21__21_ (const GGS_string & in_mBindingName,
                                                                                                                                 const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                                 const GGS_string & in_mBindingOptionsString,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element::GGS_autoLayoutRegularBindingsGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_boundObjectList & inOperand1,
                                                                                                                const GGS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element GGS_autoLayoutRegularBindingsGenerationList_2E_element::class_func_new (const GGS_string & in_mBindingName,
                                                                                                                               const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                               const GGS_string & in_mBindingOptionsString,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectList = in_mBoundObjectList ;
  result.mProperty_mBindingOptionsString = in_mBindingOptionsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutRegularBindingsGenerationList_2E_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutRegularBindingsGenerationList.element:") ;
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
//     @autoLayoutRegularBindingsGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ("autoLayoutRegularBindingsGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutRegularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutRegularBindingsGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutRegularBindingsGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element GGS_autoLayoutRegularBindingsGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList_2E_element result ;
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element * p = (const GGS_autoLayoutRegularBindingsGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutRegularBindingsGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) :
mProperty_mBindingName (inSource.mProperty_mBindingName),
mProperty_mBoundObjectExpression (inSource.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element & GGS_autoLayoutMultipleBindingGenerationList_2E_element::operator = (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inSource) {
  mProperty_mBindingName = inSource.mProperty_mBindingName ;
  mProperty_mBoundObjectExpression = inSource.mProperty_mBoundObjectExpression ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element GGS_autoLayoutMultipleBindingGenerationList_2E_element::init_21__21_ (const GGS_string & in_mBindingName,
                                                                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                                             Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element::GGS_autoLayoutMultipleBindingGenerationList_2E_element (const GGS_string & inOperand0,
                                                                                                                const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectExpression (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element GGS_autoLayoutMultipleBindingGenerationList_2E_element::class_func_new (const GGS_string & in_mBindingName,
                                                                                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mBindingName = in_mBindingName ;
  result.mProperty_mBoundObjectExpression = in_mBoundObjectExpression ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutMultipleBindingGenerationList_2E_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutMultipleBindingGenerationList.element:") ;
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
//     @autoLayoutMultipleBindingGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ("autoLayoutMultipleBindingGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutMultipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutMultipleBindingGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutMultipleBindingGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element GGS_autoLayoutMultipleBindingGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList_2E_element result ;
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element * p = (const GGS_autoLayoutMultipleBindingGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutMultipleBindingGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (void) :
mProperty_targetName (),
mProperty_actionName (),
mProperty_targetTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) :
mProperty_targetName (inSource.mProperty_targetName),
mProperty_actionName (inSource.mProperty_actionName),
mProperty_targetTypeName (inSource.mProperty_targetTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run & GGS_autolayoutRunBindingForGeneration_2E_run::operator = (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) {
  mProperty_targetName = inSource.mProperty_targetName ;
  mProperty_actionName = inSource.mProperty_actionName ;
  mProperty_targetTypeName = inSource.mProperty_targetTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run GGS_autolayoutRunBindingForGeneration_2E_run::init_21__21__21_ (const GGS_string & in_targetName,
                                                                                                             const GGS_string & in_actionName,
                                                                                                             const GGS_string & in_targetTypeName,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration_2E_run result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetName = in_targetName ;
  result.mProperty_actionName = in_actionName ;
  result.mProperty_targetTypeName = in_targetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run::GGS_autolayoutRunBindingForGeneration_2E_run (const GGS_string & inOperand0,
                                                                                            const GGS_string & inOperand1,
                                                                                            const GGS_string & inOperand2) :
mProperty_targetName (inOperand0),
mProperty_actionName (inOperand1),
mProperty_targetTypeName (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run GGS_autolayoutRunBindingForGeneration_2E_run::class_func_new (const GGS_string & in_targetName,
                                                                                                           const GGS_string & in_actionName,
                                                                                                           const GGS_string & in_targetTypeName,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration_2E_run result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_targetName = in_targetName ;
  result.mProperty_actionName = in_actionName ;
  result.mProperty_targetTypeName = in_targetTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutRunBindingForGeneration_2E_run::isValid (void) const {
  return mProperty_targetName.isValid () && mProperty_actionName.isValid () && mProperty_targetTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::drop (void) {
  mProperty_targetName.drop () ;
  mProperty_actionName.drop () ;
  mProperty_targetTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run::description (String & ioString,
                                                                const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutRunBindingForGeneration.run:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_targetName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_actionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_targetTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autolayoutRunBindingForGeneration.run generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ("autolayoutRunBindingForGeneration.run",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration_2E_run::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutRunBindingForGeneration_2E_run::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutRunBindingForGeneration_2E_run (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run GGS_autolayoutRunBindingForGeneration_2E_run::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration_2E_run result ;
  const GGS_autolayoutRunBindingForGeneration_2E_run * p = (const GGS_autolayoutRunBindingForGeneration_2E_run *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutRunBindingForGeneration_2E_run *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutRunBindingForGeneration.run", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autolayoutRunBindingForGeneration_2E_run_3F_
//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_::GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_::GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (const GGS_autolayoutRunBindingForGeneration_2E_run & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_ GGS_autolayoutRunBindingForGeneration_2E_run_3F_::init_nil (void) {
  GGS_autolayoutRunBindingForGeneration_2E_run_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutRunBindingForGeneration_2E_run_3F_::isValid (void) const {
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

bool GGS_autolayoutRunBindingForGeneration_2E_run_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autolayoutRunBindingForGeneration_2E_run () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration_2E_run_3F_::description (String & ioString,
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
//     @autolayoutRunBindingForGeneration.run? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ("autolayoutRunBindingForGeneration.run?",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration_2E_run_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutRunBindingForGeneration_2E_run_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutRunBindingForGeneration_2E_run_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_ GGS_autolayoutRunBindingForGeneration_2E_run_3F_::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration_2E_run_3F_ result ;
  const GGS_autolayoutRunBindingForGeneration_2E_run_3F_ * p = (const GGS_autolayoutRunBindingForGeneration_2E_run_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutRunBindingForGeneration_2E_run_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutRunBindingForGeneration.run?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (void) :
mProperty_arrayControllerControllerName () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) :
mProperty_arrayControllerControllerName (inSource.mProperty_arrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::operator = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) {
  mProperty_arrayControllerControllerName = inSource.mProperty_arrayControllerControllerName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::init_21_ (const GGS_string & in_arrayControllerControllerName,
                                                                                                                                           Compiler * inCompiler
                                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arrayControllerControllerName = in_arrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (const GGS_string & inOperand0) :
mProperty_arrayControllerControllerName (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::class_func_new (const GGS_string & in_arrayControllerControllerName,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_arrayControllerControllerName = in_arrayControllerControllerName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::isValid (void) const {
  return mProperty_arrayControllerControllerName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::drop (void) {
  mProperty_arrayControllerControllerName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewGraphicControllerBindingGeneration.binding:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_arrayControllerControllerName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewGraphicControllerBindingGeneration.binding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ("autoLayoutViewGraphicControllerBindingGeneration.binding",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding result ;
  const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding * p = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewGraphicControllerBindingGeneration.binding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::init_nil (void) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::isValid (void) const {
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

bool GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::description (String & ioString,
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
//     @autoLayoutViewGraphicControllerBindingGeneration.binding? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ("autoLayoutViewGraphicControllerBindingGeneration.binding?",
                                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ result ;
  const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ * p = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewGraphicControllerBindingGeneration.binding?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (void) :
mProperty_binding () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) :
mProperty_binding (inSource.mProperty_binding) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled & GGS_autolayoutEnabledBindingForGeneration_2E_enabled::operator = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) {
  mProperty_binding = inSource.mProperty_binding ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled GGS_autolayoutEnabledBindingForGeneration_2E_enabled::init_21_ (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_binding,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_binding = in_binding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled::GGS_autolayoutEnabledBindingForGeneration_2E_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand0) :
mProperty_binding (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled GGS_autolayoutEnabledBindingForGeneration_2E_enabled::class_func_new (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_binding,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_binding = in_binding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled::isValid (void) const {
  return mProperty_binding.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::drop (void) {
  mProperty_binding.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autolayoutEnabledBindingForGeneration.enabled:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_binding.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autolayoutEnabledBindingForGeneration.enabled generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ("autolayoutEnabledBindingForGeneration.enabled",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutEnabledBindingForGeneration_2E_enabled::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutEnabledBindingForGeneration_2E_enabled (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled GGS_autolayoutEnabledBindingForGeneration_2E_enabled::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled result ;
  const GGS_autolayoutEnabledBindingForGeneration_2E_enabled * p = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration.enabled", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Optional @autolayoutEnabledBindingForGeneration_2E_enabled_3F_
//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (void) :
AC_GALGAS_root (),
mValue (),
mState (OptionalState::invalid) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled & inSource) :
AC_GALGAS_root (),
mValue (inSource),
mState (OptionalState::valuated) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::init_nil (void) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  result.mState = OptionalState::isNil ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::isValid (void) const {
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

bool GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::isValuated (void) const {
  return (mState == OptionalState::valuated) && mValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::drop (void) {
  mState = OptionalState::invalid ;
  mValue = GGS_autolayoutEnabledBindingForGeneration_2E_enabled () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::description (String & ioString,
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
//     @autolayoutEnabledBindingForGeneration.enabled? generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ("autolayoutEnabledBindingForGeneration.enabled?",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::extractObject (const GGS_object & inObject,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  const GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ * p = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration.enabled?", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (void) :
mProperty_mParameterName (),
mProperty_mParameterValue () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) :
mProperty_mParameterName (inSource.mProperty_mParameterName),
mProperty_mParameterValue (inSource.mProperty_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inSource) {
  mProperty_mParameterName = inSource.mProperty_mParameterName ;
  mProperty_mParameterValue = inSource.mProperty_mParameterValue ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::init_21__21_ (const GGS_string & in_mParameterName,
                                                                                                                                               const GGS_string & in_mParameterValue,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterValue = in_mParameterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (const GGS_string & inOperand0,
                                                                                                                                  const GGS_string & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterValue (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::class_func_new (const GGS_string & in_mParameterName,
                                                                                                                                                 const GGS_string & in_mParameterValue,
                                                                                                                                                 Compiler * inCompiler
                                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mParameterName = in_mParameterName ;
  result.mProperty_mParameterValue = in_mParameterValue ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterValue.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterValue.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::description (String & ioString,
                                                                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationParameterList.element:") ;
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
//     @autoLayoutViewInstructionGenerationParameterList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ("autoLayoutViewInstructionGenerationParameterList.element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationParameterList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                                Compiler * inCompiler
                                                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList_2E_element result ;
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element * p = (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) :
mProperty_mFunctionName (inSource.mProperty_mFunctionName),
mProperty_mParameters (inSource.mProperty_mParameters) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inSource) {
  mProperty_mFunctionName = inSource.mProperty_mFunctionName ;
  mProperty_mParameters = inSource.mProperty_mParameters ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::init_21__21_ (const GGS_string & in_mFunctionName,
                                                                                                                                             const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters,
                                                                                                                                             Compiler * inCompiler
                                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (const GGS_string & inOperand0,
                                                                                                                                const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::class_func_new (const GGS_string & in_mFunctionName,
                                                                                                                                               const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mFunctionName = in_mFunctionName ;
  result.mProperty_mParameters = in_mParameters ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::description (String & ioString,
                                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationFuncCallList.element:") ;
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
//     @autoLayoutViewInstructionGenerationFuncCallList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ("autoLayoutViewInstructionGenerationFuncCallList.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                                              Compiler * inCompiler
                                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element result ;
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element * p = (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

