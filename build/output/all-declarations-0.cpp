#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-0.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@_32_lstringlist' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr__32_lstringlist : public CollectionElementPtr {
  public: GGS__32_lstringlist_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                const GGS_lstring & in_mValue_31_
                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS_lstring & in_mValue_30_,
                                                                            const GGS_lstring & in_mValue_31_
                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mValue_30_, in_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr__32_lstringlist::CollectionElementPtr__32_lstringlist (const GGS__32_lstringlist_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mValue_30_, inElement.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr__32_lstringlist::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr__32_lstringlist::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr__32_lstringlist (mObject.mProperty_mValue_30_, mObject.mProperty_mValue_31_ COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @_32_lstringlist
//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist::GGS__32_lstringlist (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr__32_lstringlist * p = (CollectionElementPtr__32_lstringlist *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr__32_lstringlist) ;
    const GGS__32_lstringlist_2E_element element (p->mObject.mProperty_mValue_30_, p->mObject.mProperty_mValue_31_) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                     const GGS_lstring & in_mValue_30_,
                                                     const GGS_lstring & in_mValue_31_
                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr__32_lstringlist * p = nullptr ;
  macroMyNew (p, CollectionElementPtr__32_lstringlist (in_mValue_30_, in_mValue_31_ COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__32_lstringlist::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS__32_lstringlist::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::description (String & ioString,
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
      ioString.appendString ("mValue0:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_30_.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mValue1:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mValue_31_.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusPlusAssignOperation (const GGS__32_lstringlist_2E_element & inValue
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                   const GGS_lstring & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element element (inOperand0, inOperand1) ;
  GGS__32_lstringlist result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::addAssignOperation (const GGS_lstring & inOperand0,
                                              const GGS_lstring & inOperand1
                                              COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_append (const GGS_lstring inOperand0,
                                         const GGS_lstring inOperand1,
                                         Compiler * /* inCompiler */
                                         COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                const GGS_lstring inOperand1,
                                                const GGS_uint inInsertionIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS__32_lstringlist_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS__32_lstringlist::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                const GGS_uint inRemoveIndex,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popFirst (GGS_lstring & outOperand0,
                                           GGS_lstring & outOperand1,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::setter_popLast (GGS_lstring & outOperand0,
                                          GGS_lstring & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_first (GGS_lstring & outOperand0,
                                        GGS_lstring & outOperand1,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mValue_30_ ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mValue_31_ ;
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

void GGS__32_lstringlist::method_last (GGS_lstring & outOperand0,
                                       GGS_lstring & outOperand1,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mValue_30_ ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mValue_31_ ;
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

GGS__32_lstringlist GGS__32_lstringlist::add_operation (const GGS__32_lstringlist & inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::subList (const int32_t inStart,
                                                  const int32_t inLength,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
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

GGS__32_lstringlist GGS__32_lstringlist::getter_subListWithRange (const GGS_range & inRange,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::getter_subListToIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstringlist::plusAssignOperation (const GGS__32_lstringlist inList,
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

void GGS__32_lstringlist::setter_setMValue_30_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ = inOperand ;
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
  
GGS_lstring GGS__32_lstringlist::getter_mValue_30_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_30_ ;
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

void GGS__32_lstringlist::setter_setMValue_31_AtIndex (GGS_lstring inOperand,
                                                       GGS_uint inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ = inOperand ;
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
  
GGS_lstring GGS__32_lstringlist::getter_mValue_31_AtIndex (const GGS_uint & inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mValue_31_ ;
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
// Down Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

DownEnumerator__32_lstringlist::DownEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element DownEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_32_lstringlist
//--------------------------------------------------------------------------------------------------

UpEnumerator__32_lstringlist::UpEnumerator__32_lstringlist (const GGS__32_lstringlist & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist_2E_element UpEnumerator__32_lstringlist::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_30_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_30_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator__32_lstringlist::current_mValue_31_ (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mValue_31_ ;
}




//--------------------------------------------------------------------------------------------------
//     @2lstringlist generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstringlist ("2lstringlist",
                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstringlist::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstringlist ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS__32_lstringlist::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS__32_lstringlist (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist GGS__32_lstringlist::extractObject (const GGS_object & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS__32_lstringlist result ;
  const GGS__32_lstringlist * p = (const GGS__32_lstringlist *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS__32_lstringlist *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("2lstringlist", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum typeKind
//--------------------------------------------------------------------------------------------------

GGS_typeKind::GGS_typeKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_boolType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_boolType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_integerType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_integerType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_uint_33__32_Type (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_uint_33__32_Type ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_doubleType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_doubleType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_stringType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_stringType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dataType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dataType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_dateType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_dateType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_fontType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_fontType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_colorType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_colorType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_bezierPathArrayType (UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_bezierPathArrayType ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_enumType (const GGS_string & inAssociatedValue0,
                                                const GGS_enumConstantMap & inAssociatedValue1,
                                                const GGS_enumFuncMap & inAssociatedValue2
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_enumType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_enumType (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_entityType (const GGS_string & inAssociatedValue0,
                                                  const GGS_bool & inAssociatedValue1
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_entityType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_entityType (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_classType (const GGS_string & inAssociatedValue0
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_classType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_classType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::class_func_transientPropertyExternType (const GGS_string & inAssociatedValue0
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKind result ;
  result.mEnum = Enumeration::enum_transientPropertyExternType ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_typeKind_2E_transientPropertyExternType (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEnumType (GGS_string & outAssociatedValue_enumTypeName,
                                           GGS_enumConstantMap & outAssociatedValue_constantMap,
                                           GGS_enumFuncMap & outAssociatedValue_funcMap,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumType) {
    outAssociatedValue_enumTypeName.drop () ;
    outAssociatedValue_constantMap.drop () ;
    outAssociatedValue_funcMap.drop () ;
    String s ;
    s.appendCString ("method @typeKind.enumType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumTypeName = ptr->mProperty_enumTypeName ;
    outAssociatedValue_constantMap = ptr->mProperty_constantMap ;
    outAssociatedValue_funcMap = ptr->mProperty_funcMap ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractEntityType (GGS_string & outAssociatedValue_entityName,
                                             GGS_bool & outAssociatedValue_graphic,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entityType) {
    outAssociatedValue_entityName.drop () ;
    outAssociatedValue_graphic.drop () ;
    String s ;
    s.appendCString ("method @typeKind.entityType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_entityName = ptr->mProperty_entityName ;
    outAssociatedValue_graphic = ptr->mProperty_graphic ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractClassType (GGS_string & outAssociatedValue_className,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_classType) {
    outAssociatedValue_className.drop () ;
    String s ;
    s.appendCString ("method @typeKind.classType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_className = ptr->mProperty_className ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::method_extractTransientPropertyExternType (GGS_string & outAssociatedValue_externTypeName,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_transientPropertyExternType) {
    outAssociatedValue_externTypeName.drop () ;
    String s ;
    s.appendCString ("method @typeKind.transientPropertyExternType invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_externTypeName = ptr->mProperty_externTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_enumType_3F_ GGS_typeKind::getter_getEnumType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_enumType_3F_ result ;
  if (mEnum == Enumeration::enum_enumType) {
    const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_enumType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_enumType (GGS_string & out_enumTypeName,
                                                    GGS_enumConstantMap & out_constantMap,
                                                    GGS_enumFuncMap & out_funcMap) const {
  const auto ptr = (const GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
  out_enumTypeName = ptr->mProperty_enumTypeName ;
  out_constantMap = ptr->mProperty_constantMap ;
  out_funcMap = ptr->mProperty_funcMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_entityType_3F_ GGS_typeKind::getter_getEntityType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_entityType_3F_ result ;
  if (mEnum == Enumeration::enum_entityType) {
    const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_entityType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_entityType (GGS_string & out_entityName,
                                                      GGS_bool & out_graphic) const {
  const auto ptr = (const GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
  out_entityName = ptr->mProperty_entityName ;
  out_graphic = ptr->mProperty_graphic ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_classType_3F_ GGS_typeKind::getter_getClassType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_classType_3F_ result ;
  if (mEnum == Enumeration::enum_classType) {
    const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_classType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_classType (GGS_string & out_className) const {
  const auto ptr = (const GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
  out_className = ptr->mProperty_className ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind_2E_transientPropertyExternType_3F_ GGS_typeKind::getter_getTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  GGS_typeKind_2E_transientPropertyExternType_3F_ result ;
  if (mEnum == Enumeration::enum_transientPropertyExternType) {
    const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_typeKind_2E_transientPropertyExternType (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::getAssociatedValuesFor_transientPropertyExternType (GGS_string & out_externTypeName) const {
  const auto ptr = (const GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
  out_externTypeName = ptr->mProperty_externTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_typeKind [16] = {
  "(not built)",
  "boolType",
  "integerType",
  "uint32Type",
  "doubleType",
  "stringType",
  "dataType",
  "dateType",
  "fontType",
  "colorType",
  "bezierPathType",
  "bezierPathArrayType",
  "enumType",
  "entityType",
  "classType",
  "transientPropertyExternType"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBoolType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_boolType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isIntegerType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_integerType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isUint_33__32_Type (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_uint_33__32_Type == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDoubleType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_doubleType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isStringType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stringType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDataType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dataType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isDateType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_dateType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isFontType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_fontType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isColorType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_colorType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isBezierPathArrayType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_bezierPathArrayType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEnumType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isEntityType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isClassType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_classType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_typeKind::getter_isTransientPropertyExternType (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientPropertyExternType == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKind::description (String & ioString,
                                const int32_t inIndentation) const {
  ioString.appendCString ("<enum @typeKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_typeKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_typeKind::objectCompare (const GGS_typeKind & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_enumType: {
        const auto left = (GGS_typeKind_2E_enumType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_enumType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_entityType: {
        const auto left = (GGS_typeKind_2E_entityType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_entityType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_classType: {
        const auto left = (GGS_typeKind_2E_classType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_classType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
        result = left->objectCompare (*right) ;
        }break ;
      case Enumeration::enum_transientPropertyExternType: {
        const auto left = (GGS_typeKind_2E_transientPropertyExternType *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_typeKind_2E_transientPropertyExternType *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @typeKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKind ("typeKind",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_typeKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_typeKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_typeKind::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_typeKind result ;
  const GGS_typeKind * p = (const GGS_typeKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_typeKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind isComparable'
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
//  Extension Getter '@typeKind isGraphic'
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
//Class for element of '@typeKindList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_typeKindList : public CollectionElementPtr {
  public: GGS_typeKindList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_typeKindList (const GGS_typeKind & in_mType
                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_typeKindList::CollectionElementPtr_typeKindList (const GGS_typeKind & in_mType
                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mType) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_typeKindList::CollectionElementPtr_typeKindList (const GGS_typeKindList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mType) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_typeKindList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_typeKindList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_typeKindList (mObject.mProperty_mType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @typeKindList
//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList::GGS_typeKindList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_typeKindList * p = (CollectionElementPtr_typeKindList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_typeKindList) ;
    const GGS_typeKindList_2E_element element (p->mObject.mProperty_mType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                  const GGS_typeKind & in_mType
                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_typeKindList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_typeKindList (in_mType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_typeKindList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_typeKindList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::description (String & ioString,
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
      ioString.appendString ("mType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mType.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_typeKindList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::plusPlusAssignOperation (const GGS_typeKindList_2E_element & inValue
                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::class_func_listWithValue (const GGS_typeKind & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element element (inOperand0) ;
  GGS_typeKindList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::addAssignOperation (const GGS_typeKind & inOperand0
                                           COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_append (const GGS_typeKind inOperand0,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::setter_insertAtIndex (const GGS_typeKind inOperand0,
                                             const GGS_uint inInsertionIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  const GGS_typeKindList_2E_element newElement (inOperand0) ;
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

void GGS_typeKindList::setter_removeAtIndex (GGS_typeKind & outOperand0,
                                             const GGS_uint inRemoveIndex,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mType ;
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

void GGS_typeKindList::setter_popFirst (GGS_typeKind & outOperand0,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_typeKindList::setter_popLast (GGS_typeKind & outOperand0,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
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

void GGS_typeKindList::method_first (GGS_typeKind & outOperand0,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mType ;
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

void GGS_typeKindList::method_last (GGS_typeKind & outOperand0,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mType ;
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

GGS_typeKindList GGS_typeKindList::add_operation (const GGS_typeKindList & inOperand,
                                                  Compiler * /* inCompiler */
                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_typeKindList result ;
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

GGS_typeKindList GGS_typeKindList::subList (const int32_t inStart,
                                            const int32_t inLength,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
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

GGS_typeKindList GGS_typeKindList::getter_subListWithRange (const GGS_range & inRange,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList GGS_typeKindList::getter_subListToIndex (const GGS_uint & inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_typeKindList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_typeKindList::plusAssignOperation (const GGS_typeKindList inList,
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

void GGS_typeKindList::setter_setMTypeAtIndex (GGS_typeKind inOperand,
                                               GGS_uint inIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mType = inOperand ;
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
  
GGS_typeKind GGS_typeKindList::getter_mTypeAtIndex (const GGS_uint & inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_typeKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mType ;
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
// Down Enumerator for @typeKindList
//--------------------------------------------------------------------------------------------------

DownEnumerator_typeKindList::DownEnumerator_typeKindList (const GGS_typeKindList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element DownEnumerator_typeKindList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind DownEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @typeKindList
//--------------------------------------------------------------------------------------------------

UpEnumerator_typeKindList::UpEnumerator_typeKindList (const GGS_typeKindList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_typeKindList_2E_element UpEnumerator_typeKindList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_typeKind UpEnumerator_typeKindList::current_mType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mType ;
}




//--------------------------------------------------------------------------------------------------
//     @typeKindList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_typeKindList ("typeKindList",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_typeKindList::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyKind ("propertyKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyKind::staticTypeDescriptor (void) const {
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
//  Extension Getter '@propertyKind swiftTypeName'
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
      GGS_typeKind extractedValue_2922_type_0 ;
      GGS_propertyAccessibility extractedValue_2928__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_2922_type_0, extractedValue_2928__1) ;
      result_result = extensionGetter_swiftTypeName (extractedValue_2922_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas4", 107)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_2980_typeName_0 ;
      GGS_propertyAccessibility extractedValue_2991__1 ;
      GGS_bool extractedValue_2991__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_2991__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_2980_typeName_0, extractedValue_2991__1, extractedValue_2991__2, extractedValue_2991__3) ;
      result_result = extractedValue_2980_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_3032_typeName_0 ;
      GGS_propertyAccessibility extractedValue_3043__1 ;
      GGS_bool extractedValue_3043__2 ;
      GGS_toOneOppositeRelationship extractedValue_3043__3 ;
      GGS_bool extractedValue_3043__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_3032_typeName_0, extractedValue_3043__1, extractedValue_3043__2, extractedValue_3043__3, extractedValue_3043__4) ;
      result_result = extractedValue_3032_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_3094_typeName_0 ;
      GGS_bool extractedValue_3104__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_3094_typeName_0, extractedValue_3104__1) ;
      result_result = extractedValue_3094_typeName_0.readProperty_string () ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_3159_typeName_0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_3159_typeName_0) ;
      result_result = extractedValue_3159_typeName_0 ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@typeKind swiftTypeName'
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
      GGS_string extractedValue_3860_entityName_0 ;
      GGS_bool extractedValue_3872__1 ;
      temp_0.getAssociatedValuesFor_entityType (extractedValue_3860_entityName_0, extractedValue_3872__1) ;
      result_outResult = extractedValue_3860_entityName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_enumType:
    {
      GGS_string extractedValue_3925_enumTypeName_0 ;
      GGS_enumConstantMap extractedValue_3940__1 ;
      GGS_enumFuncMap extractedValue_3940__2 ;
      temp_0.getAssociatedValuesFor_enumType (extractedValue_3925_enumTypeName_0, extractedValue_3940__1, extractedValue_3940__2) ;
      result_outResult = extractedValue_3925_enumTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_classType:
    {
      GGS_string extractedValue_3996_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_classType (extractedValue_3996_classTypeName_0) ;
      result_outResult = extractedValue_3996_classTypeName_0 ;
    }
    break ;
  case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
    {
      GGS_string extractedValue_4083_classTypeName_0 ;
      temp_0.getAssociatedValuesFor_transientPropertyExternType (extractedValue_4083_classTypeName_0) ;
      result_outResult = extractedValue_4083_classTypeName_0 ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind isTransient'
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
      GGS_typeKind extractedValue_4310__0 ;
      GGS_propertyAccessibility extractedValue_4313_accessibility_1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4310__0, extractedValue_4313_accessibility_1) ;
      result_result = extractedValue_4313_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.galgas4", 145)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_4380__0 ;
      GGS_propertyAccessibility extractedValue_4383_accessibility_1 ;
      GGS_bool extractedValue_4399__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_4399__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_4380__0, extractedValue_4383_accessibility_1, extractedValue_4399__2, extractedValue_4399__3) ;
      result_result = extractedValue_4383_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.galgas4", 146)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_4453__0 ;
      GGS_propertyAccessibility extractedValue_4456_accessibility_1 ;
      GGS_bool extractedValue_4472__2 ;
      GGS_toOneOppositeRelationship extractedValue_4472__3 ;
      GGS_bool extractedValue_4472__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_4453__0, extractedValue_4456_accessibility_1, extractedValue_4472__2, extractedValue_4472__3, extractedValue_4472__4) ;
      result_result = extractedValue_4456_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.galgas4", 147)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4537__0 ;
      GGS_bool extractedValue_4537__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_4537__0, extractedValue_4537__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4585__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_4585__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind isComparable'
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
      GGS_typeKind extractedValue_4790_type_0 ;
      GGS_propertyAccessibility extractedValue_4796__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_4790_type_0, extractedValue_4796__1) ;
      result_result = extensionGetter_isComparable (extractedValue_4790_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.galgas4", 157)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_4844__0 ;
      GGS_propertyAccessibility extractedValue_4844__1 ;
      GGS_bool extractedValue_4844__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_4844__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_4844__0, extractedValue_4844__1, extractedValue_4844__2, extractedValue_4844__3) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_4879__0 ;
      GGS_propertyAccessibility extractedValue_4879__1 ;
      GGS_bool extractedValue_4879__2 ;
      GGS_toOneOppositeRelationship extractedValue_4879__3 ;
      GGS_bool extractedValue_4879__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_4879__0, extractedValue_4879__1, extractedValue_4879__2, extractedValue_4879__3, extractedValue_4879__4) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4924__0 ;
      GGS_bool extractedValue_4924__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_4924__0, extractedValue_4924__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_4972__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_4972__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind isEntityType'
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
      GGS_typeKind extractedValue_5178__0 ;
      GGS_propertyAccessibility extractedValue_5178__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_5178__0, extractedValue_5178__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5214__0 ;
      GGS_propertyAccessibility extractedValue_5214__1 ;
      GGS_bool extractedValue_5214__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5214__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_5214__0, extractedValue_5214__1, extractedValue_5214__2, extractedValue_5214__3) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5248__0 ;
      GGS_propertyAccessibility extractedValue_5248__1 ;
      GGS_bool extractedValue_5248__2 ;
      GGS_toOneOppositeRelationship extractedValue_5248__3 ;
      GGS_bool extractedValue_5248__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_5248__0, extractedValue_5248__1, extractedValue_5248__2, extractedValue_5248__3, extractedValue_5248__4) ;
      result_result = GGS_bool (true) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_5292__0 ;
      GGS_bool extractedValue_5292__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_5292__0, extractedValue_5292__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_5340__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_5340__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@propertyKind isEnumType'
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
      GGS_typeKind extractedValue_5543_type_0 ;
      GGS_propertyAccessibility extractedValue_5549__1 ;
      temp_0.getAssociatedValuesFor_property (extractedValue_5543_type_0, extractedValue_5549__1) ;
      result_result = extractedValue_5543_type_0.getter_isEnumType (SOURCE_FILE ("unified-type.galgas4", 181)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_5595__0 ;
      GGS_propertyAccessibility extractedValue_5595__1 ;
      GGS_bool extractedValue_5595__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_5595__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_5595__0, extractedValue_5595__1, extractedValue_5595__2, extractedValue_5595__3) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_5630__0 ;
      GGS_propertyAccessibility extractedValue_5630__1 ;
      GGS_bool extractedValue_5630__2 ;
      GGS_toOneOppositeRelationship extractedValue_5630__3 ;
      GGS_bool extractedValue_5630__4 ;
      temp_0.getAssociatedValuesFor_toOne (extractedValue_5630__0, extractedValue_5630__1, extractedValue_5630__2, extractedValue_5630__3, extractedValue_5630__4) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_5675__0 ;
      GGS_bool extractedValue_5675__1 ;
      temp_0.getAssociatedValuesFor_arrayController (extractedValue_5675__0, extractedValue_5675__1) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_5723__0 ;
      temp_0.getAssociatedValuesFor_selectionController (extractedValue_5723__0) ;
      result_result = GGS_bool (false) ;
    }
    break ;
  }
//---
  return result_result ;
}




//--------------------------------------------------------------------------------------------------
//Class for element of '@externSwiftDelegateList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_externSwiftDelegateList : public CollectionElementPtr {
  public: GGS_externSwiftDelegateList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externSwiftDelegateList::CollectionElementPtr_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externSwiftDelegateList::CollectionElementPtr_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externSwiftDelegateList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externSwiftDelegateList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externSwiftDelegateList
//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externSwiftDelegateList * p = (CollectionElementPtr_externSwiftDelegateList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externSwiftDelegateList) ;
    const GGS_externSwiftDelegateList_2E_element element (p->mObject.mProperty_mExternSwiftDelegateName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftDelegateName
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externSwiftDelegateList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externSwiftDelegateList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externSwiftDelegateList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::description (String & ioString,
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
      ioString.appendString ("mExternSwiftDelegateName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExternSwiftDelegateName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftDelegateList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::plusPlusAssignOperation (const GGS_externSwiftDelegateList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::class_func_listWithValue (const GGS_lstring & inOperand0
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_externSwiftDelegateList_2E_element element (inOperand0) ;
  GGS_externSwiftDelegateList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::addAssignOperation (const GGS_lstring & inOperand0
                                                      COMMA_LOCATION_ARGS) {
  const GGS_externSwiftDelegateList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_append (const GGS_lstring inOperand0,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_externSwiftDelegateList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_externSwiftDelegateList_2E_element newElement (inOperand0) ;
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

void GGS_externSwiftDelegateList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExternSwiftDelegateName ;
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

void GGS_externSwiftDelegateList::setter_popFirst (GGS_lstring & outOperand0,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExternSwiftDelegateName ;
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

void GGS_externSwiftDelegateList::setter_popLast (GGS_lstring & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExternSwiftDelegateName ;
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

void GGS_externSwiftDelegateList::method_first (GGS_lstring & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExternSwiftDelegateName ;
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

void GGS_externSwiftDelegateList::method_last (GGS_lstring & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExternSwiftDelegateName ;
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

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::add_operation (const GGS_externSwiftDelegateList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
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

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
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

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_externSwiftDelegateList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::plusAssignOperation (const GGS_externSwiftDelegateList inList,
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

void GGS_externSwiftDelegateList::setter_setMExternSwiftDelegateNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExternSwiftDelegateName = inOperand ;
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
  
GGS_lstring GGS_externSwiftDelegateList::getter_mExternSwiftDelegateNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExternSwiftDelegateName ;
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
// Down Enumerator for @externSwiftDelegateList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externSwiftDelegateList::DownEnumerator_externSwiftDelegateList (const GGS_externSwiftDelegateList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element DownEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExternSwiftDelegateName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externSwiftDelegateList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externSwiftDelegateList::UpEnumerator_externSwiftDelegateList (const GGS_externSwiftDelegateList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList_2E_element UpEnumerator_externSwiftDelegateList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externSwiftDelegateList::current_mExternSwiftDelegateName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExternSwiftDelegateName ;
}




//--------------------------------------------------------------------------------------------------
//     @externSwiftDelegateList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftDelegateList ("externSwiftDelegateList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externSwiftDelegateList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftDelegateList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftDelegateList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftDelegateList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_externSwiftDelegateList result ;
  const GGS_externSwiftDelegateList * p = (const GGS_externSwiftDelegateList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftDelegateList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftDelegateList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutTableViewControllerBoundColumnListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST : public CollectionElementPtr {
  public: GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                                const GGS_lstring & in_mPropertyName,
                                                                                const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                const GGS_lstring & in_mSortPropertyName
                                                                                COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST::CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (const GGS_bool & in_mEditable,
                                                                                                                                            const GGS_lstring & in_mPropertyName,
                                                                                                                                            const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                                                                            const GGS_lstring & in_mSortPropertyName
                                                                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST::CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mPropertyName, inElement.mProperty_mColumnParameterListAST, inElement.mProperty_mSortPropertyName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (mObject.mProperty_mEditable, mObject.mProperty_mPropertyName, mObject.mProperty_mColumnParameterListAST, mObject.mProperty_mSortPropertyName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST::GGS_autoLayoutTableViewControllerBoundColumnListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST * p = (CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST) ;
    const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element element (p->mObject.mProperty_mEditable, p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mColumnParameterListAST, p->mObject.mProperty_mSortPropertyName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                     const GGS_bool & in_mEditable,
                                                                                     const GGS_lstring & in_mPropertyName,
                                                                                     const GGS_astAutoLayoutViewInstructionParameterList & in_mColumnParameterListAST,
                                                                                     const GGS_lstring & in_mSortPropertyName
                                                                                     COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListAST (in_mEditable, in_mPropertyName, in_mColumnParameterListAST, in_mSortPropertyName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::description (String & ioString,
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
      ioString.appendString ("mEditable:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEditable.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mColumnParameterListAST:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mColumnParameterListAST.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSortPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSortPropertyName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                                                   const GGS_lstring & inOperand1,
                                                                                                                                   const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                                                                                   const GGS_lstring & inOperand3
                                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::addAssignOperation (const GGS_bool & inOperand0,
                                                                              const GGS_lstring & inOperand1,
                                                                              const GGS_astAutoLayoutViewInstructionParameterList & inOperand2,
                                                                              const GGS_lstring & inOperand3
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_append (const GGS_bool inOperand0,
                                                                         const GGS_lstring inOperand1,
                                                                         const GGS_astAutoLayoutViewInstructionParameterList inOperand2,
                                                                         const GGS_lstring inOperand3,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                                GGS_lstring & outOperand1,
                                                                                GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                                GGS_lstring & outOperand3,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEditable ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mSortPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popFirst (GGS_bool & outOperand0,
                                                                           GGS_lstring & outOperand1,
                                                                           GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                           GGS_lstring & outOperand3,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_popLast (GGS_bool & outOperand0,
                                                                          GGS_lstring & outOperand1,
                                                                          GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                          GGS_lstring & outOperand3,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_first (GGS_bool & outOperand0,
                                                                        GGS_lstring & outOperand1,
                                                                        GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                        GGS_lstring & outOperand3,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::method_last (GGS_bool & outOperand0,
                                                                       GGS_lstring & outOperand1,
                                                                       GGS_astAutoLayoutViewInstructionParameterList & outOperand2,
                                                                       GGS_lstring & outOperand3,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mColumnParameterListAST ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
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

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
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

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::subList (const int32_t inStart,
                                                                                                                  const int32_t inLength,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
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

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListAST::plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListAST inList,
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMEditableAtIndex (GGS_bool inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable = inOperand ;
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
  
GGS_bool GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mEditableAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                          GGS_uint inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName = inOperand ;
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
  
GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMColumnParameterListASTAtIndex (GGS_astAutoLayoutViewInstructionParameterList inOperand,
                                                                                                    GGS_uint inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnParameterListAST = inOperand ;
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
  
GGS_astAutoLayoutViewInstructionParameterList GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mColumnParameterListASTAtIndex (const GGS_uint & inIndex,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnParameterListAST ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListAST::setter_setMSortPropertyNameAtIndex (GGS_lstring inOperand,
                                                                                              GGS_uint inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName = inOperand ;
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
  
GGS_lstring GGS_autoLayoutTableViewControllerBoundColumnListAST::getter_mSortPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName ;
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
// Down Enumerator for @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerBoundColumnListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST (const GGS_autoLayoutTableViewControllerBoundColumnListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListAST_2E_element UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mColumnParameterListAST (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnParameterListAST ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerBoundColumnListAST::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerBoundColumnListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListAST ("autoLayoutTableViewControllerBoundColumnListAST",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerBoundColumnListAST::staticTypeDescriptor (void) const {
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
//Class for element of '@astAutoLayoutViewInstructionParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astAutoLayoutViewInstructionParameterList : public CollectionElementPtr {
  public: GGS_astAutoLayoutViewInstructionParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astAutoLayoutViewInstructionParameterList (const GGS_lstring & in_mParameterName,
                                                                          const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                          const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutViewInstructionParameterList::CollectionElementPtr_astAutoLayoutViewInstructionParameterList (const GGS_lstring & in_mParameterName,
                                                                                                                                const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                                                                                const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mParameterName, in_mParameterType, in_mParameter) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutViewInstructionParameterList::CollectionElementPtr_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType, inElement.mProperty_mParameter) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astAutoLayoutViewInstructionParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astAutoLayoutViewInstructionParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astAutoLayoutViewInstructionParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType, mObject.mProperty_mParameter COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList::GGS_astAutoLayoutViewInstructionParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList::GGS_astAutoLayoutViewInstructionParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astAutoLayoutViewInstructionParameterList * p = (CollectionElementPtr_astAutoLayoutViewInstructionParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astAutoLayoutViewInstructionParameterList) ;
    const GGS_astAutoLayoutViewInstructionParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterType, p->mObject.mProperty_mParameter) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                               const GGS_lstring & in_mParameterName,
                                                                               const GGS_autoLayoutClassParameterType & in_mParameterType,
                                                                               const GGS_astAutoLayoutViewInstructionParameterValue & in_mParameter
                                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astAutoLayoutViewInstructionParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astAutoLayoutViewInstructionParameterList (in_mParameterName, in_mParameterType, in_mParameter COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewInstructionParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astAutoLayoutViewInstructionParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::description (String & ioString,
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
      ioString.appendString ("mParameterType:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterType.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mParameter:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameter.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::plusPlusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList_2E_element & inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                       const GGS_autoLayoutClassParameterType & inOperand1,
                                                                                                                       const GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                                        const GGS_autoLayoutClassParameterType & inOperand1,
                                                                        const GGS_astAutoLayoutViewInstructionParameterValue & inOperand2
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_append (const GGS_lstring inOperand0,
                                                                   const GGS_autoLayoutClassParameterType inOperand1,
                                                                   const GGS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                          const GGS_autoLayoutClassParameterType inOperand1,
                                                                          const GGS_astAutoLayoutViewInstructionParameterValue inOperand2,
                                                                          const GGS_uint inInsertionIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewInstructionParameterList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_astAutoLayoutViewInstructionParameterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                          GGS_autoLayoutClassParameterType & outOperand1,
                                                                          GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                          const GGS_uint inRemoveIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterType ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mParameter ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_popFirst (GGS_lstring & outOperand0,
                                                                     GGS_autoLayoutClassParameterType & outOperand1,
                                                                     GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameter ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::setter_popLast (GGS_lstring & outOperand0,
                                                                    GGS_autoLayoutClassParameterType & outOperand1,
                                                                    GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameter ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::method_first (GGS_lstring & outOperand0,
                                                                  GGS_autoLayoutClassParameterType & outOperand1,
                                                                  GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mParameter ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::method_last (GGS_lstring & outOperand0,
                                                                 GGS_autoLayoutClassParameterType & outOperand1,
                                                                 GGS_astAutoLayoutViewInstructionParameterValue & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mParameter ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::add_operation (const GGS_astAutoLayoutViewInstructionParameterList & inOperand,
                                                                                                            Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
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

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::subList (const int32_t inStart,
                                                                                                      const int32_t inLength,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
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

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterList::plusAssignOperation (const GGS_astAutoLayoutViewInstructionParameterList inList,
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

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
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

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterTypeAtIndex (GGS_autoLayoutClassParameterType inOperand,
                                                                                     GGS_uint inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType = inOperand ;
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
  
GGS_autoLayoutClassParameterType GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterType result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterType ;
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

void GGS_astAutoLayoutViewInstructionParameterList::setter_setMParameterAtIndex (GGS_astAutoLayoutViewInstructionParameterValue inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter = inOperand ;
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
  
GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterList::getter_mParameterAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameter ;
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
// Down Enumerator for @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutViewInstructionParameterList::DownEnumerator_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element DownEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue DownEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astAutoLayoutViewInstructionParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutViewInstructionParameterList::UpEnumerator_astAutoLayoutViewInstructionParameterList (const GGS_astAutoLayoutViewInstructionParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList_2E_element UpEnumerator_astAutoLayoutViewInstructionParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue UpEnumerator_astAutoLayoutViewInstructionParameterList::current_mParameter (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameter ;
}




//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ("astAutoLayoutViewInstructionParameterList",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterList GGS_astAutoLayoutViewInstructionParameterList::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterList result ;
  const GGS_astAutoLayoutViewInstructionParameterList * p = (const GGS_astAutoLayoutViewInstructionParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutTableViewControllerAttributListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutTableViewControllerAttributListAST : public CollectionElementPtr {
  public: GGS_autoLayoutTableViewControllerAttributListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                             const GGS_abstractDefaultValue & in_mAttributeValue
                                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerAttributListAST::CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (const GGS_lstring & in_mAttributeName,
                                                                                                                                      const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mAttributeName, in_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerAttributListAST::CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mAttributeName, inElement.mProperty_mAttributeValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutTableViewControllerAttributListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutTableViewControllerAttributListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (mObject.mProperty_mAttributeName, mObject.mProperty_mAttributeValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST::GGS_autoLayoutTableViewControllerAttributListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutTableViewControllerAttributListAST * p = (CollectionElementPtr_autoLayoutTableViewControllerAttributListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutTableViewControllerAttributListAST) ;
    const GGS_autoLayoutTableViewControllerAttributListAST_2E_element element (p->mObject.mProperty_mAttributeName, p->mObject.mProperty_mAttributeValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                  const GGS_lstring & in_mAttributeName,
                                                                                  const GGS_abstractDefaultValue & in_mAttributeValue
                                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutTableViewControllerAttributListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutTableViewControllerAttributListAST (in_mAttributeName, in_mAttributeValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerAttributListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerAttributListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::description (String & ioString,
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
      ioString.appendString ("mAttributeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAttributeValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAttributeValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST_2E_element & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                                                             const GGS_abstractDefaultValue & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                                           const GGS_abstractDefaultValue & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_append (const GGS_lstring inOperand0,
                                                                      const GGS_abstractDefaultValue inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                                             const GGS_abstractDefaultValue inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerAttributListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                                             GGS_abstractDefaultValue & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mAttributeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mAttributeValue ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                                        GGS_abstractDefaultValue & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::setter_popLast (GGS_lstring & outOperand0,
                                                                       GGS_abstractDefaultValue & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::method_first (GGS_lstring & outOperand0,
                                                                     GGS_abstractDefaultValue & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mAttributeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mAttributeValue ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::method_last (GGS_lstring & outOperand0,
                                                                    GGS_abstractDefaultValue & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mAttributeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mAttributeValue ;
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

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::add_operation (const GGS_autoLayoutTableViewControllerAttributListAST & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
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

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::subList (const int32_t inStart,
                                                                                                            const int32_t inLength,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
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

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST GGS_autoLayoutTableViewControllerAttributListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerAttributListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerAttributListAST::plusAssignOperation (const GGS_autoLayoutTableViewControllerAttributListAST inList,
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

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeNameAtIndex (GGS_lstring inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName = inOperand ;
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
  
GGS_lstring GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeNameAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeName ;
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

void GGS_autoLayoutTableViewControllerAttributListAST::setter_setMAttributeValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                                                         GGS_uint inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue = inOperand ;
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
  
GGS_abstractDefaultValue GGS_autoLayoutTableViewControllerAttributListAST::getter_mAttributeValueAtIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAttributeValue ;
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
// Down Enumerator for @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerAttributListAST::DownEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element DownEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue DownEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerAttributListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerAttributListAST::UpEnumerator_autoLayoutTableViewControllerAttributListAST (const GGS_autoLayoutTableViewControllerAttributListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerAttributListAST_2E_element UpEnumerator_autoLayoutTableViewControllerAttributListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue UpEnumerator_autoLayoutTableViewControllerAttributListAST::current_mAttributeValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAttributeValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerAttributListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerAttributListAST ("autoLayoutTableViewControllerAttributListAST",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerAttributListAST::staticTypeDescriptor (void) const {
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
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDefaultValue::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractDefaultValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue ("abstractDefaultValue",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDefaultValue::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
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

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (const GGS_abstractDeclarationAST & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_abstractDeclarationAST result ;
  if (isValid ()) {
    const cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST GGS_abstractDeclarationAST_2E_weak::bang_abstractDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDeclarationAST) ;
      result = GGS_abstractDeclarationAST ((cPtr_abstractDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ("abstractDeclarationAST.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak GGS_abstractDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractDeclarationAST_2E_weak result ;
  const GGS_abstractDeclarationAST_2E_weak * p = (const GGS_abstractDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_propertyGeneration_2E_weak::objectCompare (const GGS_propertyGeneration_2E_weak & inOperand) const {
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

GGS_propertyGeneration_2E_weak::GGS_propertyGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration_2E_weak & GGS_propertyGeneration_2E_weak::operator = (const GGS_propertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration GGS_propertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_propertyGeneration result ;
  if (isValid ()) {
    const cPtr_propertyGeneration * p = (cPtr_propertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_propertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration GGS_propertyGeneration_2E_weak::bang_propertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_propertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGeneration_2E_weak ("propertyGeneration.weak",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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
//     @autoLayoutTableViewControllerModelKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerModelKind ("autoLayoutTableViewControllerModelKind",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerModelKind::staticTypeDescriptor (void) const {
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
// @abstractFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractFileGeneration::objectCompare (const GGS_abstractFileGeneration & inOperand) const {
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

GGS_abstractFileGeneration::GGS_abstractFileGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractFileGeneration::
abstractFileGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration::GGS_abstractFileGeneration (const cPtr_abstractFileGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractFileGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractFileGeneration::cPtr_abstractFileGeneration (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
AbstractStrongPtrClass (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractFileGeneration::printNonNullClassInstanceProperties (void) const {
    AbstractStrongPtrClass::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractFileGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration ("abstractFileGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_abstractFileGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractFileGeneration result ;
  const GGS_abstractFileGeneration * p = (const GGS_abstractFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutTableViewControllerBoundColumnListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration : public CollectionElementPtr {
  public: GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_bool & in_mEditable,
                                                                                          const GGS_string & in_mSortPropertyName,
                                                                                          const GGS_string & in_mDisplayedPropertyName,
                                                                                          const GGS_string & in_mColumnObjectTypeName,
                                                                                          const GGS_string & in_mRunAction,
                                                                                          const GGS__32_stringlist & in_mActualParameterList
                                                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration::CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_bool & in_mEditable,
                                                                                                                                                                const GGS_string & in_mSortPropertyName,
                                                                                                                                                                const GGS_string & in_mDisplayedPropertyName,
                                                                                                                                                                const GGS_string & in_mColumnObjectTypeName,
                                                                                                                                                                const GGS_string & in_mRunAction,
                                                                                                                                                                const GGS__32_stringlist & in_mActualParameterList
                                                                                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEditable, in_mSortPropertyName, in_mDisplayedPropertyName, in_mColumnObjectTypeName, in_mRunAction, in_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration::CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEditable, inElement.mProperty_mSortPropertyName, inElement.mProperty_mDisplayedPropertyName, inElement.mProperty_mColumnObjectTypeName, inElement.mProperty_mRunAction, inElement.mProperty_mActualParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (mObject.mProperty_mEditable, mObject.mProperty_mSortPropertyName, mObject.mProperty_mDisplayedPropertyName, mObject.mProperty_mColumnObjectTypeName, mObject.mProperty_mRunAction, mObject.mProperty_mActualParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerBoundColumnListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::GGS_autoLayoutTableViewControllerBoundColumnListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration * p = (CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration) ;
    const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element element (p->mObject.mProperty_mEditable, p->mObject.mProperty_mSortPropertyName, p->mObject.mProperty_mDisplayedPropertyName, p->mObject.mProperty_mColumnObjectTypeName, p->mObject.mProperty_mRunAction, p->mObject.mProperty_mActualParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                               const GGS_bool & in_mEditable,
                                                                                               const GGS_string & in_mSortPropertyName,
                                                                                               const GGS_string & in_mDisplayedPropertyName,
                                                                                               const GGS_string & in_mColumnObjectTypeName,
                                                                                               const GGS_string & in_mRunAction,
                                                                                               const GGS__32_stringlist & in_mActualParameterList
                                                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutTableViewControllerBoundColumnListForGeneration (in_mEditable, in_mSortPropertyName, in_mDisplayedPropertyName, in_mColumnObjectTypeName, in_mRunAction, in_mActualParameterList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::description (String & ioString,
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
      ioString.appendString ("mEditable:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEditable.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSortPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSortPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDisplayedPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDisplayedPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mColumnObjectTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mColumnObjectTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRunAction:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRunAction.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mActualParameterList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActualParameterList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element & inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::class_func_listWithValue (const GGS_bool & inOperand0,
                                                                                                                                                       const GGS_string & inOperand1,
                                                                                                                                                       const GGS_string & inOperand2,
                                                                                                                                                       const GGS_string & inOperand3,
                                                                                                                                                       const GGS_string & inOperand4,
                                                                                                                                                       const GGS__32_stringlist & inOperand5
                                                                                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::addAssignOperation (const GGS_bool & inOperand0,
                                                                                        const GGS_string & inOperand1,
                                                                                        const GGS_string & inOperand2,
                                                                                        const GGS_string & inOperand3,
                                                                                        const GGS_string & inOperand4,
                                                                                        const GGS__32_stringlist & inOperand5
                                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
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
  const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_removeAtIndex (GGS_bool & outOperand0,
                                                                                          GGS_string & outOperand1,
                                                                                          GGS_string & outOperand2,
                                                                                          GGS_string & outOperand3,
                                                                                          GGS_string & outOperand4,
                                                                                          GGS__32_stringlist & outOperand5,
                                                                                          const GGS_uint inRemoveIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEditable ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSortPropertyName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mDisplayedPropertyName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mColumnObjectTypeName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mRunAction ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mActualParameterList ;
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDisplayedPropertyName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mColumnObjectTypeName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mRunAction ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mActualParameterList ;
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
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDisplayedPropertyName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mColumnObjectTypeName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mRunAction ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mActualParameterList ;
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEditable ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSortPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDisplayedPropertyName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mColumnObjectTypeName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mRunAction ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mActualParameterList ;
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
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEditable ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSortPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDisplayedPropertyName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mColumnObjectTypeName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mRunAction ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mActualParameterList ;
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
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::add_operation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inOperand,
                                                                                                                                            Compiler * /* inCompiler */
                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
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

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::subList (const int32_t inStart,
                                                                                                                                      const int32_t inLength,
                                                                                                                                      Compiler * inCompiler
                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
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

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                                    Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::plusAssignOperation (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration inList,
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMEditableAtIndex (GGS_bool inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable = inOperand ;
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
  
GGS_bool GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mEditableAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEditable ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMSortPropertyNameAtIndex (GGS_string inOperand,
                                                                                                        GGS_uint inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mSortPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMDisplayedPropertyNameAtIndex (GGS_string inOperand,
                                                                                                             GGS_uint inIndex,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayedPropertyName = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mDisplayedPropertyNameAtIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDisplayedPropertyName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMColumnObjectTypeNameAtIndex (GGS_string inOperand,
                                                                                                            GGS_uint inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnObjectTypeName = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mColumnObjectTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnObjectTypeName ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMRunActionAtIndex (GGS_string inOperand,
                                                                                                 GGS_uint inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRunAction = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mRunActionAtIndex (const GGS_uint & inIndex,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRunAction ;
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

void GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::setter_setMActualParameterListAtIndex (GGS__32_stringlist inOperand,
                                                                                                           GGS_uint inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameterList = inOperand ;
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
  
GGS__32_stringlist GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::getter_mActualParameterListAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActualParameterList ;
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
// Down Enumerator for @autoLayoutTableViewControllerBoundColumnListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mDisplayedPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameterList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerBoundColumnListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration (const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mEditable (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEditable ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mSortPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mDisplayedPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDisplayedPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mColumnObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mRunAction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration::current_mActualParameterList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActualParameterList ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerBoundColumnListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration ("autoLayoutTableViewControllerBoundColumnListForGeneration",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::staticTypeDescriptor (void) const {
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
//Class for element of '@autoLayoutTableViewControllerSortedColumnListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration : public CollectionElementPtr {
  public: GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_string & in_mColumnName,
                                                                                           const GGS_propertyKind & in_mSortPropertyKind,
                                                                                           const GGS_string & in_mObservablePropertyForSorting
                                                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration::CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_string & in_mColumnName,
                                                                                                                                                                  const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                                                                                  const GGS_string & in_mObservablePropertyForSorting
                                                                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration::CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mColumnName, inElement.mProperty_mSortPropertyKind, inElement.mProperty_mObservablePropertyForSorting) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (mObject.mProperty_mColumnName, mObject.mProperty_mSortPropertyKind, mObject.mProperty_mObservablePropertyForSorting COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutTableViewControllerSortedColumnListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::GGS_autoLayoutTableViewControllerSortedColumnListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration * p = (CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration) ;
    const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element element (p->mObject.mProperty_mColumnName, p->mObject.mProperty_mSortPropertyKind, p->mObject.mProperty_mObservablePropertyForSorting) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                                const GGS_string & in_mColumnName,
                                                                                                const GGS_propertyKind & in_mSortPropertyKind,
                                                                                                const GGS_string & in_mObservablePropertyForSorting
                                                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutTableViewControllerSortedColumnListForGeneration (in_mColumnName, in_mSortPropertyKind, in_mObservablePropertyForSorting COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::description (String & ioString,
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
      ioString.appendString ("mColumnName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mColumnName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mSortPropertyKind:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mSortPropertyKind.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObservablePropertyForSorting:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObservablePropertyForSorting.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::plusPlusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element & inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                                         const GGS_propertyKind & inOperand1,
                                                                                                                                                         const GGS_string & inOperand2
                                                                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                                         const GGS_propertyKind & inOperand1,
                                                                                         const GGS_string & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_append (const GGS_string inOperand0,
                                                                                    const GGS_propertyKind inOperand1,
                                                                                    const GGS_string inOperand2,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                           const GGS_propertyKind inOperand1,
                                                                                           const GGS_string inOperand2,
                                                                                           const GGS_uint inInsertionIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                           GGS_propertyKind & outOperand1,
                                                                                           GGS_string & outOperand2,
                                                                                           const GGS_uint inRemoveIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mColumnName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mSortPropertyKind ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mObservablePropertyForSorting ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                                      GGS_propertyKind & outOperand1,
                                                                                      GGS_string & outOperand2,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mColumnName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSortPropertyKind ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mObservablePropertyForSorting ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                                     GGS_propertyKind & outOperand1,
                                                                                     GGS_string & outOperand2,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mColumnName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSortPropertyKind ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mObservablePropertyForSorting ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_first (GGS_string & outOperand0,
                                                                                   GGS_propertyKind & outOperand1,
                                                                                   GGS_string & outOperand2,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mColumnName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mSortPropertyKind ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mObservablePropertyForSorting ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::method_last (GGS_string & outOperand0,
                                                                                  GGS_propertyKind & outOperand1,
                                                                                  GGS_string & outOperand2,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mColumnName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mSortPropertyKind ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mObservablePropertyForSorting ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::add_operation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inOperand,
                                                                                                                                              Compiler * /* inCompiler */
                                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
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

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::subList (const int32_t inStart,
                                                                                                                                        const int32_t inLength,
                                                                                                                                        Compiler * inCompiler
                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
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

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                                        Compiler * inCompiler
                                                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                                      Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::plusAssignOperation (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration inList,
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

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMColumnNameAtIndex (GGS_string inOperand,
                                                                                                   GGS_uint inIndex,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnName = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mColumnNameAtIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mColumnName ;
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

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMSortPropertyKindAtIndex (GGS_propertyKind inOperand,
                                                                                                         GGS_uint inIndex,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyKind = inOperand ;
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
  
GGS_propertyKind GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mSortPropertyKindAtIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_propertyKind result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mSortPropertyKind ;
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

void GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::setter_setMObservablePropertyForSortingAtIndex (GGS_string inOperand,
                                                                                                                     GGS_uint inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObservablePropertyForSorting = inOperand ;
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
  
GGS_string GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::getter_mObservablePropertyForSortingAtIndex (const GGS_uint & inIndex,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObservablePropertyForSorting ;
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
// Down Enumerator for @autoLayoutTableViewControllerSortedColumnListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservablePropertyForSorting ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutTableViewControllerSortedColumnListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration (const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mColumnName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mColumnName ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mSortPropertyKind (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mSortPropertyKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration::current_mObservablePropertyForSorting (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservablePropertyForSorting ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutTableViewControllerSortedColumnListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration ("autoLayoutTableViewControllerSortedColumnListForGeneration",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_abstractFileGeneration_2E_weak::objectCompare (const GGS_abstractFileGeneration_2E_weak & inOperand) const {
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

GGS_abstractFileGeneration_2E_weak::GGS_abstractFileGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak & GGS_abstractFileGeneration_2E_weak::operator = (const GGS_abstractFileGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak::GGS_abstractFileGeneration_2E_weak (const GGS_abstractFileGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak GGS_abstractFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_abstractFileGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractFileGeneration result ;
  if (isValid ()) {
    const cPtr_abstractFileGeneration * p = (cPtr_abstractFileGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractFileGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_abstractFileGeneration_2E_weak::bang_abstractFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractFileGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractFileGeneration) ;
      result = GGS_abstractFileGeneration ((cPtr_abstractFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractFileGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ("abstractFileGeneration.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak GGS_abstractFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractFileGeneration_2E_weak result ;
  const GGS_abstractFileGeneration_2E_weak * p = (const GGS_abstractFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@mainXibDescriptorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_mainXibDescriptorList : public CollectionElementPtr {
  public: GGS_mainXibDescriptorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_mainXibDescriptorList (const GGS_mainXibLineDescriptorList & in_mLine
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_mainXibDescriptorList (const GGS_mainXibDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_mainXibDescriptorList::CollectionElementPtr_mainXibDescriptorList (const GGS_mainXibLineDescriptorList & in_mLine
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLine) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_mainXibDescriptorList::CollectionElementPtr_mainXibDescriptorList (const GGS_mainXibDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLine) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_mainXibDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_mainXibDescriptorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_mainXibDescriptorList (mObject.mProperty_mLine COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @mainXibDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList::GGS_mainXibDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList::GGS_mainXibDescriptorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_mainXibDescriptorList * p = (CollectionElementPtr_mainXibDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_mainXibDescriptorList) ;
    const GGS_mainXibDescriptorList_2E_element element (p->mObject.mProperty_mLine) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_mainXibLineDescriptorList & in_mLine
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_mainXibDescriptorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_mainXibDescriptorList (in_mLine COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_mainXibDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_mainXibDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::description (String & ioString,
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
      ioString.appendString ("mLine:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLine.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::plusPlusAssignOperation (const GGS_mainXibDescriptorList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::class_func_listWithValue (const GGS_mainXibLineDescriptorList & inOperand0
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_mainXibDescriptorList_2E_element element (inOperand0) ;
  GGS_mainXibDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::addAssignOperation (const GGS_mainXibLineDescriptorList & inOperand0
                                                    COMMA_LOCATION_ARGS) {
  const GGS_mainXibDescriptorList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::setter_append (const GGS_mainXibLineDescriptorList inOperand0,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_mainXibDescriptorList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::setter_insertAtIndex (const GGS_mainXibLineDescriptorList inOperand0,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_mainXibDescriptorList_2E_element newElement (inOperand0) ;
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

void GGS_mainXibDescriptorList::setter_removeAtIndex (GGS_mainXibLineDescriptorList & outOperand0,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLine ;
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

void GGS_mainXibDescriptorList::setter_popFirst (GGS_mainXibLineDescriptorList & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLine ;
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

void GGS_mainXibDescriptorList::setter_popLast (GGS_mainXibLineDescriptorList & outOperand0,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLine ;
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

void GGS_mainXibDescriptorList::method_first (GGS_mainXibLineDescriptorList & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLine ;
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

void GGS_mainXibDescriptorList::method_last (GGS_mainXibLineDescriptorList & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLine ;
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

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::add_operation (const GGS_mainXibDescriptorList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mainXibDescriptorList result ;
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

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_mainXibDescriptorList result ;
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

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_mainXibDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_mainXibDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_mainXibDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibDescriptorList::plusAssignOperation (const GGS_mainXibDescriptorList inList,
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

void GGS_mainXibDescriptorList::setter_setMLineAtIndex (GGS_mainXibLineDescriptorList inOperand,
                                                        GGS_uint inIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLine = inOperand ;
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
  
GGS_mainXibLineDescriptorList GGS_mainXibDescriptorList::getter_mLineAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLine ;
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
// Down Enumerator for @mainXibDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_mainXibDescriptorList::DownEnumerator_mainXibDescriptorList (const GGS_mainXibDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element DownEnumerator_mainXibDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList DownEnumerator_mainXibDescriptorList::current_mLine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLine ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mainXibDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_mainXibDescriptorList::UpEnumerator_mainXibDescriptorList (const GGS_mainXibDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList_2E_element UpEnumerator_mainXibDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList UpEnumerator_mainXibDescriptorList::current_mLine (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLine ;
}




//--------------------------------------------------------------------------------------------------
//     @mainXibDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibDescriptorList ("mainXibDescriptorList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_mainXibDescriptorList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_mainXibDescriptorList result ;
  const GGS_mainXibDescriptorList * p = (const GGS_mainXibDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@mainXibLineDescriptorList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_mainXibLineDescriptorList : public CollectionElementPtr {
  public: GGS_mainXibLineDescriptorList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_mainXibLineDescriptorList::CollectionElementPtr_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_mainXibLineDescriptorList::CollectionElementPtr_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_mainXibLineDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_mainXibLineDescriptorList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_mainXibLineDescriptorList * p = (CollectionElementPtr_mainXibLineDescriptorList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_mainXibLineDescriptorList) ;
    const GGS_mainXibLineDescriptorList_2E_element element (p->mObject.mProperty_mElement) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_mainXibElement & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_mainXibLineDescriptorList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_mainXibLineDescriptorList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_mainXibLineDescriptorList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::description (String & ioString,
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
      ioString.appendString ("mElement:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mElement.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::plusPlusAssignOperation (const GGS_mainXibLineDescriptorList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::class_func_listWithValue (const GGS_mainXibElement & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element element (inOperand0) ;
  GGS_mainXibLineDescriptorList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::addAssignOperation (const GGS_mainXibElement & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_append (const GGS_mainXibElement inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_insertAtIndex (const GGS_mainXibElement inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_mainXibLineDescriptorList_2E_element newElement (inOperand0) ;
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

void GGS_mainXibLineDescriptorList::setter_removeAtIndex (GGS_mainXibElement & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mElement ;
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

void GGS_mainXibLineDescriptorList::setter_popFirst (GGS_mainXibElement & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
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

void GGS_mainXibLineDescriptorList::setter_popLast (GGS_mainXibElement & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
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

void GGS_mainXibLineDescriptorList::method_first (GGS_mainXibElement & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mElement ;
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

void GGS_mainXibLineDescriptorList::method_last (GGS_mainXibElement & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mElement ;
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

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::add_operation (const GGS_mainXibLineDescriptorList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
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

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
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

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::plusAssignOperation (const GGS_mainXibLineDescriptorList inList,
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

void GGS_mainXibLineDescriptorList::setter_setMElementAtIndex (GGS_mainXibElement inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mElement = inOperand ;
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
  
GGS_mainXibElement GGS_mainXibLineDescriptorList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_mainXibElement result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mElement ;
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
// Down Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_mainXibLineDescriptorList::DownEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element DownEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement DownEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_mainXibLineDescriptorList::UpEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element UpEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement UpEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @mainXibLineDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibLineDescriptorList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibLineDescriptorList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  const GGS_mainXibLineDescriptorList * p = (const GGS_mainXibLineDescriptorList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibLineDescriptorList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum mainXibElement
//--------------------------------------------------------------------------------------------------

GGS_mainXibElement::GGS_mainXibElement (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::class_func_text (const GGS_lstring & inAssociatedValue0
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  result.mEnum = Enumeration::enum_text ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_mainXibElement_2E_text (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::class_func_outlet (const GGS_lstring & inAssociatedValue0,
                                                          const GGS_lstring & inAssociatedValue1
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  result.mEnum = Enumeration::enum_outlet ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_mainXibElement_2E_outlet (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::method_extractText (GGS_lstring & outAssociatedValue_text,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_text) {
    outAssociatedValue_text.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement.text invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_text = ptr->mProperty_text ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::method_extractOutlet (GGS_lstring & outAssociatedValue_outletType,
                                               GGS_lstring & outAssociatedValue_outletName,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_outlet) {
    outAssociatedValue_outletType.drop () ;
    outAssociatedValue_outletName.drop () ;
    String s ;
    s.appendCString ("method @mainXibElement.outlet invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_outletType = ptr->mProperty_outletType ;
    outAssociatedValue_outletName = ptr->mProperty_outletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_text_3F_ GGS_mainXibElement::getter_getText (UNUSED_LOCATION_ARGS) const {
  GGS_mainXibElement_2E_text_3F_ result ;
  if (mEnum == Enumeration::enum_text) {
    const auto ptr = (const GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_mainXibElement_2E_text (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::getAssociatedValuesFor_text (GGS_lstring & out_text) const {
  const auto ptr = (const GGS_mainXibElement_2E_text *) mAssociatedValues.associatedValuesPointer () ;
  out_text = ptr->mProperty_text ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement_2E_outlet_3F_ GGS_mainXibElement::getter_getOutlet (UNUSED_LOCATION_ARGS) const {
  GGS_mainXibElement_2E_outlet_3F_ result ;
  if (mEnum == Enumeration::enum_outlet) {
    const auto ptr = (const GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_mainXibElement_2E_outlet (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::getAssociatedValuesFor_outlet (GGS_lstring & out_outletType,
                                                        GGS_lstring & out_outletName) const {
  const auto ptr = (const GGS_mainXibElement_2E_outlet *) mAssociatedValues.associatedValuesPointer () ;
  out_outletType = ptr->mProperty_outletType ;
  out_outletName = ptr->mProperty_outletName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_mainXibElement [3] = {
  "(not built)",
  "text",
  "outlet"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mainXibElement::getter_isText (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_text == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_mainXibElement::getter_isOutlet (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_outlet == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibElement::description (String & ioString,
                                      const int32_t inIndentation) const {
  ioString.appendCString ("<enum @mainXibElement: ") ;
  ioString.appendCString (gEnumNameArrayFor_mainXibElement [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @mainXibElement generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_mainXibElement::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibElement ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_mainXibElement::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_mainXibElement (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibElement::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_mainXibElement result ;
  const GGS_mainXibElement * p = (const GGS_mainXibElement *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_mainXibElement *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibElement", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@mainXibDescriptorList generateCode'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_generateCode (const GGS_mainXibDescriptorList & inObject,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("main-xib.galgas4", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GGS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_count (SOURCE_FILE ("main-xib.galgas4", 88)).getter_string (SOURCE_FILE ("main-xib.galgas4", 88)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 88)).add_operation (GGS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 88)) ;
      result_outResult.plusAssignOperation(GGS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 89)) ;
      GGS_bigint var_idx_2876 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 90)) ;
      GGS_bigint var_columnMax_2892 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 91)) ;
      const GGS_mainXibDescriptorList temp_3 = inObject ;
      UpEnumerator_mainXibDescriptorList enumerator_2915 (temp_3) ;
      while (enumerator_2915.hasCurrentObject ()) {
        GGS_bigint var_column_2943 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 93)) ;
        result_outResult.plusAssignOperation(GGS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 94)) ;
        UpEnumerator_mainXibLineDescriptorList enumerator_3011 (enumerator_2915.current_mLine (HERE)) ;
        while (enumerator_3011.hasCurrentObject ()) {
          switch (enumerator_3011.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            {
              GGS_lstring extractedValue_3076_t_0 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_text (extractedValue_3076_t_0) ;
              var_idx_2876.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 98)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 98)) ;
              result_outResult.plusAssignOperation(GGS_string ("  //--- Text ").add_operation (extractedValue_3076_t_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 99)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 99)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 99)) ;
              result_outResult.plusAssignOperation(GGS_string ("  //  createTextFieldForText (").add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas4", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 100)).add_operation (GGS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 100)) ;
              result_outResult.plusAssignOperation(GGS_string ("    let tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 101)).add_operation (GGS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 101)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.galgas4", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 101)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 101)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 102)).add_operation (GGS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 102)).add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas4", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 102)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 103)).add_operation (GGS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 103)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 104)).add_operation (GGS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 104)) ;
              result_outResult.plusAssignOperation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 105)).add_operation (GGS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 105)) ;
              result_outResult.plusAssignOperation(GGS_string ("    view.addSubview (tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.galgas4", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 106)) ;
            }
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_3804_outletType_0 ;
              GGS_lstring extractedValue_3816_outletName_1 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_3804_outletType_0, extractedValue_3816_outletName_1) ;
              result_outResult.plusAssignOperation(GGS_string ("  //--- Outlet ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 108)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 108)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 108)) ;
              result_outResult.plusAssignOperation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)).add_operation (extractedValue_3804_outletType_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)).add_operation (GGS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.galgas4", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 109)) ;
              result_outResult.plusAssignOperation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 110)).add_operation (GGS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 110)).add_operation (extractedValue_3816_outletName_1.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.galgas4", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 110)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 110)) ;
              result_outResult.plusAssignOperation(GGS_string ("    view.addSubview (").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 111)).add_operation (GGS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 111)) ;
            }
            break ;
          }
          var_column_2943.plusAssignOperation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 113)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 113)) ;
          enumerator_3011.gotoNextObject () ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::greaterThan, var_column_2943.objectCompare (var_columnMax_2892)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_columnMax_2892 = var_column_2943 ;
          }
        }
        result_outResult.plusAssignOperation(GGS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 118)) ;
        enumerator_2915.gotoNextObject () ;
      }
      result_outResult.plusAssignOperation(GGS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 120)) ;
      const GGS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssignOperation(GGS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_2892.getter_string (SOURCE_FILE ("main-xib.galgas4", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 121)).add_operation (GGS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 121)).add_operation (temp_5.getter_count (SOURCE_FILE ("main-xib.galgas4", 121)).getter_string (SOURCE_FILE ("main-xib.galgas4", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 121)).add_operation (GGS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 121)), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 121)) ;
      result_outResult.plusAssignOperation(GGS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.galgas4", 122)) ;
    }
  }
//---
  return result_outResult ;
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
  GGS_stringlist result = GGS_stringlist::init (nullptr COMMA_THERE) ;
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
//Class for element of '@validationStubRoutineListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_validationStubRoutineListForGeneration : public CollectionElementPtr {
  public: GGS_validationStubRoutineListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_validationStubRoutineListForGeneration (const GGS_string & in_mObjectTypeName,
                                                                       const GGS_string & in_mModelName,
                                                                       const GGS_string & in_mModelTypeName
                                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_validationStubRoutineListForGeneration::CollectionElementPtr_validationStubRoutineListForGeneration (const GGS_string & in_mObjectTypeName,
                                                                                                                          const GGS_string & in_mModelName,
                                                                                                                          const GGS_string & in_mModelTypeName
                                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mObjectTypeName, in_mModelName, in_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_validationStubRoutineListForGeneration::CollectionElementPtr_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mObjectTypeName, inElement.mProperty_mModelName, inElement.mProperty_mModelTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_validationStubRoutineListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_validationStubRoutineListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_validationStubRoutineListForGeneration (mObject.mProperty_mObjectTypeName, mObject.mProperty_mModelName, mObject.mProperty_mModelTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration::GGS_validationStubRoutineListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration::GGS_validationStubRoutineListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_validationStubRoutineListForGeneration * p = (CollectionElementPtr_validationStubRoutineListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_validationStubRoutineListForGeneration) ;
    const GGS_validationStubRoutineListForGeneration_2E_element element (p->mObject.mProperty_mObjectTypeName, p->mObject.mProperty_mModelName, p->mObject.mProperty_mModelTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                            const GGS_string & in_mObjectTypeName,
                                                                            const GGS_string & in_mModelName,
                                                                            const GGS_string & in_mModelTypeName
                                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_validationStubRoutineListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_validationStubRoutineListForGeneration (in_mObjectTypeName, in_mModelName, in_mModelTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_validationStubRoutineListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_validationStubRoutineListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::description (String & ioString,
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
      ioString.appendString ("mObjectTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObjectTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mModelTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mModelTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::plusPlusAssignOperation (const GGS_validationStubRoutineListForGeneration_2E_element & inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                 const GGS_string & inOperand1,
                                                                                                                 const GGS_string & inOperand2
                                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_validationStubRoutineListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                                     const GGS_string & inOperand1,
                                                                     const GGS_string & inOperand2
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_append (const GGS_string inOperand0,
                                                                const GGS_string inOperand1,
                                                                const GGS_string inOperand2,
                                                                Compiler * /* inCompiler */
                                                                COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                                       const GGS_string inOperand1,
                                                                       const GGS_string inOperand2,
                                                                       const GGS_uint inInsertionIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_validationStubRoutineListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_validationStubRoutineListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                                       GGS_string & outOperand1,
                                                                       GGS_string & outOperand2,
                                                                       const GGS_uint inRemoveIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mModelName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mModelTypeName ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                                  GGS_string & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                                 GGS_string & outOperand1,
                                                                 GGS_string & outOperand2,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::method_first (GGS_string & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mModelName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mModelTypeName ;
    }else{
      const String message = "cannot get first element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::method_last (GGS_string & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_string & outOperand2,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObjectTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mModelName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mModelTypeName ;
    }else{
      const String message = "cannot get last element, list is empty" ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }
  }
  if (!found) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::add_operation (const GGS_validationStubRoutineListForGeneration & inOperand,
                                                                                                      Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
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

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::subList (const int32_t inStart,
                                                                                                const int32_t inLength,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
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

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_validationStubRoutineListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_validationStubRoutineListForGeneration::plusAssignOperation (const GGS_validationStubRoutineListForGeneration inList,
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

void GGS_validationStubRoutineListForGeneration::setter_setMObjectTypeNameAtIndex (GGS_string inOperand,
                                                                                   GGS_uint inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectTypeName = inOperand ;
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
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mObjectTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObjectTypeName ;
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

void GGS_validationStubRoutineListForGeneration::setter_setMModelNameAtIndex (GGS_string inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mModelName = inOperand ;
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
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mModelNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mModelName ;
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

void GGS_validationStubRoutineListForGeneration::setter_setMModelTypeNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_validationStubRoutineListForGeneration::getter_mModelTypeNameAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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
// Down Enumerator for @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_validationStubRoutineListForGeneration::DownEnumerator_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element DownEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @validationStubRoutineListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_validationStubRoutineListForGeneration::UpEnumerator_validationStubRoutineListForGeneration (const GGS_validationStubRoutineListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration_2E_element UpEnumerator_validationStubRoutineListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mObjectTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObjectTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mModelName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_validationStubRoutineListForGeneration::current_mModelTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mModelTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @validationStubRoutineListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ("validationStubRoutineListForGeneration",
                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_validationStubRoutineListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_validationStubRoutineListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_validationStubRoutineListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_validationStubRoutineListForGeneration GGS_validationStubRoutineListForGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_validationStubRoutineListForGeneration result ;
  const GGS_validationStubRoutineListForGeneration * p = (const GGS_validationStubRoutineListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_validationStubRoutineListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("validationStubRoutineListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionAST ("toManyRelationshipOptionAST",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionAST::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyRelationshipAST_2E_weak::objectCompare (const GGS_toManyRelationshipAST_2E_weak & inOperand) const {
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

GGS_toManyRelationshipAST_2E_weak::GGS_toManyRelationshipAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak & GGS_toManyRelationshipAST_2E_weak::operator = (const GGS_toManyRelationshipAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak::GGS_toManyRelationshipAST_2E_weak (const GGS_toManyRelationshipAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak GGS_toManyRelationshipAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toManyRelationshipAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST_2E_weak::unwrappedValue (void) const {
  GGS_toManyRelationshipAST result ;
  if (isValid ()) {
    const cPtr_toManyRelationshipAST * p = (cPtr_toManyRelationshipAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_toManyRelationshipAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST GGS_toManyRelationshipAST_2E_weak::bang_toManyRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyRelationshipAST) ;
      result = GGS_toManyRelationshipAST ((cPtr_toManyRelationshipAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ("toManyRelationshipAST.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipAST_2E_weak GGS_toManyRelationshipAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipAST_2E_weak result ;
  const GGS_toManyRelationshipAST_2E_weak * p = (const GGS_toManyRelationshipAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum toManyRelationshipOptionGeneration
//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration::GGS_toManyRelationshipOptionGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_hasOpposite (const GGS_string & inAssociatedValue0
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_hasOpposite ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::class_func_hasDependance (const GGS_string & inAssociatedValue0,
                                                                                                         const GGS_string & inAssociatedValue1
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  result.mEnum = Enumeration::enum_hasDependance ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_toManyRelationshipOptionGeneration_2E_hasDependance (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::method_extractHasOpposite (GGS_string & outAssociatedValue_oppositeName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasOpposite) {
    outAssociatedValue_oppositeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionGeneration.hasOpposite invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_oppositeName = ptr->mProperty_oppositeName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::method_extractHasDependance (GGS_string & outAssociatedValue_masterPropertyName,
                                                                          GGS_string & outAssociatedValue_masterPropertySwiftTypeName,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_hasDependance) {
    outAssociatedValue_masterPropertyName.drop () ;
    outAssociatedValue_masterPropertySwiftTypeName.drop () ;
    String s ;
    s.appendCString ("method @toManyRelationshipOptionGeneration.hasDependance invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_masterPropertyName = ptr->mProperty_masterPropertyName ;
    outAssociatedValue_masterPropertySwiftTypeName = ptr->mProperty_masterPropertySwiftTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ GGS_toManyRelationshipOptionGeneration::getter_getHasOpposite (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ result ;
  if (mEnum == Enumeration::enum_hasOpposite) {
    const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionGeneration_2E_hasOpposite (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::getAssociatedValuesFor_hasOpposite (GGS_string & out_oppositeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasOpposite *) mAssociatedValues.associatedValuesPointer () ;
  out_oppositeName = ptr->mProperty_oppositeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ GGS_toManyRelationshipOptionGeneration::getter_getHasDependance (UNUSED_LOCATION_ARGS) const {
  GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ result ;
  if (mEnum == Enumeration::enum_hasDependance) {
    const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_toManyRelationshipOptionGeneration_2E_hasDependance (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::getAssociatedValuesFor_hasDependance (GGS_string & out_masterPropertyName,
                                                                                   GGS_string & out_masterPropertySwiftTypeName) const {
  const auto ptr = (const GGS_toManyRelationshipOptionGeneration_2E_hasDependance *) mAssociatedValues.associatedValuesPointer () ;
  out_masterPropertyName = ptr->mProperty_masterPropertyName ;
  out_masterPropertySwiftTypeName = ptr->mProperty_masterPropertySwiftTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_toManyRelationshipOptionGeneration [4] = {
  "(not built)",
  "none",
  "hasOpposite",
  "hasDependance"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isHasOpposite (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasOpposite == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toManyRelationshipOptionGeneration::getter_isHasDependance (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_hasDependance == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyRelationshipOptionGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<enum @toManyRelationshipOptionGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_toManyRelationshipOptionGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @toManyRelationshipOptionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ("toManyRelationshipOptionGeneration",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyRelationshipOptionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyRelationshipOptionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyRelationshipOptionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyRelationshipOptionGeneration GGS_toManyRelationshipOptionGeneration::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_toManyRelationshipOptionGeneration result ;
  const GGS_toManyRelationshipOptionGeneration * p = (const GGS_toManyRelationshipOptionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyRelationshipOptionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyRelationshipOptionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toManyPropertyGeneration_2E_weak::objectCompare (const GGS_toManyPropertyGeneration_2E_weak & inOperand) const {
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

GGS_toManyPropertyGeneration_2E_weak::GGS_toManyPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak & GGS_toManyPropertyGeneration_2E_weak::operator = (const GGS_toManyPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak::GGS_toManyPropertyGeneration_2E_weak (const GGS_toManyPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak GGS_toManyPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_toManyPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_toManyPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_toManyPropertyGeneration * p = (cPtr_toManyPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_toManyPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration GGS_toManyPropertyGeneration_2E_weak::bang_toManyPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_toManyPropertyGeneration) ;
      result = GGS_toManyPropertyGeneration ((cPtr_toManyPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ("toManyPropertyGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration_2E_weak GGS_toManyPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGeneration_2E_weak result ;
  const GGS_toManyPropertyGeneration_2E_weak * p = (const GGS_toManyPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@toManyPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_toManyPropertyGenerationList : public CollectionElementPtr {
  public: GGS_toManyPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_toManyPropertyGenerationList (const GGS_toManyPropertyGeneration & in_mProperty
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toManyPropertyGenerationList::CollectionElementPtr_toManyPropertyGenerationList (const GGS_toManyPropertyGeneration & in_mProperty
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toManyPropertyGenerationList::CollectionElementPtr_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_toManyPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_toManyPropertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_toManyPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList::GGS_toManyPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList::GGS_toManyPropertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_toManyPropertyGenerationList * p = (CollectionElementPtr_toManyPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_toManyPropertyGenerationList) ;
    const GGS_toManyPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_toManyPropertyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_toManyPropertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_toManyPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_toManyPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_toManyPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::description (String & ioString,
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
      ioString.appendString ("mProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::plusPlusAssignOperation (const GGS_toManyPropertyGenerationList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::class_func_listWithValue (const GGS_toManyPropertyGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_toManyPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::addAssignOperation (const GGS_toManyPropertyGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_append (const GGS_toManyPropertyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::setter_insertAtIndex (const GGS_toManyPropertyGeneration inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_toManyPropertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_toManyPropertyGenerationList::setter_removeAtIndex (GGS_toManyPropertyGeneration & outOperand0,
                                                             const GGS_uint inRemoveIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mProperty ;
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

void GGS_toManyPropertyGenerationList::setter_popFirst (GGS_toManyPropertyGeneration & outOperand0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
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

void GGS_toManyPropertyGenerationList::setter_popLast (GGS_toManyPropertyGeneration & outOperand0,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
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

void GGS_toManyPropertyGenerationList::method_first (GGS_toManyPropertyGeneration & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mProperty ;
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

void GGS_toManyPropertyGenerationList::method_last (GGS_toManyPropertyGeneration & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mProperty ;
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

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::add_operation (const GGS_toManyPropertyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
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

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
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

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList::plusAssignOperation (const GGS_toManyPropertyGenerationList inList,
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

void GGS_toManyPropertyGenerationList::setter_setMPropertyAtIndex (GGS_toManyPropertyGeneration inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty = inOperand ;
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
  
GGS_toManyPropertyGeneration GGS_toManyPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_toManyPropertyGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProperty ;
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
// Down Enumerator for @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toManyPropertyGenerationList::DownEnumerator_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element DownEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration DownEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toManyPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toManyPropertyGenerationList::UpEnumerator_toManyPropertyGenerationList (const GGS_toManyPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element UpEnumerator_toManyPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGeneration UpEnumerator_toManyPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList ("toManyPropertyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyPropertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList GGS_toManyPropertyGenerationList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList result ;
  const GGS_toManyPropertyGenerationList * p = (const GGS_toManyPropertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@outletDeclarationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_outletDeclarationList : public CollectionElementPtr {
  public: GGS_outletDeclarationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                      const GGS_lstring & in_mOutletName,
                                                      const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                      const GGS_runActionDescriptor & in_mRunDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                      const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                      const GGS_regularBindingList & in_mRegularBindingList,
                                                      const GGS_graphicController & in_mGraphicController
                                                      COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletDeclarationList::CollectionElementPtr_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                                                        const GGS_lstring & in_mOutletName,
                                                                                        const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                        const GGS_runActionDescriptor & in_mRunDescriptor,
                                                                                        const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                        const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                        const GGS_regularBindingList & in_mRegularBindingList,
                                                                                        const GGS_graphicController & in_mGraphicController
                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_outletDeclarationList::CollectionElementPtr_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_outletDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_outletDeclarationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_outletDeclarationList * p = (CollectionElementPtr_outletDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_outletDeclarationList) ;
    const GGS_outletDeclarationList_2E_element element (p->mObject.mProperty_mOutletTypeName, p->mObject.mProperty_mOutletName, p->mObject.mProperty_mTableValueBindingDescriptor, p->mObject.mProperty_mRunDescriptor, p->mObject.mProperty_mEnabledBindingDescriptor, p->mObject.mProperty_mHiddenBindingDescriptor, p->mObject.mProperty_mRegularBindingList, p->mObject.mProperty_mGraphicController) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                           const GGS_lstring & in_mOutletTypeName,
                                                           const GGS_lstring & in_mOutletName,
                                                           const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                           const GGS_runActionDescriptor & in_mRunDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                           const GGS_regularBindingList & in_mRegularBindingList,
                                                           const GGS_graphicController & in_mGraphicController
                                                           COMMA_LOCATION_ARGS) {
  CollectionElementPtr_outletDeclarationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_outletDeclarationList (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_outletDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::description (String & ioString,
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
      ioString.appendString ("mOutletTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTableValueBindingDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTableValueBindingDescriptor.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRunDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRunDescriptor.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mEnabledBindingDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHiddenBindingDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mRegularBindingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mRegularBindingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGraphicController:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGraphicController.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::plusPlusAssignOperation (const GGS_outletDeclarationList_2E_element & inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                               const GGS_lstring & inOperand1,
                                                                               const GGS_tableValueBinding & inOperand2,
                                                                               const GGS_runActionDescriptor & inOperand3,
                                                                               const GGS_multipleBindingDescriptor & inOperand4,
                                                                               const GGS_multipleBindingDescriptor & inOperand5,
                                                                               const GGS_regularBindingList & inOperand6,
                                                                               const GGS_graphicController & inOperand7
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_outletDeclarationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  GGS_outletDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                    const GGS_lstring & inOperand1,
                                                    const GGS_tableValueBinding & inOperand2,
                                                    const GGS_runActionDescriptor & inOperand3,
                                                    const GGS_multipleBindingDescriptor & inOperand4,
                                                    const GGS_multipleBindingDescriptor & inOperand5,
                                                    const GGS_regularBindingList & inOperand6,
                                                    const GGS_graphicController & inOperand7
                                                    COMMA_LOCATION_ARGS) {
  const GGS_outletDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_append (const GGS_lstring inOperand0,
                                               const GGS_lstring inOperand1,
                                               const GGS_tableValueBinding inOperand2,
                                               const GGS_runActionDescriptor inOperand3,
                                               const GGS_multipleBindingDescriptor inOperand4,
                                               const GGS_multipleBindingDescriptor inOperand5,
                                               const GGS_regularBindingList inOperand6,
                                               const GGS_graphicController inOperand7,
                                               Compiler * /* inCompiler */
                                               COMMA_LOCATION_ARGS) {
  const GGS_outletDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                      const GGS_lstring inOperand1,
                                                      const GGS_tableValueBinding inOperand2,
                                                      const GGS_runActionDescriptor inOperand3,
                                                      const GGS_multipleBindingDescriptor inOperand4,
                                                      const GGS_multipleBindingDescriptor inOperand5,
                                                      const GGS_regularBindingList inOperand6,
                                                      const GGS_graphicController inOperand7,
                                                      const GGS_uint inInsertionIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_outletDeclarationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
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

void GGS_outletDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS_tableValueBinding & outOperand2,
                                                      GGS_runActionDescriptor & outOperand3,
                                                      GGS_multipleBindingDescriptor & outOperand4,
                                                      GGS_multipleBindingDescriptor & outOperand5,
                                                      GGS_regularBindingList & outOperand6,
                                                      GGS_graphicController & outOperand7,
                                                      const GGS_uint inRemoveIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOutletName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mTableValueBindingDescriptor ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mRunDescriptor ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mEnabledBindingDescriptor ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mHiddenBindingDescriptor ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mRegularBindingList ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mGraphicController ;
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

void GGS_outletDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_tableValueBinding & outOperand2,
                                                 GGS_runActionDescriptor & outOperand3,
                                                 GGS_multipleBindingDescriptor & outOperand4,
                                                 GGS_multipleBindingDescriptor & outOperand5,
                                                 GGS_regularBindingList & outOperand6,
                                                 GGS_graphicController & outOperand7,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingDescriptor ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRunDescriptor ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEnabledBindingDescriptor ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mHiddenBindingDescriptor ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mRegularBindingList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mGraphicController ;
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

void GGS_outletDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_tableValueBinding & outOperand2,
                                                GGS_runActionDescriptor & outOperand3,
                                                GGS_multipleBindingDescriptor & outOperand4,
                                                GGS_multipleBindingDescriptor & outOperand5,
                                                GGS_regularBindingList & outOperand6,
                                                GGS_graphicController & outOperand7,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTableValueBindingDescriptor ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRunDescriptor ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEnabledBindingDescriptor ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mHiddenBindingDescriptor ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mRegularBindingList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mGraphicController ;
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

void GGS_outletDeclarationList::method_first (GGS_lstring & outOperand0,
                                              GGS_lstring & outOperand1,
                                              GGS_tableValueBinding & outOperand2,
                                              GGS_runActionDescriptor & outOperand3,
                                              GGS_multipleBindingDescriptor & outOperand4,
                                              GGS_multipleBindingDescriptor & outOperand5,
                                              GGS_regularBindingList & outOperand6,
                                              GGS_graphicController & outOperand7,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingDescriptor ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mRunDescriptor ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mEnabledBindingDescriptor ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mHiddenBindingDescriptor ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mRegularBindingList ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mGraphicController ;
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

void GGS_outletDeclarationList::method_last (GGS_lstring & outOperand0,
                                             GGS_lstring & outOperand1,
                                             GGS_tableValueBinding & outOperand2,
                                             GGS_runActionDescriptor & outOperand3,
                                             GGS_multipleBindingDescriptor & outOperand4,
                                             GGS_multipleBindingDescriptor & outOperand5,
                                             GGS_regularBindingList & outOperand6,
                                             GGS_graphicController & outOperand7,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mTableValueBindingDescriptor ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mRunDescriptor ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mEnabledBindingDescriptor ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mHiddenBindingDescriptor ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mRegularBindingList ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mGraphicController ;
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

GGS_outletDeclarationList GGS_outletDeclarationList::add_operation (const GGS_outletDeclarationList & inOperand,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
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

GGS_outletDeclarationList GGS_outletDeclarationList::subList (const int32_t inStart,
                                                              const int32_t inLength,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
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

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_outletDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::plusAssignOperation (const GGS_outletDeclarationList inList,
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

void GGS_outletDeclarationList::setter_setMOutletTypeNameAtIndex (GGS_lstring inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletTypeName = inOperand ;
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
  
GGS_lstring GGS_outletDeclarationList::getter_mOutletTypeNameAtIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletTypeName ;
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

void GGS_outletDeclarationList::setter_setMOutletNameAtIndex (GGS_lstring inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletName = inOperand ;
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
  
GGS_lstring GGS_outletDeclarationList::getter_mOutletNameAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletName ;
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

void GGS_outletDeclarationList::setter_setMTableValueBindingDescriptorAtIndex (GGS_tableValueBinding inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingDescriptor = inOperand ;
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
  
GGS_tableValueBinding GGS_outletDeclarationList::getter_mTableValueBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_tableValueBinding result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingDescriptor ;
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

void GGS_outletDeclarationList::setter_setMRunDescriptorAtIndex (GGS_runActionDescriptor inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRunDescriptor = inOperand ;
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
  
GGS_runActionDescriptor GGS_outletDeclarationList::getter_mRunDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_runActionDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRunDescriptor ;
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

void GGS_outletDeclarationList::setter_setMEnabledBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                            GGS_uint inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEnabledBindingDescriptor = inOperand ;
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
  
GGS_multipleBindingDescriptor GGS_outletDeclarationList::getter_mEnabledBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEnabledBindingDescriptor ;
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

void GGS_outletDeclarationList::setter_setMHiddenBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenBindingDescriptor = inOperand ;
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
  
GGS_multipleBindingDescriptor GGS_outletDeclarationList::getter_mHiddenBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenBindingDescriptor ;
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

void GGS_outletDeclarationList::setter_setMRegularBindingListAtIndex (GGS_regularBindingList inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mRegularBindingList = inOperand ;
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
  
GGS_regularBindingList GGS_outletDeclarationList::getter_mRegularBindingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mRegularBindingList ;
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

void GGS_outletDeclarationList::setter_setMGraphicControllerAtIndex (GGS_graphicController inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGraphicController = inOperand ;
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
  
GGS_graphicController GGS_outletDeclarationList::getter_mGraphicControllerAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_graphicController result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGraphicController ;
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
// Down Enumerator for @outletDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletDeclarationList::DownEnumerator_outletDeclarationList (const GGS_outletDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element DownEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding DownEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor DownEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRunDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor DownEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnabledBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor DownEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList DownEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegularBindingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController DownEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGraphicController ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @outletDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletDeclarationList::UpEnumerator_outletDeclarationList (const GGS_outletDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList_2E_element UpEnumerator_outletDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletDeclarationList::current_mOutletTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletDeclarationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableValueBinding UpEnumerator_outletDeclarationList::current_mTableValueBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_runActionDescriptor UpEnumerator_outletDeclarationList::current_mRunDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRunDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor UpEnumerator_outletDeclarationList::current_mEnabledBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnabledBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor UpEnumerator_outletDeclarationList::current_mHiddenBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList UpEnumerator_outletDeclarationList::current_mRegularBindingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mRegularBindingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_graphicController UpEnumerator_outletDeclarationList::current_mGraphicController (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGraphicController ;
}




//--------------------------------------------------------------------------------------------------
//     @outletDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletDeclarationList ("outletDeclarationList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList GGS_outletDeclarationList::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_outletDeclarationList result ;
  const GGS_outletDeclarationList * p = (const GGS_outletDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@arrayControllerBindingListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_arrayControllerBindingListAST : public CollectionElementPtr {
  public: GGS_arrayControllerBindingListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                              const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_arrayControllerBindingListAST::CollectionElementPtr_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                                                                        const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_arrayControllerBindingListAST::CollectionElementPtr_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_arrayControllerBindingListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_arrayControllerBindingListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_arrayControllerBindingListAST * p = (CollectionElementPtr_arrayControllerBindingListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_arrayControllerBindingListAST) ;
    const GGS_arrayControllerBindingListAST_2E_element element (p->mObject.mProperty_mControllerName, p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mControllerName,
                                                                   const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_arrayControllerBindingListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_arrayControllerBindingListAST (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_arrayControllerBindingListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_arrayControllerBindingListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::description (String & ioString,
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
      ioString.appendString ("mControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mControllerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mHiddenSelectionViewBindingDescriptor:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::plusPlusAssignOperation (const GGS_arrayControllerBindingListAST_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_multipleBindingDescriptor & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element element (inOperand0, inOperand1) ;
  GGS_arrayControllerBindingListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_multipleBindingDescriptor & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_multipleBindingDescriptor inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_multipleBindingDescriptor inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_arrayControllerBindingListAST_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_arrayControllerBindingListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_multipleBindingDescriptor & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mControllerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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

void GGS_arrayControllerBindingListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_multipleBindingDescriptor & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mControllerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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

void GGS_arrayControllerBindingListAST::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_multipleBindingDescriptor & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mControllerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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

void GGS_arrayControllerBindingListAST::method_first (GGS_lstring & outOperand0,
                                                      GGS_multipleBindingDescriptor & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mControllerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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

void GGS_arrayControllerBindingListAST::method_last (GGS_lstring & outOperand0,
                                                     GGS_multipleBindingDescriptor & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mControllerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::add_operation (const GGS_arrayControllerBindingListAST & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
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

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
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

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerBindingListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::plusAssignOperation (const GGS_arrayControllerBindingListAST inList,
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

void GGS_arrayControllerBindingListAST::setter_setMControllerNameAtIndex (GGS_lstring inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mControllerName = inOperand ;
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
  
GGS_lstring GGS_arrayControllerBindingListAST::getter_mControllerNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mControllerName ;
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

void GGS_arrayControllerBindingListAST::setter_setMHiddenSelectionViewBindingDescriptorAtIndex (GGS_multipleBindingDescriptor inOperand,
                                                                                                GGS_uint inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor = inOperand ;
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
  
GGS_multipleBindingDescriptor GGS_arrayControllerBindingListAST::getter_mHiddenSelectionViewBindingDescriptorAtIndex (const GGS_uint & inIndex,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
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
// Down Enumerator for @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_arrayControllerBindingListAST::DownEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element DownEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor DownEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_arrayControllerBindingListAST::UpEnumerator_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST_2E_element UpEnumerator_arrayControllerBindingListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_arrayControllerBindingListAST::current_mControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mControllerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor UpEnumerator_arrayControllerBindingListAST::current_mHiddenSelectionViewBindingDescriptor (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mHiddenSelectionViewBindingDescriptor ;
}




//--------------------------------------------------------------------------------------------------
//     @arrayControllerBindingListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBindingListAST ("arrayControllerBindingListAST",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBindingListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBindingListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_arrayControllerBindingListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_arrayControllerBindingListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  const GGS_arrayControllerBindingListAST * p = (const GGS_arrayControllerBindingListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_arrayControllerBindingListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerBindingListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astViewDeclarationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astViewDeclarationList : public CollectionElementPtr {
  public: GGS_astViewDeclarationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                       const GGS_astAbstractViewDeclaration & in_mView
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astViewDeclarationList::CollectionElementPtr_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                                                          const GGS_astAbstractViewDeclaration & in_mView
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astViewDeclarationList::CollectionElementPtr_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astViewDeclarationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astViewDeclarationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astViewDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astViewDeclarationList * p = (CollectionElementPtr_astViewDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astViewDeclarationList) ;
    const GGS_astViewDeclarationList_2E_element element (p->mObject.mProperty_mViewName, p->mObject.mProperty_mView) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_lstring & in_mViewName,
                                                            const GGS_astAbstractViewDeclaration & in_mView
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astViewDeclarationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astViewDeclarationList (in_mViewName, in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astViewDeclarationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astViewDeclarationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::description (String & ioString,
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
      ioString.appendString ("mViewName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mViewName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mView:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mView.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astViewDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::plusPlusAssignOperation (const GGS_astViewDeclarationList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                 const GGS_astAbstractViewDeclaration & inOperand1
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_astViewDeclarationList_2E_element element (inOperand0, inOperand1) ;
  GGS_astViewDeclarationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::addAssignOperation (const GGS_lstring & inOperand0,
                                                     const GGS_astAbstractViewDeclaration & inOperand1
                                                     COMMA_LOCATION_ARGS) {
  const GGS_astViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_append (const GGS_lstring inOperand0,
                                                const GGS_astAbstractViewDeclaration inOperand1,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_astViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                       const GGS_astAbstractViewDeclaration inOperand1,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_astViewDeclarationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_astViewDeclarationList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                       GGS_astAbstractViewDeclaration & outOperand1,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mViewName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mView ;
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

void GGS_astViewDeclarationList::setter_popFirst (GGS_lstring & outOperand0,
                                                  GGS_astAbstractViewDeclaration & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mViewName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mView ;
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

void GGS_astViewDeclarationList::setter_popLast (GGS_lstring & outOperand0,
                                                 GGS_astAbstractViewDeclaration & outOperand1,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mViewName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mView ;
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

void GGS_astViewDeclarationList::method_first (GGS_lstring & outOperand0,
                                               GGS_astAbstractViewDeclaration & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mViewName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mView ;
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

void GGS_astViewDeclarationList::method_last (GGS_lstring & outOperand0,
                                              GGS_astAbstractViewDeclaration & outOperand1,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mViewName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mView ;
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

GGS_astViewDeclarationList GGS_astViewDeclarationList::add_operation (const GGS_astViewDeclarationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
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

GGS_astViewDeclarationList GGS_astViewDeclarationList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
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

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astViewDeclarationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::plusAssignOperation (const GGS_astViewDeclarationList inList,
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

void GGS_astViewDeclarationList::setter_setMViewNameAtIndex (GGS_lstring inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mViewName = inOperand ;
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
  
GGS_lstring GGS_astViewDeclarationList::getter_mViewNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mViewName ;
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

void GGS_astViewDeclarationList::setter_setMViewAtIndex (GGS_astAbstractViewDeclaration inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mView = inOperand ;
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
  
GGS_astAbstractViewDeclaration GGS_astViewDeclarationList::getter_mViewAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_astAbstractViewDeclaration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mView ;
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
// Down Enumerator for @astViewDeclarationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astViewDeclarationList::DownEnumerator_astViewDeclarationList (const GGS_astViewDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element DownEnumerator_astViewDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astViewDeclarationList::current_mViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration DownEnumerator_astViewDeclarationList::current_mView (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mView ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astViewDeclarationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astViewDeclarationList::UpEnumerator_astViewDeclarationList (const GGS_astViewDeclarationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList_2E_element UpEnumerator_astViewDeclarationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astViewDeclarationList::current_mViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration UpEnumerator_astViewDeclarationList::current_mView (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mView ;
}




//--------------------------------------------------------------------------------------------------
//     @astViewDeclarationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astViewDeclarationList ("astViewDeclarationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astViewDeclarationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astViewDeclarationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astViewDeclarationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList GGS_astViewDeclarationList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_astViewDeclarationList result ;
  const GGS_astViewDeclarationList * p = (const GGS_astViewDeclarationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astViewDeclarationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewDeclarationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@astAutoLayoutOutletLinkerList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_astAutoLayoutOutletLinkerList : public CollectionElementPtr {
  public: GGS_astAutoLayoutOutletLinkerList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                              const GGS_lstringlist & in_mOutletNameList
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutOutletLinkerList::CollectionElementPtr_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                                                                        const GGS_lstringlist & in_mOutletNameList
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLinkerName, in_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_astAutoLayoutOutletLinkerList::CollectionElementPtr_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_astAutoLayoutOutletLinkerList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_astAutoLayoutOutletLinkerList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_astAutoLayoutOutletLinkerList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_astAutoLayoutOutletLinkerList * p = (CollectionElementPtr_astAutoLayoutOutletLinkerList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_astAutoLayoutOutletLinkerList) ;
    const GGS_astAutoLayoutOutletLinkerList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mLinkerName,
                                                                   const GGS_lstringlist & in_mOutletNameList
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_astAutoLayoutOutletLinkerList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_astAutoLayoutOutletLinkerList (in_mLinkerName, in_mOutletNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutOutletLinkerList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_astAutoLayoutOutletLinkerList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::description (String & ioString,
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
      ioString.appendString ("mLinkerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLinkerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletNameList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletNameList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::plusPlusAssignOperation (const GGS_astAutoLayoutOutletLinkerList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                               const GGS_lstringlist & inOperand1
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element element (inOperand0, inOperand1) ;
  GGS_astAutoLayoutOutletLinkerList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::addAssignOperation (const GGS_lstring & inOperand0,
                                                            const GGS_lstringlist & inOperand1
                                                            COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_append (const GGS_lstring inOperand0,
                                                       const GGS_lstringlist inOperand1,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                              const GGS_lstringlist inOperand1,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutOutletLinkerList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_astAutoLayoutOutletLinkerList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                              GGS_lstringlist & outOperand1,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLinkerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOutletNameList ;
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

void GGS_astAutoLayoutOutletLinkerList::setter_popFirst (GGS_lstring & outOperand0,
                                                         GGS_lstringlist & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameList ;
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

void GGS_astAutoLayoutOutletLinkerList::setter_popLast (GGS_lstring & outOperand0,
                                                        GGS_lstringlist & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameList ;
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

void GGS_astAutoLayoutOutletLinkerList::method_first (GGS_lstring & outOperand0,
                                                      GGS_lstringlist & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameList ;
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

void GGS_astAutoLayoutOutletLinkerList::method_last (GGS_lstring & outOperand0,
                                                     GGS_lstringlist & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameList ;
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

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::add_operation (const GGS_astAutoLayoutOutletLinkerList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
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

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
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

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutOutletLinkerList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::plusAssignOperation (const GGS_astAutoLayoutOutletLinkerList inList,
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

void GGS_astAutoLayoutOutletLinkerList::setter_setMLinkerNameAtIndex (GGS_lstring inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName = inOperand ;
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
  
GGS_lstring GGS_astAutoLayoutOutletLinkerList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName ;
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

void GGS_astAutoLayoutOutletLinkerList::setter_setMOutletNameListAtIndex (GGS_lstringlist inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameList = inOperand ;
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
  
GGS_lstringlist GGS_astAutoLayoutOutletLinkerList::getter_mOutletNameListAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameList ;
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
// Down Enumerator for @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutOutletLinkerList::DownEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element DownEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutOutletLinkerList::UpEnumerator_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList_2E_element UpEnumerator_astAutoLayoutOutletLinkerList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutOutletLinkerList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_astAutoLayoutOutletLinkerList::current_mOutletNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameList ;
}




//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutOutletLinkerList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ("astAutoLayoutOutletLinkerList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutOutletLinkerList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutOutletLinkerList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutOutletLinkerList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutOutletLinkerList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  const GGS_astAutoLayoutOutletLinkerList * p = (const GGS_astAutoLayoutOutletLinkerList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutOutletLinkerList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutOutletLinkerList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutDocumentDeclarationAST_2E_weak & inOperand) const {
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

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak & GGS_autoLayoutDocumentDeclarationAST_2E_weak::operator = (const GGS_autoLayoutDocumentDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (const GGS_autoLayoutDocumentDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDocumentDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDocumentDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST GGS_autoLayoutDocumentDeclarationAST_2E_weak::bang_autoLayoutDocumentDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDocumentDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentDeclarationAST) ;
      result = GGS_autoLayoutDocumentDeclarationAST ((cPtr_autoLayoutDocumentDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ("autoLayoutDocumentDeclarationAST.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak GGS_autoLayoutDocumentDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentDeclarationAST_2E_weak result ;
  const GGS_autoLayoutDocumentDeclarationAST_2E_weak * p = (const GGS_autoLayoutDocumentDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutOutletLinkerGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutOutletLinkerGenerationList : public CollectionElementPtr {
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                     const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                     COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutOutletLinkerGenerationList::CollectionElementPtr_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                                                                      const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mLinkerName, in_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutOutletLinkerGenerationList::CollectionElementPtr_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutOutletLinkerGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutOutletLinkerGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutOutletLinkerGenerationList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameAndTypeNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutOutletLinkerGenerationList * p = (CollectionElementPtr_autoLayoutOutletLinkerGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutOutletLinkerGenerationList) ;
    const GGS_autoLayoutOutletLinkerGenerationList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameAndTypeNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                          const GGS_string & in_mLinkerName,
                                                                          const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                          COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutOutletLinkerGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutOutletLinkerGenerationList (in_mLinkerName, in_mOutletNameAndTypeNameList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutOutletLinkerGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutOutletLinkerGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::description (String & ioString,
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
      ioString.appendString ("mLinkerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mLinkerName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mOutletNameAndTypeNameList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::plusPlusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                             const GGS__32_stringlist & inOperand1
                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                   const GGS__32_stringlist & inOperand1
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_append (const GGS_string inOperand0,
                                                              const GGS__32_stringlist inOperand1,
                                                              Compiler * /* inCompiler */
                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                     const GGS__32_stringlist inOperand1,
                                                                     const GGS_uint inInsertionIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletLinkerGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutOutletLinkerGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                     GGS__32_stringlist & outOperand1,
                                                                     const GGS_uint inRemoveIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mLinkerName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOutletNameAndTypeNameList ;
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

void GGS_autoLayoutOutletLinkerGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                GGS__32_stringlist & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
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

void GGS_autoLayoutOutletLinkerGenerationList::setter_popLast (GGS_string & outOperand0,
                                                               GGS__32_stringlist & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameAndTypeNameList ;
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

void GGS_autoLayoutOutletLinkerGenerationList::method_first (GGS_string & outOperand0,
                                                             GGS__32_stringlist & outOperand1,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mLinkerName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
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

void GGS_autoLayoutOutletLinkerGenerationList::method_last (GGS_string & outOperand0,
                                                            GGS__32_stringlist & outOperand1,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mLinkerName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOutletNameAndTypeNameList ;
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

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::add_operation (const GGS_autoLayoutOutletLinkerGenerationList & inOperand,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
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

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::subList (const int32_t inStart,
                                                                                            const int32_t inLength,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
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

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::plusAssignOperation (const GGS_autoLayoutOutletLinkerGenerationList inList,
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

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMLinkerNameAtIndex (GGS_string inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName = inOperand ;
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
  
GGS_string GGS_autoLayoutOutletLinkerGenerationList::getter_mLinkerNameAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mLinkerName ;
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

void GGS_autoLayoutOutletLinkerGenerationList::setter_setMOutletNameAndTypeNameListAtIndex (GGS__32_stringlist inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameAndTypeNameList = inOperand ;
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
  
GGS__32_stringlist GGS_autoLayoutOutletLinkerGenerationList::getter_mOutletNameAndTypeNameListAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOutletNameAndTypeNameList ;
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
// Down Enumerator for @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutOutletLinkerGenerationList::DownEnumerator_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element DownEnumerator_autoLayoutOutletLinkerGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutOutletLinkerGenerationList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_autoLayoutOutletLinkerGenerationList::current_mOutletNameAndTypeNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutOutletLinkerGenerationList::UpEnumerator_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList_2E_element UpEnumerator_autoLayoutOutletLinkerGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutOutletLinkerGenerationList::current_mLinkerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mLinkerName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_autoLayoutOutletLinkerGenerationList::current_mOutletNameAndTypeNameList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletNameAndTypeNameList ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutOutletLinkerGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ("autoLayoutOutletLinkerGenerationList",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletLinkerGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletLinkerGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletLinkerGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  const GGS_autoLayoutOutletLinkerGenerationList * p = (const GGS_autoLayoutOutletLinkerGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletLinkerGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

