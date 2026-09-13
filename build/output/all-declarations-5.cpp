#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result ;
  result.mSharedArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList GGS_enumFunAssociationSortedList::class_func_sortedListWithValue (const GGS_uint & inOperand0,
                                                                                                   const GGS_string & inOperand1
                                                                                                   COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList result = init (nullptr COMMA_THERE) ;
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

AbstractPtrClass * cPtr_enumForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

GGS_enumForGeneration_2E_weak::GGS_enumForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumForGeneration_2E_weak & GGS_enumForGeneration_2E_weak::operator = (const GGS_enumForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_entityDeclarationAST_2E_weak::objectCompare (const GGS_entityDeclarationAST_2E_weak & inOperand) const {
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

GGS_entityDeclarationAST_2E_weak::GGS_entityDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak & GGS_entityDeclarationAST_2E_weak::operator = (const GGS_entityDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak::GGS_entityDeclarationAST_2E_weak (const GGS_entityDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak GGS_entityDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_entityDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_entityDeclarationAST result ;
  if (isValid ()) {
    const cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_entityDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST GGS_entityDeclarationAST_2E_weak::bang_entityDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_entityDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityDeclarationAST) ;
      result = GGS_entityDeclarationAST ((cPtr_entityDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @entityDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ("entityDeclarationAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak GGS_entityDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_entityDeclarationAST_2E_weak result ;
  const GGS_entityDeclarationAST_2E_weak * p = (const GGS_entityDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityForGeneration::objectCompare (const GGS_entityForGeneration & inOperand) const {
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

GGS_entityForGeneration::GGS_entityForGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration::
init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEntityName,
                                                      const GGS_string & in_mSuperEntityName,
                                                      const GGS_bool & in_mHandlingOpposite,
                                                      const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                      const GGS_stringset & in_mSignatureSet,
                                                      const GGS_bool & in_mIsGraphicEntity,
                                                      const GGS_bool & in_mIsAbstract,
                                                      const GGS_stringset & in_mOverridenTransients,
                                                      const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                      const GGS_bool & in_mHasSubEntity,
                                                      const GGS_bool & in_mCanCopyAndPaste_5F_option,
                                                      const GGS_bool & in_mCannotBeDeleted_5F_option,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cPtr_entityForGeneration * object = nullptr ;
  macroMyNew (object, cPtr_entityForGeneration (inCompiler COMMA_THERE)) ;
  object->entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (in_mEntityName, in_mSuperEntityName, in_mHandlingOpposite, in_mPropertyGenerationList, in_mSignatureSet, in_mIsGraphicEntity, in_mIsAbstract, in_mOverridenTransients, in_mExternSwiftDelegateList, in_mHasSubEntity, in_mCanCopyAndPaste_5F_option, in_mCannotBeDeleted_5F_option, inCompiler) ;
  const GGS_entityForGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_entityForGeneration::
entityForGeneration_init_21__21__21__21__21__21__21__21__21__21__21__21_ (const GGS_string & in_mEntityName,
                                                                          const GGS_string & in_mSuperEntityName,
                                                                          const GGS_bool & in_mHandlingOpposite,
                                                                          const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                                          const GGS_stringset & in_mSignatureSet,
                                                                          const GGS_bool & in_mIsGraphicEntity,
                                                                          const GGS_bool & in_mIsAbstract,
                                                                          const GGS_stringset & in_mOverridenTransients,
                                                                          const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                                          const GGS_bool & in_mHasSubEntity,
                                                                          const GGS_bool & in_mCanCopyAndPaste_5F_option,
                                                                          const GGS_bool & in_mCannotBeDeleted_5F_option,
                                                                          Compiler * /* inCompiler */) {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration::GGS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityForGeneration::readProperty_mEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList GGS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList GGS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
}

//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GGS_string & in_mEntityName,
                                                    const GGS_string & in_mSuperEntityName,
                                                    const GGS_bool & in_mHandlingOpposite,
                                                    const GGS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GGS_stringset & in_mSignatureSet,
                                                    const GGS_bool & in_mIsGraphicEntity,
                                                    const GGS_bool & in_mIsAbstract,
                                                    const GGS_stringset & in_mOverridenTransients,
                                                    const GGS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GGS_bool & in_mHasSubEntity,
                                                    const GGS_bool & in_mCanCopyAndPaste_5F_option,
                                                    const GGS_bool & in_mCannotBeDeleted_5F_option,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mEntityName (),
mProperty_mSuperEntityName (),
mProperty_mHandlingOpposite (),
mProperty_mPropertyGenerationList (),
mProperty_mSignatureSet (),
mProperty_mIsGraphicEntity (),
mProperty_mIsAbstract (),
mProperty_mOverridenTransients (),
mProperty_mExternSwiftDelegateList (),
mProperty_mHasSubEntity (),
mProperty_mCanCopyAndPaste_5F_option (),
mProperty_mCannotBeDeleted_5F_option () {
  mProperty_mEntityName = in_mEntityName ;
  mProperty_mSuperEntityName = in_mSuperEntityName ;
  mProperty_mHandlingOpposite = in_mHandlingOpposite ;
  mProperty_mPropertyGenerationList = in_mPropertyGenerationList ;
  mProperty_mSignatureSet = in_mSignatureSet ;
  mProperty_mIsGraphicEntity = in_mIsGraphicEntity ;
  mProperty_mIsAbstract = in_mIsAbstract ;
  mProperty_mOverridenTransients = in_mOverridenTransients ;
  mProperty_mExternSwiftDelegateList = in_mExternSwiftDelegateList ;
  mProperty_mHasSubEntity = in_mHasSubEntity ;
  mProperty_mCanCopyAndPaste_5F_option = in_mCanCopyAndPaste_5F_option ;
  mProperty_mCannotBeDeleted_5F_option = in_mCannotBeDeleted_5F_option ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@entityForGeneration:") ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_entityForGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityForGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mEntityName.printNonNullClassInstanceProperties ("mEntityName") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mPropertyGenerationList.printNonNullClassInstanceProperties ("mPropertyGenerationList") ;
    mProperty_mSignatureSet.printNonNullClassInstanceProperties ("mSignatureSet") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mOverridenTransients.printNonNullClassInstanceProperties ("mOverridenTransients") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mHasSubEntity.printNonNullClassInstanceProperties ("mHasSubEntity") ;
    mProperty_mCanCopyAndPaste_5F_option.printNonNullClassInstanceProperties ("mCanCopyAndPaste_option") ;
    mProperty_mCannotBeDeleted_5F_option.printNonNullClassInstanceProperties ("mCannotBeDeleted_option") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @entityForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration::extractObject (const GGS_object & inObject,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GGS_entityForGeneration result ;
  const GGS_entityForGeneration * p = (const GGS_entityForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityForGeneration_2E_weak::objectCompare (const GGS_entityForGeneration_2E_weak & inOperand) const {
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

GGS_entityForGeneration_2E_weak::GGS_entityForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak & GGS_entityForGeneration_2E_weak::operator = (const GGS_entityForGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak::GGS_entityForGeneration_2E_weak (const GGS_entityForGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak GGS_entityForGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_entityForGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration_2E_weak::unwrappedValue (void) const {
  GGS_entityForGeneration result ;
  if (isValid ()) {
    const cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_entityForGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration GGS_entityForGeneration_2E_weak::bang_entityForGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_entityForGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_entityForGeneration) ;
      result = GGS_entityForGeneration ((cPtr_entityForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @entityForGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ("entityForGeneration.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityForGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityForGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityForGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak GGS_entityForGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GGS_entityForGeneration_2E_weak result ;
  const GGS_entityForGeneration_2E_weak * p = (const GGS_entityForGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityForGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyKind ("proxyKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_proxyKind::staticTypeDescriptor (void) const {
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

GGS_proxyDeclarationAST_2E_weak::GGS_proxyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST_2E_weak & GGS_proxyDeclarationAST_2E_weak::operator = (const GGS_proxyDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_proxyDeclarationAST result ;
  if (isValid ()) {
    const cPtr_proxyDeclarationAST * p = (cPtr_proxyDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_proxyDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_proxyDeclarationAST GGS_proxyDeclarationAST_2E_weak::bang_proxyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_proxyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_proxyDeclarationAST_2E_weak ("proxyDeclarationAST.weak",
                                                                                & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_proxyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_toManyProxyGeneration_2E_weak::objectCompare (const GGS_toManyProxyGeneration_2E_weak & inOperand) const {
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

GGS_toManyProxyGeneration_2E_weak::GGS_toManyProxyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration_2E_weak & GGS_toManyProxyGeneration_2E_weak::operator = (const GGS_toManyProxyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_toManyProxyGeneration result ;
  if (isValid ()) {
    const cPtr_toManyProxyGeneration * p = (cPtr_toManyProxyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_toManyProxyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration GGS_toManyProxyGeneration_2E_weak::bang_toManyProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGeneration_2E_weak ("toManyProxyGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyProxyGeneration_2E_weak::staticTypeDescriptor (void) const {
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

class CollectionElementPtr_toManyProxyGenerationList : public CollectionElementPtr {
  public: GGS_toManyProxyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_toManyProxyGenerationList (const GGS_toManyProxyGeneration & in_mProperty
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_toManyProxyGenerationList (const GGS_toManyProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toManyProxyGenerationList::CollectionElementPtr_toManyProxyGenerationList (const GGS_toManyProxyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toManyProxyGenerationList::CollectionElementPtr_toManyProxyGenerationList (const GGS_toManyProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_toManyProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_toManyProxyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_toManyProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @toManyProxyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList::GGS_toManyProxyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList::GGS_toManyProxyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_toManyProxyGenerationList * p = (CollectionElementPtr_toManyProxyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_toManyProxyGenerationList) ;
    const GGS_toManyProxyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_toManyProxyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_toManyProxyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_toManyProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_toManyProxyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_toManyProxyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::description (String & ioString,
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

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyProxyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::plusPlusAssignOperation (const GGS_toManyProxyGenerationList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::class_func_listWithValue (const GGS_toManyProxyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_toManyProxyGenerationList_2E_element element (inOperand0) ;
  GGS_toManyProxyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::addAssignOperation (const GGS_toManyProxyGeneration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_toManyProxyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_append (const GGS_toManyProxyGeneration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_toManyProxyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::setter_insertAtIndex (const GGS_toManyProxyGeneration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_toManyProxyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_toManyProxyGenerationList::setter_removeAtIndex (GGS_toManyProxyGeneration & outOperand0,
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

void GGS_toManyProxyGenerationList::setter_popFirst (GGS_toManyProxyGeneration & outOperand0,
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

void GGS_toManyProxyGenerationList::setter_popLast (GGS_toManyProxyGeneration & outOperand0,
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

void GGS_toManyProxyGenerationList::method_first (GGS_toManyProxyGeneration & outOperand0,
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

void GGS_toManyProxyGenerationList::method_last (GGS_toManyProxyGeneration & outOperand0,
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

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::add_operation (const GGS_toManyProxyGenerationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
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

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
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

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList GGS_toManyProxyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyProxyGenerationList::plusAssignOperation (const GGS_toManyProxyGenerationList inList,
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

void GGS_toManyProxyGenerationList::setter_setMPropertyAtIndex (GGS_toManyProxyGeneration inOperand,
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
  
GGS_toManyProxyGeneration GGS_toManyProxyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_toManyProxyGeneration result ;
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
// Down Enumerator for @toManyProxyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toManyProxyGenerationList::DownEnumerator_toManyProxyGenerationList (const GGS_toManyProxyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element DownEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration DownEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toManyProxyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toManyProxyGenerationList::UpEnumerator_toManyProxyGenerationList (const GGS_toManyProxyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGenerationList_2E_element UpEnumerator_toManyProxyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyProxyGeneration UpEnumerator_toManyProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toManyProxyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList ("toManyProxyGenerationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toManyProxyGenerationList::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_atomicProxyGeneration_2E_weak::objectCompare (const GGS_atomicProxyGeneration_2E_weak & inOperand) const {
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

GGS_atomicProxyGeneration_2E_weak::GGS_atomicProxyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration_2E_weak & GGS_atomicProxyGeneration_2E_weak::operator = (const GGS_atomicProxyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_atomicProxyGeneration result ;
  if (isValid ()) {
    const cPtr_atomicProxyGeneration * p = (cPtr_atomicProxyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_atomicProxyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration GGS_atomicProxyGeneration_2E_weak::bang_atomicProxyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGeneration_2E_weak ("atomicProxyGeneration.weak",
                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicProxyGeneration_2E_weak::staticTypeDescriptor (void) const {
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

class CollectionElementPtr_atomicProxyGenerationList : public CollectionElementPtr {
  public: GGS_atomicProxyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_atomicProxyGenerationList (const GGS_atomicProxyGeneration & in_mProperty
                                                          COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_atomicProxyGenerationList (const GGS_atomicProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_atomicProxyGenerationList::CollectionElementPtr_atomicProxyGenerationList (const GGS_atomicProxyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_atomicProxyGenerationList::CollectionElementPtr_atomicProxyGenerationList (const GGS_atomicProxyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_atomicProxyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_atomicProxyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_atomicProxyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @atomicProxyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList::GGS_atomicProxyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList::GGS_atomicProxyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_atomicProxyGenerationList * p = (CollectionElementPtr_atomicProxyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_atomicProxyGenerationList) ;
    const GGS_atomicProxyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                               const GGS_atomicProxyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) {
  CollectionElementPtr_atomicProxyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_atomicProxyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_atomicProxyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_atomicProxyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::description (String & ioString,
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

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_atomicProxyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::plusPlusAssignOperation (const GGS_atomicProxyGenerationList_2E_element & inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::class_func_listWithValue (const GGS_atomicProxyGeneration & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  const GGS_atomicProxyGenerationList_2E_element element (inOperand0) ;
  GGS_atomicProxyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::addAssignOperation (const GGS_atomicProxyGeneration & inOperand0
                                                        COMMA_LOCATION_ARGS) {
  const GGS_atomicProxyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_append (const GGS_atomicProxyGeneration inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  const GGS_atomicProxyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::setter_insertAtIndex (const GGS_atomicProxyGeneration inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_atomicProxyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_atomicProxyGenerationList::setter_removeAtIndex (GGS_atomicProxyGeneration & outOperand0,
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

void GGS_atomicProxyGenerationList::setter_popFirst (GGS_atomicProxyGeneration & outOperand0,
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

void GGS_atomicProxyGenerationList::setter_popLast (GGS_atomicProxyGeneration & outOperand0,
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

void GGS_atomicProxyGenerationList::method_first (GGS_atomicProxyGeneration & outOperand0,
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

void GGS_atomicProxyGenerationList::method_last (GGS_atomicProxyGeneration & outOperand0,
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

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::add_operation (const GGS_atomicProxyGenerationList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
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

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::subList (const int32_t inStart,
                                                                      const int32_t inLength,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
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

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList GGS_atomicProxyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicProxyGenerationList::plusAssignOperation (const GGS_atomicProxyGenerationList inList,
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

void GGS_atomicProxyGenerationList::setter_setMPropertyAtIndex (GGS_atomicProxyGeneration inOperand,
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
  
GGS_atomicProxyGeneration GGS_atomicProxyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_atomicProxyGeneration result ;
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
// Down Enumerator for @atomicProxyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_atomicProxyGenerationList::DownEnumerator_atomicProxyGenerationList (const GGS_atomicProxyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element DownEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration DownEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @atomicProxyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_atomicProxyGenerationList::UpEnumerator_atomicProxyGenerationList (const GGS_atomicProxyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGenerationList_2E_element UpEnumerator_atomicProxyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicProxyGeneration UpEnumerator_atomicProxyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @atomicProxyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList ("atomicProxyGenerationList",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicProxyGenerationList::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_computedPropertyDeclarationAST_2E_weak::objectCompare (const GGS_computedPropertyDeclarationAST_2E_weak & inOperand) const {
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

GGS_computedPropertyDeclarationAST_2E_weak::GGS_computedPropertyDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST_2E_weak & GGS_computedPropertyDeclarationAST_2E_weak::operator = (const GGS_computedPropertyDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_computedPropertyDeclarationAST result ;
  if (isValid ()) {
    const cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedPropertyDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyDeclarationAST GGS_computedPropertyDeclarationAST_2E_weak::bang_computedPropertyDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST_2E_weak ("computedPropertyDeclarationAST.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_computedPropertyGeneration_2E_weak::objectCompare (const GGS_computedPropertyGeneration_2E_weak & inOperand) const {
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

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak & GGS_computedPropertyGeneration_2E_weak::operator = (const GGS_computedPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak::GGS_computedPropertyGeneration_2E_weak (const GGS_computedPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration GGS_computedPropertyGeneration_2E_weak::bang_computedPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedPropertyGeneration) ;
      result = GGS_computedPropertyGeneration ((cPtr_computedPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ("computedPropertyGeneration.weak",
                                                                                       & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedPropertyGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedPropertyGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration_2E_weak GGS_computedPropertyGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_computedPropertyGeneration_2E_weak result ;
  const GGS_computedPropertyGeneration_2E_weak * p = (const GGS_computedPropertyGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedPropertyGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@computedPropertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_computedPropertyGenerationList : public CollectionElementPtr {
  public: GGS_computedPropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                               COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_computedPropertyGenerationList::CollectionElementPtr_computedPropertyGenerationList (const GGS_computedPropertyGeneration & in_mProperty
                                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_computedPropertyGenerationList::CollectionElementPtr_computedPropertyGenerationList (const GGS_computedPropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_computedPropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_computedPropertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_computedPropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList::GGS_computedPropertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_computedPropertyGenerationList * p = (CollectionElementPtr_computedPropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_computedPropertyGenerationList) ;
    const GGS_computedPropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                    const GGS_computedPropertyGeneration & in_mProperty
                                                                    COMMA_LOCATION_ARGS) {
  CollectionElementPtr_computedPropertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_computedPropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_computedPropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_computedPropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::description (String & ioString,
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

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_computedPropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusPlusAssignOperation (const GGS_computedPropertyGenerationList_2E_element & inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::class_func_listWithValue (const GGS_computedPropertyGeneration & inOperand0
                                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element element (inOperand0) ;
  GGS_computedPropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::addAssignOperation (const GGS_computedPropertyGeneration & inOperand0
                                                             COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_append (const GGS_computedPropertyGeneration inOperand0,
                                                        Compiler * /* inCompiler */
                                                        COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::setter_insertAtIndex (const GGS_computedPropertyGeneration inOperand0,
                                                               const GGS_uint inInsertionIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  const GGS_computedPropertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_computedPropertyGenerationList::setter_removeAtIndex (GGS_computedPropertyGeneration & outOperand0,
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

void GGS_computedPropertyGenerationList::setter_popFirst (GGS_computedPropertyGeneration & outOperand0,
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

void GGS_computedPropertyGenerationList::setter_popLast (GGS_computedPropertyGeneration & outOperand0,
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

void GGS_computedPropertyGenerationList::method_first (GGS_computedPropertyGeneration & outOperand0,
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

void GGS_computedPropertyGenerationList::method_last (GGS_computedPropertyGeneration & outOperand0,
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

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::add_operation (const GGS_computedPropertyGenerationList & inOperand,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
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

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::subList (const int32_t inStart,
                                                                                const int32_t inLength,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
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

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList GGS_computedPropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_computedPropertyGenerationList::plusAssignOperation (const GGS_computedPropertyGenerationList inList,
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

void GGS_computedPropertyGenerationList::setter_setMPropertyAtIndex (GGS_computedPropertyGeneration inOperand,
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
  
GGS_computedPropertyGeneration GGS_computedPropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_computedPropertyGeneration result ;
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
// Down Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_computedPropertyGenerationList::DownEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element DownEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration DownEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @computedPropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_computedPropertyGenerationList::UpEnumerator_computedPropertyGenerationList (const GGS_computedPropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGenerationList_2E_element UpEnumerator_computedPropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedPropertyGeneration UpEnumerator_computedPropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @computedPropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedPropertyGenerationList ("computedPropertyGenerationList",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedPropertyGenerationList::staticTypeDescriptor (void) const {
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

const GALGAS_TypeDescriptor * cPtr_computeRoutineGeneration::classDescriptor (void) const {
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

AbstractPtrClass * cPtr_computeRoutineGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration ("computeRoutineGeneration",
                                                                             & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeRoutineGeneration::staticTypeDescriptor (void) const {
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

GGS_computeRoutineGeneration_2E_weak::GGS_computeRoutineGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration_2E_weak & GGS_computeRoutineGeneration_2E_weak::operator = (const GGS_computeRoutineGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computeRoutineGeneration result ;
  if (isValid ()) {
    const cPtr_computeRoutineGeneration * p = (cPtr_computeRoutineGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computeRoutineGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computeRoutineGeneration GGS_computeRoutineGeneration_2E_weak::bang_computeRoutineGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computeRoutineGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computeRoutineGeneration_2E_weak ("computeRoutineGeneration.weak",
                                                                                     & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computeRoutineGeneration_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_transientClassDeclarationAST_2E_weak::objectCompare (const GGS_transientClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_transientClassDeclarationAST_2E_weak::GGS_transientClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak & GGS_transientClassDeclarationAST_2E_weak::operator = (const GGS_transientClassDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak::GGS_transientClassDeclarationAST_2E_weak (const GGS_transientClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak GGS_transientClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_transientClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_transientClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_transientClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST GGS_transientClassDeclarationAST_2E_weak::bang_transientClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_transientClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_transientClassDeclarationAST) ;
      result = GGS_transientClassDeclarationAST ((cPtr_transientClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @transientClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ("transientClassDeclarationAST.weak",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_transientClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak GGS_transientClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GGS_transientClassDeclarationAST_2E_weak result ;
  const GGS_transientClassDeclarationAST_2E_weak * p = (const GGS_transientClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum classKind
//--------------------------------------------------------------------------------------------------

GGS_classKind::GGS_classKind (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_prefs (UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_prefs ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_atomic (const GGS_typeKind & inAssociatedValue0
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_atomic ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_atomic (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_document (const GGS_lstring & inAssociatedValue0
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_document ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_document (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::class_func_entity (const GGS_string & inAssociatedValue0,
                                                const GGS_bool & inAssociatedValue1,
                                                const GGS_bool & inAssociatedValue2,
                                                const GGS_bool & inAssociatedValue3
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind result ;
  result.mEnum = Enumeration::enum_entity ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_classKind_2E_entity (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2, inAssociatedValue3)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractAtomic (GGS_typeKind & outAssociatedValue_kind,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_atomic) {
    outAssociatedValue_kind.drop () ;
    String s ;
    s.appendCString ("method @classKind.atomic invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_kind = ptr->mProperty_kind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractDocument (GGS_lstring & outAssociatedValue_rootEntityName,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_document) {
    outAssociatedValue_rootEntityName.drop () ;
    String s ;
    s.appendCString ("method @classKind.document invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_rootEntityName = ptr->mProperty_rootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::method_extractEntity (GGS_string & outAssociatedValue_superEntityName,
                                          GGS_bool & outAssociatedValue_isGraphic,
                                          GGS_bool & outAssociatedValue_isAbstract,
                                          GGS_bool & outAssociatedValue_handlingOpposite,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entity) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_isGraphic.drop () ;
    outAssociatedValue_isAbstract.drop () ;
    outAssociatedValue_handlingOpposite.drop () ;
    String s ;
    s.appendCString ("method @classKind.entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_isGraphic = ptr->mProperty_isGraphic ;
    outAssociatedValue_isAbstract = ptr->mProperty_isAbstract ;
    outAssociatedValue_handlingOpposite = ptr->mProperty_handlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_atomic_3F_ GGS_classKind::getter_getAtomic (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_atomic_3F_ result ;
  if (mEnum == Enumeration::enum_atomic) {
    const auto ptr = (const GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_atomic (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_atomic (GGS_typeKind & out_kind) const {
  const auto ptr = (const GGS_classKind_2E_atomic *) mAssociatedValues.associatedValuesPointer () ;
  out_kind = ptr->mProperty_kind ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_document_3F_ GGS_classKind::getter_getDocument (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_document_3F_ result ;
  if (mEnum == Enumeration::enum_document) {
    const auto ptr = (const GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_document (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_document (GGS_lstring & out_rootEntityName) const {
  const auto ptr = (const GGS_classKind_2E_document *) mAssociatedValues.associatedValuesPointer () ;
  out_rootEntityName = ptr->mProperty_rootEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind_2E_entity_3F_ GGS_classKind::getter_getEntity (UNUSED_LOCATION_ARGS) const {
  GGS_classKind_2E_entity_3F_ result ;
  if (mEnum == Enumeration::enum_entity) {
    const auto ptr = (const GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_classKind_2E_entity (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::getAssociatedValuesFor_entity (GGS_string & out_superEntityName,
                                                   GGS_bool & out_isGraphic,
                                                   GGS_bool & out_isAbstract,
                                                   GGS_bool & out_handlingOpposite) const {
  const auto ptr = (const GGS_classKind_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_isGraphic = ptr->mProperty_isGraphic ;
  out_isAbstract = ptr->mProperty_isAbstract ;
  out_handlingOpposite = ptr->mProperty_handlingOpposite ;
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

GGS_bool GGS_classKind::getter_isPrefs (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefs == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isAtomic (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_atomic == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isDocument (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_document == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_classKind::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_classKind::description (String & ioString,
                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @classKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_classKind [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @classKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_classKind ("classKind",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_classKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classKind ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_classKind::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_classKind (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_classKind GGS_classKind::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_classKind result ;
  const GGS_classKind * p = (const GGS_classKind *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_classKind *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classKind", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @actionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_actionMap::GGS_actionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap::~ GGS_actionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap::GGS_actionMap (const GGS_actionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap & GGS_actionMap::operator = (const GGS_actionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_actionMap::getter_hasKey (const GGS_string & inKey
                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_actionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                              const GGS_uint & inLevel
                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_actionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_actionMap::getter_locationForKey (const GGS_string & inKey,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_actionMap::getter_keyList (Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_actionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_actionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::performInsert (const GGS_actionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_actionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>
GGS_actionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_actionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>>
GGS_actionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_actionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element_3F_ GGS_actionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_actionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_actionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_actionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::class_func_mapWithMapToOverride (const GGS_actionMap & inMapToOverride
                                                              COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_actionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::getter_overriddenMap (Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  GGS_actionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::setter_insertKey (GGS_lstring inLKey,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) {
  const GGS_actionMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "there is already a '%K' action" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::method_searchKey (GGS_lstring inLKey,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "the '%K' action is not defined" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_actionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> & inArray,
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
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_actionMap_2E_element>> array = sortedInfoArray () ;
    GGS_actionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_actionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_actionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @actionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_actionMap::DownEnumerator_actionMap (const GGS_actionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element DownEnumerator_actionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @actionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_actionMap::UpEnumerator_actionMap (const GGS_actionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap_2E_element UpEnumerator_actionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_actionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @actionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionMap ("actionMap",
                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionMap GGS_actionMap::extractObject (const GGS_object & inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GGS_actionMap result ;
  const GGS_actionMap * p = (const GGS_actionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum propertyAccessibility
//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility::GGS_propertyAccessibility (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_stored (UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_stored ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_computed (UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_computed ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::class_func_transient (const GGS_bool & inAssociatedValue0
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  result.mEnum = Enumeration::enum_transient ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_propertyAccessibility_2E_transient (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::method_extractTransient (GGS_bool & outAssociatedValue_isAbstract,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_transient) {
    outAssociatedValue_isAbstract.drop () ;
    String s ;
    s.appendCString ("method @propertyAccessibility.transient invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_isAbstract = ptr->mProperty_isAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility_2E_transient_3F_ GGS_propertyAccessibility::getter_getTransient (UNUSED_LOCATION_ARGS) const {
  GGS_propertyAccessibility_2E_transient_3F_ result ;
  if (mEnum == Enumeration::enum_transient) {
    const auto ptr = (const GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_propertyAccessibility_2E_transient (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::getAssociatedValuesFor_transient (GGS_bool & out_isAbstract) const {
  const auto ptr = (const GGS_propertyAccessibility_2E_transient *) mAssociatedValues.associatedValuesPointer () ;
  out_isAbstract = ptr->mProperty_isAbstract ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_propertyAccessibility [4] = {
  "(not built)",
  "stored",
  "computed",
  "transient"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isStored (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_stored == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isComputed (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_computed == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_propertyAccessibility::getter_isTransient (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transient == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyAccessibility::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @propertyAccessibility: ") ;
  ioString.appendCString (gEnumNameArrayFor_propertyAccessibility [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @propertyAccessibility generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_propertyAccessibility::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyAccessibility ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_propertyAccessibility::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_propertyAccessibility (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_propertyAccessibility GGS_propertyAccessibility::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_propertyAccessibility result ;
  const GGS_propertyAccessibility * p = (const GGS_propertyAccessibility *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_propertyAccessibility *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyAccessibility", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @actionFileGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration::objectCompare (const GGS_actionFileGeneration & inOperand) const {
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

GGS_actionFileGeneration::GGS_actionFileGeneration (void) :
GGS_abstractFileGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::
init_21__21_ (const GGS_string & in_mClassName,
              const GGS_string & in_mActionName,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_actionFileGeneration * object = nullptr ;
  macroMyNew (object, cPtr_actionFileGeneration (inCompiler COMMA_THERE)) ;
  object->actionFileGeneration_init_21__21_ (in_mClassName, in_mActionName, inCompiler) ;
  const GGS_actionFileGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::
actionFileGeneration_init_21__21_ (const GGS_string & in_mClassName,
                                   const GGS_string & in_mActionName,
                                   Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration::GGS_actionFileGeneration (const cPtr_actionFileGeneration * inSourcePtr) :
GGS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_actionFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mClassName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_actionFileGeneration::readProperty_mActionName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    return p->mProperty_mActionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionFileGeneration::setProperty_mActionName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_actionFileGeneration) ;
    p->mProperty_mActionName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @actionFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_actionFileGeneration::cPtr_actionFileGeneration (const GGS_string & in_mClassName,
                                                      const GGS_string & in_mActionName,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mActionName () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mActionName = in_mActionName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_actionFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

void cPtr_actionFileGeneration::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("[@actionFileGeneration:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mActionName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_actionFileGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_actionFileGeneration (mProperty_mClassName, mProperty_mActionName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_actionFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mActionName.printNonNullClassInstanceProperties ("mActionName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @actionFileGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration ("actionFileGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration::extractObject (const GGS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration result ;
  const GGS_actionFileGeneration * p = (const GGS_actionFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_actionFileGeneration_2E_weak::objectCompare (const GGS_actionFileGeneration_2E_weak & inOperand) const {
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

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak & GGS_actionFileGeneration_2E_weak::operator = (const GGS_actionFileGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak::GGS_actionFileGeneration_2E_weak (const GGS_actionFileGeneration & inSource) :
GGS_abstractFileGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration_2E_weak::unwrappedValue (void) const {
  GGS_actionFileGeneration result ;
  if (isValid ()) {
    const cPtr_actionFileGeneration * p = (cPtr_actionFileGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_actionFileGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration GGS_actionFileGeneration_2E_weak::bang_actionFileGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_actionFileGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_actionFileGeneration) ;
      result = GGS_actionFileGeneration ((cPtr_actionFileGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @actionFileGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ("actionFileGeneration.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_actionFileGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionFileGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_actionFileGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_actionFileGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_actionFileGeneration_2E_weak GGS_actionFileGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_actionFileGeneration_2E_weak result ;
  const GGS_actionFileGeneration_2E_weak * p = (const GGS_actionFileGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_actionFileGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("actionFileGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneOppositeRelationship ("toOneOppositeRelationship",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneOppositeRelationship::staticTypeDescriptor (void) const {
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

GGS_toOneRelationshipAST_2E_weak::GGS_toOneRelationshipAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak & GGS_toOneRelationshipAST_2E_weak::operator = (const GGS_toOneRelationshipAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST_2E_weak::unwrappedValue (void) const {
  GGS_toOneRelationshipAST result ;
  if (isValid ()) {
    const cPtr_toOneRelationshipAST * p = (cPtr_toOneRelationshipAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_toOneRelationshipAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST GGS_toOneRelationshipAST_2E_weak::bang_toOneRelationshipAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toOneRelationshipAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOneRelationshipAST_2E_weak ("toOneRelationshipAST.weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOneRelationshipAST_2E_weak::staticTypeDescriptor (void) const {
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

ComparisonResult GGS_toOnePropertyGeneration_2E_weak::objectCompare (const GGS_toOnePropertyGeneration_2E_weak & inOperand) const {
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

GGS_toOnePropertyGeneration_2E_weak::GGS_toOnePropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak & GGS_toOnePropertyGeneration_2E_weak::operator = (const GGS_toOnePropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_toOnePropertyGeneration result ;
  if (isValid ()) {
    const cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_toOnePropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration_2E_weak::bang_toOnePropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration_2E_weak ("toOnePropertyGeneration.weak",
                                                                                    & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOnePropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
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

class CollectionElementPtr_toOnePropertyGenerationList : public CollectionElementPtr {
  public: GGS_toOnePropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toOnePropertyGenerationList::CollectionElementPtr_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                                                                    COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_toOnePropertyGenerationList::CollectionElementPtr_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_toOnePropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_toOnePropertyGenerationList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_toOnePropertyGenerationList * p = (CollectionElementPtr_toOnePropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_toOnePropertyGenerationList) ;
    const GGS_toOnePropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                 const GGS_toOnePropertyGeneration & in_mProperty
                                                                 COMMA_LOCATION_ARGS) {
  CollectionElementPtr_toOnePropertyGenerationList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_toOnePropertyGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_toOnePropertyGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::description (String & ioString,
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

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toOnePropertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::plusPlusAssignOperation (const GGS_toOnePropertyGenerationList_2E_element & inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::class_func_listWithValue (const GGS_toOnePropertyGeneration & inOperand0
                                                                                           COMMA_LOCATION_ARGS) {
  const GGS_toOnePropertyGenerationList_2E_element element (inOperand0) ;
  GGS_toOnePropertyGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::addAssignOperation (const GGS_toOnePropertyGeneration & inOperand0
                                                          COMMA_LOCATION_ARGS) {
  const GGS_toOnePropertyGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_append (const GGS_toOnePropertyGeneration inOperand0,
                                                     Compiler * /* inCompiler */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_toOnePropertyGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::setter_insertAtIndex (const GGS_toOnePropertyGeneration inOperand0,
                                                            const GGS_uint inInsertionIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  const GGS_toOnePropertyGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_toOnePropertyGenerationList::setter_removeAtIndex (GGS_toOnePropertyGeneration & outOperand0,
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

void GGS_toOnePropertyGenerationList::setter_popFirst (GGS_toOnePropertyGeneration & outOperand0,
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

void GGS_toOnePropertyGenerationList::setter_popLast (GGS_toOnePropertyGeneration & outOperand0,
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

void GGS_toOnePropertyGenerationList::method_first (GGS_toOnePropertyGeneration & outOperand0,
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

void GGS_toOnePropertyGenerationList::method_last (GGS_toOnePropertyGeneration & outOperand0,
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

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::add_operation (const GGS_toOnePropertyGenerationList & inOperand,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
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

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::subList (const int32_t inStart,
                                                                          const int32_t inLength,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
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

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList GGS_toOnePropertyGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::plusAssignOperation (const GGS_toOnePropertyGenerationList inList,
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

void GGS_toOnePropertyGenerationList::setter_setMPropertyAtIndex (GGS_toOnePropertyGeneration inOperand,
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
  
GGS_toOnePropertyGeneration GGS_toOnePropertyGenerationList::getter_mPropertyAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_toOnePropertyGeneration result ;
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
// Down Enumerator for @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_toOnePropertyGenerationList::DownEnumerator_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element DownEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration DownEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_toOnePropertyGenerationList::UpEnumerator_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList_2E_element UpEnumerator_toOnePropertyGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration UpEnumerator_toOnePropertyGenerationList::current_mProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGenerationList ("toOnePropertyGenerationList",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOnePropertyGenerationList::staticTypeDescriptor (void) const {
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

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (void) :
mProperty_mInstruction () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) :
mProperty_mInstruction (inSource.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element & GGS_autoLayoutViewInstructionGenerationList_2E_element::operator = (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inSource) {
  mProperty_mInstruction = inSource.mProperty_mInstruction ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::init_21_ (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element::GGS_autoLayoutViewInstructionGenerationList_2E_element (const GGS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewInstructionGenerationList_2E_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList_2E_element::description (String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString.appendCString ("<struct @autoLayoutViewInstructionGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ("autoLayoutViewInstructionGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  const GGS_autoLayoutViewInstructionGenerationList_2E_element * p = (const GGS_autoLayoutViewInstructionGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (void) :
mProperty_mIndex (),
mProperty_mAssociatedString () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (const GGS_enumFunAssociationSortedList_2E_element & inSource) :
mProperty_mIndex (inSource.mProperty_mIndex),
mProperty_mAssociatedString (inSource.mProperty_mAssociatedString) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element & GGS_enumFunAssociationSortedList_2E_element::operator = (const GGS_enumFunAssociationSortedList_2E_element & inSource) {
  mProperty_mIndex = inSource.mProperty_mIndex ;
  mProperty_mAssociatedString = inSource.mProperty_mAssociatedString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::init_21__21_ (const GGS_uint & in_mIndex,
                                                                                                       const GGS_string & in_mAssociatedString,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mIndex = in_mIndex ;
  result.mProperty_mAssociatedString = in_mAssociatedString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element::GGS_enumFunAssociationSortedList_2E_element (const GGS_uint & inOperand0,
                                                                                          const GGS_string & inOperand1) :
mProperty_mIndex (inOperand0),
mProperty_mAssociatedString (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_enumFunAssociationSortedList_2E_element::objectCompare (const GGS_enumFunAssociationSortedList_2E_element & inOperand) const {
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

bool GGS_enumFunAssociationSortedList_2E_element::isValid (void) const {
  return mProperty_mIndex.isValid () && mProperty_mAssociatedString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::drop (void) {
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedString.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumFunAssociationSortedList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @enumFunAssociationSortedList.element:") ;
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
//     @enumFunAssociationSortedList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ("enumFunAssociationSortedList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumFunAssociationSortedList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumFunAssociationSortedList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumFunAssociationSortedList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_enumFunAssociationSortedList_2E_element result ;
  const GGS_enumFunAssociationSortedList_2E_element * p = (const GGS_enumFunAssociationSortedList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumFunAssociationSortedList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
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

