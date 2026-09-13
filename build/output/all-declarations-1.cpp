#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_propertyGenerationList : public CollectionElementPtr {
  public: GGS_propertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_propertyGenerationList::CollectionElementPtr_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_propertyGenerationList::CollectionElementPtr_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_propertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_propertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_propertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_propertyGenerationList * p = (CollectionElementPtr_propertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_propertyGenerationList) ;
    const GGS_propertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_propertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_propertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_propertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_propertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_propertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::description (String & ioString,
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

GGS_propertyGenerationList GGS_propertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::plusPlusAssignOperation (const GGS_propertyGenerationList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::class_func_listWithValue (const GGS_propertyGeneration & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_propertyGenerationList_2E_element element (inOperand0) ;
  GGS_propertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::addAssignOperation (const GGS_propertyGeneration & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_propertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_append (const GGS_propertyGeneration inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_propertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::setter_insertAtIndex (const GGS_propertyGeneration inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_propertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_propertyGenerationList::setter_removeAtIndex (GGS_propertyGeneration & outOperand0,
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

void GGS_propertyGenerationList::setter_popFirst (GGS_propertyGeneration & outOperand0,
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

void GGS_propertyGenerationList::setter_popLast (GGS_propertyGeneration & outOperand0,
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

void GGS_propertyGenerationList::method_first (GGS_propertyGeneration & outOperand0,
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

void GGS_propertyGenerationList::method_last (GGS_propertyGeneration & outOperand0,
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

GGS_propertyGenerationList GGS_propertyGenerationList::add_operation (const GGS_propertyGenerationList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
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

GGS_propertyGenerationList GGS_propertyGenerationList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
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

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::plusAssignOperation (const GGS_propertyGenerationList inList,
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

void GGS_propertyGenerationList::setter_setMPropertyAtIndex (GGS_propertyGeneration inOperand,
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
  
GGS_propertyGeneration GGS_propertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_propertyGeneration result ;
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
// Down Enumerator for @propertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_propertyGenerationList::DownEnumerator_propertyGenerationList (const GGS_propertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element DownEnumerator_propertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration DownEnumerator_propertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @propertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_propertyGenerationList::UpEnumerator_propertyGenerationList (const GGS_propertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList_2E_element UpEnumerator_propertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGeneration UpEnumerator_propertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @propertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyGenerationList ("propertyGenerationList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_propertyGenerationList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_propertyGenerationList result ;
  const GGS_propertyGenerationList * p = (const GGS_propertyGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @decoratedOutletMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap::GGS_decoratedOutletMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap::~ GGS_decoratedOutletMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap::GGS_decoratedOutletMap (const GGS_decoratedOutletMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap & GGS_decoratedOutletMap::operator = (const GGS_decoratedOutletMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_decoratedOutletMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_decoratedOutletMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedOutletMap::getter_hasKey (const GGS_string & inKey
                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_decoratedOutletMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                       const GGS_uint & inLevel
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedOutletMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_decoratedOutletMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_decoratedOutletMap::getter_locationForKey (const GGS_string & inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_decoratedOutletMap::getter_keyList (Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_decoratedOutletMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_decoratedOutletMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::performInsert (const GGS_decoratedOutletMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_decoratedOutletMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>
GGS_decoratedOutletMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_decoratedOutletMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>>
GGS_decoratedOutletMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_decoratedOutletMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element_3F_ GGS_decoratedOutletMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_decoratedOutletMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_decoratedOutletMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_decoratedOutletMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletTypeName = info->mProperty_mOutletTypeName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_decoratedOutletMap::class_func_mapWithMapToOverride (const GGS_decoratedOutletMap & inMapToOverride
                                                                                COMMA_LOCATION_ARGS) {
  GGS_decoratedOutletMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_decoratedOutletMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_decoratedOutletMap::getter_overriddenMap (Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_decoratedOutletMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::setter_insertKey (GGS_lstring inLKey,
                                               GGS_string inArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_decoratedOutletMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::method_searchKey (GGS_lstring inLKey,
                                               GGS_string & outArgument0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' outlet is not declared" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletTypeName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_decoratedOutletMap::getter_mOutletTypeNameForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::setter_setMOutletTypeNameForKey (GGS_string inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_decoratedOutletMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_decoratedOutletMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletTypeName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_decoratedOutletMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_decoratedOutletMap_2E_element>> array = sortedInfoArray () ;
    GGS_decoratedOutletMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_decoratedOutletMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_decoratedOutletMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @decoratedOutletMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_decoratedOutletMap::DownEnumerator_decoratedOutletMap (const GGS_decoratedOutletMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element DownEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @decoratedOutletMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_decoratedOutletMap::UpEnumerator_decoratedOutletMap (const GGS_decoratedOutletMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap_2E_element UpEnumerator_decoratedOutletMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_decoratedOutletMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_decoratedOutletMap::current_mOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletTypeName ;
}


//--------------------------------------------------------------------------------------------------
//     @decoratedOutletMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_decoratedOutletMap ("decoratedOutletMap",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_decoratedOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_decoratedOutletMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_decoratedOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_decoratedOutletMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_decoratedOutletMap::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_decoratedOutletMap result ;
  const GGS_decoratedOutletMap * p = (const GGS_decoratedOutletMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_decoratedOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("decoratedOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutOutletMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap::GGS_autoLayoutOutletMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap::~ GGS_autoLayoutOutletMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap::GGS_autoLayoutOutletMap (const GGS_autoLayoutOutletMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap & GGS_autoLayoutOutletMap::operator = (const GGS_autoLayoutOutletMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutOutletMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutOutletMap::getter_hasKey (const GGS_string & inKey
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutOutletMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                        const GGS_uint & inLevel
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutOutletMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutOutletMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutOutletMap::getter_locationForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutOutletMap::getter_keyList (Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutOutletMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutOutletMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::performInsert (const GGS_autoLayoutOutletMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutOutletMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>
GGS_autoLayoutOutletMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutOutletMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>>
GGS_autoLayoutOutletMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutOutletMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element_3F_ GGS_autoLayoutOutletMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutOutletMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutOutletMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutOutletMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mAutoLayoutOutletTypeName = info->mProperty_mAutoLayoutOutletTypeName ;
      element.mProperty_mOutletIsArray = info->mProperty_mOutletIsArray ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutOutletMap::class_func_mapWithMapToOverride (const GGS_autoLayoutOutletMap & inMapToOverride
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutOutletMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutOutletMap::getter_overriddenMap (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutOutletMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::setter_insertKey (GGS_lstring inLKey,
                                                GGS_string inArgument0,
                                                GGS_bool inArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutOutletMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' outlet is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::method_searchKey (GGS_lstring inLKey,
                                                GGS_string & outArgument0,
                                                GGS_bool & outArgument1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' outlet" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mAutoLayoutOutletTypeName ;
    outArgument1 = info->mProperty_mOutletIsArray ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutOutletMap::getter_mAutoLayoutOutletTypeNameForKey (const GGS_string & inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAutoLayoutOutletTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutOutletMap::getter_mOutletIsArrayForKey (const GGS_string & inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletIsArray ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::setter_setMAutoLayoutOutletTypeNameForKey (GGS_string inValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutOutletMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAutoLayoutOutletTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::setter_setMOutletIsArrayForKey (GGS_bool inValue,
                                                              GGS_string inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutOutletMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletIsArray = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutOutletMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> & inArray,
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
    ioString.appendString ("mAutoLayoutOutletTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mOutletIsArray:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletIsArray.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutOutletMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutOutletMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutOutletMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutOutletMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutOutletMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutOutletMap::DownEnumerator_autoLayoutOutletMap (const GGS_autoLayoutOutletMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element DownEnumerator_autoLayoutOutletMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutOutletMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutOutletMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autoLayoutOutletMap::current_mOutletIsArray (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletIsArray ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutOutletMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutOutletMap::UpEnumerator_autoLayoutOutletMap (const GGS_autoLayoutOutletMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap_2E_element UpEnumerator_autoLayoutOutletMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutOutletMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutOutletMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autoLayoutOutletMap::current_mOutletIsArray (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletIsArray ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutOutletMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutOutletMap ("autoLayoutOutletMap",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutOutletMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutOutletMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutOutletMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_autoLayoutOutletMap::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_autoLayoutOutletMap result ;
  const GGS_autoLayoutOutletMap * p = (const GGS_autoLayoutOutletMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutOutletMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@actionBindingListForGeneration' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_actionBindingListForGeneration : public CollectionElementPtr {
  public: GGS_actionBindingListForGeneration_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_actionBindingListForGeneration (const GGS_string & in_mOutletName,
                                                               const GGS_string & in_mTargetName,
                                                               const GGS_string & in_mActionName,
                                                               const GGS_string & in_mTargetTypeName
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_actionBindingListForGeneration (const GGS_actionBindingListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actionBindingListForGeneration::CollectionElementPtr_actionBindingListForGeneration (const GGS_string & in_mOutletName,
                                                                                                          const GGS_string & in_mTargetName,
                                                                                                          const GGS_string & in_mActionName,
                                                                                                          const GGS_string & in_mTargetTypeName
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_actionBindingListForGeneration::CollectionElementPtr_actionBindingListForGeneration (const GGS_actionBindingListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_actionBindingListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_actionBindingListForGeneration::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actionBindingListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration::GGS_actionBindingListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration::GGS_actionBindingListForGeneration (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_actionBindingListForGeneration * p = (CollectionElementPtr_actionBindingListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_actionBindingListForGeneration) ;
    const GGS_actionBindingListForGeneration_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mActionName, p->mObject.mProperty_mTargetTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_string & in_mOutletName,
                                                                    const GGS_string & in_mTargetName,
                                                                    const GGS_string & in_mActionName,
                                                                    const GGS_string & in_mTargetTypeName
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_actionBindingListForGeneration * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_actionBindingListForGeneration (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actionBindingListForGeneration::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_actionBindingListForGeneration::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::description (String & ioString,
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
      ioString.appendString ("mOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mActionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mActionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetTypeName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::plusPlusAssignOperation (const GGS_actionBindingListForGeneration_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                 const GGS_string & inOperand1,
                                                                                                 const GGS_string & inOperand2,
                                                                                                 const GGS_string & inOperand3
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_actionBindingListForGeneration_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_actionBindingListForGeneration result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::addAssignOperation (const GGS_string & inOperand0,
                                                             const GGS_string & inOperand1,
                                                             const GGS_string & inOperand2,
                                                             const GGS_string & inOperand3
                                                             COMMA_LOCATION_ARGS) {
  const GGS_actionBindingListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::setter_append (const GGS_string inOperand0,
                                                        const GGS_string inOperand1,
                                                        const GGS_string inOperand2,
                                                        const GGS_string inOperand3,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_actionBindingListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::setter_insertAtIndex (const GGS_string inOperand0,
                                                               const GGS_string inOperand1,
                                                               const GGS_string inOperand2,
                                                               const GGS_string inOperand3,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_actionBindingListForGeneration_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_actionBindingListForGeneration::setter_removeAtIndex (GGS_string & outOperand0,
                                                               GGS_string & outOperand1,
                                                               GGS_string & outOperand2,
                                                               GGS_string & outOperand3,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mActionName ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mTargetTypeName ;
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

void GGS_actionBindingListForGeneration::setter_popFirst (GGS_string & outOperand0,
                                                          GGS_string & outOperand1,
                                                          GGS_string & outOperand2,
                                                          GGS_string & outOperand3,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mActionName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTargetTypeName ;
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

void GGS_actionBindingListForGeneration::setter_popLast (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_string & outOperand2,
                                                         GGS_string & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mActionName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTargetTypeName ;
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

void GGS_actionBindingListForGeneration::method_first (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       GGS_string & outOperand2,
                                                       GGS_string & outOperand3,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mActionName ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mTargetTypeName ;
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

void GGS_actionBindingListForGeneration::method_last (GGS_string & outOperand0,
                                                      GGS_string & outOperand1,
                                                      GGS_string & outOperand2,
                                                      GGS_string & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mActionName ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mTargetTypeName ;
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

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::add_operation (const GGS_actionBindingListForGeneration & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actionBindingListForGeneration result ;
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

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actionBindingListForGeneration result ;
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

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actionBindingListForGeneration result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_actionBindingListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_actionBindingListForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::plusAssignOperation (const GGS_actionBindingListForGeneration inList,
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

void GGS_actionBindingListForGeneration::setter_setMOutletNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_actionBindingListForGeneration::getter_mOutletNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_actionBindingListForGeneration::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
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
  
GGS_string GGS_actionBindingListForGeneration::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
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

void GGS_actionBindingListForGeneration::setter_setMActionNameAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mActionName = inOperand ;
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
  
GGS_string GGS_actionBindingListForGeneration::getter_mActionNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mActionName ;
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

void GGS_actionBindingListForGeneration::setter_setMTargetTypeNameAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetTypeName = inOperand ;
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
  
GGS_string GGS_actionBindingListForGeneration::getter_mTargetTypeNameAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetTypeName ;
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
// Down Enumerator for @actionBindingListForGeneration
//--------------------------------------------------------------------------------------------------

DownEnumerator_actionBindingListForGeneration::DownEnumerator_actionBindingListForGeneration (const GGS_actionBindingListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element DownEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetTypeName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @actionBindingListForGeneration
//--------------------------------------------------------------------------------------------------

UpEnumerator_actionBindingListForGeneration::UpEnumerator_actionBindingListForGeneration (const GGS_actionBindingListForGeneration & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration_2E_element UpEnumerator_actionBindingListForGeneration::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_actionBindingListForGeneration::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_actionBindingListForGeneration::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_actionBindingListForGeneration::current_mActionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_actionBindingListForGeneration::current_mTargetTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetTypeName ;
}




//--------------------------------------------------------------------------------------------------
//     @actionBindingListForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration ("actionBindingListForGeneration",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionBindingListForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionBindingListForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionBindingListForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration result ;
  const GGS_actionBindingListForGeneration * p = (const GGS_actionBindingListForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionBindingListForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionBindingListForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@regularBindingsGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_regularBindingsGenerationList : public CollectionElementPtr {
  public: GGS_regularBindingsGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_regularBindingsGenerationList (const GGS_string & in_mOutletName,
                                                              const GGS_string & in_mBindingName,
                                                              const GGS_boundObjectList & in_mBoundObjectList,
                                                              const GGS_string & in_mBindingOptionsString
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_regularBindingsGenerationList (const GGS_regularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_regularBindingsGenerationList::CollectionElementPtr_regularBindingsGenerationList (const GGS_string & in_mOutletName,
                                                                                                        const GGS_string & in_mBindingName,
                                                                                                        const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                        const GGS_string & in_mBindingOptionsString
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_regularBindingsGenerationList::CollectionElementPtr_regularBindingsGenerationList (const GGS_regularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_regularBindingsGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_regularBindingsGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @regularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList::GGS_regularBindingsGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList::GGS_regularBindingsGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_regularBindingsGenerationList * p = (CollectionElementPtr_regularBindingsGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_regularBindingsGenerationList) ;
    const GGS_regularBindingsGenerationList_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectList, p->mObject.mProperty_mBindingOptionsString) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_string & in_mOutletName,
                                                                   const GGS_string & in_mBindingName,
                                                                   const GGS_boundObjectList & in_mBoundObjectList,
                                                                   const GGS_string & in_mBindingOptionsString
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_regularBindingsGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_regularBindingsGenerationList (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_regularBindingsGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_regularBindingsGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::description (String & ioString,
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
      ioString.appendString ("mOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundObjectList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingOptionsString:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingOptionsString.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::plusPlusAssignOperation (const GGS_regularBindingsGenerationList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                               const GGS_string & inOperand1,
                                                                                               const GGS_boundObjectList & inOperand2,
                                                                                               const GGS_string & inOperand3
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_regularBindingsGenerationList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_regularBindingsGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_boundObjectList & inOperand2,
                                                            const GGS_string & inOperand3
                                                            COMMA_LOCATION_ARGS) {
  const GGS_regularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::setter_append (const GGS_string inOperand0,
                                                       const GGS_string inOperand1,
                                                       const GGS_boundObjectList inOperand2,
                                                       const GGS_string inOperand3,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_regularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_boundObjectList inOperand2,
                                                              const GGS_string inOperand3,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_regularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_regularBindingsGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_boundObjectList & outOperand2,
                                                              GGS_string & outOperand3,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBoundObjectList ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mBindingOptionsString ;
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

void GGS_regularBindingsGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_boundObjectList & outOperand2,
                                                         GGS_string & outOperand3,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_regularBindingsGenerationList::setter_popLast (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_boundObjectList & outOperand2,
                                                        GGS_string & outOperand3,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

void GGS_regularBindingsGenerationList::method_first (GGS_string & outOperand0,
                                                      GGS_string & outOperand1,
                                                      GGS_boundObjectList & outOperand2,
                                                      GGS_string & outOperand3,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_regularBindingsGenerationList::method_last (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_boundObjectList & outOperand2,
                                                     GGS_string & outOperand3,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::add_operation (const GGS_regularBindingsGenerationList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_regularBindingsGenerationList result ;
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

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_regularBindingsGenerationList result ;
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

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_regularBindingsGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_regularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_regularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::plusAssignOperation (const GGS_regularBindingsGenerationList inList,
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

void GGS_regularBindingsGenerationList::setter_setMOutletNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_regularBindingsGenerationList::getter_mOutletNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_regularBindingsGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_regularBindingsGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_regularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GGS_boundObjectList inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectList = inOperand ;
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
  
GGS_boundObjectList GGS_regularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_boundObjectList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectList ;
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

void GGS_regularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GGS_string inOperand,
                                                                                GGS_uint inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionsString = inOperand ;
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
  
GGS_string GGS_regularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GGS_uint & inIndex,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBindingOptionsString ;
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
// Down Enumerator for @regularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_regularBindingsGenerationList::DownEnumerator_regularBindingsGenerationList (const GGS_regularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element DownEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList DownEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @regularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_regularBindingsGenerationList::UpEnumerator_regularBindingsGenerationList (const GGS_regularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList_2E_element UpEnumerator_regularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_regularBindingsGenerationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_regularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList UpEnumerator_regularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_regularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}




//--------------------------------------------------------------------------------------------------
//     @regularBindingsGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList ("regularBindingsGenerationList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList result ;
  const GGS_regularBindingsGenerationList * p = (const GGS_regularBindingsGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@multipleBindingGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_multipleBindingGenerationList : public CollectionElementPtr {
  public: GGS_multipleBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_multipleBindingGenerationList (const GGS_string & in_mOutletName,
                                                              const GGS_string & in_mBindingName,
                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_multipleBindingGenerationList (const GGS_multipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_multipleBindingGenerationList::CollectionElementPtr_multipleBindingGenerationList (const GGS_string & in_mOutletName,
                                                                                                        const GGS_string & in_mBindingName,
                                                                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_multipleBindingGenerationList::CollectionElementPtr_multipleBindingGenerationList (const GGS_multipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_multipleBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_multipleBindingGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @multipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList::GGS_multipleBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList::GGS_multipleBindingGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_multipleBindingGenerationList * p = (CollectionElementPtr_multipleBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_multipleBindingGenerationList) ;
    const GGS_multipleBindingGenerationList_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                   const GGS_string & in_mOutletName,
                                                                   const GGS_string & in_mBindingName,
                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_multipleBindingGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_multipleBindingGenerationList (in_mOutletName, in_mBindingName, in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_multipleBindingGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_multipleBindingGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::description (String & ioString,
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
      ioString.appendString ("mOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBoundObjectExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::plusPlusAssignOperation (const GGS_multipleBindingGenerationList_2E_element & inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                               const GGS_string & inOperand1,
                                                                                               const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_multipleBindingGenerationList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_multipleBindingGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                            const GGS_string & inOperand1,
                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2
                                                            COMMA_LOCATION_ARGS) {
  const GGS_multipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::setter_append (const GGS_string inOperand0,
                                                       const GGS_string inOperand1,
                                                       const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                       Compiler * /* inCompiler */
                                                       COMMA_LOCATION_ARGS) {
  const GGS_multipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                              const GGS_string inOperand1,
                                                              const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand2,
                                                              const GGS_uint inInsertionIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_multipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_multipleBindingGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                              GGS_string & outOperand1,
                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                              const GGS_uint inRemoveIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOutletName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBoundObjectExpression ;
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

void GGS_multipleBindingGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_multipleBindingGenerationList::setter_popLast (GGS_string & outOperand0,
                                                        GGS_string & outOperand1,
                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

void GGS_multipleBindingGenerationList::method_first (GGS_string & outOperand0,
                                                      GGS_string & outOperand1,
                                                      GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_multipleBindingGenerationList::method_last (GGS_string & outOperand0,
                                                     GGS_string & outOperand1,
                                                     GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::add_operation (const GGS_multipleBindingGenerationList & inOperand,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_multipleBindingGenerationList result ;
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

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::subList (const int32_t inStart,
                                                                              const int32_t inLength,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingGenerationList result ;
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

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_multipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::plusAssignOperation (const GGS_multipleBindingGenerationList inList,
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

void GGS_multipleBindingGenerationList::setter_setMOutletNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_multipleBindingGenerationList::getter_mOutletNameAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_multipleBindingGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_multipleBindingGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_multipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
                                                                                 GGS_uint inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectExpression = inOperand ;
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
  
GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_multipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GGS_uint & inIndex,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBoundObjectExpression ;
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
// Down Enumerator for @multipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_multipleBindingGenerationList::DownEnumerator_multipleBindingGenerationList (const GGS_multipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element DownEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration DownEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @multipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_multipleBindingGenerationList::UpEnumerator_multipleBindingGenerationList (const GGS_multipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList_2E_element UpEnumerator_multipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_multipleBindingGenerationList::current_mOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_multipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration UpEnumerator_multipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @multipleBindingGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList ("multipleBindingGenerationList",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_multipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_multipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList result ;
  const GGS_multipleBindingGenerationList * p = (const GGS_multipleBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_multipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("multipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@tableViewBindingGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_tableViewBindingGenerationList : public CollectionElementPtr {
  public: GGS_tableViewBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_tableViewBindingGenerationList (const GGS_string & in_mTableValueBindingOutletName,
                                                               const GGS_string & in_mTableValueBindingControllerName
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_tableViewBindingGenerationList::CollectionElementPtr_tableViewBindingGenerationList (const GGS_string & in_mTableValueBindingOutletName,
                                                                                                          const GGS_string & in_mTableValueBindingControllerName
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_tableViewBindingGenerationList::CollectionElementPtr_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_tableViewBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_tableViewBindingGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @tableViewBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList::GGS_tableViewBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList::GGS_tableViewBindingGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_tableViewBindingGenerationList * p = (CollectionElementPtr_tableViewBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_tableViewBindingGenerationList) ;
    const GGS_tableViewBindingGenerationList_2E_element element (p->mObject.mProperty_mTableValueBindingOutletName, p->mObject.mProperty_mTableValueBindingControllerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_string & in_mTableValueBindingOutletName,
                                                                    const GGS_string & in_mTableValueBindingControllerName
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_tableViewBindingGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_tableViewBindingGenerationList (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_tableViewBindingGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_tableViewBindingGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::description (String & ioString,
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
      ioString.appendString ("mTableValueBindingOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTableValueBindingOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTableValueBindingControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTableValueBindingControllerName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::plusPlusAssignOperation (const GGS_tableViewBindingGenerationList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                 const GGS_string & inOperand1
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_tableViewBindingGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_tableViewBindingGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                             const GGS_string & inOperand1
                                                             COMMA_LOCATION_ARGS) {
  const GGS_tableViewBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::setter_append (const GGS_string inOperand0,
                                                        const GGS_string inOperand1,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_tableViewBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                               const GGS_string inOperand1,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_tableViewBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_tableViewBindingGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                               GGS_string & outOperand1,
                                                               const GGS_uint inRemoveIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTableValueBindingOutletName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTableValueBindingControllerName ;
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

void GGS_tableViewBindingGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                          GGS_string & outOperand1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingControllerName ;
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

void GGS_tableViewBindingGenerationList::setter_popLast (GGS_string & outOperand0,
                                                         GGS_string & outOperand1,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTableValueBindingOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTableValueBindingControllerName ;
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

void GGS_tableViewBindingGenerationList::method_first (GGS_string & outOperand0,
                                                       GGS_string & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTableValueBindingControllerName ;
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

void GGS_tableViewBindingGenerationList::method_last (GGS_string & outOperand0,
                                                      GGS_string & outOperand1,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTableValueBindingOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTableValueBindingControllerName ;
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

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::add_operation (const GGS_tableViewBindingGenerationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_tableViewBindingGenerationList result ;
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

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_tableViewBindingGenerationList result ;
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

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_tableViewBindingGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_tableViewBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_tableViewBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::plusAssignOperation (const GGS_tableViewBindingGenerationList inList,
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

void GGS_tableViewBindingGenerationList::setter_setMTableValueBindingOutletNameAtIndex (GGS_string inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingOutletName = inOperand ;
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
  
GGS_string GGS_tableViewBindingGenerationList::getter_mTableValueBindingOutletNameAtIndex (const GGS_uint & inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingOutletName ;
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

void GGS_tableViewBindingGenerationList::setter_setMTableValueBindingControllerNameAtIndex (GGS_string inOperand,
                                                                                            GGS_uint inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingControllerName = inOperand ;
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
  
GGS_string GGS_tableViewBindingGenerationList::getter_mTableValueBindingControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTableValueBindingControllerName ;
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
// Down Enumerator for @tableViewBindingGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_tableViewBindingGenerationList::DownEnumerator_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element DownEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingControllerName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @tableViewBindingGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_tableViewBindingGenerationList::UpEnumerator_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList_2E_element UpEnumerator_tableViewBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_tableViewBindingGenerationList::current_mTableValueBindingOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_tableViewBindingGenerationList::current_mTableValueBindingControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTableValueBindingControllerName ;
}




//--------------------------------------------------------------------------------------------------
//     @tableViewBindingGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList ("tableViewBindingGenerationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_tableViewBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_tableViewBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_tableViewBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList result ;
  const GGS_tableViewBindingGenerationList * p = (const GGS_tableViewBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_tableViewBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("tableViewBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@ebViewGraphicControllerBindingGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_ebViewGraphicControllerBindingGenerationList : public CollectionElementPtr {
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (const GGS_string & in_mEBViewOutletName,
                                                                             const GGS_string & in_mArrayControllerControllerName
                                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ebViewGraphicControllerBindingGenerationList::CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (const GGS_string & in_mEBViewOutletName,
                                                                                                                                      const GGS_string & in_mArrayControllerControllerName
                                                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_ebViewGraphicControllerBindingGenerationList::CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_ebViewGraphicControllerBindingGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ebViewGraphicControllerBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList::GGS_ebViewGraphicControllerBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList::GGS_ebViewGraphicControllerBindingGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_ebViewGraphicControllerBindingGenerationList * p = (CollectionElementPtr_ebViewGraphicControllerBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_ebViewGraphicControllerBindingGenerationList) ;
    const GGS_ebViewGraphicControllerBindingGenerationList_2E_element element (p->mObject.mProperty_mEBViewOutletName, p->mObject.mProperty_mArrayControllerControllerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                                  const GGS_string & in_mEBViewOutletName,
                                                                                  const GGS_string & in_mArrayControllerControllerName
                                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_ebViewGraphicControllerBindingGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName, in_mArrayControllerControllerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_ebViewGraphicControllerBindingGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_ebViewGraphicControllerBindingGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::description (String & ioString,
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
      ioString.appendString ("mEBViewOutletName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEBViewOutletName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mArrayControllerControllerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mArrayControllerControllerName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::plusPlusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                             const GGS_string & inOperand1
                                                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_ebViewGraphicControllerBindingGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                           const GGS_string & inOperand1
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_ebViewGraphicControllerBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::setter_append (const GGS_string inOperand0,
                                                                      const GGS_string inOperand1,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_ebViewGraphicControllerBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                             const GGS_string inOperand1,
                                                                             const GGS_uint inInsertionIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_ebViewGraphicControllerBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                             GGS_string & outOperand1,
                                                                             const GGS_uint inRemoveIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEBViewOutletName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mArrayControllerControllerName ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                        GGS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEBViewOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mArrayControllerControllerName ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::setter_popLast (GGS_string & outOperand0,
                                                                       GGS_string & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEBViewOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mArrayControllerControllerName ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::method_first (GGS_string & outOperand0,
                                                                     GGS_string & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEBViewOutletName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mArrayControllerControllerName ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::method_last (GGS_string & outOperand0,
                                                                    GGS_string & outOperand1,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEBViewOutletName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mArrayControllerControllerName ;
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

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::add_operation (const GGS_ebViewGraphicControllerBindingGenerationList & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
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

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::subList (const int32_t inStart,
                                                                                                            const int32_t inLength,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
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

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::plusAssignOperation (const GGS_ebViewGraphicControllerBindingGenerationList inList,
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

void GGS_ebViewGraphicControllerBindingGenerationList::setter_setMEBViewOutletNameAtIndex (GGS_string inOperand,
                                                                                           GGS_uint inIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEBViewOutletName = inOperand ;
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
  
GGS_string GGS_ebViewGraphicControllerBindingGenerationList::getter_mEBViewOutletNameAtIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEBViewOutletName ;
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

void GGS_ebViewGraphicControllerBindingGenerationList::setter_setMArrayControllerControllerNameAtIndex (GGS_string inOperand,
                                                                                                        GGS_uint inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mArrayControllerControllerName = inOperand ;
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
  
GGS_string GGS_ebViewGraphicControllerBindingGenerationList::getter_mArrayControllerControllerNameAtIndex (const GGS_uint & inIndex,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mArrayControllerControllerName ;
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
// Down Enumerator for @ebViewGraphicControllerBindingGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_ebViewGraphicControllerBindingGenerationList::DownEnumerator_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element DownEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEBViewOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArrayControllerControllerName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @ebViewGraphicControllerBindingGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_ebViewGraphicControllerBindingGenerationList::UpEnumerator_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList_2E_element UpEnumerator_ebViewGraphicControllerBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_ebViewGraphicControllerBindingGenerationList::current_mEBViewOutletName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEBViewOutletName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_ebViewGraphicControllerBindingGenerationList::current_mArrayControllerControllerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mArrayControllerControllerName ;
}




//--------------------------------------------------------------------------------------------------
//     @ebViewGraphicControllerBindingGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ("ebViewGraphicControllerBindingGenerationList",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_ebViewGraphicControllerBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_ebViewGraphicControllerBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_ebViewGraphicControllerBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::extractObject (const GGS_object & inObject,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  const GGS_ebViewGraphicControllerBindingGenerationList * p = (const GGS_ebViewGraphicControllerBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_ebViewGraphicControllerBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("ebViewGraphicControllerBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@viewGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_viewGenerationList : public CollectionElementPtr {
  public: GGS_viewGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_viewGenerationList (const GGS_string & in_mViewName,
                                                   const GGS_abstractViewGeneration & in_mView
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_viewGenerationList (const GGS_viewGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_viewGenerationList::CollectionElementPtr_viewGenerationList (const GGS_string & in_mViewName,
                                                                                  const GGS_abstractViewGeneration & in_mView
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_viewGenerationList::CollectionElementPtr_viewGenerationList (const GGS_viewGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_viewGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_viewGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_viewGenerationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @viewGenerationList
//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList::GGS_viewGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList::GGS_viewGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_viewGenerationList * p = (CollectionElementPtr_viewGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_viewGenerationList) ;
    const GGS_viewGenerationList_2E_element element (p->mObject.mProperty_mViewName, p->mObject.mProperty_mView) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_string & in_mViewName,
                                                        const GGS_abstractViewGeneration & in_mView
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_viewGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_viewGenerationList (in_mViewName, in_mView COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_viewGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_viewGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::description (String & ioString,
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

GGS_viewGenerationList GGS_viewGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_viewGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::plusPlusAssignOperation (const GGS_viewGenerationList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_viewGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                         const GGS_abstractViewGeneration & inOperand1
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_viewGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_viewGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                 const GGS_abstractViewGeneration & inOperand1
                                                 COMMA_LOCATION_ARGS) {
  const GGS_viewGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::setter_append (const GGS_string inOperand0,
                                            const GGS_abstractViewGeneration inOperand1,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_viewGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                   const GGS_abstractViewGeneration inOperand1,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_viewGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_viewGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                   GGS_abstractViewGeneration & outOperand1,
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

void GGS_viewGenerationList::setter_popFirst (GGS_string & outOperand0,
                                              GGS_abstractViewGeneration & outOperand1,
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

void GGS_viewGenerationList::setter_popLast (GGS_string & outOperand0,
                                             GGS_abstractViewGeneration & outOperand1,
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

void GGS_viewGenerationList::method_first (GGS_string & outOperand0,
                                           GGS_abstractViewGeneration & outOperand1,
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

void GGS_viewGenerationList::method_last (GGS_string & outOperand0,
                                          GGS_abstractViewGeneration & outOperand1,
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

GGS_viewGenerationList GGS_viewGenerationList::add_operation (const GGS_viewGenerationList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_viewGenerationList result ;
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

GGS_viewGenerationList GGS_viewGenerationList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_viewGenerationList result ;
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

GGS_viewGenerationList GGS_viewGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_viewGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_viewGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_viewGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_viewGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_viewGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::plusAssignOperation (const GGS_viewGenerationList inList,
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

void GGS_viewGenerationList::setter_setMViewNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_viewGenerationList::getter_mViewNameAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_viewGenerationList::setter_setMViewAtIndex (GGS_abstractViewGeneration inOperand,
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
  
GGS_abstractViewGeneration GGS_viewGenerationList::getter_mViewAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_abstractViewGeneration result ;
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
// Down Enumerator for @viewGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_viewGenerationList::DownEnumerator_viewGenerationList (const GGS_viewGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element DownEnumerator_viewGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_viewGenerationList::current_mViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration DownEnumerator_viewGenerationList::current_mView (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mView ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @viewGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_viewGenerationList::UpEnumerator_viewGenerationList (const GGS_viewGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList_2E_element UpEnumerator_viewGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_viewGenerationList::current_mViewName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mViewName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration UpEnumerator_viewGenerationList::current_mView (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mView ;
}




//--------------------------------------------------------------------------------------------------
//     @viewGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_viewGenerationList ("viewGenerationList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_viewGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_viewGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_viewGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_viewGenerationList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_viewGenerationList result ;
  const GGS_viewGenerationList * p = (const GGS_viewGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_viewGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@implicitViewFunctionGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_implicitViewFunctionGenerationList : public CollectionElementPtr {
  public: GGS_implicitViewFunctionGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_implicitViewFunctionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_implicitViewFunctionGenerationList::CollectionElementPtr_implicitViewFunctionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_implicitViewFunctionGenerationList::CollectionElementPtr_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_implicitViewFunctionGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_implicitViewFunctionGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_implicitViewFunctionGenerationList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @implicitViewFunctionGenerationList
//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList::GGS_implicitViewFunctionGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList::GGS_implicitViewFunctionGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_implicitViewFunctionGenerationList * p = (CollectionElementPtr_implicitViewFunctionGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_implicitViewFunctionGenerationList) ;
    const GGS_implicitViewFunctionGenerationList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                        const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_implicitViewFunctionGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_implicitViewFunctionGenerationList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_implicitViewFunctionGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_implicitViewFunctionGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::description (String & ioString,
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

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::plusPlusAssignOperation (const GGS_implicitViewFunctionGenerationList_2E_element & inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::class_func_listWithValue (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_implicitViewFunctionGenerationList_2E_element element (inOperand0) ;
  GGS_implicitViewFunctionGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::addAssignOperation (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_implicitViewFunctionGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::setter_append (const GGS_abstractViewInstructionGeneration inOperand0,
                                                            Compiler * /* inCompiler */
                                                            COMMA_LOCATION_ARGS) {
  const GGS_implicitViewFunctionGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::setter_insertAtIndex (const GGS_abstractViewInstructionGeneration inOperand0,
                                                                   const GGS_uint inInsertionIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  const GGS_implicitViewFunctionGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_implicitViewFunctionGenerationList::setter_removeAtIndex (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_implicitViewFunctionGenerationList::setter_popFirst (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_implicitViewFunctionGenerationList::setter_popLast (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_implicitViewFunctionGenerationList::method_first (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_implicitViewFunctionGenerationList::method_last (GGS_abstractViewInstructionGeneration & outOperand0,
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

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::add_operation (const GGS_implicitViewFunctionGenerationList & inOperand,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_implicitViewFunctionGenerationList result ;
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

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::subList (const int32_t inStart,
                                                                                        const int32_t inLength,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_implicitViewFunctionGenerationList result ;
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

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_implicitViewFunctionGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_implicitViewFunctionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_implicitViewFunctionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_implicitViewFunctionGenerationList::plusAssignOperation (const GGS_implicitViewFunctionGenerationList inList,
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

void GGS_implicitViewFunctionGenerationList::setter_setMInstructionAtIndex (GGS_abstractViewInstructionGeneration inOperand,
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
  
GGS_abstractViewInstructionGeneration GGS_implicitViewFunctionGenerationList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_abstractViewInstructionGeneration result ;
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
// Down Enumerator for @implicitViewFunctionGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_implicitViewFunctionGenerationList::DownEnumerator_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element DownEnumerator_implicitViewFunctionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration DownEnumerator_implicitViewFunctionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @implicitViewFunctionGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_implicitViewFunctionGenerationList::UpEnumerator_implicitViewFunctionGenerationList (const GGS_implicitViewFunctionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList_2E_element UpEnumerator_implicitViewFunctionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration UpEnumerator_implicitViewFunctionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @implicitViewFunctionGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ("implicitViewFunctionGenerationList",
                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_implicitViewFunctionGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_implicitViewFunctionGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_implicitViewFunctionGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_implicitViewFunctionGenerationList::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_implicitViewFunctionGenerationList result ;
  const GGS_implicitViewFunctionGenerationList * p = (const GGS_implicitViewFunctionGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_implicitViewFunctionGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutConfiguratorMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap::GGS_autoLayoutConfiguratorMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap::~ GGS_autoLayoutConfiguratorMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap::GGS_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap & GGS_autoLayoutConfiguratorMap::operator = (const GGS_autoLayoutConfiguratorMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutConfiguratorMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutConfiguratorMap::getter_hasKey (const GGS_string & inKey
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutConfiguratorMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                              const GGS_uint & inLevel
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutConfiguratorMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutConfiguratorMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutConfiguratorMap::getter_locationForKey (const GGS_string & inKey,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutConfiguratorMap::getter_keyList (Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutConfiguratorMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutConfiguratorMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::performInsert (const GGS_autoLayoutConfiguratorMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutConfiguratorMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>
GGS_autoLayoutConfiguratorMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutConfiguratorMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>>
GGS_autoLayoutConfiguratorMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutConfiguratorMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element_3F_ GGS_autoLayoutConfiguratorMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutConfiguratorMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutConfiguratorMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutConfiguratorMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mAutoLayoutOutletTypeName = info->mProperty_mAutoLayoutOutletTypeName ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutConfiguratorMap::class_func_mapWithMapToOverride (const GGS_autoLayoutConfiguratorMap & inMapToOverride
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutConfiguratorMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutConfiguratorMap::getter_overriddenMap (Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutConfiguratorMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::setter_insertKey (GGS_lstring inLKey,
                                                      GGS_string inArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutConfiguratorMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' configurator is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::method_searchKey (GGS_lstring inLKey,
                                                      GGS_string & outArgument0,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' configurator" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mAutoLayoutOutletTypeName ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutConfiguratorMap::getter_mAutoLayoutOutletTypeNameForKey (const GGS_string & inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAutoLayoutOutletTypeName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::setter_setMAutoLayoutOutletTypeNameForKey (GGS_string inValue,
                                                                               GGS_string inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutConfiguratorMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAutoLayoutOutletTypeName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutConfiguratorMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> & inArray,
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
    ioString.appendString ("mAutoLayoutOutletTypeName:") ;
    inArray (i COMMA_HERE)->mProperty_mAutoLayoutOutletTypeName.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutConfiguratorMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutConfiguratorMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutConfiguratorMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutConfiguratorMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutConfiguratorMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutConfiguratorMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutConfiguratorMap::DownEnumerator_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element DownEnumerator_autoLayoutConfiguratorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutConfiguratorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutConfiguratorMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutOutletTypeName ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutConfiguratorMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutConfiguratorMap::UpEnumerator_autoLayoutConfiguratorMap (const GGS_autoLayoutConfiguratorMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap_2E_element UpEnumerator_autoLayoutConfiguratorMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutConfiguratorMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutConfiguratorMap::current_mAutoLayoutOutletTypeName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutOutletTypeName ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutConfiguratorMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ("autoLayoutConfiguratorMap",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutConfiguratorMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutConfiguratorMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutConfiguratorMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutConfiguratorMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_autoLayoutConfiguratorMap::extractObject (const GGS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutConfiguratorMap result ;
  const GGS_autoLayoutConfiguratorMap * p = (const GGS_autoLayoutConfiguratorMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutConfiguratorMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutConfiguratorMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDocumentFileGeneration_2E_weak::objectCompare (const GGS_autoLayoutDocumentFileGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutDocumentFileGeneration_2E_weak::GGS_autoLayoutDocumentFileGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak & GGS_autoLayoutDocumentFileGeneration_2E_weak::operator = (const GGS_autoLayoutDocumentFileGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak::GGS_autoLayoutDocumentFileGeneration_2E_weak (const GGS_autoLayoutDocumentFileGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak GGS_autoLayoutDocumentFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDocumentFileGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDocumentFileGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration GGS_autoLayoutDocumentFileGeneration_2E_weak::bang_autoLayoutDocumentFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDocumentFileGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDocumentFileGeneration) ;
      result = GGS_autoLayoutDocumentFileGeneration ((cPtr_autoLayoutDocumentFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDocumentFileGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ("autoLayoutDocumentFileGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDocumentFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDocumentFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDocumentFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentFileGeneration_2E_weak GGS_autoLayoutDocumentFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDocumentFileGeneration_2E_weak result ;
  const GGS_autoLayoutDocumentFileGeneration_2E_weak * p = (const GGS_autoLayoutDocumentFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDocumentFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@simpleStoredPropertyList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_simpleStoredPropertyList : public CollectionElementPtr {
  public: GGS_simpleStoredPropertyList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                         const GGS_lstring & in_mPropertyName,
                                                         const GGS_abstractDefaultValue & in_mDefaultValue
                                                         COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_simpleStoredPropertyList::CollectionElementPtr_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                                                              const GGS_lstring & in_mPropertyName,
                                                                                              const GGS_abstractDefaultValue & in_mDefaultValue
                                                                                              COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_simpleStoredPropertyList::CollectionElementPtr_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_simpleStoredPropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_simpleStoredPropertyList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @simpleStoredPropertyList
//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_simpleStoredPropertyList * p = (CollectionElementPtr_simpleStoredPropertyList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_simpleStoredPropertyList) ;
    const GGS_simpleStoredPropertyList_2E_element element (p->mObject.mProperty_mPropertyTypeName, p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mDefaultValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_abstractDefaultValue & in_mDefaultValue
                                                              COMMA_LOCATION_ARGS) {
  CollectionElementPtr_simpleStoredPropertyList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_simpleStoredPropertyList (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_simpleStoredPropertyList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_simpleStoredPropertyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::description (String & ioString,
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
      ioString.appendString ("mPropertyTypeName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyTypeName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mPropertyName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDefaultValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDefaultValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::plusPlusAssignOperation (const GGS_simpleStoredPropertyList_2E_element & inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                     const GGS_lstring & inOperand1,
                                                                                     const GGS_abstractDefaultValue & inOperand2
                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_simpleStoredPropertyList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_simpleStoredPropertyList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::addAssignOperation (const GGS_lstring & inOperand0,
                                                       const GGS_lstring & inOperand1,
                                                       const GGS_abstractDefaultValue & inOperand2
                                                       COMMA_LOCATION_ARGS) {
  const GGS_simpleStoredPropertyList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_append (const GGS_lstring inOperand0,
                                                  const GGS_lstring inOperand1,
                                                  const GGS_abstractDefaultValue inOperand2,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  const GGS_simpleStoredPropertyList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                         const GGS_lstring inOperand1,
                                                         const GGS_abstractDefaultValue inOperand2,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_simpleStoredPropertyList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_simpleStoredPropertyList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                         GGS_lstring & outOperand1,
                                                         GGS_abstractDefaultValue & outOperand2,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyTypeName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mPropertyName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mDefaultValue ;
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

void GGS_simpleStoredPropertyList::setter_popFirst (GGS_lstring & outOperand0,
                                                    GGS_lstring & outOperand1,
                                                    GGS_abstractDefaultValue & outOperand2,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDefaultValue ;
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

void GGS_simpleStoredPropertyList::setter_popLast (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS_abstractDefaultValue & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDefaultValue ;
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

void GGS_simpleStoredPropertyList::method_first (GGS_lstring & outOperand0,
                                                 GGS_lstring & outOperand1,
                                                 GGS_abstractDefaultValue & outOperand2,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyTypeName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mPropertyName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mDefaultValue ;
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

void GGS_simpleStoredPropertyList::method_last (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                GGS_abstractDefaultValue & outOperand2,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyTypeName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mPropertyName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mDefaultValue ;
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

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::add_operation (const GGS_simpleStoredPropertyList & inOperand,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
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

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::subList (const int32_t inStart,
                                                                    const int32_t inLength,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
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

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListWithRange (const GGS_range & inRange,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_simpleStoredPropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::plusAssignOperation (const GGS_simpleStoredPropertyList inList,
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

void GGS_simpleStoredPropertyList::setter_setMPropertyTypeNameAtIndex (GGS_lstring inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyTypeName = inOperand ;
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
  
GGS_lstring GGS_simpleStoredPropertyList::getter_mPropertyTypeNameAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyTypeName ;
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

void GGS_simpleStoredPropertyList::setter_setMPropertyNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_simpleStoredPropertyList::getter_mPropertyNameAtIndex (const GGS_uint & inIndex,
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

void GGS_simpleStoredPropertyList::setter_setMDefaultValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValue = inOperand ;
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
  
GGS_abstractDefaultValue GGS_simpleStoredPropertyList::getter_mDefaultValueAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDefaultValue ;
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
// Down Enumerator for @simpleStoredPropertyList
//--------------------------------------------------------------------------------------------------

DownEnumerator_simpleStoredPropertyList::DownEnumerator_simpleStoredPropertyList (const GGS_simpleStoredPropertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element DownEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue DownEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @simpleStoredPropertyList
//--------------------------------------------------------------------------------------------------

UpEnumerator_simpleStoredPropertyList::UpEnumerator_simpleStoredPropertyList (const GGS_simpleStoredPropertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList_2E_element UpEnumerator_simpleStoredPropertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_simpleStoredPropertyList::current_mPropertyTypeName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_simpleStoredPropertyList::current_mPropertyName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue UpEnumerator_simpleStoredPropertyList::current_mDefaultValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDefaultValue ;
}




//--------------------------------------------------------------------------------------------------
//     @simpleStoredPropertyList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_simpleStoredPropertyList ("simpleStoredPropertyList",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_simpleStoredPropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_simpleStoredPropertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_simpleStoredPropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_simpleStoredPropertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList result ;
  const GGS_simpleStoredPropertyList * p = (const GGS_simpleStoredPropertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_simpleStoredPropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("simpleStoredPropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@externSwiftFunctionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_externSwiftFunctionList : public CollectionElementPtr {
  public: GGS_externSwiftFunctionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                        const GGS_lstring & in_mCallerName
                                                        COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externSwiftFunctionList::CollectionElementPtr_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                            const GGS_lstring & in_mCallerName
                                                                                            COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_externSwiftFunctionList::CollectionElementPtr_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_externSwiftFunctionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_externSwiftFunctionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externSwiftFunctionList
//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_externSwiftFunctionList * p = (CollectionElementPtr_externSwiftFunctionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_externSwiftFunctionList) ;
    const GGS_externSwiftFunctionList_2E_element element (p->mObject.mProperty_mExternSwiftFunctionName, p->mObject.mProperty_mCallerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftFunctionName,
                                                             const GGS_lstring & in_mCallerName
                                                             COMMA_LOCATION_ARGS) {
  CollectionElementPtr_externSwiftFunctionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_externSwiftFunctionList (in_mExternSwiftFunctionName, in_mCallerName COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externSwiftFunctionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_externSwiftFunctionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::description (String & ioString,
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
      ioString.appendString ("mExternSwiftFunctionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mExternSwiftFunctionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mCallerName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mCallerName.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_externSwiftFunctionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::plusPlusAssignOperation (const GGS_externSwiftFunctionList_2E_element & inValue
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                   const GGS_lstring & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_externSwiftFunctionList_2E_element element (inOperand0, inOperand1) ;
  GGS_externSwiftFunctionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                      const GGS_lstring & inOperand1
                                                      COMMA_LOCATION_ARGS) {
  const GGS_externSwiftFunctionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_append (const GGS_lstring inOperand0,
                                                 const GGS_lstring inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  const GGS_externSwiftFunctionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                        const GGS_lstring inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  const GGS_externSwiftFunctionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_externSwiftFunctionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                        GGS_lstring & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mExternSwiftFunctionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mCallerName ;
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

void GGS_externSwiftFunctionList::setter_popFirst (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExternSwiftFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCallerName ;
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

void GGS_externSwiftFunctionList::setter_popLast (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExternSwiftFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCallerName ;
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

void GGS_externSwiftFunctionList::method_first (GGS_lstring & outOperand0,
                                                GGS_lstring & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mExternSwiftFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mCallerName ;
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

void GGS_externSwiftFunctionList::method_last (GGS_lstring & outOperand0,
                                               GGS_lstring & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mExternSwiftFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mCallerName ;
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

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::add_operation (const GGS_externSwiftFunctionList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
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

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::subList (const int32_t inStart,
                                                                  const int32_t inLength,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
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

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_externSwiftFunctionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::plusAssignOperation (const GGS_externSwiftFunctionList inList,
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

void GGS_externSwiftFunctionList::setter_setMExternSwiftFunctionNameAtIndex (GGS_lstring inOperand,
                                                                             GGS_uint inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mExternSwiftFunctionName = inOperand ;
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
  
GGS_lstring GGS_externSwiftFunctionList::getter_mExternSwiftFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mExternSwiftFunctionName ;
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

void GGS_externSwiftFunctionList::setter_setMCallerNameAtIndex (GGS_lstring inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mCallerName = inOperand ;
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
  
GGS_lstring GGS_externSwiftFunctionList::getter_mCallerNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mCallerName ;
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
// Down Enumerator for @externSwiftFunctionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_externSwiftFunctionList::DownEnumerator_externSwiftFunctionList (const GGS_externSwiftFunctionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element DownEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExternSwiftFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallerName ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @externSwiftFunctionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_externSwiftFunctionList::UpEnumerator_externSwiftFunctionList (const GGS_externSwiftFunctionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList_2E_element UpEnumerator_externSwiftFunctionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externSwiftFunctionList::current_mExternSwiftFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mExternSwiftFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externSwiftFunctionList::current_mCallerName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mCallerName ;
}




//--------------------------------------------------------------------------------------------------
//     @externSwiftFunctionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externSwiftFunctionList ("externSwiftFunctionList",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externSwiftFunctionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externSwiftFunctionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externSwiftFunctionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externSwiftFunctionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_externSwiftFunctionList result ;
  const GGS_externSwiftFunctionList * p = (const GGS_externSwiftFunctionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externSwiftFunctionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externSwiftFunctionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsDeclarationAST_2E_weak::objectCompare (const GGS_prefsDeclarationAST_2E_weak & inOperand) const {
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

GGS_prefsDeclarationAST_2E_weak::GGS_prefsDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak & GGS_prefsDeclarationAST_2E_weak::operator = (const GGS_prefsDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak::GGS_prefsDeclarationAST_2E_weak (const GGS_prefsDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak GGS_prefsDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefsDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_prefsDeclarationAST result ;
  if (isValid ()) {
    const cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefsDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST GGS_prefsDeclarationAST_2E_weak::bang_prefsDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefsDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsDeclarationAST) ;
      result = GGS_prefsDeclarationAST ((cPtr_prefsDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefsDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ("prefsDeclarationAST.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefsDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsDeclarationAST_2E_weak GGS_prefsDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsDeclarationAST_2E_weak result ;
  const GGS_prefsDeclarationAST_2E_weak * p = (const GGS_prefsDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @preferencesForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_preferencesForGeneration::objectCompare (const GGS_preferencesForGeneration & inOperand) const {
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

GGS_preferencesForGeneration::GGS_preferencesForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                          const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                          const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                          const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                          const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                          const GGS_decoratedOutletMap & in_mOutletMap,
                                                          const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                          const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                          const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                          const GGS_viewGenerationList & in_mViewGenerationList,
                                                          const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                          const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                          const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cPtr_preferencesForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_preferencesForGeneration (inCompiler COMMA_THERE)) ;
  object->preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (in_mPropertyListForGeneration, in_mMainXibDescriptorList, in_mRegularBindingsGenerationList, in_mMultipleBindingGenerationList, in_mActionBindingListForGeneration, in_mOutletMap, in_mExternSwiftFunctionList, in_mTableViewBindingGenerationList, in_mEBViewBindingGenerationList, in_mViewGenerationList, in_mImplicitViewFunctionGenerationList, in_mConfiguratorMap, in_mAutoLayoutOutletMap, inCompiler) ;
  const GGS_preferencesForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_preferencesForGeneration::
preferencesForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                                                   const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                                                   const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                   const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                   const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                                                   const GGS_decoratedOutletMap & in_mOutletMap,
                                                                                   const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                                                   const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                                   const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                                   const GGS_viewGenerationList & in_mViewGenerationList,
                                                                                   const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                                   const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                                   const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                                   Compiler * /* inCompiler */) {
  mProperty_mPropertyListForGeneration = in_mPropertyListForGeneration ;
  mProperty_mMainXibDescriptorList = in_mMainXibDescriptorList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mActionBindingListForGeneration = in_mActionBindingListForGeneration ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mExternSwiftFunctionList = in_mExternSwiftFunctionList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewGenerationList = in_mViewGenerationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration::GGS_preferencesForGeneration (const cPtr_preferencesForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_preferencesForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_preferencesForGeneration::readProperty_mPropertyListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mPropertyListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibDescriptorList GGS_preferencesForGeneration::readProperty_mMainXibDescriptorList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_mainXibDescriptorList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMainXibDescriptorList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList GGS_preferencesForGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_regularBindingsGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList GGS_preferencesForGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_multipleBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration GGS_preferencesForGeneration::readProperty_mActionBindingListForGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_actionBindingListForGeneration () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mActionBindingListForGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_decoratedOutletMap GGS_preferencesForGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_decoratedOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList GGS_preferencesForGeneration::readProperty_mExternSwiftFunctionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftFunctionList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mExternSwiftFunctionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList GGS_preferencesForGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_tableViewBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList GGS_preferencesForGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList GGS_preferencesForGeneration::readProperty_mViewGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_viewGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mViewGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_implicitViewFunctionGenerationList GGS_preferencesForGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutConfiguratorMap GGS_preferencesForGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletMap GGS_preferencesForGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_autoLayoutOutletMap () ;
  }else{
    cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_preferencesForGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @preferencesForGeneration class
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

cPtr_preferencesForGeneration::cPtr_preferencesForGeneration (const GGS_propertyGenerationList & in_mPropertyListForGeneration,
                                                              const GGS_mainXibDescriptorList & in_mMainXibDescriptorList,
                                                              const GGS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                              const GGS_multipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                              const GGS_actionBindingListForGeneration & in_mActionBindingListForGeneration,
                                                              const GGS_decoratedOutletMap & in_mOutletMap,
                                                              const GGS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                                              const GGS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                              const GGS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                              const GGS_viewGenerationList & in_mViewGenerationList,
                                                              const GGS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                              const GGS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                              const GGS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) :
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
  mProperty_mPropertyListForGeneration = in_mPropertyListForGeneration ;
  mProperty_mMainXibDescriptorList = in_mMainXibDescriptorList ;
  mProperty_mRegularBindingsGenerationList = in_mRegularBindingsGenerationList ;
  mProperty_mMultipleBindingGenerationList = in_mMultipleBindingGenerationList ;
  mProperty_mActionBindingListForGeneration = in_mActionBindingListForGeneration ;
  mProperty_mOutletMap = in_mOutletMap ;
  mProperty_mExternSwiftFunctionList = in_mExternSwiftFunctionList ;
  mProperty_mTableViewBindingGenerationList = in_mTableViewBindingGenerationList ;
  mProperty_mEBViewBindingGenerationList = in_mEBViewBindingGenerationList ;
  mProperty_mViewGenerationList = in_mViewGenerationList ;
  mProperty_mImplicitViewFunctionGenerationList = in_mImplicitViewFunctionGenerationList ;
  mProperty_mConfiguratorMap = in_mConfiguratorMap ;
  mProperty_mAutoLayoutOutletMap = in_mAutoLayoutOutletMap ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_preferencesForGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_preferencesForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_preferencesForGeneration (mProperty_mPropertyListForGeneration, mProperty_mMainXibDescriptorList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mActionBindingListForGeneration, mProperty_mOutletMap, mProperty_mExternSwiftFunctionList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewGenerationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mAutoLayoutOutletMap, inCompiler COMMA_THERE)) ;
  return ptr ;
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
//     @preferencesForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration::extractObject (const GGS_object & inObject,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  GGS_preferencesForGeneration result ;
  const GGS_preferencesForGeneration * p = (const GGS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_preferencesForGeneration_2E_weak::objectCompare (const GGS_preferencesForGeneration_2E_weak & inOperand) const {
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

GGS_preferencesForGeneration_2E_weak::GGS_preferencesForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak & GGS_preferencesForGeneration_2E_weak::operator = (const GGS_preferencesForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak::GGS_preferencesForGeneration_2E_weak (const GGS_preferencesForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak GGS_preferencesForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_preferencesForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_preferencesForGeneration result ;
  if (isValid ()) {
    const cPtr_preferencesForGeneration * p = (cPtr_preferencesForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_preferencesForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration GGS_preferencesForGeneration_2E_weak::bang_preferencesForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_preferencesForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_preferencesForGeneration) ;
      result = GGS_preferencesForGeneration ((cPtr_preferencesForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @preferencesForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ("preferencesForGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_preferencesForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_preferencesForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_preferencesForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_preferencesForGeneration_2E_weak GGS_preferencesForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_preferencesForGeneration_2E_weak result ;
  const GGS_preferencesForGeneration_2E_weak * p = (const GGS_preferencesForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_preferencesForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeGroupList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeGroupList : public CollectionElementPtr {
  public: GGS_XCodeGroupList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeGroupList (const GGS_string & in_mGroupReference,
                                               const GGS_string & in_mGroupName,
                                               const GGS_string & in_mGroupPath,
                                               const GGS_stringlist & in_mChildrenRefs
                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeGroupList::CollectionElementPtr_XCodeGroupList (const GGS_string & in_mGroupReference,
                                                                          const GGS_string & in_mGroupName,
                                                                          const GGS_string & in_mGroupPath,
                                                                          const GGS_stringlist & in_mChildrenRefs
                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeGroupList::CollectionElementPtr_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeGroupList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeGroupList
//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeGroupList * p = (CollectionElementPtr_XCodeGroupList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeGroupList) ;
    const GGS_XCodeGroupList_2E_element element (p->mObject.mProperty_mGroupReference, p->mObject.mProperty_mGroupName, p->mObject.mProperty_mGroupPath, p->mObject.mProperty_mChildrenRefs) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeGroupList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeGroupList (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeGroupList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeGroupList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::description (String & ioString,
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
      ioString.appendString ("mGroupReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mGroupPath:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mGroupPath.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mChildrenRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mChildrenRefs.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusPlusAssignOperation (const GGS_XCodeGroupList_2E_element & inValue
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  GGS_XCodeGroupList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssignOperation (const GGS_string & inOperand0,
                                             const GGS_string & inOperand1,
                                             const GGS_string & inOperand2,
                                             const GGS_stringlist & inOperand3
                                             COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_insertAtIndex (const GGS_string inOperand0,
                                               const GGS_string inOperand1,
                                               const GGS_string inOperand2,
                                               const GGS_stringlist inOperand3,
                                               const GGS_uint inInsertionIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  const GGS_XCodeGroupList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3) ;
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

void GGS_XCodeGroupList::setter_removeAtIndex (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_stringlist & outOperand3,
                                               const GGS_uint inRemoveIndex,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mGroupReference ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mGroupName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mGroupPath ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mGroupReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mGroupName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mGroupPath ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mChildrenRefs ;
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

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mGroupReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mGroupName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mGroupPath ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mChildrenRefs ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::subList (const int32_t inStart,
                                                const int32_t inLength,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
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

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssignOperation (const GGS_XCodeGroupList inList,
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

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupReference ;
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

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupName ;
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

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath = inOperand ;
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
  
GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mGroupPath ;
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

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs = inOperand ;
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
  
GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mChildrenRefs ;
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
// Down Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeGroupList::DownEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element DownEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeGroupList::UpEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element UpEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeGroupList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeGroupList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  const GGS_XCodeGroupList * p = (const GGS_XCodeGroupList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeGroupList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeToolTargetList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeToolTargetList : public CollectionElementPtr {
  public: GGS_XCodeToolTargetList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                    const GGS_string & in_mTargetName,
                                                    const GGS_string & in_mProductFileReference,
                                                    const GGS_string & in_mProductFileName,
                                                    const GGS_stringlist & in_mBuildPhaseRefList,
                                                    const GGS_string & in_mBuildPhaseRef,
                                                    const GGS_string & in_mBuildConfigurationListRef,
                                                    const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                    const GGS_string & in_mBuildConfigurationRef,
                                                    const GGS_stringlist & in_mFrameworksFileRefList,
                                                    const GGS_string & in_mFrameworkBuildPhaseRef
                                                    COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeToolTargetList::CollectionElementPtr_XCodeToolTargetList (const GGS_string & in_mTargetRef,
                                                                                    const GGS_string & in_mTargetName,
                                                                                    const GGS_string & in_mProductFileReference,
                                                                                    const GGS_string & in_mProductFileName,
                                                                                    const GGS_stringlist & in_mBuildPhaseRefList,
                                                                                    const GGS_string & in_mBuildPhaseRef,
                                                                                    const GGS_string & in_mBuildConfigurationListRef,
                                                                                    const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                                                    const GGS_string & in_mBuildConfigurationRef,
                                                                                    const GGS_stringlist & in_mFrameworksFileRefList,
                                                                                    const GGS_string & in_mFrameworkBuildPhaseRef
                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeToolTargetList::CollectionElementPtr_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeToolTargetList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeToolTargetList * p = (CollectionElementPtr_XCodeToolTargetList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeToolTargetList) ;
    const GGS_XCodeToolTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                         const GGS_string & in_mTargetRef,
                                                         const GGS_string & in_mTargetName,
                                                         const GGS_string & in_mProductFileReference,
                                                         const GGS_string & in_mProductFileName,
                                                         const GGS_stringlist & in_mBuildPhaseRefList,
                                                         const GGS_string & in_mBuildPhaseRef,
                                                         const GGS_string & in_mBuildConfigurationListRef,
                                                         const GGS_stringlist & in_mBuildConfigurationSettingList,
                                                         const GGS_string & in_mBuildConfigurationRef,
                                                         const GGS_stringlist & in_mFrameworksFileRefList,
                                                         const GGS_string & in_mFrameworkBuildPhaseRef
                                                         COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeToolTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeToolTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeToolTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::description (String & ioString,
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
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusPlusAssignOperation (const GGS_XCodeToolTargetList_2E_element & inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                           const GGS_string & inOperand1,
                                                                           const GGS_string & inOperand2,
                                                                           const GGS_string & inOperand3,
                                                                           const GGS_stringlist & inOperand4,
                                                                           const GGS_string & inOperand5,
                                                                           const GGS_string & inOperand6,
                                                                           const GGS_stringlist & inOperand7,
                                                                           const GGS_string & inOperand8,
                                                                           const GGS_stringlist & inOperand9,
                                                                           const GGS_string & inOperand10
                                                                           COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  GGS_XCodeToolTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::addAssignOperation (const GGS_string & inOperand0,
                                                  const GGS_string & inOperand1,
                                                  const GGS_string & inOperand2,
                                                  const GGS_string & inOperand3,
                                                  const GGS_stringlist & inOperand4,
                                                  const GGS_string & inOperand5,
                                                  const GGS_string & inOperand6,
                                                  const GGS_stringlist & inOperand7,
                                                  const GGS_string & inOperand8,
                                                  const GGS_stringlist & inOperand9,
                                                  const GGS_string & inOperand10
                                                  COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_append (const GGS_string inOperand0,
                                             const GGS_string inOperand1,
                                             const GGS_string inOperand2,
                                             const GGS_string inOperand3,
                                             const GGS_stringlist inOperand4,
                                             const GGS_string inOperand5,
                                             const GGS_string inOperand6,
                                             const GGS_stringlist inOperand7,
                                             const GGS_string inOperand8,
                                             const GGS_stringlist inOperand9,
                                             const GGS_string inOperand10,
                                             Compiler * /* inCompiler */
                                             COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                    const GGS_string inOperand1,
                                                    const GGS_string inOperand2,
                                                    const GGS_string inOperand3,
                                                    const GGS_stringlist inOperand4,
                                                    const GGS_string inOperand5,
                                                    const GGS_string inOperand6,
                                                    const GGS_stringlist inOperand7,
                                                    const GGS_string inOperand8,
                                                    const GGS_stringlist inOperand9,
                                                    const GGS_string inOperand10,
                                                    const GGS_uint inInsertionIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_XCodeToolTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
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

void GGS_XCodeToolTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                    GGS_string & outOperand1,
                                                    GGS_string & outOperand2,
                                                    GGS_string & outOperand3,
                                                    GGS_stringlist & outOperand4,
                                                    GGS_string & outOperand5,
                                                    GGS_string & outOperand6,
                                                    GGS_stringlist & outOperand7,
                                                    GGS_string & outOperand8,
                                                    GGS_stringlist & outOperand9,
                                                    GGS_string & outOperand10,
                                                    const GGS_uint inRemoveIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popFirst (GGS_string & outOperand0,
                                               GGS_string & outOperand1,
                                               GGS_string & outOperand2,
                                               GGS_string & outOperand3,
                                               GGS_stringlist & outOperand4,
                                               GGS_string & outOperand5,
                                               GGS_string & outOperand6,
                                               GGS_stringlist & outOperand7,
                                               GGS_string & outOperand8,
                                               GGS_stringlist & outOperand9,
                                               GGS_string & outOperand10,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_popLast (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_first (GGS_string & outOperand0,
                                            GGS_string & outOperand1,
                                            GGS_string & outOperand2,
                                            GGS_string & outOperand3,
                                            GGS_stringlist & outOperand4,
                                            GGS_string & outOperand5,
                                            GGS_string & outOperand6,
                                            GGS_stringlist & outOperand7,
                                            GGS_string & outOperand8,
                                            GGS_stringlist & outOperand9,
                                            GGS_string & outOperand10,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::method_last (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
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
    outOperand8.drop () ;
    outOperand9.drop () ;
    outOperand10.drop () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
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

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::subList (const int32_t inStart,
                                                          const int32_t inLength,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
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

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusAssignOperation (const GGS_XCodeToolTargetList inList,
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

void GGS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
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

void GGS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
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

void GGS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
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

void GGS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
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

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
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

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
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

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
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

void GGS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
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

void GGS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
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
// Down Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeToolTargetList::DownEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element DownEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeToolTargetList::UpEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element UpEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeToolTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeToolTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeToolTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_XCodeToolTargetList result ;
  const GGS_XCodeToolTargetList * p = (const GGS_XCodeToolTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeToolTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@XCodeAppTargetList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_XCodeAppTargetList : public CollectionElementPtr {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
                                                   const GGS_string & in_mInfoPListFile
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
                                                                                  const GGS_string & in_mInfoPListFile
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_XCodeAppTargetList::CollectionElementPtr_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_XCodeAppTargetList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_XCodeAppTargetList * p = (CollectionElementPtr_XCodeAppTargetList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_XCodeAppTargetList) ;
    const GGS_XCodeAppTargetList_2E_element element (p->mObject.mProperty_mTargetRef, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mProductFileReference, p->mObject.mProperty_mProductFileName, p->mObject.mProperty_mBuildPhaseRefList, p->mObject.mProperty_mBuildPhaseRef, p->mObject.mProperty_mBuildConfigurationListRef, p->mObject.mProperty_mBuildConfigurationSettingList, p->mObject.mProperty_mBuildConfigurationRef, p->mObject.mProperty_mFrameworksFileRefList, p->mObject.mProperty_mFrameworkBuildPhaseRef, p->mObject.mProperty_mDependentTargets, p->mObject.mProperty_mResourceBuildRef, p->mObject.mProperty_mResourceFileBuildRefs, p->mObject.mProperty_mInfoPListFile) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_string & in_mTargetRef,
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
                                                        const GGS_string & in_mInfoPListFile
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_XCodeAppTargetList (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_XCodeAppTargetList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_XCodeAppTargetList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::description (String & ioString,
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
      ioString.appendString ("mTargetRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mTargetName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mTargetName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mProductFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mProductFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationListRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationListRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationSettingList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildConfigurationRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildConfigurationRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworksFileRefList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworksFileRefList.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFrameworkBuildPhaseRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mDependentTargets:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mDependentTargets.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceBuildRef:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceBuildRef.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mResourceFileBuildRefs:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mResourceFileBuildRefs.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mInfoPListFile:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mInfoPListFile.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusPlusAssignOperation (const GGS_XCodeAppTargetList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_listWithValue (const GGS_string & inOperand0,
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
                                                                         const GGS_string & inOperand14
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  GGS_XCodeAppTargetList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::addAssignOperation (const GGS_string & inOperand0,
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
                                                 const GGS_string & inOperand14
                                                 COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_append (const GGS_string inOperand0,
                                            const GGS_string inOperand1,
                                            const GGS_string inOperand2,
                                            const GGS_string inOperand3,
                                            const GGS_stringlist inOperand4,
                                            const GGS_string inOperand5,
                                            const GGS_string inOperand6,
                                            const GGS_stringlist inOperand7,
                                            const GGS_string inOperand8,
                                            const GGS_stringlist inOperand9,
                                            const GGS_string inOperand10,
                                            const GGS__32_stringlist inOperand11,
                                            const GGS_string inOperand12,
                                            const GGS_stringlist inOperand13,
                                            const GGS_string inOperand14,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_insertAtIndex (const GGS_string inOperand0,
                                                   const GGS_string inOperand1,
                                                   const GGS_string inOperand2,
                                                   const GGS_string inOperand3,
                                                   const GGS_stringlist inOperand4,
                                                   const GGS_string inOperand5,
                                                   const GGS_string inOperand6,
                                                   const GGS_stringlist inOperand7,
                                                   const GGS_string inOperand8,
                                                   const GGS_stringlist inOperand9,
                                                   const GGS_string inOperand10,
                                                   const GGS__32_stringlist inOperand11,
                                                   const GGS_string inOperand12,
                                                   const GGS_stringlist inOperand13,
                                                   const GGS_string inOperand14,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_XCodeAppTargetList_2E_element newElement (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14) ;
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

void GGS_XCodeAppTargetList::setter_removeAtIndex (GGS_string & outOperand0,
                                                   GGS_string & outOperand1,
                                                   GGS_string & outOperand2,
                                                   GGS_string & outOperand3,
                                                   GGS_stringlist & outOperand4,
                                                   GGS_string & outOperand5,
                                                   GGS_string & outOperand6,
                                                   GGS_stringlist & outOperand7,
                                                   GGS_string & outOperand8,
                                                   GGS_stringlist & outOperand9,
                                                   GGS_string & outOperand10,
                                                   GGS__32_stringlist & outOperand11,
                                                   GGS_string & outOperand12,
                                                   GGS_stringlist & outOperand13,
                                                   GGS_string & outOperand14,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mTargetRef ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mTargetName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (idx COMMA_HERE).mProperty_mProductFileName ;
      outOperand4 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (idx COMMA_HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (idx COMMA_HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (idx COMMA_HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (idx COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (idx COMMA_HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (idx COMMA_HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (idx COMMA_HERE).mProperty_mResourceFileBuildRefs ;
      outOperand14 = mArray (idx COMMA_HERE).mProperty_mInfoPListFile ;
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

void GGS_XCodeAppTargetList::setter_popFirst (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              GGS_string & outOperand3,
                                              GGS_stringlist & outOperand4,
                                              GGS_string & outOperand5,
                                              GGS_string & outOperand6,
                                              GGS_stringlist & outOperand7,
                                              GGS_string & outOperand8,
                                              GGS_stringlist & outOperand9,
                                              GGS_string & outOperand10,
                                              GGS__32_stringlist & outOperand11,
                                              GGS_string & outOperand12,
                                              GGS_stringlist & outOperand13,
                                              GGS_string & outOperand14,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
      outOperand14 = mArray (0 COMMA_THERE).mProperty_mInfoPListFile ;
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

void GGS_XCodeAppTargetList::setter_popLast (GGS_string & outOperand0,
                                             GGS_string & outOperand1,
                                             GGS_string & outOperand2,
                                             GGS_string & outOperand3,
                                             GGS_stringlist & outOperand4,
                                             GGS_string & outOperand5,
                                             GGS_string & outOperand6,
                                             GGS_stringlist & outOperand7,
                                             GGS_string & outOperand8,
                                             GGS_stringlist & outOperand9,
                                             GGS_string & outOperand10,
                                             GGS__32_stringlist & outOperand11,
                                             GGS_string & outOperand12,
                                             GGS_stringlist & outOperand13,
                                             GGS_string & outOperand14,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
      outOperand14 = mArray.lastObject (HERE).mProperty_mInfoPListFile ;
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

void GGS_XCodeAppTargetList::method_first (GGS_string & outOperand0,
                                           GGS_string & outOperand1,
                                           GGS_string & outOperand2,
                                           GGS_string & outOperand3,
                                           GGS_stringlist & outOperand4,
                                           GGS_string & outOperand5,
                                           GGS_string & outOperand6,
                                           GGS_stringlist & outOperand7,
                                           GGS_string & outOperand8,
                                           GGS_stringlist & outOperand9,
                                           GGS_string & outOperand10,
                                           GGS__32_stringlist & outOperand11,
                                           GGS_string & outOperand12,
                                           GGS_stringlist & outOperand13,
                                           GGS_string & outOperand14,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mTargetRef ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mTargetName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mProductFileReference ;
      outOperand3 = mArray (0 COMMA_THERE).mProperty_mProductFileName ;
      outOperand4 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray (0 COMMA_THERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray (0 COMMA_THERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray (0 COMMA_THERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray (0 COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray (0 COMMA_THERE).mProperty_mDependentTargets ;
      outOperand12 = mArray (0 COMMA_THERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray (0 COMMA_THERE).mProperty_mResourceFileBuildRefs ;
      outOperand14 = mArray (0 COMMA_THERE).mProperty_mInfoPListFile ;
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

void GGS_XCodeAppTargetList::method_last (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_string & outOperand3,
                                          GGS_stringlist & outOperand4,
                                          GGS_string & outOperand5,
                                          GGS_string & outOperand6,
                                          GGS_stringlist & outOperand7,
                                          GGS_string & outOperand8,
                                          GGS_stringlist & outOperand9,
                                          GGS_string & outOperand10,
                                          GGS__32_stringlist & outOperand11,
                                          GGS_string & outOperand12,
                                          GGS_stringlist & outOperand13,
                                          GGS_string & outOperand14,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mTargetRef ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mTargetName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mProductFileReference ;
      outOperand3 = mArray.lastObject (HERE).mProperty_mProductFileName ;
      outOperand4 = mArray.lastObject (HERE).mProperty_mBuildPhaseRefList ;
      outOperand5 = mArray.lastObject (HERE).mProperty_mBuildPhaseRef ;
      outOperand6 = mArray.lastObject (HERE).mProperty_mBuildConfigurationListRef ;
      outOperand7 = mArray.lastObject (HERE).mProperty_mBuildConfigurationSettingList ;
      outOperand8 = mArray.lastObject (HERE).mProperty_mBuildConfigurationRef ;
      outOperand9 = mArray.lastObject (HERE).mProperty_mFrameworksFileRefList ;
      outOperand10 = mArray.lastObject (HERE).mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = mArray.lastObject (HERE).mProperty_mDependentTargets ;
      outOperand12 = mArray.lastObject (HERE).mProperty_mResourceBuildRef ;
      outOperand13 = mArray.lastObject (HERE).mProperty_mResourceFileBuildRefs ;
      outOperand14 = mArray.lastObject (HERE).mProperty_mInfoPListFile ;
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

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
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

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
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

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusAssignOperation (const GGS_XCodeAppTargetList inList,
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

void GGS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetRef ;
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

void GGS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mTargetName ;
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

void GGS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileReference ;
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

void GGS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mProductFileName ;
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

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRefList ;
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

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildPhaseRef ;
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

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationListRef ;
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

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList = inOperand ;
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
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationSettingList ;
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

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildConfigurationRef ;
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

void GGS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList = inOperand ;
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
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworksFileRefList ;
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

void GGS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFrameworkBuildPhaseRef ;
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

void GGS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GGS__32_stringlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets = inOperand ;
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
  
GGS__32_stringlist GGS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mDependentTargets ;
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

void GGS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceBuildRef ;
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

void GGS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs = inOperand ;
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
  
GGS_stringlist GGS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_stringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mResourceFileBuildRefs ;
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

void GGS_XCodeAppTargetList::setter_setMInfoPListFileAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mInfoPListFile = inOperand ;
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
  
GGS_string GGS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mInfoPListFile ;
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
// Down Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeAppTargetList::DownEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element DownEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInfoPListFile ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeAppTargetList::UpEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element UpEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mResourceFileBuildRefs ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInfoPListFile ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_XCodeAppTargetList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_XCodeAppTargetList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_XCodeAppTargetList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_XCodeAppTargetList result ;
  const GGS_XCodeAppTargetList * p = (const GGS_XCodeAppTargetList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_XCodeAppTargetList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@BuildFileList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_BuildFileList : public CollectionElementPtr {
  public: GGS_BuildFileList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_BuildFileList (const GGS_string & in_mFileReference,
                                              const GGS_string & in_mFileName,
                                              const GGS_string & in_mBuildReference
                                              COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_BuildFileList::CollectionElementPtr_BuildFileList (const GGS_string & in_mFileReference,
                                                                        const GGS_string & in_mFileName,
                                                                        const GGS_string & in_mBuildReference
                                                                        COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_BuildFileList::CollectionElementPtr_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_BuildFileList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @BuildFileList
//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_BuildFileList * p = (CollectionElementPtr_BuildFileList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_BuildFileList) ;
    const GGS_BuildFileList_2E_element element (p->mObject.mProperty_mFileReference, p->mObject.mProperty_mFileName, p->mObject.mProperty_mBuildReference) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                   const GGS_string & in_mFileReference,
                                                   const GGS_string & in_mFileName,
                                                   const GGS_string & in_mBuildReference
                                                   COMMA_LOCATION_ARGS) {
  CollectionElementPtr_BuildFileList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_BuildFileList (in_mFileReference, in_mFileName, in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_BuildFileList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_BuildFileList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::description (String & ioString,
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
      ioString.appendString ("mFileReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFileReference.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFileName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFileName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mBuildReference:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBuildReference.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusPlusAssignOperation (const GGS_BuildFileList_2E_element & inValue
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_BuildFileList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::addAssignOperation (const GGS_string & inOperand0,
                                            const GGS_string & inOperand1,
                                            const GGS_string & inOperand2
                                            COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_string inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_string inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_BuildFileList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_BuildFileList::setter_removeAtIndex (GGS_string & outOperand0,
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
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFileReference ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFileName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBuildReference ;
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

void GGS_BuildFileList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFileName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBuildReference ;
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

void GGS_BuildFileList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFileName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBuildReference ;
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

void GGS_BuildFileList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFileReference ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFileName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBuildReference ;
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

void GGS_BuildFileList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_string & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFileReference ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFileName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBuildReference ;
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

GGS_BuildFileList GGS_BuildFileList::add_operation (const GGS_BuildFileList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
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

GGS_BuildFileList GGS_BuildFileList::subList (const int32_t inStart,
                                              const int32_t inLength,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
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

GGS_BuildFileList GGS_BuildFileList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusAssignOperation (const GGS_BuildFileList inList,
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

void GGS_BuildFileList::setter_setMFileReferenceAtIndex (GGS_string inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFileReference = inOperand ;
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
  
GGS_string GGS_BuildFileList::getter_mFileReferenceAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFileReference ;
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

void GGS_BuildFileList::setter_setMFileNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mFileName = inOperand ;
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
  
GGS_string GGS_BuildFileList::getter_mFileNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mFileName ;
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

void GGS_BuildFileList::setter_setMBuildReferenceAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildReference = inOperand ;
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
  
GGS_string GGS_BuildFileList::getter_mBuildReferenceAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mBuildReference ;
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
// Down Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

DownEnumerator_BuildFileList::DownEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element DownEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildReference ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

UpEnumerator_BuildFileList::UpEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element UpEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//     @BuildFileList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_BuildFileList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_BuildFileList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_BuildFileList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::extractObject (const GGS_object & inObject,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  const GGS_BuildFileList * p = (const GGS_BuildFileList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_BuildFileList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_outletClassDeclarationAST_2E_weak::objectCompare (const GGS_outletClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_outletClassDeclarationAST_2E_weak::GGS_outletClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST_2E_weak & GGS_outletClassDeclarationAST_2E_weak::operator = (const GGS_outletClassDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_outletClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_outletClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassDeclarationAST GGS_outletClassDeclarationAST_2E_weak::bang_outletClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_outletClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST_2E_weak ("outletClassDeclarationAST.weak",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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
//  Map type @outletClassMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::~ GGS_outletClassMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap::GGS_outletClassMap (const GGS_outletClassMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap & GGS_outletClassMap::operator = (const GGS_outletClassMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_hasKey (const GGS_string & inKey
                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                   const GGS_uint & inLevel
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletClassMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletClassMap::getter_locationForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_outletClassMap::getter_keyList (Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::performInsert (const GGS_outletClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>
GGS_outletClassMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_outletClassMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>>
GGS_outletClassMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_outletClassMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element_3F_ GGS_outletClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_outletClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletClassMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSuperClassName = info->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = info->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = info->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = info->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = info->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = info->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = info->mProperty_mUserDefined ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::class_func_mapWithMapToOverride (const GGS_outletClassMap & inMapToOverride
                                                                        COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::getter_overriddenMap (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_outletClassMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_insertKey (GGS_lstring inLKey,
                                           GGS_lstring inArgument0,
                                           GGS_bool inArgument1,
                                           GGS_bool inArgument2,
                                           GGS_bool inArgument3,
                                           GGS_bool inArgument4,
                                           GGS_bool inArgument5,
                                           GGS_bool inArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
  const GGS_outletClassMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::method_searchKey (GGS_lstring inLKey,
                                           GGS_lstring & outArgument0,
                                           GGS_bool & outArgument1,
                                           GGS_bool & outArgument2,
                                           GGS_bool & outArgument3,
                                           GGS_bool & outArgument4,
                                           GGS_bool & outArgument5,
                                           GGS_bool & outArgument6,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' outlet class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
    outArgument4.drop () ;
    outArgument5.drop () ;
    outArgument6.drop () ;
  }else{
    outArgument0 = info->mProperty_mSuperClassName ;
    outArgument1 = info->mProperty_mHandlesRunAction ;
    outArgument2 = info->mProperty_mHandlesTableValueBinding ;
    outArgument3 = info->mProperty_mHandleEnabledBinding ;
    outArgument4 = info->mProperty_mHandleHiddenBinding ;
    outArgument5 = info->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = info->mProperty_mUserDefined ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_outletClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesRunAction ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandlesTableValueBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleEnabledBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleHiddenBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mHandleGraphicControllerBinding ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mUserDefined ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMSuperClassNameForKey (GGS_lstring inValue,
                                                          GGS_string inKey,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesRunActionForKey (GGS_bool inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesRunAction = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandlesTableValueBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inValue,
                                                                GGS_string inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleEnabledBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleHiddenBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inValue,
                                                                          GGS_string inKey,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mHandleGraphicControllerBinding = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::setter_setMUserDefinedForKey (GGS_bool inValue,
                                                       GGS_string inKey,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mUserDefined = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_outletClassMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> & inArray,
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
    ioString.appendString ("mSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesRunAction:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesRunAction.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandlesTableValueBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandlesTableValueBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleEnabledBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleEnabledBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleHiddenBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleHiddenBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mHandleGraphicControllerBinding:") ;
    inArray (i COMMA_HERE)->mProperty_mHandleGraphicControllerBinding.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mUserDefined:") ;
    inArray (i COMMA_HERE)->mProperty_mUserDefined.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletClassMap_2E_element>> array = sortedInfoArray () ;
    GGS_outletClassMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_outletClassMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_outletClassMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletClassMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletClassMap::DownEnumerator_outletClassMap (const GGS_outletClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element DownEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletClassMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletClassMap::UpEnumerator_outletClassMap (const GGS_outletClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap_2E_element UpEnumerator_outletClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_outletClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}


//--------------------------------------------------------------------------------------------------
//     @outletClassMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassMap ("outletClassMap",
                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_outletClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_outletClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassMap GGS_outletClassMap::extractObject (const GGS_object & inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_outletClassMap result ;
  const GGS_outletClassMap * p = (const GGS_outletClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_outletClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicPropertyDeclarationAST_2E_weak::objectCompare (const GGS_atomicPropertyDeclarationAST_2E_weak & inOperand) const {
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

GGS_atomicPropertyDeclarationAST_2E_weak::GGS_atomicPropertyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST_2E_weak & GGS_atomicPropertyDeclarationAST_2E_weak::operator = (const GGS_atomicPropertyDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_atomicPropertyDeclarationAST result ;
  if (isValid ()) {
    const cPtr_atomicPropertyDeclarationAST * p = (cPtr_atomicPropertyDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_atomicPropertyDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyDeclarationAST GGS_atomicPropertyDeclarationAST_2E_weak::bang_atomicPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyDeclarationAST_2E_weak ("atomicPropertyDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicPropertyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_atomicPropertyGeneration_2E_weak::objectCompare (const GGS_atomicPropertyGeneration_2E_weak & inOperand) const {
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

GGS_atomicPropertyGeneration_2E_weak::GGS_atomicPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration_2E_weak & GGS_atomicPropertyGeneration_2E_weak::operator = (const GGS_atomicPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_atomicPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_atomicPropertyGeneration * p = (cPtr_atomicPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_atomicPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration GGS_atomicPropertyGeneration_2E_weak::bang_atomicPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGeneration_2E_weak ("atomicPropertyGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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

class CollectionElementPtr_atomicPropertyGenerationList : public CollectionElementPtr {
  public: GGS_atomicPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_atomicPropertyGenerationList (const GGS_atomicPropertyGeneration & in_mProperty
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_atomicPropertyGenerationList::CollectionElementPtr_atomicPropertyGenerationList (const GGS_atomicPropertyGeneration & in_mProperty
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_atomicPropertyGenerationList::CollectionElementPtr_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_atomicPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_atomicPropertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_atomicPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @atomicPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList::GGS_atomicPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList::GGS_atomicPropertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_atomicPropertyGenerationList * p = (CollectionElementPtr_atomicPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_atomicPropertyGenerationList) ;
    const GGS_atomicPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_atomicPropertyGeneration & in_mProperty
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_atomicPropertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_atomicPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_atomicPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_atomicPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::description (String & ioString,
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

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::plusPlusAssignOperation (const GGS_atomicPropertyGenerationList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::class_func_listWithValue (const GGS_atomicPropertyGeneration & inOperand0
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_atomicPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_atomicPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::addAssignOperation (const GGS_atomicPropertyGeneration & inOperand0
                                                           COMMA_LOCATION_ARGS) {
  const GGS_atomicPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_append (const GGS_atomicPropertyGeneration inOperand0,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_atomicPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::setter_insertAtIndex (const GGS_atomicPropertyGeneration inOperand0,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_atomicPropertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_atomicPropertyGenerationList::setter_removeAtIndex (GGS_atomicPropertyGeneration & outOperand0,
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

void GGS_atomicPropertyGenerationList::setter_popFirst (GGS_atomicPropertyGeneration & outOperand0,
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

void GGS_atomicPropertyGenerationList::setter_popLast (GGS_atomicPropertyGeneration & outOperand0,
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

void GGS_atomicPropertyGenerationList::method_first (GGS_atomicPropertyGeneration & outOperand0,
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

void GGS_atomicPropertyGenerationList::method_last (GGS_atomicPropertyGeneration & outOperand0,
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

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::add_operation (const GGS_atomicPropertyGenerationList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
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

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
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

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList GGS_atomicPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicPropertyGenerationList::plusAssignOperation (const GGS_atomicPropertyGenerationList inList,
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

void GGS_atomicPropertyGenerationList::setter_setMPropertyAtIndex (GGS_atomicPropertyGeneration inOperand,
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
  
GGS_atomicPropertyGeneration GGS_atomicPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_atomicPropertyGeneration result ;
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
// Down Enumerator for @atomicPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_atomicPropertyGenerationList::DownEnumerator_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element DownEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration DownEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @atomicPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_atomicPropertyGenerationList::UpEnumerator_atomicPropertyGenerationList (const GGS_atomicPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGenerationList_2E_element UpEnumerator_atomicPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicPropertyGeneration UpEnumerator_atomicPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @atomicPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList ("atomicPropertyGenerationList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicPropertyGenerationList::staticTypeDescriptor (void) const {
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
//Class for element of '@declarationListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_declarationListAST : public CollectionElementPtr {
  public: GGS_declarationListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_declarationListAST (const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationListAST::CollectionElementPtr_declarationListAST (const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mPropertyDeclaration) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_declarationListAST::CollectionElementPtr_declarationListAST (const GGS_declarationListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mPropertyDeclaration) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_declarationListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_declarationListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_declarationListAST (mObject.mProperty_mPropertyDeclaration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @declarationListAST
//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST::GGS_declarationListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_declarationListAST * p = (CollectionElementPtr_declarationListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_declarationListAST) ;
    const GGS_declarationListAST_2E_element element (p->mObject.mProperty_mPropertyDeclaration) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_abstractDeclarationAST & in_mPropertyDeclaration
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_declarationListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_declarationListAST (in_mPropertyDeclaration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_declarationListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_declarationListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::description (String & ioString,
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
      ioString.appendString ("mPropertyDeclaration:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mPropertyDeclaration.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusPlusAssignOperation (const GGS_declarationListAST_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::class_func_listWithValue (const GGS_abstractDeclarationAST & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element element (inOperand0) ;
  GGS_declarationListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::addAssignOperation (const GGS_abstractDeclarationAST & inOperand0
                                                 COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_append (const GGS_abstractDeclarationAST inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::setter_insertAtIndex (const GGS_abstractDeclarationAST inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_declarationListAST_2E_element newElement (inOperand0) ;
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

void GGS_declarationListAST::setter_removeAtIndex (GGS_abstractDeclarationAST & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mPropertyDeclaration ;
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

void GGS_declarationListAST::setter_popFirst (GGS_abstractDeclarationAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyDeclaration ;
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

void GGS_declarationListAST::setter_popLast (GGS_abstractDeclarationAST & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyDeclaration ;
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

void GGS_declarationListAST::method_first (GGS_abstractDeclarationAST & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mPropertyDeclaration ;
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

void GGS_declarationListAST::method_last (GGS_abstractDeclarationAST & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mPropertyDeclaration ;
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

GGS_declarationListAST GGS_declarationListAST::add_operation (const GGS_declarationListAST & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
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

GGS_declarationListAST GGS_declarationListAST::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
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

GGS_declarationListAST GGS_declarationListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_declarationListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationListAST::plusAssignOperation (const GGS_declarationListAST inList,
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

void GGS_declarationListAST::setter_setMPropertyDeclarationAtIndex (GGS_abstractDeclarationAST inOperand,
                                                                    GGS_uint inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyDeclaration = inOperand ;
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
  
GGS_abstractDeclarationAST GGS_declarationListAST::getter_mPropertyDeclarationAtIndex (const GGS_uint & inIndex,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_abstractDeclarationAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mPropertyDeclaration ;
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
// Down Enumerator for @declarationListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_declarationListAST::DownEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element DownEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST DownEnumerator_declarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyDeclaration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @declarationListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_declarationListAST::UpEnumerator_declarationListAST (const GGS_declarationListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST_2E_element UpEnumerator_declarationListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST UpEnumerator_declarationListAST::current_mPropertyDeclaration (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mPropertyDeclaration ;
}




//--------------------------------------------------------------------------------------------------
//     @declarationListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationListAST ("declarationListAST",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationListAST::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationListAST result ;
  const GGS_declarationListAST * p = (const GGS_declarationListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//'@declarationPrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph::GGS_declarationPrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_abstractDeclarationAST inArgument_0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  CollectionElement attributes ;
  GGS_declarationListAST::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' symbol is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_topologicalSort (GGS_declarationListAST & outSortedList,
                                                             GGS_lstringlist & outSortedKeyList,
                                                             GGS_declarationListAST & outUnsortedList,
                                                             GGS_lstringlist & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_depthFirstTopologicalSort (GGS_declarationListAST & outSortedList,
                                                                       GGS_lstringlist & outSortedKeyList,
                                                                       GGS_declarationListAST & outUnsortedList,
                                                                       GGS_lstringlist & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  CollectionElementArray sortedList ;
  CollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS_declarationListAST (sortedList) ;
  outUnsortedList = GGS_declarationListAST (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_declarationPrecedenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_circularities (GGS_declarationListAST & outInfoList,
                                                           GGS_lstringlist & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  CollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::getter_subgraphFromNodes (const GGS_lstringlist & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_declarationPrecedenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationListAST GGS_declarationPrecedenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS_declarationListAST resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist GGS_declarationPrecedenceGraph::getter_accessibleNodesFrom (const GGS_lstringlist & inStartKeyList,
                                                                            const GGS_stringset & inNodesToExclude,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  GGS_declarationPrecedenceGraph resultingGraph ;
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
//     @declarationPrecedenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_declarationPrecedenceGraph ("declarationPrecedenceGraph",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_declarationPrecedenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_declarationPrecedenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_declarationPrecedenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_declarationPrecedenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  const GGS_declarationPrecedenceGraph * p = (const GGS_declarationPrecedenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_declarationPrecedenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("declarationPrecedenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractDefaultValue_2E_weak::objectCompare (const GGS_abstractDefaultValue_2E_weak & inOperand) const {
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

GGS_abstractDefaultValue_2E_weak::GGS_abstractDefaultValue_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak & GGS_abstractDefaultValue_2E_weak::operator = (const GGS_abstractDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak::GGS_abstractDefaultValue_2E_weak (const GGS_abstractDefaultValue & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak GGS_abstractDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_abstractDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_abstractDefaultValue result ;
  if (isValid ()) {
    const cPtr_abstractDefaultValue * p = (cPtr_abstractDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue GGS_abstractDefaultValue_2E_weak::bang_abstractDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractDefaultValue) ;
      result = GGS_abstractDefaultValue ((cPtr_abstractDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ("abstractDefaultValue.weak",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue_2E_weak GGS_abstractDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_abstractDefaultValue_2E_weak result ;
  const GGS_abstractDefaultValue_2E_weak * p = (const GGS_abstractDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_boolAsDefaultValue_2E_weak::objectCompare (const GGS_boolAsDefaultValue_2E_weak & inOperand) const {
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

GGS_boolAsDefaultValue_2E_weak::GGS_boolAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak & GGS_boolAsDefaultValue_2E_weak::operator = (const GGS_boolAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak::GGS_boolAsDefaultValue_2E_weak (const GGS_boolAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak GGS_boolAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_boolAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_boolAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_boolAsDefaultValue * p = (cPtr_boolAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_boolAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue GGS_boolAsDefaultValue_2E_weak::bang_boolAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_boolAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_boolAsDefaultValue) ;
      result = GGS_boolAsDefaultValue ((cPtr_boolAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @boolAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ("boolAsDefaultValue.weak",
                                                                               & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_boolAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_boolAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_boolAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_boolAsDefaultValue_2E_weak GGS_boolAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_boolAsDefaultValue_2E_weak result ;
  const GGS_boolAsDefaultValue_2E_weak * p = (const GGS_boolAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_boolAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_doubleAsDefaultValue_2E_weak::objectCompare (const GGS_doubleAsDefaultValue_2E_weak & inOperand) const {
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

GGS_doubleAsDefaultValue_2E_weak::GGS_doubleAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak & GGS_doubleAsDefaultValue_2E_weak::operator = (const GGS_doubleAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak::GGS_doubleAsDefaultValue_2E_weak (const GGS_doubleAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak GGS_doubleAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_doubleAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_doubleAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_doubleAsDefaultValue * p = (cPtr_doubleAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_doubleAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue GGS_doubleAsDefaultValue_2E_weak::bang_doubleAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_doubleAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_doubleAsDefaultValue) ;
      result = GGS_doubleAsDefaultValue ((cPtr_doubleAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @doubleAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ("doubleAsDefaultValue.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_doubleAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_doubleAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_doubleAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_doubleAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_doubleAsDefaultValue_2E_weak GGS_doubleAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_doubleAsDefaultValue_2E_weak result ;
  const GGS_doubleAsDefaultValue_2E_weak * p = (const GGS_doubleAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_doubleAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("doubleAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_integerAsDefaultValue_2E_weak::objectCompare (const GGS_integerAsDefaultValue_2E_weak & inOperand) const {
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

GGS_integerAsDefaultValue_2E_weak::GGS_integerAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak & GGS_integerAsDefaultValue_2E_weak::operator = (const GGS_integerAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak::GGS_integerAsDefaultValue_2E_weak (const GGS_integerAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak GGS_integerAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_integerAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue GGS_integerAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_integerAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_integerAsDefaultValue * p = (cPtr_integerAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_integerAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue GGS_integerAsDefaultValue_2E_weak::bang_integerAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_integerAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_integerAsDefaultValue) ;
      result = GGS_integerAsDefaultValue ((cPtr_integerAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @integerAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ("integerAsDefaultValue.weak",
                                                                                  & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_integerAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_integerAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_integerAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_integerAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_integerAsDefaultValue_2E_weak GGS_integerAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GGS_integerAsDefaultValue_2E_weak result ;
  const GGS_integerAsDefaultValue_2E_weak * p = (const GGS_integerAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_integerAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("integerAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_stringAsDefaultValue_2E_weak::objectCompare (const GGS_stringAsDefaultValue_2E_weak & inOperand) const {
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

GGS_stringAsDefaultValue_2E_weak::GGS_stringAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak & GGS_stringAsDefaultValue_2E_weak::operator = (const GGS_stringAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak::GGS_stringAsDefaultValue_2E_weak (const GGS_stringAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak GGS_stringAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_stringAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_stringAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_stringAsDefaultValue * p = (cPtr_stringAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_stringAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue GGS_stringAsDefaultValue_2E_weak::bang_stringAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_stringAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_stringAsDefaultValue) ;
      result = GGS_stringAsDefaultValue ((cPtr_stringAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @stringAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ("stringAsDefaultValue.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_stringAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_stringAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_stringAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_stringAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringAsDefaultValue_2E_weak GGS_stringAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_stringAsDefaultValue_2E_weak result ;
  const GGS_stringAsDefaultValue_2E_weak * p = (const GGS_stringAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_stringAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("stringAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_identifierAsDefaultValue_2E_weak::objectCompare (const GGS_identifierAsDefaultValue_2E_weak & inOperand) const {
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

GGS_identifierAsDefaultValue_2E_weak::GGS_identifierAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak & GGS_identifierAsDefaultValue_2E_weak::operator = (const GGS_identifierAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak::GGS_identifierAsDefaultValue_2E_weak (const GGS_identifierAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak GGS_identifierAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_identifierAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_identifierAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_identifierAsDefaultValue * p = (cPtr_identifierAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_identifierAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue GGS_identifierAsDefaultValue_2E_weak::bang_identifierAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_identifierAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_identifierAsDefaultValue) ;
      result = GGS_identifierAsDefaultValue ((cPtr_identifierAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @identifierAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ("identifierAsDefaultValue.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_identifierAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_identifierAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_identifierAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_identifierAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_identifierAsDefaultValue_2E_weak GGS_identifierAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_identifierAsDefaultValue_2E_weak result ;
  const GGS_identifierAsDefaultValue_2E_weak * p = (const GGS_identifierAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_identifierAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("identifierAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_prefsAsDefaultValue_2E_weak::objectCompare (const GGS_prefsAsDefaultValue_2E_weak & inOperand) const {
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

GGS_prefsAsDefaultValue_2E_weak::GGS_prefsAsDefaultValue_2E_weak (void) :
GGS_abstractDefaultValue_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak & GGS_prefsAsDefaultValue_2E_weak::operator = (const GGS_prefsAsDefaultValue & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak::GGS_prefsAsDefaultValue_2E_weak (const GGS_prefsAsDefaultValue & inSource) :
GGS_abstractDefaultValue_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak GGS_prefsAsDefaultValue_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_prefsAsDefaultValue_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue_2E_weak::unwrappedValue (void) const {
  GGS_prefsAsDefaultValue result ;
  if (isValid ()) {
    const cPtr_prefsAsDefaultValue * p = (cPtr_prefsAsDefaultValue *) ptr () ;
    if (nullptr != p) {
      result = GGS_prefsAsDefaultValue (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue GGS_prefsAsDefaultValue_2E_weak::bang_prefsAsDefaultValue_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_prefsAsDefaultValue result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_prefsAsDefaultValue) ;
      result = GGS_prefsAsDefaultValue ((cPtr_prefsAsDefaultValue *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @prefsAsDefaultValue.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ("prefsAsDefaultValue.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDefaultValue_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_prefsAsDefaultValue_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsAsDefaultValue_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_prefsAsDefaultValue_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_prefsAsDefaultValue_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_prefsAsDefaultValue_2E_weak GGS_prefsAsDefaultValue_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_prefsAsDefaultValue_2E_weak result ;
  const GGS_prefsAsDefaultValue_2E_weak * p = (const GGS_prefsAsDefaultValue_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_prefsAsDefaultValue_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsAsDefaultValue.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
                                                  const GGS_typeKindList constin_inAttributeActualTypeList,
                                                  const GGS_propertyMap constin_inPreferencesPropertyMap,
                                                  GGS_string & out_outSwiftDefaultValueAsString,
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
//Extension method '@abstractDefaultValue enterDefaultValuePrecedence'
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring /* constinArgument_inNode */,
                                                                    GGS_declarationPrecedenceGraph & /* ioArgument_ioGraph */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterDefaultValuePrecedence (cPtr_abstractDefaultValue * inObject,
                                                      const GGS_lstring constin_inNode,
                                                      GGS_declarationPrecedenceGraph & io_ioGraph,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDefaultValue) ;
    inObject->method_enterDefaultValuePrecedence (constin_inNode, io_ioGraph, inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//  Map type @classMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::~ GGS_classMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap::GGS_classMap (const GGS_classMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap & GGS_classMap::operator = (const GGS_classMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMap::getter_hasKey (const GGS_string & inKey
                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                             const GGS_uint & inLevel
                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_classMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_classMap::getter_locationForKey (const GGS_string & inKey,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_classMap::getter_keyList (Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_classMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::performInsert (const GGS_classMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>
GGS_classMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_classMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>>
GGS_classMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_classMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element_3F_ GGS_classMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_classMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_classMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_classMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mClassKind = info->mProperty_mClassKind ;
      element.mProperty_mPropertyMap = info->mProperty_mPropertyMap ;
      element.mProperty_mActionMap = info->mProperty_mActionMap ;
      element.mProperty_mPropertyGenerationList = info->mProperty_mPropertyGenerationList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element GGS_classMap
::readSubscript__3F_searchKey (const GGS_lstring & inLKey,
                               Compiler * inCompiler
                               COMMA_LOCATION_ARGS) const {
  GGS_classMap_2E_element result ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNotNil ()) {
      result = info.value () ;
    }else{
      const char * kErrorMessage = "there is no '%K' class" ;
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kErrorMessage COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::class_func_mapWithMapToOverride (const GGS_classMap & inMapToOverride
                                                            COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::getter_overriddenMap (Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  GGS_classMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_insertKey (GGS_lstring inLKey,
                                     GGS_classKind inArgument0,
                                     GGS_propertyMap inArgument1,
                                     GGS_actionMap inArgument2,
                                     GGS_propertyGenerationList inArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
  const GGS_classMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3) ;
  const char * kInsertErrorMessage = "the '%K' class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::method_searchKey (GGS_lstring inLKey,
                                     GGS_classKind & outArgument0,
                                     GGS_propertyMap & outArgument1,
                                     GGS_actionMap & outArgument2,
                                     GGS_propertyGenerationList & outArgument3,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' class" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
    outArgument2.drop () ;
    outArgument3.drop () ;
  }else{
    outArgument0 = info->mProperty_mClassKind ;
    outArgument1 = info->mProperty_mPropertyMap ;
    outArgument2 = info->mProperty_mActionMap ;
    outArgument3 = info->mProperty_mPropertyGenerationList ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_replace (GGS_classMap_2E_element inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.isValid ()) {
    const char * kReplaceErrorMessage = "there is no '%K' class" ;
    const String key = inElement.mProperty_lkey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (
        inElement.mProperty_lkey,
        nearestKeyArray,
        kReplaceErrorMessage
        COMMA_THERE
      ) ;
    }else{
      node->mSharedInfo = SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>::make (inElement COMMA_THERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classMap::getter_mClassKindForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_classKind result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mClassKind ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_classMap::getter_mPropertyMapForKey (const GGS_string & inKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  GGS_propertyMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_classMap::getter_mActionMapForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_actionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
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

GGS_propertyGenerationList GGS_classMap::getter_mPropertyGenerationListForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_propertyGenerationList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mPropertyGenerationList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMClassKindForKey (GGS_classKind inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mClassKind = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMPropertyMapForKey (GGS_propertyMap inValue,
                                                 GGS_string inKey,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_classMap::setter_setMActionMapForKey (GGS_actionMap inValue,
                                               GGS_string inKey,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_classMap::setter_setMPropertyGenerationListForKey (GGS_propertyGenerationList inValue,
                                                            GGS_string inKey,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_classMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mPropertyGenerationList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_classMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> & inArray,
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
    ioString.appendString ("mClassKind:") ;
    inArray (i COMMA_HERE)->mProperty_mClassKind.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyMap:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mActionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mActionMap.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mPropertyGenerationList:") ;
    inArray (i COMMA_HERE)->mProperty_mPropertyGenerationList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_classMap_2E_element>> array = sortedInfoArray () ;
    GGS_classMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_classMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_classMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @classMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_classMap::DownEnumerator_classMap (const GGS_classMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element DownEnumerator_classMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind DownEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap DownEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap DownEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList DownEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyGenerationList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @classMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_classMap::UpEnumerator_classMap (const GGS_classMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_classMap_2E_element UpEnumerator_classMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_classMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind UpEnumerator_classMap::current_mClassKind (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mClassKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap UpEnumerator_classMap::current_mPropertyMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap UpEnumerator_classMap::current_mActionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mActionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList UpEnumerator_classMap::current_mPropertyGenerationList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mPropertyGenerationList ;
}


//--------------------------------------------------------------------------------------------------
//     @classMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classMap ("classMap",
                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classMap GGS_classMap::extractObject (const GGS_object & inObject,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  GGS_classMap result ;
  const GGS_classMap * p = (const GGS_classMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

