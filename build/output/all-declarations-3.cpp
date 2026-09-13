#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-3.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletClassBindingSpecificationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_outletClassBindingSpecificationList : public CollectionElementPtr {
  public: GGS_outletClassBindingSpecificationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                    const GGS_lstring & in_mBindingName,
                                                                    const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                    const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletClassBindingSpecificationList::CollectionElementPtr_outletClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                                                                    const GGS_lstring & in_mBindingName,
                                                                                                                    const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                    const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletClassBindingSpecificationList::CollectionElementPtr_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_outletClassBindingSpecificationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_outletClassBindingSpecificationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_outletClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList::GGS_outletClassBindingSpecificationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_outletClassBindingSpecificationList * p = (CollectionElementPtr_outletClassBindingSpecificationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_outletClassBindingSpecificationList) ;
    const GGS_outletClassBindingSpecificationList_2E_element element (p->mObject.mProperty_mOutletClassName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mOutletClassBindingSpecificationModelList, p->mObject.mProperty_mBindingOptionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                         const GGS_lstring & in_mOutletClassName,
                                                                         const GGS_lstring & in_mBindingName,
                                                                         const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                         const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_outletClassBindingSpecificationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_outletClassBindingSpecificationList (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassBindingSpecificationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletClassBindingSpecificationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::description (String & ioString,
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
      ioString.appendString ("mOutletClassName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletClassBindingSpecificationModelList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingOptionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingOptionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::plusPlusAssignOperation (const GGS_outletClassBindingSpecificationList_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                           const GGS_lstring & inOperand1,
                                                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_outletClassBindingSpecificationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                  const GGS_lstring & inOperand1,
                                                                  const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                  const GGS_controllerBindingOptionList & inOperand3
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_append (const GGS_lstring inOperand0,
                                                             const GGS_lstring inOperand1,
                                                             const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                             const GGS_controllerBindingOptionList inOperand3,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                    const GGS_lstring inOperand1,
                                                                    const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                    const GGS_controllerBindingOptionList inOperand3,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_outletClassBindingSpecificationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                    GGS_controllerBindingOptionList & outOperand3,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mBindingOptionList ;
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
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popFirst (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                               GGS_controllerBindingOptionList & outOperand3,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::setter_popLast (GGS_lstring & outOperand0,
                                                              GGS_lstring & outOperand1,
                                                              GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                              GGS_controllerBindingOptionList & outOperand3,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_first (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                            GGS_controllerBindingOptionList & outOperand3,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::method_last (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                           GGS_controllerBindingOptionList & outOperand3,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::add_operation (const GGS_outletClassBindingSpecificationList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
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

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
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

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationList::plusAssignOperation (const GGS_outletClassBindingSpecificationList inList,
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

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GGS_lstring inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName = inOperand ;
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
  
GGS_lstring GGS_outletClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName ;
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

void GGS_outletClassBindingSpecificationList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName = inOperand ;
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
  
GGS_lstring GGS_outletClassBindingSpecificationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName ;
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

void GGS_outletClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GGS_outletClassBindingSpecificationModelList inOperand,
                                                                                                          GGS_uint inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
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
  
GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GGS_uint & inIndex,
                                                                                                                                               Compiler * inCompiler
                                                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
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

void GGS_outletClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GGS_controllerBindingOptionList inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList = inOperand ;
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
  
GGS_controllerBindingOptionList GGS_outletClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList ;
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
// Down Enumerator for @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletClassBindingSpecificationList::DownEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element DownEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList DownEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList DownEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletClassBindingSpecificationList::UpEnumerator_outletClassBindingSpecificationList (const GGS_outletClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList_2E_element UpEnumerator_outletClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList UpEnumerator_outletClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList UpEnumerator_outletClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ("outletClassBindingSpecificationList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationList GGS_outletClassBindingSpecificationList::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationList result ;
  const GGS_outletClassBindingSpecificationList * p = (const GGS_outletClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewClassBindingSpecificationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutViewClassBindingSpecificationList : public CollectionElementPtr {
  public: GGS_autoLayoutViewClassBindingSpecificationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                            const GGS_lstring & in_mBindingName,
                                                                            const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                            const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewClassBindingSpecificationList::CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (const GGS_lstring & in_mOutletClassName,
                                                                                                                                    const GGS_lstring & in_mBindingName,
                                                                                                                                    const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                                                                    const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutViewClassBindingSpecificationList::CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletClassName, inElement.mProperty_mBindingName, inElement.mProperty_mOutletClassBindingSpecificationModelList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutViewClassBindingSpecificationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutViewClassBindingSpecificationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (mObject.mProperty_mOutletClassName, mObject.mProperty_mBindingName, mObject.mProperty_mOutletClassBindingSpecificationModelList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList::GGS_autoLayoutViewClassBindingSpecificationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList::GGS_autoLayoutViewClassBindingSpecificationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutViewClassBindingSpecificationList * p = (CollectionElementPtr_autoLayoutViewClassBindingSpecificationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutViewClassBindingSpecificationList) ;
    const GGS_autoLayoutViewClassBindingSpecificationList_2E_element element (p->mObject.mProperty_mOutletClassName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mOutletClassBindingSpecificationModelList, p->mObject.mProperty_mBindingOptionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                 const GGS_lstring & in_mOutletClassName,
                                                                                 const GGS_lstring & in_mBindingName,
                                                                                 const GGS_outletClassBindingSpecificationModelList & in_mOutletClassBindingSpecificationModelList,
                                                                                 const GGS_controllerBindingOptionList & in_mBindingOptionList
                                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutViewClassBindingSpecificationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutViewClassBindingSpecificationList (in_mOutletClassName, in_mBindingName, in_mOutletClassBindingSpecificationModelList, in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewClassBindingSpecificationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewClassBindingSpecificationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::description (String & ioString,
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
      ioString.appendString ("mOutletClassName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletClassBindingSpecificationModelList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingOptionList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingOptionList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::plusPlusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList_2E_element & inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                           const GGS_lstring & inOperand1,
                                                                                                                           const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                                                                           const GGS_controllerBindingOptionList & inOperand3
                                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewClassBindingSpecificationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                          const GGS_lstring & inOperand1,
                                                                          const GGS_outletClassBindingSpecificationModelList & inOperand2,
                                                                          const GGS_controllerBindingOptionList & inOperand3
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_append (const GGS_lstring inOperand0,
                                                                     const GGS_lstring inOperand1,
                                                                     const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                     const GGS_controllerBindingOptionList inOperand3,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                            const GGS_lstring inOperand1,
                                                                            const GGS_outletClassBindingSpecificationModelList inOperand2,
                                                                            const GGS_controllerBindingOptionList inOperand3,
                                                                            const GGS_uint inInsertionIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewClassBindingSpecificationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_autoLayoutViewClassBindingSpecificationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                            GGS_lstring & outOperand1,
                                                                            GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                            GGS_controllerBindingOptionList & outOperand3,
                                                                            const GGS_uint inRemoveIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mBindingOptionList ;
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
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_popFirst (GGS_lstring & outOperand0,
                                                                       GGS_lstring & outOperand1,
                                                                       GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                       GGS_controllerBindingOptionList & outOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::setter_popLast (GGS_lstring & outOperand0,
                                                                      GGS_lstring & outOperand1,
                                                                      GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                      GGS_controllerBindingOptionList & outOperand3,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::method_first (GGS_lstring & outOperand0,
                                                                    GGS_lstring & outOperand1,
                                                                    GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                    GGS_controllerBindingOptionList & outOperand3,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletClassName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::method_last (GGS_lstring & outOperand0,
                                                                   GGS_lstring & outOperand1,
                                                                   GGS_outletClassBindingSpecificationModelList & outOperand2,
                                                                   GGS_controllerBindingOptionList & outOperand3,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletClassName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mOutletClassBindingSpecificationModelList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::add_operation (const GGS_autoLayoutViewClassBindingSpecificationList & inOperand,
                                                                                                                Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
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

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::subList (const int32_t inStart,
                                                                                                          const int32_t inLength,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
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

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewClassBindingSpecificationList::plusAssignOperation (const GGS_autoLayoutViewClassBindingSpecificationList inList,
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

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassNameAtIndex (GGS_lstring inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName = inOperand ;
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
  
GGS_lstring GGS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassName ;
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

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName = inOperand ;
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
  
GGS_lstring GGS_autoLayoutViewClassBindingSpecificationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingName ;
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

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMOutletClassBindingSpecificationModelListAtIndex (GGS_outletClassBindingSpecificationModelList inOperand,
                                                                                                                  GGS_uint inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList = inOperand ;
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
  
GGS_outletClassBindingSpecificationModelList GGS_autoLayoutViewClassBindingSpecificationList::getter_mOutletClassBindingSpecificationModelListAtIndex (const GGS_uint & inIndex,
                                                                                                                                                       Compiler * inCompiler
                                                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletClassBindingSpecificationModelList ;
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

void GGS_autoLayoutViewClassBindingSpecificationList::setter_setMBindingOptionListAtIndex (GGS_controllerBindingOptionList inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList = inOperand ;
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
  
GGS_controllerBindingOptionList GGS_autoLayoutViewClassBindingSpecificationList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionList ;
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
// Down Enumerator for @autoLayoutViewClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewClassBindingSpecificationList::DownEnumerator_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element DownEnumerator_autoLayoutViewClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList DownEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList DownEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewClassBindingSpecificationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewClassBindingSpecificationList::UpEnumerator_autoLayoutViewClassBindingSpecificationList (const GGS_autoLayoutViewClassBindingSpecificationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList_2E_element UpEnumerator_autoLayoutViewClassBindingSpecificationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList UpEnumerator_autoLayoutViewClassBindingSpecificationList::current_mOutletClassBindingSpecificationModelList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList UpEnumerator_autoLayoutViewClassBindingSpecificationList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewClassBindingSpecificationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ("autoLayoutViewClassBindingSpecificationList",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassBindingSpecificationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassBindingSpecificationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewClassBindingSpecificationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassBindingSpecificationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecificationList GGS_autoLayoutViewClassBindingSpecificationList::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassBindingSpecificationList result ;
  const GGS_autoLayoutViewClassBindingSpecificationList * p = (const GGS_autoLayoutViewClassBindingSpecificationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassBindingSpecificationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassBindingSpecificationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST_2E_weak::objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak & GGS_atomicClassDeclarationAST_2E_weak::operator = (const GGS_atomicClassDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (const GGS_atomicClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_atomicClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_atomicClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST_2E_weak::bang_atomicClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_atomicClassDeclarationAST) ;
      result = GGS_atomicClassDeclarationAST ((cPtr_atomicClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @atomicClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ("atomicClassDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_atomicClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_atomicClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak GGS_atomicClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_atomicClassDeclarationAST_2E_weak result ;
  const GGS_atomicClassDeclarationAST_2E_weak * p = (const GGS_atomicClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_atomicClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@entityStrongReferenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::GGS_entityStrongReferenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_string inArgument_0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_topologicalSort (GGS_stringlist & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_stringlist & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GGS_stringlist & outSortedList,
                                                                       GGS_lstringlist & outSortedKeyList,
                                                                       GGS_stringlist & outUnsortedList,
                                                                       GGS_lstringlist & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_stringlist (sortedList) ;
  outUnsortedList = GGS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_circularities (GGS_stringlist & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GGS_stringlist & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GGS_stringlist & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                            const GGS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_entityStrongReferenceGraph resultingGraph ;
  subGraph (resultingGraph,
            inStartKeyList,
            inNodesToExclude,
            inCompiler
            COMMA_THERE) ;
  if (resultingGraph.isValid ()) {
    result = resultingGraph.getter_lkeyList (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @entityStrongReferenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityStrongReferenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityStrongReferenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  const GGS_entityStrongReferenceGraph * p = (const GGS_entityStrongReferenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityStrongReferenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityStrongReferenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletClassBindingSpecificationModelList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_outletClassBindingSpecificationModelList : public CollectionElementPtr {
  public: GGS_outletClassBindingSpecificationModelList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_outletClassBindingSpecificationModelList (const GGS_lstring & in_mModelTypeName,
                                                                         const GGS_bool & in_mModelShouldBeWritableProperty
                                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletClassBindingSpecificationModelList::CollectionElementPtr_outletClassBindingSpecificationModelList (const GGS_lstring & in_mModelTypeName,
                                                                                                                              const GGS_bool & in_mModelShouldBeWritableProperty
                                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mModelTypeName, in_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletClassBindingSpecificationModelList::CollectionElementPtr_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mModelTypeName, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_outletClassBindingSpecificationModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_outletClassBindingSpecificationModelList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_outletClassBindingSpecificationModelList (mObject.mProperty_mModelTypeName, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletClassBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList::GGS_outletClassBindingSpecificationModelList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList::GGS_outletClassBindingSpecificationModelList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_outletClassBindingSpecificationModelList * p = (CollectionElementPtr_outletClassBindingSpecificationModelList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_outletClassBindingSpecificationModelList) ;
    const GGS_outletClassBindingSpecificationModelList_2E_element element (p->mObject.mProperty_mModelTypeName, p->mObject.mProperty_mModelShouldBeWritableProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                              const GGS_lstring & in_mModelTypeName,
                                                                              const GGS_bool & in_mModelShouldBeWritableProperty
                                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_outletClassBindingSpecificationModelList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_outletClassBindingSpecificationModelList (in_mModelTypeName, in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassBindingSpecificationModelList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletClassBindingSpecificationModelList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::description (String & ioString,
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
      ioString.appendString ("mModelTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelShouldBeWritableProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModelList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::plusPlusAssignOperation (const GGS_outletClassBindingSpecificationModelList_2E_element & inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                     const GGS_bool & inOperand1
                                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationModelList_2E_element element (inOperand0, inOperand1) ;
  GGS_outletClassBindingSpecificationModelList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                       const GGS_bool & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::setter_append (const GGS_lstring inOperand0,
                                                                  const GGS_bool inOperand1,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                         const GGS_bool inOperand1,
                                                                         const GGS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_outletClassBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_outletClassBindingSpecificationModelList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                         GGS_bool & outOperand1,
                                                                         const GGS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mModelTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletClassBindingSpecificationModelList::setter_popFirst (GGS_lstring & outOperand0,
                                                                    GGS_bool & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletClassBindingSpecificationModelList::setter_popLast (GGS_lstring & outOperand0,
                                                                   GGS_bool & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletClassBindingSpecificationModelList::method_first (GGS_lstring & outOperand0,
                                                                 GGS_bool & outOperand1,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletClassBindingSpecificationModelList::method_last (GGS_lstring & outOperand0,
                                                                GGS_bool & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelShouldBeWritableProperty ;
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

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::add_operation (const GGS_outletClassBindingSpecificationModelList & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
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

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::subList (const int32_t inStart,
                                                                                                    const int32_t inLength,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
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

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModelList::plusAssignOperation (const GGS_outletClassBindingSpecificationModelList inList,
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

void GGS_outletClassBindingSpecificationModelList::setter_setMModelTypeNameAtIndex (GGS_lstring inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelTypeName = inOperand ;
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
  
GGS_lstring GGS_outletClassBindingSpecificationModelList::getter_mModelTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelTypeName ;
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

void GGS_outletClassBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GGS_bool inOperand,
                                                                                                    GGS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelShouldBeWritableProperty = inOperand ;
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
  
GGS_bool GGS_outletClassBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelShouldBeWritableProperty ;
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
// Down Enumerator for @outletClassBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletClassBindingSpecificationModelList::DownEnumerator_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element DownEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletClassBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletClassBindingSpecificationModelList::UpEnumerator_outletClassBindingSpecificationModelList (const GGS_outletClassBindingSpecificationModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList_2E_element UpEnumerator_outletClassBindingSpecificationModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassBindingSpecificationModelList::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationModelList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ("outletClassBindingSpecificationModelList",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModelList GGS_outletClassBindingSpecificationModelList::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModelList result ;
  const GGS_outletClassBindingSpecificationModelList * p = (const GGS_outletClassBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controllerBindingOptionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_controllerBindingOptionList : public CollectionElementPtr {
  public: GGS_controllerBindingOptionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controllerBindingOptionList (const GGS_lstring & in_mOptionName,
                                                            const GGS_lstring & in_mOptionTypeName
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controllerBindingOptionList (const GGS_controllerBindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controllerBindingOptionList::CollectionElementPtr_controllerBindingOptionList (const GGS_lstring & in_mOptionName,
                                                                                                    const GGS_lstring & in_mOptionTypeName
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOptionName, in_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controllerBindingOptionList::CollectionElementPtr_controllerBindingOptionList (const GGS_controllerBindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controllerBindingOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controllerBindingOptionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controllerBindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controllerBindingOptionList
//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList::GGS_controllerBindingOptionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList::GGS_controllerBindingOptionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controllerBindingOptionList * p = (CollectionElementPtr_controllerBindingOptionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controllerBindingOptionList) ;
    const GGS_controllerBindingOptionList_2E_element element (p->mObject.mProperty_mOptionName, p->mObject.mProperty_mOptionTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_lstring & in_mOptionName,
                                                                 const GGS_lstring & in_mOptionTypeName
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controllerBindingOptionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controllerBindingOptionList (in_mOptionName, in_mOptionTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controllerBindingOptionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controllerBindingOptionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::description (String & ioString,
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
      ioString.appendString ("mOptionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::plusPlusAssignOperation (const GGS_controllerBindingOptionList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                           const GGS_lstring & inOperand1
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionList_2E_element element (inOperand0, inOperand1) ;
  GGS_controllerBindingOptionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1
                                                          COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::setter_append (const GGS_lstring inOperand0,
                                                     const GGS_lstring inOperand1,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                            const GGS_lstring inOperand1,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_controllerBindingOptionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            const GGS_uint inRemoveIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOptionTypeName ;
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

void GGS_controllerBindingOptionList::setter_popFirst (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionTypeName ;
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

void GGS_controllerBindingOptionList::setter_popLast (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionTypeName ;
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

void GGS_controllerBindingOptionList::method_first (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionTypeName ;
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

void GGS_controllerBindingOptionList::method_last (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionTypeName ;
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

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::add_operation (const GGS_controllerBindingOptionList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
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

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
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

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionList::plusAssignOperation (const GGS_controllerBindingOptionList inList,
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

void GGS_controllerBindingOptionList::setter_setMOptionNameAtIndex (GGS_lstring inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionName = inOperand ;
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
  
GGS_lstring GGS_controllerBindingOptionList::getter_mOptionNameAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionName ;
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

void GGS_controllerBindingOptionList::setter_setMOptionTypeNameAtIndex (GGS_lstring inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionTypeName = inOperand ;
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
  
GGS_lstring GGS_controllerBindingOptionList::getter_mOptionTypeNameAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionTypeName ;
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
// Down Enumerator for @controllerBindingOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controllerBindingOptionList::DownEnumerator_controllerBindingOptionList (const GGS_controllerBindingOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element DownEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controllerBindingOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controllerBindingOptionList::UpEnumerator_controllerBindingOptionList (const GGS_controllerBindingOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList_2E_element UpEnumerator_controllerBindingOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controllerBindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controllerBindingOptionList::current_mOptionTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @controllerBindingOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionList ("controllerBindingOptionList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controllerBindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controllerBindingOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionList GGS_controllerBindingOptionList::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_controllerBindingOptionList result ;
  const GGS_controllerBindingOptionList * p = (const GGS_controllerBindingOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controllerBindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::GGS_autoLayoutViewBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::~ GGS_autoLayoutViewBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap & GGS_autoLayoutViewBindingSpecificationMap::operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewBindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                          const GGS_uint & inLevel
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutViewBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutViewBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::performInsert (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>
GGS_autoLayoutViewBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutViewBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>
GGS_autoLayoutViewBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutViewBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutViewBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutViewBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = info->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = info->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutViewBindingSpecificationMap & inMapToOverride
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                                  GGS_outletBindingSpecificationModelList inArgument0,
                                                                  GGS_controllerBindingOptionDecoratedList inArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                                  GGS_outletBindingSpecificationModelList & outArgument0,
                                                                  GGS_controllerBindingOptionDecoratedList & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' binding" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = info->mProperty_mControllerBindingOptionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_autoLayoutViewBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletBindingSpecificationModelList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_autoLayoutViewBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControllerBindingOptionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS_outletBindingSpecificationModelList inValue,
                                                                                                      GGS_string inKey,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletBindingSpecificationModelList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS_controllerBindingOptionDecoratedList inValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControllerBindingOptionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutViewBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletBindingSpecificationModelList:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControllerBindingOptionList:") ;
    inArray (i COMMA_HERE)->mProperty_mControllerBindingOptionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutViewBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutViewBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewBindingSpecificationMap::DownEnumerator_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element DownEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList DownEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList DownEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewBindingSpecificationMap::UpEnumerator_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element UpEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList UpEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList UpEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ("autoLayoutViewBindingSpecificationMap",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  const GGS_autoLayoutViewBindingSpecificationMap * p = (const GGS_autoLayoutViewBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletBindingSpecificationModelList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_outletBindingSpecificationModelList : public CollectionElementPtr {
  public: GGS_outletBindingSpecificationModelList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_outletBindingSpecificationModelList (const GGS_typeKind & in_mModelType,
                                                                    const GGS_bool & in_mModelShouldBeWritableProperty
                                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletBindingSpecificationModelList::CollectionElementPtr_outletBindingSpecificationModelList (const GGS_typeKind & in_mModelType,
                                                                                                                    const GGS_bool & in_mModelShouldBeWritableProperty
                                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mModelType, in_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletBindingSpecificationModelList::CollectionElementPtr_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mModelType, inElement.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_outletBindingSpecificationModelList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_outletBindingSpecificationModelList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_outletBindingSpecificationModelList (mObject.mProperty_mModelType, mObject.mProperty_mModelShouldBeWritableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList::GGS_outletBindingSpecificationModelList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList::GGS_outletBindingSpecificationModelList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_outletBindingSpecificationModelList * p = (CollectionElementPtr_outletBindingSpecificationModelList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_outletBindingSpecificationModelList) ;
    const GGS_outletBindingSpecificationModelList_2E_element element (p->mObject.mProperty_mModelType, p->mObject.mProperty_mModelShouldBeWritableProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                         const GGS_typeKind & in_mModelType,
                                                                         const GGS_bool & in_mModelShouldBeWritableProperty
                                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_outletBindingSpecificationModelList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_outletBindingSpecificationModelList (in_mModelType, in_mModelShouldBeWritableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationModelList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletBindingSpecificationModelList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::description (String & ioString,
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
      ioString.appendString ("mModelType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelShouldBeWritableProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::plusPlusAssignOperation (const GGS_outletBindingSpecificationModelList_2E_element & inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::class_func_listWithValue (const GGS_typeKind & inOperand0,
                                                                                                           const GGS_bool & inOperand1
                                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationModelList_2E_element element (inOperand0, inOperand1) ;
  GGS_outletBindingSpecificationModelList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::addAssignOperation (const GGS_typeKind & inOperand0,
                                                                  const GGS_bool & inOperand1
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::setter_append (const GGS_typeKind inOperand0,
                                                             const GGS_bool inOperand1,
                                                             Compiler * /* inCompiler */
                                                             COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::setter_insertAtIndex (const GGS_typeKind inOperand0,
                                                                    const GGS_bool inOperand1,
                                                                    const GGS_uint inInsertionIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationModelList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_outletBindingSpecificationModelList::setter_removeAtIndex (GGS_typeKind & outOperand0,
                                                                    GGS_bool & outOperand1,
                                                                    const GGS_uint inRemoveIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mModelType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletBindingSpecificationModelList::setter_popFirst (GGS_typeKind & outOperand0,
                                                               GGS_bool & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mModelType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletBindingSpecificationModelList::setter_popLast (GGS_typeKind & outOperand0,
                                                              GGS_bool & outOperand1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mModelType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletBindingSpecificationModelList::method_first (GGS_typeKind & outOperand0,
                                                            GGS_bool & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mModelType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
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

void GGS_outletBindingSpecificationModelList::method_last (GGS_typeKind & outOperand0,
                                                           GGS_bool & outOperand1,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mModelType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelShouldBeWritableProperty ;
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

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::add_operation (const GGS_outletBindingSpecificationModelList & inOperand,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
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

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::subList (const int32_t inStart,
                                                                                          const int32_t inLength,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
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

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModelList::plusAssignOperation (const GGS_outletBindingSpecificationModelList inList,
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

void GGS_outletBindingSpecificationModelList::setter_setMModelTypeAtIndex (GGS_typeKind inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelType = inOperand ;
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
  
GGS_typeKind GGS_outletBindingSpecificationModelList::getter_mModelTypeAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_typeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelType ;
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

void GGS_outletBindingSpecificationModelList::setter_setMModelShouldBeWritablePropertyAtIndex (GGS_bool inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelShouldBeWritableProperty = inOperand ;
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
  
GGS_bool GGS_outletBindingSpecificationModelList::getter_mModelShouldBeWritablePropertyAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelShouldBeWritableProperty ;
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
// Down Enumerator for @outletBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingSpecificationModelList::DownEnumerator_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element DownEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind DownEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletBindingSpecificationModelList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingSpecificationModelList::UpEnumerator_outletBindingSpecificationModelList (const GGS_outletBindingSpecificationModelList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList_2E_element UpEnumerator_outletBindingSpecificationModelList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind UpEnumerator_outletBindingSpecificationModelList::current_mModelType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelType ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletBindingSpecificationModelList::current_mModelShouldBeWritableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelShouldBeWritableProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationModelList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ("outletBindingSpecificationModelList",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationModelList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletBindingSpecificationModelList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletBindingSpecificationModelList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationModelList::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModelList result ;
  const GGS_outletBindingSpecificationModelList * p = (const GGS_outletBindingSpecificationModelList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletBindingSpecificationModelList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletBindingSpecificationModelList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@controllerBindingOptionDecoratedList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_controllerBindingOptionDecoratedList : public CollectionElementPtr {
  public: GGS_controllerBindingOptionDecoratedList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_controllerBindingOptionDecoratedList (const GGS_typeKind & in_mOptionType,
                                                                     const GGS_lstring & in_mOptionName
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controllerBindingOptionDecoratedList::CollectionElementPtr_controllerBindingOptionDecoratedList (const GGS_typeKind & in_mOptionType,
                                                                                                                      const GGS_lstring & in_mOptionName
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOptionType, in_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_controllerBindingOptionDecoratedList::CollectionElementPtr_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOptionType, inElement.mProperty_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_controllerBindingOptionDecoratedList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_controllerBindingOptionDecoratedList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_controllerBindingOptionDecoratedList (mObject.mProperty_mOptionType, mObject.mProperty_mOptionName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @controllerBindingOptionDecoratedList
//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList::GGS_controllerBindingOptionDecoratedList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList::GGS_controllerBindingOptionDecoratedList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_controllerBindingOptionDecoratedList * p = (CollectionElementPtr_controllerBindingOptionDecoratedList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_controllerBindingOptionDecoratedList) ;
    const GGS_controllerBindingOptionDecoratedList_2E_element element (p->mObject.mProperty_mOptionType, p->mObject.mProperty_mOptionName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_typeKind & in_mOptionType,
                                                                          const GGS_lstring & in_mOptionName
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_controllerBindingOptionDecoratedList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_controllerBindingOptionDecoratedList (in_mOptionType, in_mOptionName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_controllerBindingOptionDecoratedList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_controllerBindingOptionDecoratedList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::description (String & ioString,
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
      ioString.appendString ("mOptionType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOptionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecoratedList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::plusPlusAssignOperation (const GGS_controllerBindingOptionDecoratedList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::class_func_listWithValue (const GGS_typeKind & inOperand0,
                                                                                                             const GGS_lstring & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionDecoratedList_2E_element element (inOperand0, inOperand1) ;
  GGS_controllerBindingOptionDecoratedList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::addAssignOperation (const GGS_typeKind & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionDecoratedList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::setter_append (const GGS_typeKind inOperand0,
                                                              const GGS_lstring inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionDecoratedList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::setter_insertAtIndex (const GGS_typeKind inOperand0,
                                                                     const GGS_lstring inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_controllerBindingOptionDecoratedList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_controllerBindingOptionDecoratedList::setter_removeAtIndex (GGS_typeKind & outOperand0,
                                                                     GGS_lstring & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionType ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOptionName ;
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

void GGS_controllerBindingOptionDecoratedList::setter_popFirst (GGS_typeKind & outOperand0,
                                                                GGS_lstring & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
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

void GGS_controllerBindingOptionDecoratedList::setter_popLast (GGS_typeKind & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionName ;
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

void GGS_controllerBindingOptionDecoratedList::method_first (GGS_typeKind & outOperand0,
                                                             GGS_lstring & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionType ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
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

void GGS_controllerBindingOptionDecoratedList::method_last (GGS_typeKind & outOperand0,
                                                            GGS_lstring & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionType ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionName ;
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

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::add_operation (const GGS_controllerBindingOptionDecoratedList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
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

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
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

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecoratedList::plusAssignOperation (const GGS_controllerBindingOptionDecoratedList inList,
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

void GGS_controllerBindingOptionDecoratedList::setter_setMOptionTypeAtIndex (GGS_typeKind inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionType = inOperand ;
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
  
GGS_typeKind GGS_controllerBindingOptionDecoratedList::getter_mOptionTypeAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_typeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionType ;
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

void GGS_controllerBindingOptionDecoratedList::setter_setMOptionNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionName = inOperand ;
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
  
GGS_lstring GGS_controllerBindingOptionDecoratedList::getter_mOptionNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionName ;
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
// Down Enumerator for @controllerBindingOptionDecoratedList
//--------------------------------------------------------------------------------------------------

DownEnumerator_controllerBindingOptionDecoratedList::DownEnumerator_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element DownEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind DownEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @controllerBindingOptionDecoratedList
//--------------------------------------------------------------------------------------------------

UpEnumerator_controllerBindingOptionDecoratedList::UpEnumerator_controllerBindingOptionDecoratedList (const GGS_controllerBindingOptionDecoratedList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList_2E_element UpEnumerator_controllerBindingOptionDecoratedList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind UpEnumerator_controllerBindingOptionDecoratedList::current_mOptionType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionType ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_controllerBindingOptionDecoratedList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}




//--------------------------------------------------------------------------------------------------
//     @controllerBindingOptionDecoratedList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ("controllerBindingOptionDecoratedList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOptionDecoratedList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecoratedList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_controllerBindingOptionDecoratedList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_controllerBindingOptionDecoratedList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_controllerBindingOptionDecoratedList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecoratedList result ;
  const GGS_controllerBindingOptionDecoratedList * p = (const GGS_controllerBindingOptionDecoratedList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_controllerBindingOptionDecoratedList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("controllerBindingOptionDecoratedList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::~ GGS_outletBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap & GGS_outletBindingSpecificationMap::operator = (const GGS_outletBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_outletBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::performInsert (const GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>
GGS_outletBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_outletBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>>
GGS_outletBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_outletBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_outletBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = info->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = info->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_outletBindingSpecificationMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS_outletBindingSpecificationModelList inArgument0,
                                                          GGS_controllerBindingOptionDecoratedList inArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS_outletBindingSpecificationModelList & outArgument0,
                                                          GGS_controllerBindingOptionDecoratedList & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' binding" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = info->mProperty_mControllerBindingOptionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList GGS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModelList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletBindingSpecificationModelList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList GGS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                       Compiler * inCompiler
                                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecoratedList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControllerBindingOptionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS_outletBindingSpecificationModelList inValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletBindingSpecificationModelList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS_controllerBindingOptionDecoratedList inValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControllerBindingOptionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_outletBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletBindingSpecificationModelList:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControllerBindingOptionList:") ;
    inArray (i COMMA_HERE)->mProperty_mControllerBindingOptionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_outletBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_outletBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingSpecificationMap::DownEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element DownEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList DownEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList DownEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingSpecificationMap::UpEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element UpEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModelList UpEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecoratedList UpEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
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
//     @arrayControllerBoundModelAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::bang_arrayControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @arrayControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ("arrayControllerDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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
//  Enum multipleBindingDescriptor
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor::GGS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_multipleBindingDescriptor::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor result ;
  result.mEnum = Enumeration::enum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_multipleBindingDescriptor::class_func_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_multipleBindingDescriptor_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::method_extractBinding (GGS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue_expression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_expression.drop () ;
    String s ;
    s.appendCString ("method @multipleBindingDescriptor.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_ GGS_multipleBindingDescriptor::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_multipleBindingDescriptor_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::getAssociatedValuesFor_binding (GGS_abstractBooleanMultipleBindingExpressionAST & out_expression) const {
  const auto ptr = (const GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_expression = ptr->mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @multipleBindingDescriptor: ") ;
  ioString.appendCString (gEnumNameArrayFor_multipleBindingDescriptor [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor::objectCompare (const GGS_multipleBindingDescriptor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_binding: {
        const auto left = (GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_multipleBindingDescriptor_2E_binding *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @multipleBindingDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingDescriptor::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingDescriptor (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_multipleBindingDescriptor::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor result ;
  const GGS_multipleBindingDescriptor * p = (const GGS_multipleBindingDescriptor *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingDescriptor *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingDescriptor", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration_2E_weak::objectCompare (const GGS_arrayControllerPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::bang_arrayControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @arrayControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ("arrayControllerPropertyGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//     @arrayControllerModelKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerModelKind::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerGeneration result ;
  if (isValid ()) {
    const cPtr_arrayControllerGeneration * p = (cPtr_arrayControllerGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerGeneration GGS_arrayControllerGeneration_2E_weak::bang_arrayControllerGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @arrayControllerGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerGeneration_2E_weak ("arrayControllerGeneration.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//     @multipleBindingComparisonAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingComparisonAST ("multipleBindingComparisonAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingComparisonAST::staticTypeDescriptor (void) const {
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


void cPtr_abstractBooleanMultipleBindingExpressionAST::
abstractBooleanMultipleBindingExpressionAST_init (Compiler * /* inCompiler */) {
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBooleanMultipleBindingExpressionAST::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST ("abstractBooleanMultipleBindingExpressionAST",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_abstractBooleanMultipleBindingExpressionAST * p = (cPtr_abstractBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionAST GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::bang_abstractBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @abstractBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak ("abstractBooleanMultipleBindingExpressionAST.weak",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_literalIntMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_literalIntMultipleBindingExpressionAST * p = (cPtr_literalIntMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_literalIntMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_literalIntMultipleBindingExpressionAST GGS_literalIntMultipleBindingExpressionAST_2E_weak::bang_literalIntMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_literalIntMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @literalIntMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_literalIntMultipleBindingExpressionAST_2E_weak ("literalIntMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_literalIntMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_negateBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ;
}

void cPtr_negateBooleanMultipleBindingExpressionAST::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionAST:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_negateBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @negateBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST ("negateBooleanMultipleBindingExpressionAST",
                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_negateBooleanMultipleBindingExpressionAST * p = (cPtr_negateBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_negateBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionAST GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::bang_negateBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @negateBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionAST_2E_weak ("negateBooleanMultipleBindingExpressionAST.weak",
                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_comparisonMultipleBindingExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_comparisonMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @comparisonMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST ("comparisonMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_comparisonMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_comparisonMultipleBindingExpressionAST * p = (cPtr_comparisonMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionAST GGS_comparisonMultipleBindingExpressionAST_2E_weak::bang_comparisonMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @comparisonMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionAST_2E_weak ("comparisonMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_andBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_andBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @andBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST ("andBooleanMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_andBooleanMultipleBindingExpressionAST * p = (cPtr_andBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_andBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionAST GGS_andBooleanMultipleBindingExpressionAST_2E_weak::bang_andBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @andBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionAST_2E_weak ("andBooleanMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_orBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_orBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @orBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST ("orBooleanMultipleBindingExpressionAST",
                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_orBooleanMultipleBindingExpressionAST * p = (cPtr_orBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_orBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionAST GGS_orBooleanMultipleBindingExpressionAST_2E_weak::bang_orBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @orBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionAST_2E_weak ("orBooleanMultipleBindingExpressionAST.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_xorBooleanMultipleBindingExpressionAST::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_xorBooleanMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @xorBooleanMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST ("xorBooleanMultipleBindingExpressionAST",
                                                                                           & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_xorBooleanMultipleBindingExpressionAST * p = (cPtr_xorBooleanMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorBooleanMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionAST GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::bang_xorBooleanMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @xorBooleanMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionAST_2E_weak ("xorBooleanMultipleBindingExpressionAST.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyInMultipleBindingExpressionAST:") ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @observablePropertyInMultipleBindingExpressionAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::unwrappedValue (void) const {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  if (isValid ()) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (cPtr_observablePropertyInMultipleBindingExpressionAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_observablePropertyInMultipleBindingExpressionAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyInMultipleBindingExpressionAST GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::bang_observablePropertyInMultipleBindingExpressionAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyInMultipleBindingExpressionAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @observablePropertyInMultipleBindingExpressionAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST_2E_weak ("observablePropertyInMultipleBindingExpressionAST.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyInMultipleBindingExpressionAST_2E_weak::staticTypeDescriptor (void) const {
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
// @abstractBooleanMultipleBindingExpressionForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionForGeneration::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand) const {
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

GGS_abstractBooleanMultipleBindingExpressionForGeneration::GGS_abstractBooleanMultipleBindingExpressionForGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractBooleanMultipleBindingExpressionForGeneration::
abstractBooleanMultipleBindingExpressionForGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration::GGS_abstractBooleanMultipleBindingExpressionForGeneration (const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractBooleanMultipleBindingExpressionForGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractBooleanMultipleBindingExpressionForGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractBooleanMultipleBindingExpressionForGeneration::cPtr_abstractBooleanMultipleBindingExpressionForGeneration (Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractBooleanMultipleBindingExpressionForGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ("abstractBooleanMultipleBindingExpressionForGeneration",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractBooleanMultipleBindingExpressionForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractBooleanMultipleBindingExpressionForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration::extractObject (const GGS_object & inObject,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  const GGS_abstractBooleanMultipleBindingExpressionForGeneration * p = (const GGS_abstractBooleanMultipleBindingExpressionForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractBooleanMultipleBindingExpressionForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractBooleanMultipleBindingExpressionForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::objectCompare (const GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_abstractBooleanMultipleBindingExpressionForGeneration * p = (cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @abstractBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak ("abstractBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@observablePropertyAsBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mObservedModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration",
                                                                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration * p = (cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak ("observablePropertyAsBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                              & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.appendCString ("[@booleanMultipleBindingLiteralIntForGeneration:") ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @booleanMultipleBindingLiteralIntForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                                                  & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (isValid ()) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (cPtr_booleanMultipleBindingLiteralIntForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_booleanMultipleBindingLiteralIntForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_booleanMultipleBindingLiteralIntForGeneration GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::bang_booleanMultipleBindingLiteralIntForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @booleanMultipleBindingLiteralIntForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration_2E_weak ("booleanMultipleBindingLiteralIntForGeneration.weak",
                                                                                                          & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_booleanMultipleBindingLiteralIntForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_negateBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ;
}

void cPtr_negateBooleanMultipleBindingExpressionForGeneration::description (String & ioString,
                                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@negateBooleanMultipleBindingExpressionForGeneration:") ;
  mProperty_mBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_negateBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @negateBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration ("negateBooleanMultipleBindingExpressionForGeneration",
                                                                                                        & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_negateBooleanMultipleBindingExpressionForGeneration * p = (cPtr_negateBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_negateBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_negateBooleanMultipleBindingExpressionForGeneration GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_negateBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_negateBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @negateBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak ("negateBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                                & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_negateBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_orBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_orBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @orBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration ("orBooleanMultipleBindingExpressionForGeneration",
                                                                                                    & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_orBooleanMultipleBindingExpressionForGeneration * p = (cPtr_orBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_orBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_orBooleanMultipleBindingExpressionForGeneration GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_orBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_orBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @orBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_orBooleanMultipleBindingExpressionForGeneration_2E_weak ("orBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                            & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_orBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_xorBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_xorBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @xorBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration ("xorBooleanMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_xorBooleanMultipleBindingExpressionForGeneration * p = (cPtr_xorBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_xorBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_xorBooleanMultipleBindingExpressionForGeneration GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_xorBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_xorBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @xorBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak ("xorBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_xorBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_andBooleanMultipleBindingExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_andBooleanMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @andBooleanMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration ("andBooleanMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_andBooleanMultipleBindingExpressionForGeneration * p = (cPtr_andBooleanMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_andBooleanMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_andBooleanMultipleBindingExpressionForGeneration GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::bang_andBooleanMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_andBooleanMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @andBooleanMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_andBooleanMultipleBindingExpressionForGeneration_2E_weak ("andBooleanMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_andBooleanMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_comparisonMultipleBindingExpressionForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_comparisonMultipleBindingExpressionForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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
//     @comparisonMultipleBindingExpressionForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration ("comparisonMultipleBindingExpressionForGeneration",
                                                                                                     & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionForGeneration::staticTypeDescriptor (void) const {
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
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  if (isValid ()) {
    const cPtr_comparisonMultipleBindingExpressionForGeneration * p = (cPtr_comparisonMultipleBindingExpressionForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_comparisonMultipleBindingExpressionForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_comparisonMultipleBindingExpressionForGeneration GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::bang_comparisonMultipleBindingExpressionForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_comparisonMultipleBindingExpressionForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @comparisonMultipleBindingExpressionForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_comparisonMultipleBindingExpressionForGeneration_2E_weak ("comparisonMultipleBindingExpressionForGeneration.weak",
                                                                                                             & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_comparisonMultipleBindingExpressionForGeneration_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_selectionControllerDeclarationAST_2E_weak::objectCompare (const GGS_selectionControllerDeclarationAST_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_selectionControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_selectionControllerDeclarationAST * p = (cPtr_selectionControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectionControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerDeclarationAST GGS_selectionControllerDeclarationAST_2E_weak::bang_selectionControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @selectionControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerDeclarationAST_2E_weak ("selectionControllerDeclarationAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_selectionControllerPropertyGeneration_2E_weak::objectCompare (const GGS_selectionControllerPropertyGeneration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_selectionControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_selectionControllerPropertyGeneration * p = (cPtr_selectionControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_selectionControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerPropertyGeneration GGS_selectionControllerPropertyGeneration_2E_weak::bang_selectionControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//     @selectionControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerPropertyGeneration_2E_weak ("selectionControllerPropertyGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//Class for element of '@selectionControllerForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_selectionControllerForGeneration : public CollectionElementPtr {
  public: GGS_selectionControllerForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_selectionControllerForGeneration (const GGS_string & in_mOwnerName,
                                                                 const GGS_string & in_mSelectionControllerName,
                                                                 const GGS_string & in_mBoundControllerName,
                                                                 const GGS_string & in_mBoundControllerPropertyName,
                                                                 const GGS_string & in_mBaseTypeName,
                                                                 const GGS_string & in_mSelectionTypeName,
                                                                 const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                 const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                                 COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_selectionControllerForGeneration (const GGS_selectionControllerForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_selectionControllerForGeneration::CollectionElementPtr_selectionControllerForGeneration (const GGS_string & in_mOwnerName,
                                                                                                              const GGS_string & in_mSelectionControllerName,
                                                                                                              const GGS_string & in_mBoundControllerName,
                                                                                                              const GGS_string & in_mBoundControllerPropertyName,
                                                                                                              const GGS_string & in_mBaseTypeName,
                                                                                                              const GGS_string & in_mSelectionTypeName,
                                                                                                              const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                              const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_selectionControllerForGeneration::CollectionElementPtr_selectionControllerForGeneration (const GGS_selectionControllerForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOwnerName, inElement.mProperty_mSelectionControllerName, inElement.mProperty_mBoundControllerName, inElement.mProperty_mBoundControllerPropertyName, inElement.mProperty_mBaseTypeName, inElement.mProperty_mSelectionTypeName, inElement.mProperty_mSelectionObservablePropertyMap, inElement.mProperty_mPropertyGenerationList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_selectionControllerForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_selectionControllerForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_selectionControllerForGeneration (mObject.mProperty_mOwnerName, mObject.mProperty_mSelectionControllerName, mObject.mProperty_mBoundControllerName, mObject.mProperty_mBoundControllerPropertyName, mObject.mProperty_mBaseTypeName, mObject.mProperty_mSelectionTypeName, mObject.mProperty_mSelectionObservablePropertyMap, mObject.mProperty_mPropertyGenerationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @selectionControllerForGeneration
//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration::GGS_selectionControllerForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_selectionControllerForGeneration * p = (CollectionElementPtr_selectionControllerForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_selectionControllerForGeneration) ;
    const GGS_selectionControllerForGeneration_2E_element element (p->mObject.mProperty_mOwnerName, p->mObject.mProperty_mSelectionControllerName, p->mObject.mProperty_mBoundControllerName, p->mObject.mProperty_mBoundControllerPropertyName, p->mObject.mProperty_mBaseTypeName, p->mObject.mProperty_mSelectionTypeName, p->mObject.mProperty_mSelectionObservablePropertyMap, p->mObject.mProperty_mPropertyGenerationList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                      const GGS_string & in_mOwnerName,
                                                                      const GGS_string & in_mSelectionControllerName,
                                                                      const GGS_string & in_mBoundControllerName,
                                                                      const GGS_string & in_mBoundControllerPropertyName,
                                                                      const GGS_string & in_mBaseTypeName,
                                                                      const GGS_string & in_mSelectionTypeName,
                                                                      const GGS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                      const GGS_propertyGenerationList & in_mPropertyGenerationList
                                                                      COMMA_LOCATION_ARGS) {
  CollectionElementPtr_selectionControllerForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_selectionControllerForGeneration (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_selectionControllerForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_selectionControllerForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::description (String & ioString,
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
      ioString.appendString ("mOwnerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOwnerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelectionControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelectionControllerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundControllerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundControllerPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundControllerPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBaseTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBaseTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelectionTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelectionTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSelectionObservablePropertyMap:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyGenerationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyGenerationList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_selectionControllerForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::plusPlusAssignOperation (const GGS_selectionControllerForGeneration_2E_element & inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
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
  const GGS_selectionControllerForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  GGS_selectionControllerForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_string & inOperand2,
                                                               const GGS_string & inOperand3,
                                                               const GGS_string & inOperand4,
                                                               const GGS_string & inOperand5,
                                                               const GGS_propertyMap & inOperand6,
                                                               const GGS_propertyGenerationList & inOperand7
                                                               COMMA_LOCATION_ARGS) {
  const GGS_selectionControllerForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_selectionControllerForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_selectionControllerForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
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
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOwnerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSelectionControllerName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBoundControllerName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mBoundControllerPropertyName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBaseTypeName ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mSelectionTypeName ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mPropertyGenerationList ;
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
    outOperand2.drop () ;
    outOperand3.drop () ;
    outOperand4.drop () ;
    outOperand5.drop () ;
    outOperand6.drop () ;
    outOperand7.drop () ;
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOwnerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelectionControllerName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundControllerName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBoundControllerPropertyName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBaseTypeName ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mSelectionTypeName ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mPropertyGenerationList ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOwnerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelectionControllerName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundControllerName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBoundControllerPropertyName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBaseTypeName ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mSelectionTypeName ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mPropertyGenerationList ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOwnerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSelectionControllerName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundControllerName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBoundControllerPropertyName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBaseTypeName ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mSelectionTypeName ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mPropertyGenerationList ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOwnerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSelectionControllerName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundControllerName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBoundControllerPropertyName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBaseTypeName ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mSelectionTypeName ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mSelectionObservablePropertyMap ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mPropertyGenerationList ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
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

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::add_operation (const GGS_selectionControllerForGeneration & inOperand,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
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

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::subList (const int32_t inStart,
                                                                                    const int32_t inLength,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
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

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration GGS_selectionControllerForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_selectionControllerForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_selectionControllerForGeneration::plusAssignOperation (const GGS_selectionControllerForGeneration inList,
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

void GGS_selectionControllerForGeneration::setter_setMOwnerNameAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOwnerName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mOwnerNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOwnerName ;
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

void GGS_selectionControllerForGeneration::setter_setMSelectionControllerNameAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionControllerName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mSelectionControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionControllerName ;
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

void GGS_selectionControllerForGeneration::setter_setMBoundControllerNameAtIndex (GGS_string inOperand,
                                                                                  GGS_uint inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundControllerName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mBoundControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundControllerName ;
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

void GGS_selectionControllerForGeneration::setter_setMBoundControllerPropertyNameAtIndex (GGS_string inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundControllerPropertyName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mBoundControllerPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundControllerPropertyName ;
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

void GGS_selectionControllerForGeneration::setter_setMBaseTypeNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseTypeName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mBaseTypeNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBaseTypeName ;
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

void GGS_selectionControllerForGeneration::setter_setMSelectionTypeNameAtIndex (GGS_string inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionTypeName = inOperand ;
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
  
GGS_string GGS_selectionControllerForGeneration::getter_mSelectionTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionTypeName ;
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

void GGS_selectionControllerForGeneration::setter_setMSelectionObservablePropertyMapAtIndex (GGS_propertyMap inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionObservablePropertyMap = inOperand ;
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
  
GGS_propertyMap GGS_selectionControllerForGeneration::getter_mSelectionObservablePropertyMapAtIndex (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSelectionObservablePropertyMap ;
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

void GGS_selectionControllerForGeneration::setter_setMPropertyGenerationListAtIndex (GGS_propertyGenerationList inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyGenerationList = inOperand ;
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
  
GGS_propertyGenerationList GGS_selectionControllerForGeneration::getter_mPropertyGenerationListAtIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyGenerationList ;
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
// Down Enumerator for @selectionControllerForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_selectionControllerForGeneration::DownEnumerator_selectionControllerForGeneration (const GGS_selectionControllerForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element DownEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mBaseTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap DownEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionObservablePropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList DownEnumerator_selectionControllerForGeneration::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyGenerationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @selectionControllerForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_selectionControllerForGeneration::UpEnumerator_selectionControllerForGeneration (const GGS_selectionControllerForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_selectionControllerForGeneration_2E_element UpEnumerator_selectionControllerForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mOwnerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mSelectionControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mBoundControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mBoundControllerPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundControllerPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mBaseTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBaseTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_selectionControllerForGeneration::current_mSelectionTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap UpEnumerator_selectionControllerForGeneration::current_mSelectionObservablePropertyMap (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSelectionObservablePropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList UpEnumerator_selectionControllerForGeneration::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyGenerationList ;
}




//--------------------------------------------------------------------------------------------------
//     @selectionControllerForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration ("selectionControllerForGeneration",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_selectionControllerForGeneration::staticTypeDescriptor (void) const {
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
//  Map type @propertyMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::~ GGS_propertyMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap::GGS_propertyMap (const GGS_propertyMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap & GGS_propertyMap::operator = (const GGS_propertyMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_hasKey (const GGS_string & inKey
                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                const GGS_uint & inLevel
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_propertyMap::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_propertyMap::getter_keyList (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_propertyMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::performInsert (const GGS_propertyMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_propertyMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>
GGS_propertyMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_propertyMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>>
GGS_propertyMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_propertyMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element_3F_ GGS_propertyMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_propertyMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_propertyMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mKind = info->mProperty_mKind ;
      element.mProperty_mActionMap = info->mProperty_mActionMap ;
      element.mProperty_mIsOverriding = info->mProperty_mIsOverriding ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::class_func_mapWithMapToOverride (const GGS_propertyMap & inMapToOverride
                                                                  COMMA_LOCATION_ARGS) {
  GGS_propertyMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_propertyMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_propertyMap::getter_overriddenMap (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_insertKey (GGS_lstring inLKey,
                                        GGS_propertyKind inArgument0,
                                        GGS_actionMap inArgument1,
                                        GGS_bool inArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  const GGS_propertyMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2) ;
  const char * kInsertErrorMessage = "the '%K' property is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::method_searchKey (GGS_lstring inLKey,
                                        GGS_propertyKind & outArgument0,
                                        GGS_actionMap & outArgument1,
                                        GGS_bool & outArgument2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' property" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
  }else{
    outArgument0 = info->mProperty_mKind ;
    outArgument1 = info->mProperty_mActionMap ;
    outArgument2 = info->mProperty_mIsOverriding ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_propertyMap::getter_mKindForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_propertyKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_propertyMap::getter_mActionMapForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_actionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mActionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyMap::getter_mIsOverridingForKey (const GGS_string & inKey,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mIsOverriding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMKindForKey (GGS_propertyKind inValue,
                                             GGS_string inKey,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMActionMapForKey (GGS_actionMap inValue,
                                                  GGS_string inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mActionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::setter_setMIsOverridingForKey (GGS_bool inValue,
                                                     GGS_string inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_propertyMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mIsOverriding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_propertyMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> & inArray,
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
    ioString.appendString ("mKind:") ;
    inArray (i COMMA_HERE)->mProperty_mKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mActionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mIsOverriding:") ;
    inArray (i COMMA_HERE)->mProperty_mIsOverriding.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_propertyMap_2E_element>> array = sortedInfoArray () ;
    GGS_propertyMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_propertyMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_propertyMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyMap::DownEnumerator_propertyMap (const GGS_propertyMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element DownEnumerator_propertyMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap DownEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsOverriding ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @propertyMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyMap::UpEnumerator_propertyMap (const GGS_propertyMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap_2E_element UpEnumerator_propertyMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_propertyMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_propertyMap::current_mKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap UpEnumerator_propertyMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_propertyMap::current_mIsOverriding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mIsOverriding ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyMap ("propertyMap",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyMap::staticTypeDescriptor (void) const {
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
// @astAbstractViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astAbstractViewDeclaration::objectCompare (const GGS_astAbstractViewDeclaration & inOperand) const {
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

GGS_astAbstractViewDeclaration::GGS_astAbstractViewDeclaration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_astAbstractViewDeclaration::
astAbstractViewDeclaration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration::GGS_astAbstractViewDeclaration (const cPtr_astAbstractViewDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewDeclaration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewDeclaration::cPtr_astAbstractViewDeclaration (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astAbstractViewDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration ("astAbstractViewDeclaration",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAbstractViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAbstractViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAbstractViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration GGS_astAbstractViewDeclaration::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAbstractViewDeclaration result ;
  const GGS_astAbstractViewDeclaration * p = (const GGS_astAbstractViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAbstractViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astAbstractViewDeclaration_2E_weak::objectCompare (const GGS_astAbstractViewDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astAbstractViewDeclaration_2E_weak::GGS_astAbstractViewDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration_2E_weak & GGS_astAbstractViewDeclaration_2E_weak::operator = (const GGS_astAbstractViewDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration_2E_weak::GGS_astAbstractViewDeclaration_2E_weak (const GGS_astAbstractViewDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration_2E_weak GGS_astAbstractViewDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astAbstractViewDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration GGS_astAbstractViewDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astAbstractViewDeclaration result ;
  if (isValid ()) {
    const cPtr_astAbstractViewDeclaration * p = (cPtr_astAbstractViewDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astAbstractViewDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration GGS_astAbstractViewDeclaration_2E_weak::bang_astAbstractViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astAbstractViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astAbstractViewDeclaration) ;
      result = GGS_astAbstractViewDeclaration ((cPtr_astAbstractViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astAbstractViewDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak ("astAbstractViewDeclaration.weak",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAbstractViewDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAbstractViewDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAbstractViewDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration_2E_weak GGS_astAbstractViewDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAbstractViewDeclaration_2E_weak result ;
  const GGS_astAbstractViewDeclaration_2E_weak * p = (const GGS_astAbstractViewDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAbstractViewDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astAutoLayoutViewFunctionCallList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astAutoLayoutViewFunctionCallList : public CollectionElementPtr {
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astAutoLayoutViewFunctionCallList (const GGS_lstring & in_mFunctionName,
                                                                  const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutViewFunctionCallList::CollectionElementPtr_astAutoLayoutViewFunctionCallList (const GGS_lstring & in_mFunctionName,
                                                                                                                const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFunctionName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutViewFunctionCallList::CollectionElementPtr_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astAutoLayoutViewFunctionCallList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astAutoLayoutViewFunctionCallList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astAutoLayoutViewFunctionCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutViewFunctionCallList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList::GGS_astAutoLayoutViewFunctionCallList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList::GGS_astAutoLayoutViewFunctionCallList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astAutoLayoutViewFunctionCallList * p = (CollectionElementPtr_astAutoLayoutViewFunctionCallList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astAutoLayoutViewFunctionCallList) ;
    const GGS_astAutoLayoutViewFunctionCallList_2E_element element (p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                       const GGS_lstring & in_mFunctionName,
                                                                       const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astAutoLayoutViewFunctionCallList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astAutoLayoutViewFunctionCallList (in_mFunctionName, in_mParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewFunctionCallList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astAutoLayoutViewFunctionCallList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::description (String & ioString,
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
      ioString.appendString ("mFunctionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionCallList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::plusPlusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                       const GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionCallList_2E_element element (inOperand0, inOperand1) ;
  GGS_astAutoLayoutViewFunctionCallList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                const GGS_astAutoLayoutViewInstructionParameterList & inOperand1
                                                                COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionCallList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::setter_append (const GGS_lstring inOperand0,
                                                           const GGS_astAutoLayoutViewInstructionParameterList inOperand1,
                                                           Compiler * /* inCompiler */
                                                           COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionCallList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                  const GGS_astAutoLayoutViewInstructionParameterList inOperand1,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionCallList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_astAutoLayoutViewFunctionCallList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                  GGS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFunctionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterList ;
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

void GGS_astAutoLayoutViewFunctionCallList::setter_popFirst (GGS_lstring & outOperand0,
                                                             GGS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_astAutoLayoutViewFunctionCallList::setter_popLast (GGS_lstring & outOperand0,
                                                            GGS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

void GGS_astAutoLayoutViewFunctionCallList::method_first (GGS_lstring & outOperand0,
                                                          GGS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterList ;
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

void GGS_astAutoLayoutViewFunctionCallList::method_last (GGS_lstring & outOperand0,
                                                         GGS_astAutoLayoutViewInstructionParameterList & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterList ;
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

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::add_operation (const GGS_astAutoLayoutViewFunctionCallList & inOperand,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionCallList result ;
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

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::subList (const int32_t inStart,
                                                                                      const int32_t inLength,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionCallList result ;
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

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionCallList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::plusAssignOperation (const GGS_astAutoLayoutViewFunctionCallList inList,
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

void GGS_astAutoLayoutViewFunctionCallList::setter_setMFunctionNameAtIndex (GGS_lstring inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName = inOperand ;
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
  
GGS_lstring GGS_astAutoLayoutViewFunctionCallList::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFunctionName ;
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

void GGS_astAutoLayoutViewFunctionCallList::setter_setMParameterListAtIndex (GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList = inOperand ;
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
  
GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewFunctionCallList::getter_mParameterListAtIndex (const GGS_uint & inIndex,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterList ;
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
// Down Enumerator for @astAutoLayoutViewFunctionCallList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutViewFunctionCallList::DownEnumerator_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element DownEnumerator_astAutoLayoutViewFunctionCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutViewFunctionCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList DownEnumerator_astAutoLayoutViewFunctionCallList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astAutoLayoutViewFunctionCallList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutViewFunctionCallList::UpEnumerator_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList_2E_element UpEnumerator_astAutoLayoutViewFunctionCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutViewFunctionCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList UpEnumerator_astAutoLayoutViewFunctionCallList::current_mParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterList ;
}




//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewFunctionCallList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ("astAutoLayoutViewFunctionCallList",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionCallList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionCallList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionCallList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astAutoLayoutViewFunctionCallList::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionCallList result ;
  const GGS_astAutoLayoutViewFunctionCallList * p = (const GGS_astAutoLayoutViewFunctionCallList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astViewInstructionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astViewInstructionList : public CollectionElementPtr {
  public: GGS_astViewInstructionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astViewInstructionList (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astViewInstructionList (const GGS_astViewInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astViewInstructionList::CollectionElementPtr_astViewInstructionList (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astViewInstructionList::CollectionElementPtr_astViewInstructionList (const GGS_astViewInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astViewInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astViewInstructionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astViewInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astViewInstructionList
//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList::GGS_astViewInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList::GGS_astViewInstructionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astViewInstructionList * p = (CollectionElementPtr_astViewInstructionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astViewInstructionList) ;
    const GGS_astViewInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astViewInstructionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astViewInstructionList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astViewInstructionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astViewInstructionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::description (String & ioString,
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
      ioString.appendString ("mInstruction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstruction.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewInstructionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::plusPlusAssignOperation (const GGS_astViewInstructionList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::class_func_listWithValue (const GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_astViewInstructionList_2E_element element (inOperand0) ;
  GGS_astViewInstructionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::addAssignOperation (const GGS_astAbstractViewInstructionDeclaration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_astViewInstructionList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::setter_append (const GGS_astAbstractViewInstructionDeclaration inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_astViewInstructionList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::setter_insertAtIndex (const GGS_astAbstractViewInstructionDeclaration inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_astViewInstructionList_2E_element newElement (inOperand0) ;
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

void GGS_astViewInstructionList::setter_removeAtIndex (GGS_astAbstractViewInstructionDeclaration & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstruction ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::setter_popFirst (GGS_astAbstractViewInstructionDeclaration & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
      mArray.removeObjectAtIndex (0 COMMA_HERE) ;
    }else{
      const String message = "cannot remove first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::setter_popLast (GGS_astAbstractViewInstructionDeclaration & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
      mArray.removeLastObject (HERE) ;
    }else{
      const String message = "cannot remove last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!removed) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::method_first (GGS_astAbstractViewInstructionDeclaration & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::method_last (GGS_astAbstractViewInstructionDeclaration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstruction ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::add_operation (const GGS_astViewInstructionList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astViewInstructionList result ;
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

GGS_astViewInstructionList GGS_astViewInstructionList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewInstructionList result ;
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

GGS_astViewInstructionList GGS_astViewInstructionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewInstructionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astViewInstructionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::plusAssignOperation (const GGS_astViewInstructionList inList,
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

void GGS_astViewInstructionList::setter_setMInstructionAtIndex (GGS_astAbstractViewInstructionDeclaration inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction = inOperand ;
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
  
GGS_astAbstractViewInstructionDeclaration GGS_astViewInstructionList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_astAbstractViewInstructionDeclaration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstruction ;
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
// Down Enumerator for @astViewInstructionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astViewInstructionList::DownEnumerator_astViewInstructionList (const GGS_astViewInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element DownEnumerator_astViewInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration DownEnumerator_astViewInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astViewInstructionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astViewInstructionList::UpEnumerator_astViewInstructionList (const GGS_astViewInstructionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList_2E_element UpEnumerator_astViewInstructionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration UpEnumerator_astViewInstructionList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @astViewInstructionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewInstructionList ("astViewInstructionList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astViewInstructionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astViewInstructionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astViewInstructionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astViewInstructionList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_astViewInstructionList result ;
  const GGS_astViewInstructionList * p = (const GGS_astViewInstructionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astViewInstructionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astNewStackViewDeclarationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astNewStackViewDeclarationList : public CollectionElementPtr {
  public: GGS_astNewStackViewDeclarationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astNewStackViewDeclarationList (const GGS_lstring & in_mInstanciedStackViewName,
                                                               const GGS_lstring & in_mTypeStackViewName
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astNewStackViewDeclarationList::CollectionElementPtr_astNewStackViewDeclarationList (const GGS_lstring & in_mInstanciedStackViewName,
                                                                                                          const GGS_lstring & in_mTypeStackViewName
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstanciedStackViewName, in_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astNewStackViewDeclarationList::CollectionElementPtr_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstanciedStackViewName, inElement.mProperty_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astNewStackViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astNewStackViewDeclarationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astNewStackViewDeclarationList (mObject.mProperty_mInstanciedStackViewName, mObject.mProperty_mTypeStackViewName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astNewStackViewDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList::GGS_astNewStackViewDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList::GGS_astNewStackViewDeclarationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astNewStackViewDeclarationList * p = (CollectionElementPtr_astNewStackViewDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astNewStackViewDeclarationList) ;
    const GGS_astNewStackViewDeclarationList_2E_element element (p->mObject.mProperty_mInstanciedStackViewName, p->mObject.mProperty_mTypeStackViewName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mInstanciedStackViewName,
                                                                    const GGS_lstring & in_mTypeStackViewName
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astNewStackViewDeclarationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astNewStackViewDeclarationList (in_mInstanciedStackViewName, in_mTypeStackViewName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astNewStackViewDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astNewStackViewDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::description (String & ioString,
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
      ioString.appendString ("mInstanciedStackViewName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInstanciedStackViewName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTypeStackViewName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTypeStackViewName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astNewStackViewDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::plusPlusAssignOperation (const GGS_astNewStackViewDeclarationList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                 const GGS_lstring & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_astNewStackViewDeclarationList_2E_element element (inOperand0, inOperand1) ;
  GGS_astNewStackViewDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                             const GGS_lstring & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_astNewStackViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::setter_append (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_astNewStackViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                               const GGS_lstring inOperand1,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_astNewStackViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_astNewStackViewDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                               GGS_lstring & outOperand1,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mInstanciedStackViewName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTypeStackViewName ;
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

void GGS_astNewStackViewDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                          GGS_lstring & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstanciedStackViewName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTypeStackViewName ;
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

void GGS_astNewStackViewDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstanciedStackViewName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTypeStackViewName ;
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

void GGS_astNewStackViewDeclarationList::method_first (GGS_lstring & outOperand0,
                                                       GGS_lstring & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mInstanciedStackViewName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTypeStackViewName ;
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

void GGS_astNewStackViewDeclarationList::method_last (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mInstanciedStackViewName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTypeStackViewName ;
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

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::add_operation (const GGS_astNewStackViewDeclarationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astNewStackViewDeclarationList result ;
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

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astNewStackViewDeclarationList result ;
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

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astNewStackViewDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astNewStackViewDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astNewStackViewDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::plusAssignOperation (const GGS_astNewStackViewDeclarationList inList,
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

void GGS_astNewStackViewDeclarationList::setter_setMInstanciedStackViewNameAtIndex (GGS_lstring inOperand,
                                                                                    GGS_uint inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInstanciedStackViewName = inOperand ;
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
  
GGS_lstring GGS_astNewStackViewDeclarationList::getter_mInstanciedStackViewNameAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInstanciedStackViewName ;
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

void GGS_astNewStackViewDeclarationList::setter_setMTypeStackViewNameAtIndex (GGS_lstring inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeStackViewName = inOperand ;
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
  
GGS_lstring GGS_astNewStackViewDeclarationList::getter_mTypeStackViewNameAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTypeStackViewName ;
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
// Down Enumerator for @astNewStackViewDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astNewStackViewDeclarationList::DownEnumerator_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element DownEnumerator_astNewStackViewDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astNewStackViewDeclarationList::current_mInstanciedStackViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstanciedStackViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astNewStackViewDeclarationList::current_mTypeStackViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeStackViewName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astNewStackViewDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astNewStackViewDeclarationList::UpEnumerator_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList_2E_element UpEnumerator_astNewStackViewDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astNewStackViewDeclarationList::current_mInstanciedStackViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstanciedStackViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astNewStackViewDeclarationList::current_mTypeStackViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTypeStackViewName ;
}




//--------------------------------------------------------------------------------------------------
//     @astNewStackViewDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ("astNewStackViewDeclarationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astNewStackViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astNewStackViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astNewStackViewDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astNewStackViewDeclarationList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_astNewStackViewDeclarationList result ;
  const GGS_astNewStackViewDeclarationList * p = (const GGS_astNewStackViewDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astNewStackViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astNewStackViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedHorizontalViewDeclaration_2E_weak::objectCompare (const GGS_astComputedHorizontalViewDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astComputedHorizontalViewDeclaration_2E_weak::GGS_astComputedHorizontalViewDeclaration_2E_weak (void) :
GGS_astAbstractViewDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration_2E_weak & GGS_astComputedHorizontalViewDeclaration_2E_weak::operator = (const GGS_astComputedHorizontalViewDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration_2E_weak::GGS_astComputedHorizontalViewDeclaration_2E_weak (const GGS_astComputedHorizontalViewDeclaration & inSource) :
GGS_astAbstractViewDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration_2E_weak GGS_astComputedHorizontalViewDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astComputedHorizontalViewDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astComputedHorizontalViewDeclaration result ;
  if (isValid ()) {
    const cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astComputedHorizontalViewDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration GGS_astComputedHorizontalViewDeclaration_2E_weak::bang_astComputedHorizontalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astComputedHorizontalViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedHorizontalViewDeclaration) ;
      result = GGS_astComputedHorizontalViewDeclaration ((cPtr_astComputedHorizontalViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astComputedHorizontalViewDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2E_weak ("astComputedHorizontalViewDeclaration.weak",
                                                                                                 & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedHorizontalViewDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedHorizontalViewDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedHorizontalViewDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration_2E_weak GGS_astComputedHorizontalViewDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astComputedHorizontalViewDeclaration_2E_weak result ;
  const GGS_astComputedHorizontalViewDeclaration_2E_weak * p = (const GGS_astComputedHorizontalViewDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedHorizontalViewDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedVerticalViewDeclaration_2E_weak::objectCompare (const GGS_astComputedVerticalViewDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astComputedVerticalViewDeclaration_2E_weak::GGS_astComputedVerticalViewDeclaration_2E_weak (void) :
GGS_astAbstractViewDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration_2E_weak & GGS_astComputedVerticalViewDeclaration_2E_weak::operator = (const GGS_astComputedVerticalViewDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration_2E_weak::GGS_astComputedVerticalViewDeclaration_2E_weak (const GGS_astComputedVerticalViewDeclaration & inSource) :
GGS_astAbstractViewDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration_2E_weak GGS_astComputedVerticalViewDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astComputedVerticalViewDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astComputedVerticalViewDeclaration result ;
  if (isValid ()) {
    const cPtr_astComputedVerticalViewDeclaration * p = (cPtr_astComputedVerticalViewDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astComputedVerticalViewDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration GGS_astComputedVerticalViewDeclaration_2E_weak::bang_astComputedVerticalViewDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astComputedVerticalViewDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedVerticalViewDeclaration) ;
      result = GGS_astComputedVerticalViewDeclaration ((cPtr_astComputedVerticalViewDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astComputedVerticalViewDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2E_weak ("astComputedVerticalViewDeclaration.weak",
                                                                                               & kTypeDescriptor_GALGAS_astAbstractViewDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedVerticalViewDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedVerticalViewDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedVerticalViewDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedVerticalViewDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration_2E_weak GGS_astComputedVerticalViewDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedVerticalViewDeclaration_2E_weak result ;
  const GGS_astComputedVerticalViewDeclaration_2E_weak * p = (const GGS_astComputedVerticalViewDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedVerticalViewDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedVerticalViewDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astAbstractViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astAbstractViewInstructionDeclaration::objectCompare (const GGS_astAbstractViewInstructionDeclaration & inOperand) const {
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

GGS_astAbstractViewInstructionDeclaration::GGS_astAbstractViewInstructionDeclaration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_astAbstractViewInstructionDeclaration::
astAbstractViewInstructionDeclaration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration::GGS_astAbstractViewInstructionDeclaration (const cPtr_astAbstractViewInstructionDeclaration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astAbstractViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astAbstractViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_astAbstractViewInstructionDeclaration::cPtr_astAbstractViewInstructionDeclaration (Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astAbstractViewInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ("astAbstractViewInstructionDeclaration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAbstractViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAbstractViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAbstractViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration GGS_astAbstractViewInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAbstractViewInstructionDeclaration result ;
  const GGS_astAbstractViewInstructionDeclaration * p = (const GGS_astAbstractViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAbstractViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astAbstractViewInstructionDeclaration_2E_weak::objectCompare (const GGS_astAbstractViewInstructionDeclaration_2E_weak & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    PtrWeakReferenceProxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    PtrWeakReferenceProxy * operandPtr = inOperand.mProxyPtr ;
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

GGS_astAbstractViewInstructionDeclaration_2E_weak::GGS_astAbstractViewInstructionDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration_2E_weak & GGS_astAbstractViewInstructionDeclaration_2E_weak::operator = (const GGS_astAbstractViewInstructionDeclaration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration_2E_weak::GGS_astAbstractViewInstructionDeclaration_2E_weak (const GGS_astAbstractViewInstructionDeclaration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration_2E_weak GGS_astAbstractViewInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astAbstractViewInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration GGS_astAbstractViewInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astAbstractViewInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astAbstractViewInstructionDeclaration * p = (cPtr_astAbstractViewInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astAbstractViewInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration GGS_astAbstractViewInstructionDeclaration_2E_weak::bang_astAbstractViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astAbstractViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astAbstractViewInstructionDeclaration) ;
      result = GGS_astAbstractViewInstructionDeclaration ((cPtr_astAbstractViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astAbstractViewInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak ("astAbstractViewInstructionDeclaration.weak",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAbstractViewInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAbstractViewInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAbstractViewInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration_2E_weak GGS_astAbstractViewInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAbstractViewInstructionDeclaration_2E_weak result ;
  const GGS_astAbstractViewInstructionDeclaration_2E_weak * p = (const GGS_astAbstractViewInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAbstractViewInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAbstractViewInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astSeparatorInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSeparatorInstructionDeclaration::objectCompare (const GGS_astSeparatorInstructionDeclaration & inOperand) const {
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

GGS_astSeparatorInstructionDeclaration::GGS_astSeparatorInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_astSeparatorInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astSeparatorInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astSeparatorInstructionDeclaration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_astSeparatorInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astSeparatorInstructionDeclaration::
astSeparatorInstructionDeclaration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                       Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration::GGS_astSeparatorInstructionDeclaration (const cPtr_astSeparatorInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSeparatorInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astSeparatorInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astSeparatorInstructionDeclaration * p = (cPtr_astSeparatorInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astSeparatorInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astSeparatorInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astSeparatorInstructionDeclaration::cPtr_astSeparatorInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astSeparatorInstructionDeclaration::cPtr_astSeparatorInstructionDeclaration (const GGS_bool & in_horizontal,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astSeparatorInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;
}

void cPtr_astSeparatorInstructionDeclaration::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.appendCString ("[@astSeparatorInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_astSeparatorInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astSeparatorInstructionDeclaration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astSeparatorInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astSeparatorInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ("astSeparatorInstructionDeclaration",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSeparatorInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSeparatorInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSeparatorInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astSeparatorInstructionDeclaration result ;
  const GGS_astSeparatorInstructionDeclaration * p = (const GGS_astSeparatorInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSeparatorInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSeparatorInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

