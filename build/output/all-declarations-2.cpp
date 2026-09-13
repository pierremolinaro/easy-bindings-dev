#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

//--------------------------------------------------------------------------------------------------
//  Map type @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::~ GGS_bindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap::GGS_bindingSpecificationMap (const GGS_bindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap & GGS_bindingSpecificationMap::operator = (const GGS_bindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_bindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                            const GGS_uint & inLevel
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_bindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_bindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_bindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::performInsert (const GGS_bindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>
GGS_bindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_bindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>>
GGS_bindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_bindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element_3F_ GGS_bindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_bindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_bindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = info->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = info->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_bindingSpecificationMap & inMapToOverride
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_bindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                    GGS_lstring inArgument0,
                                                    GGS_outletBindingSpecificationMap inArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  const GGS_bindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_removeKey (GGS_lstring inLKey,
                                                    GGS_lstring & outArgument0,
                                                    GGS_outletBindingSpecificationMap & outArgument1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' binding" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_bindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_bindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBindingMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::setter_setMBindingMapForKey (GGS_outletBindingSpecificationMap inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_bindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBindingMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_bindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBindingMap:") ;
    inArray (i COMMA_HERE)->mProperty_mBindingMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_bindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_bindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_bindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_bindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_bindingSpecificationMap::DownEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element DownEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap DownEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @bindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_bindingSpecificationMap::UpEnumerator_bindingSpecificationMap (const GGS_bindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap_2E_element UpEnumerator_bindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap UpEnumerator_bindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @bindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingSpecificationMap ("bindingSpecificationMap",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingSpecificationMap GGS_bindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_bindingSpecificationMap result ;
  const GGS_bindingSpecificationMap * p = (const GGS_bindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::~ GGS_autolayoutViewClassMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap::GGS_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap & GGS_autolayoutViewClassMap::operator = (const GGS_autolayoutViewClassMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_hasKey (const GGS_string & inKey
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutViewClassMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                           const GGS_uint & inLevel
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autolayoutViewClassMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autolayoutViewClassMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autolayoutViewClassMap::getter_locationForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autolayoutViewClassMap::getter_keyList (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autolayoutViewClassMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::performInsert (const GGS_autolayoutViewClassMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>
GGS_autolayoutViewClassMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autolayoutViewClassMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>>
GGS_autolayoutViewClassMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autolayoutViewClassMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element_3F_ GGS_autolayoutViewClassMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autolayoutViewClassMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autolayoutViewClassMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mSuperClassName = info->mProperty_mSuperClassName ;
      element.mProperty_mHandlesRunAction = info->mProperty_mHandlesRunAction ;
      element.mProperty_mHandlesTableValueBinding = info->mProperty_mHandlesTableValueBinding ;
      element.mProperty_mHandleEnabledBinding = info->mProperty_mHandleEnabledBinding ;
      element.mProperty_mHandleHiddenBinding = info->mProperty_mHandleHiddenBinding ;
      element.mProperty_mHandleGraphicControllerBinding = info->mProperty_mHandleGraphicControllerBinding ;
      element.mProperty_mUserDefined = info->mProperty_mUserDefined ;
      element.mProperty_mParameterList = info->mProperty_mParameterList ;
      element.mProperty_mAutoLayoutViewFunctionMap = info->mProperty_mAutoLayoutViewFunctionMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_mapWithMapToOverride (const GGS_autolayoutViewClassMap & inMapToOverride
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::getter_overriddenMap (Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_autolayoutViewClassMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_insertKey (GGS_lstring inLKey,
                                                   GGS_lstring inArgument0,
                                                   GGS_bool inArgument1,
                                                   GGS_bool inArgument2,
                                                   GGS_bool inArgument3,
                                                   GGS_bool inArgument4,
                                                   GGS_bool inArgument5,
                                                   GGS_bool inArgument6,
                                                   GGS_autoLayoutClassParameterList inArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap inArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_autolayoutViewClassMap_2E_element element (inLKey, inArgument0, inArgument1, inArgument2, inArgument3, inArgument4, inArgument5, inArgument6, inArgument7, inArgument8) ;
  const char * kInsertErrorMessage = "the '%K' outlet class is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::method_searchKey (GGS_lstring inLKey,
                                                   GGS_lstring & outArgument0,
                                                   GGS_bool & outArgument1,
                                                   GGS_bool & outArgument2,
                                                   GGS_bool & outArgument3,
                                                   GGS_bool & outArgument4,
                                                   GGS_bool & outArgument5,
                                                   GGS_bool & outArgument6,
                                                   GGS_autoLayoutClassParameterList & outArgument7,
                                                   GGS_astAutoLayoutViewFunctionMap & outArgument8,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info ;
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
    outArgument7.drop () ;
    outArgument8.drop () ;
  }else{
    outArgument0 = info->mProperty_mSuperClassName ;
    outArgument1 = info->mProperty_mHandlesRunAction ;
    outArgument2 = info->mProperty_mHandlesTableValueBinding ;
    outArgument3 = info->mProperty_mHandleEnabledBinding ;
    outArgument4 = info->mProperty_mHandleHiddenBinding ;
    outArgument5 = info->mProperty_mHandleGraphicControllerBinding ;
    outArgument6 = info->mProperty_mUserDefined ;
    outArgument7 = info->mProperty_mParameterList ;
    outArgument8 = info->mProperty_mAutoLayoutViewFunctionMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autolayoutViewClassMap::getter_mSuperClassNameForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesRunActionForKey (const GGS_string & inKey,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mHandlesTableValueBindingForKey (const GGS_string & inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleEnabledBindingForKey (const GGS_string & inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleHiddenBindingForKey (const GGS_string & inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mHandleGraphicControllerBindingForKey (const GGS_string & inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_bool GGS_autolayoutViewClassMap::getter_mUserDefinedForKey (const GGS_string & inKey,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
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

GGS_autoLayoutClassParameterList GGS_autolayoutViewClassMap::getter_mParameterListForKey (const GGS_string & inKey,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autolayoutViewClassMap::getter_mAutoLayoutViewFunctionMapForKey (const GGS_string & inKey,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mAutoLayoutViewFunctionMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMSuperClassNameForKey (GGS_lstring inValue,
                                                                  GGS_string inKey,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMHandlesRunActionForKey (GGS_bool inValue,
                                                                    GGS_string inKey,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMHandlesTableValueBindingForKey (GGS_bool inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMHandleEnabledBindingForKey (GGS_bool inValue,
                                                                        GGS_string inKey,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMHandleHiddenBindingForKey (GGS_bool inValue,
                                                                       GGS_string inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMHandleGraphicControllerBindingForKey (GGS_bool inValue,
                                                                                  GGS_string inKey,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMUserDefinedForKey (GGS_bool inValue,
                                                               GGS_string inKey,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
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

void GGS_autolayoutViewClassMap::setter_setMParameterListForKey (GGS_autoLayoutClassParameterList inValue,
                                                                 GGS_string inKey,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::setter_setMAutoLayoutViewFunctionMapForKey (GGS_astAutoLayoutViewFunctionMap inValue,
                                                                             GGS_string inKey,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autolayoutViewClassMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mAutoLayoutViewFunctionMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autolayoutViewClassMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> & inArray,
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
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mParameterList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mAutoLayoutViewFunctionMap:") ;
    inArray (i COMMA_HERE)->mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutViewClassMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autolayoutViewClassMap_2E_element>> array = sortedInfoArray () ;
    GGS_autolayoutViewClassMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autolayoutViewClassMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autolayoutViewClassMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autolayoutViewClassMap::DownEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element DownEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList DownEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap DownEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autolayoutViewClassMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autolayoutViewClassMap::UpEnumerator_autolayoutViewClassMap (const GGS_autolayoutViewClassMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap_2E_element UpEnumerator_autolayoutViewClassMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autolayoutViewClassMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autolayoutViewClassMap::current_mSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandlesRunAction (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesRunAction ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandlesTableValueBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandlesTableValueBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleEnabledBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleEnabledBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleHiddenBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mHandleGraphicControllerBinding (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mHandleGraphicControllerBinding ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_autolayoutViewClassMap::current_mUserDefined (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mUserDefined ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList UpEnumerator_autolayoutViewClassMap::current_mParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mParameterList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap UpEnumerator_autolayoutViewClassMap::current_mAutoLayoutViewFunctionMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mAutoLayoutViewFunctionMap ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutViewClassMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutViewClassMap ("autolayoutViewClassMap",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutViewClassMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutViewClassMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutViewClassMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutViewClassMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_autolayoutViewClassMap result ;
  const GGS_autolayoutViewClassMap * p = (const GGS_autolayoutViewClassMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutViewClassMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutViewClassMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::~ GGS_autoLayoutBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap::GGS_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap & GGS_autoLayoutBindingSpecificationMap::operator = (const GGS_autoLayoutBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutBindingSpecificationMap::getter_hasKey (const GGS_string & inKey
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                      const GGS_uint & inLevel
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::performInsert (const GGS_autoLayoutBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>
GGS_autoLayoutBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>>
GGS_autoLayoutBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletSuperClassName = info->mProperty_mOutletSuperClassName ;
      element.mProperty_mBindingMap = info->mProperty_mBindingMap ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutBindingSpecificationMap & inMapToOverride
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                              GGS_lstring inArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap inArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_removeKey (GGS_lstring inLKey,
                                                              GGS_lstring & outArgument0,
                                                              GGS_autoLayoutViewBindingSpecificationMap & outArgument1,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const char * kRemoveErrorMessage = "there is no '%K' binding" ;
    const String key = inLKey.mProperty_string.stringValue () ;
    mSharedRoot.insulate (THERE) ;
    info = mSharedRoot->removeAndReturnRemovedInfo (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kRemoveErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
    outArgument1.drop () ;
  }else{
    outArgument0 = info->mProperty_mOutletSuperClassName ;
    outArgument1 = info->mProperty_mBindingMap ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutBindingSpecificationMap::getter_mOutletSuperClassNameForKey (const GGS_string & inKey,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletSuperClassName ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::getter_mBindingMapForKey (const GGS_string & inKey,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mBindingMap ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMOutletSuperClassNameForKey (GGS_lstring inValue,
                                                                                   GGS_string inKey,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletSuperClassName = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::setter_setMBindingMapForKey (GGS_autoLayoutViewBindingSpecificationMap inValue,
                                                                         GGS_string inKey,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mBindingMap = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletSuperClassName:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletSuperClassName.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mBindingMap:") ;
    inArray (i COMMA_HERE)->mProperty_mBindingMap.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutBindingSpecificationMap::DownEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element DownEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap DownEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutBindingSpecificationMap::UpEnumerator_autoLayoutBindingSpecificationMap (const GGS_autoLayoutBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap_2E_element UpEnumerator_autoLayoutBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutBindingSpecificationMap::current_mOutletSuperClassName (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletSuperClassName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap UpEnumerator_autoLayoutBindingSpecificationMap::current_mBindingMap (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mBindingMap ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ("autoLayoutBindingSpecificationMap",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutBindingSpecificationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutBindingSpecificationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutBindingSpecificationMap result ;
  const GGS_autoLayoutBindingSpecificationMap * p = (const GGS_autoLayoutBindingSpecificationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutBindingSpecificationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutBindingSpecificationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::~ GGS_astAutoLayoutViewFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap::GGS_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap & GGS_astAutoLayoutViewFunctionMap::operator = (const GGS_astAutoLayoutViewFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewFunctionMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_astAutoLayoutViewFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_astAutoLayoutViewFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_astAutoLayoutViewFunctionMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_astAutoLayoutViewFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::performInsert (const GGS_astAutoLayoutViewFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_astAutoLayoutViewFunctionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>
GGS_astAutoLayoutViewFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_astAutoLayoutViewFunctionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>>
GGS_astAutoLayoutViewFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_astAutoLayoutViewFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ GGS_astAutoLayoutViewFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_astAutoLayoutViewFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_astAutoLayoutViewFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mFomalParameterList = info->mProperty_mFomalParameterList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::class_func_mapWithMapToOverride (const GGS_astAutoLayoutViewFunctionMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                                         GGS_autoLayoutClassParameterList inArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_astAutoLayoutViewFunctionMap_2E_element element (inLKey, inArgument0) ;
  const char * kInsertErrorMessage = "the '%K' function is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::method_searchKey (GGS_lstring inLKey,
                                                         GGS_autoLayoutClassParameterList & outArgument0,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' function" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
    outArgument0.drop () ;
  }else{
    outArgument0 = info->mProperty_mFomalParameterList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_astAutoLayoutViewFunctionMap::getter_mFomalParameterListForKey (const GGS_string & inKey,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mFomalParameterList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::setter_setMFomalParameterListForKey (GGS_autoLayoutClassParameterList inValue,
                                                                            GGS_string inKey,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_astAutoLayoutViewFunctionMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mFomalParameterList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_astAutoLayoutViewFunctionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> & inArray,
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
    ioString.appendString ("mFomalParameterList:") ;
    inArray (i COMMA_HERE)->mProperty_mFomalParameterList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_astAutoLayoutViewFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_astAutoLayoutViewFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_astAutoLayoutViewFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_astAutoLayoutViewFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_astAutoLayoutViewFunctionMap::DownEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element DownEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList DownEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFomalParameterList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @astAutoLayoutViewFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_astAutoLayoutViewFunctionMap::UpEnumerator_astAutoLayoutViewFunctionMap (const GGS_astAutoLayoutViewFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap_2E_element UpEnumerator_astAutoLayoutViewFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_astAutoLayoutViewFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList UpEnumerator_astAutoLayoutViewFunctionMap::current_mFomalParameterList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mFomalParameterList ;
}


//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ("astAutoLayoutViewFunctionMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_astAutoLayoutViewFunctionMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewFunctionMap result ;
  const GGS_astAutoLayoutViewFunctionMap * p = (const GGS_astAutoLayoutViewFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@enumerationFunctionListAST' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_enumerationFunctionListAST : public CollectionElementPtr {
  public: GGS_enumerationFunctionListAST_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                           const GGS_lstring & in_mFunctionName,
                                                           const GGS__32_lstringlist & in_mAssociationList
                                                           COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_enumerationFunctionListAST::CollectionElementPtr_enumerationFunctionListAST (const GGS_lstring & in_mEnumName,
                                                                                                  const GGS_lstring & in_mFunctionName,
                                                                                                  const GGS__32_lstringlist & in_mAssociationList
                                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mEnumName, in_mFunctionName, in_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_enumerationFunctionListAST::CollectionElementPtr_enumerationFunctionListAST (const GGS_enumerationFunctionListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mEnumName, inElement.mProperty_mFunctionName, inElement.mProperty_mAssociationList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_enumerationFunctionListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_enumerationFunctionListAST::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_enumerationFunctionListAST (mObject.mProperty_mEnumName, mObject.mProperty_mFunctionName, mObject.mProperty_mAssociationList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST::GGS_enumerationFunctionListAST (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_enumerationFunctionListAST * p = (CollectionElementPtr_enumerationFunctionListAST *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_enumerationFunctionListAST) ;
    const GGS_enumerationFunctionListAST_2E_element element (p->mObject.mProperty_mEnumName, p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mAssociationList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                const GGS_lstring & in_mEnumName,
                                                                const GGS_lstring & in_mFunctionName,
                                                                const GGS__32_lstringlist & in_mAssociationList
                                                                COMMA_LOCATION_ARGS) {
  CollectionElementPtr_enumerationFunctionListAST * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_enumerationFunctionListAST (in_mEnumName, in_mFunctionName, in_mAssociationList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_enumerationFunctionListAST::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_enumerationFunctionListAST::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::description (String & ioString,
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
      ioString.appendString ("mEnumName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEnumName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mFunctionName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mFunctionName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mAssociationList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mAssociationList.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::plusPlusAssignOperation (const GGS_enumerationFunctionListAST_2E_element & inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                         const GGS_lstring & inOperand1,
                                                                                         const GGS__32_lstringlist & inOperand2
                                                                                         COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_enumerationFunctionListAST result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::addAssignOperation (const GGS_lstring & inOperand0,
                                                         const GGS_lstring & inOperand1,
                                                         const GGS__32_lstringlist & inOperand2
                                                         COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_append (const GGS_lstring inOperand0,
                                                    const GGS_lstring inOperand1,
                                                    const GGS__32_lstringlist inOperand2,
                                                    Compiler * /* inCompiler */
                                                    COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                           const GGS_lstring inOperand1,
                                                           const GGS__32_lstringlist inOperand2,
                                                           const GGS_uint inInsertionIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  const GGS_enumerationFunctionListAST_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_enumerationFunctionListAST::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                           GGS_lstring & outOperand1,
                                                           GGS__32_lstringlist & outOperand2,
                                                           const GGS_uint inRemoveIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEnumName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mFunctionName ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mAssociationList ;
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

void GGS_enumerationFunctionListAST::setter_popFirst (GGS_lstring & outOperand0,
                                                      GGS_lstring & outOperand1,
                                                      GGS__32_lstringlist & outOperand2,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEnumName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mAssociationList ;
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

void GGS_enumerationFunctionListAST::setter_popLast (GGS_lstring & outOperand0,
                                                     GGS_lstring & outOperand1,
                                                     GGS__32_lstringlist & outOperand2,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEnumName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mAssociationList ;
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

void GGS_enumerationFunctionListAST::method_first (GGS_lstring & outOperand0,
                                                   GGS_lstring & outOperand1,
                                                   GGS__32_lstringlist & outOperand2,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEnumName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mAssociationList ;
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

void GGS_enumerationFunctionListAST::method_last (GGS_lstring & outOperand0,
                                                  GGS_lstring & outOperand1,
                                                  GGS__32_lstringlist & outOperand2,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEnumName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mAssociationList ;
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

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::add_operation (const GGS_enumerationFunctionListAST & inOperand,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
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

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::subList (const int32_t inStart,
                                                                        const int32_t inLength,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
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

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListWithRange (const GGS_range & inRange,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_enumerationFunctionListAST result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_enumerationFunctionListAST::plusAssignOperation (const GGS_enumerationFunctionListAST inList,
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

void GGS_enumerationFunctionListAST::setter_setMEnumNameAtIndex (GGS_lstring inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumName = inOperand ;
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
  
GGS_lstring GGS_enumerationFunctionListAST::getter_mEnumNameAtIndex (const GGS_uint & inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  GGS_lstring result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEnumName ;
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

void GGS_enumerationFunctionListAST::setter_setMFunctionNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_enumerationFunctionListAST::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
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

void GGS_enumerationFunctionListAST::setter_setMAssociationListAtIndex (GGS__32_lstringlist inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mAssociationList = inOperand ;
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
  
GGS__32_lstringlist GGS_enumerationFunctionListAST::getter_mAssociationListAtIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS__32_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mAssociationList ;
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
// Down Enumerator for @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

DownEnumerator_enumerationFunctionListAST::DownEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element DownEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist DownEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssociationList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @enumerationFunctionListAST
//--------------------------------------------------------------------------------------------------

UpEnumerator_enumerationFunctionListAST::UpEnumerator_enumerationFunctionListAST (const GGS_enumerationFunctionListAST & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST_2E_element UpEnumerator_enumerationFunctionListAST::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumerationFunctionListAST::current_mEnumName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEnumName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_enumerationFunctionListAST::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstringlist UpEnumerator_enumerationFunctionListAST::current_mAssociationList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mAssociationList ;
}




//--------------------------------------------------------------------------------------------------
//     @enumerationFunctionListAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_enumerationFunctionListAST ("enumerationFunctionListAST",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_enumerationFunctionListAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationFunctionListAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_enumerationFunctionListAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_enumerationFunctionListAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_enumerationFunctionListAST GGS_enumerationFunctionListAST::extractObject (const GGS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GGS_enumerationFunctionListAST result ;
  const GGS_enumerationFunctionListAST * p = (const GGS_enumerationFunctionListAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_enumerationFunctionListAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationFunctionListAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@regularBindingList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_regularBindingList : public CollectionElementPtr {
  public: GGS_regularBindingList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_regularBindingList (const GGS_lstring & in_mBindingName,
                                                   const GGS_observablePropertyList & in_mObservablePropertyList,
                                                   const GGS_bindingOptionList & in_mBindingOptionList
                                                   COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_regularBindingList (const GGS_regularBindingList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_regularBindingList::CollectionElementPtr_regularBindingList (const GGS_lstring & in_mBindingName,
                                                                                  const GGS_observablePropertyList & in_mObservablePropertyList,
                                                                                  const GGS_bindingOptionList & in_mBindingOptionList
                                                                                  COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_regularBindingList::CollectionElementPtr_regularBindingList (const GGS_regularBindingList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mObservablePropertyList, inElement.mProperty_mBindingOptionList) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_regularBindingList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_regularBindingList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_regularBindingList (mObject.mProperty_mBindingName, mObject.mProperty_mObservablePropertyList, mObject.mProperty_mBindingOptionList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @regularBindingList
//--------------------------------------------------------------------------------------------------

GGS_regularBindingList::GGS_regularBindingList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList::GGS_regularBindingList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_regularBindingList * p = (CollectionElementPtr_regularBindingList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_regularBindingList) ;
    const GGS_regularBindingList_2E_element element (p->mObject.mProperty_mBindingName, p->mObject.mProperty_mObservablePropertyList, p->mObject.mProperty_mBindingOptionList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                        const GGS_lstring & in_mBindingName,
                                                        const GGS_observablePropertyList & in_mObservablePropertyList,
                                                        const GGS_bindingOptionList & in_mBindingOptionList
                                                        COMMA_LOCATION_ARGS) {
  CollectionElementPtr_regularBindingList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_regularBindingList (in_mBindingName, in_mObservablePropertyList, in_mBindingOptionList COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_regularBindingList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_regularBindingList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::description (String & ioString,
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
      ioString.appendString ("mBindingName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBindingName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObservablePropertyList:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObservablePropertyList.description (ioString, inIndentation + 1) ;
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

GGS_regularBindingList GGS_regularBindingList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_regularBindingList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::plusPlusAssignOperation (const GGS_regularBindingList_2E_element & inValue
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_regularBindingList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                         const GGS_observablePropertyList & inOperand1,
                                                                         const GGS_bindingOptionList & inOperand2
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_regularBindingList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_regularBindingList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::addAssignOperation (const GGS_lstring & inOperand0,
                                                 const GGS_observablePropertyList & inOperand1,
                                                 const GGS_bindingOptionList & inOperand2
                                                 COMMA_LOCATION_ARGS) {
  const GGS_regularBindingList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::setter_append (const GGS_lstring inOperand0,
                                            const GGS_observablePropertyList inOperand1,
                                            const GGS_bindingOptionList inOperand2,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  const GGS_regularBindingList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                   const GGS_observablePropertyList inOperand1,
                                                   const GGS_bindingOptionList inOperand2,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  const GGS_regularBindingList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_regularBindingList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                   GGS_observablePropertyList & outOperand1,
                                                   GGS_bindingOptionList & outOperand2,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mObservablePropertyList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBindingOptionList ;
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

void GGS_regularBindingList::setter_popFirst (GGS_lstring & outOperand0,
                                              GGS_observablePropertyList & outOperand1,
                                              GGS_bindingOptionList & outOperand2,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObservablePropertyList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
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

void GGS_regularBindingList::setter_popLast (GGS_lstring & outOperand0,
                                             GGS_observablePropertyList & outOperand1,
                                             GGS_bindingOptionList & outOperand2,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObservablePropertyList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
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

void GGS_regularBindingList::method_first (GGS_lstring & outOperand0,
                                           GGS_observablePropertyList & outOperand1,
                                           GGS_bindingOptionList & outOperand2,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObservablePropertyList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionList ;
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

void GGS_regularBindingList::method_last (GGS_lstring & outOperand0,
                                          GGS_observablePropertyList & outOperand1,
                                          GGS_bindingOptionList & outOperand2,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObservablePropertyList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionList ;
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

GGS_regularBindingList GGS_regularBindingList::add_operation (const GGS_regularBindingList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
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

GGS_regularBindingList GGS_regularBindingList::subList (const int32_t inStart,
                                                        const int32_t inLength,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
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

GGS_regularBindingList GGS_regularBindingList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_regularBindingList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_regularBindingList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_regularBindingList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingList::plusAssignOperation (const GGS_regularBindingList inList,
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

void GGS_regularBindingList::setter_setMBindingNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_regularBindingList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
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

void GGS_regularBindingList::setter_setMObservablePropertyListAtIndex (GGS_observablePropertyList inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObservablePropertyList = inOperand ;
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
  
GGS_observablePropertyList GGS_regularBindingList::getter_mObservablePropertyListAtIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObservablePropertyList ;
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

void GGS_regularBindingList::setter_setMBindingOptionListAtIndex (GGS_bindingOptionList inOperand,
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
  
GGS_bindingOptionList GGS_regularBindingList::getter_mBindingOptionListAtIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
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
// Down Enumerator for @regularBindingList
//--------------------------------------------------------------------------------------------------

DownEnumerator_regularBindingList::DownEnumerator_regularBindingList (const GGS_regularBindingList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element DownEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList DownEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservablePropertyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList DownEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @regularBindingList
//--------------------------------------------------------------------------------------------------

UpEnumerator_regularBindingList::UpEnumerator_regularBindingList (const GGS_regularBindingList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList_2E_element UpEnumerator_regularBindingList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_regularBindingList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList UpEnumerator_regularBindingList::current_mObservablePropertyList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservablePropertyList ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList UpEnumerator_regularBindingList::current_mBindingOptionList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionList ;
}




//--------------------------------------------------------------------------------------------------
//     @regularBindingList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_regularBindingList ("regularBindingList",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_regularBindingList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_regularBindingList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_regularBindingList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingList GGS_regularBindingList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_regularBindingList result ;
  const GGS_regularBindingList * p = (const GGS_regularBindingList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_regularBindingList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("regularBindingList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@observablePropertyList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_observablePropertyList : public CollectionElementPtr {
  public: GGS_observablePropertyList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_observablePropertyList (const GGS_observablePropertyAST & in_mObservableProperty
                                                       COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_observablePropertyList (const GGS_observablePropertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_observablePropertyList::CollectionElementPtr_observablePropertyList (const GGS_observablePropertyAST & in_mObservableProperty
                                                                                          COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mObservableProperty) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_observablePropertyList::CollectionElementPtr_observablePropertyList (const GGS_observablePropertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mObservableProperty) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_observablePropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_observablePropertyList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_observablePropertyList (mObject.mProperty_mObservableProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @observablePropertyList
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList::GGS_observablePropertyList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList::GGS_observablePropertyList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_observablePropertyList * p = (CollectionElementPtr_observablePropertyList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_observablePropertyList) ;
    const GGS_observablePropertyList_2E_element element (p->mObject.mProperty_mObservableProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                            const GGS_observablePropertyAST & in_mObservableProperty
                                                            COMMA_LOCATION_ARGS) {
  CollectionElementPtr_observablePropertyList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_observablePropertyList (in_mObservableProperty COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_observablePropertyList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_observablePropertyList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::description (String & ioString,
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
      ioString.appendString ("mObservableProperty:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObservableProperty.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::plusPlusAssignOperation (const GGS_observablePropertyList_2E_element & inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::class_func_listWithValue (const GGS_observablePropertyAST & inOperand0
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_observablePropertyList_2E_element element (inOperand0) ;
  GGS_observablePropertyList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::addAssignOperation (const GGS_observablePropertyAST & inOperand0
                                                     COMMA_LOCATION_ARGS) {
  const GGS_observablePropertyList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_append (const GGS_observablePropertyAST inOperand0,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  const GGS_observablePropertyList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::setter_insertAtIndex (const GGS_observablePropertyAST inOperand0,
                                                       const GGS_uint inInsertionIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  const GGS_observablePropertyList_2E_element newElement (inOperand0) ;
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

void GGS_observablePropertyList::setter_removeAtIndex (GGS_observablePropertyAST & outOperand0,
                                                       const GGS_uint inRemoveIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mObservableProperty ;
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

void GGS_observablePropertyList::setter_popFirst (GGS_observablePropertyAST & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObservableProperty ;
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

void GGS_observablePropertyList::setter_popLast (GGS_observablePropertyAST & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObservableProperty ;
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

void GGS_observablePropertyList::method_first (GGS_observablePropertyAST & outOperand0,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mObservableProperty ;
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

void GGS_observablePropertyList::method_last (GGS_observablePropertyAST & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mObservableProperty ;
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

GGS_observablePropertyList GGS_observablePropertyList::add_operation (const GGS_observablePropertyList & inOperand,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
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

GGS_observablePropertyList GGS_observablePropertyList::subList (const int32_t inStart,
                                                                const int32_t inLength,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
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

GGS_observablePropertyList GGS_observablePropertyList::getter_subListWithRange (const GGS_range & inRange,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyList::plusAssignOperation (const GGS_observablePropertyList inList,
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

void GGS_observablePropertyList::setter_setMObservablePropertyAtIndex (GGS_observablePropertyAST inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObservableProperty = inOperand ;
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
  
GGS_observablePropertyAST GGS_observablePropertyList::getter_mObservablePropertyAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_observablePropertyAST result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObservableProperty ;
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
// Down Enumerator for @observablePropertyList
//--------------------------------------------------------------------------------------------------

DownEnumerator_observablePropertyList::DownEnumerator_observablePropertyList (const GGS_observablePropertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element DownEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST DownEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservableProperty ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @observablePropertyList
//--------------------------------------------------------------------------------------------------

UpEnumerator_observablePropertyList::UpEnumerator_observablePropertyList (const GGS_observablePropertyList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList_2E_element UpEnumerator_observablePropertyList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST UpEnumerator_observablePropertyList::current_mObservableProperty (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObservableProperty ;
}




//--------------------------------------------------------------------------------------------------
//     @observablePropertyList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyList ("observablePropertyList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyList GGS_observablePropertyList::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_observablePropertyList result ;
  const GGS_observablePropertyList * p = (const GGS_observablePropertyList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@bindingOptionList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_bindingOptionList : public CollectionElementPtr {
  public: GGS_bindingOptionList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_bindingOptionList (const GGS_lstring & in_mOptionName,
                                                  const GGS_abstractDefaultValue & in_mOptionValue
                                                  COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_bindingOptionList (const GGS_bindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_bindingOptionList::CollectionElementPtr_bindingOptionList (const GGS_lstring & in_mOptionName,
                                                                                const GGS_abstractDefaultValue & in_mOptionValue
                                                                                COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mOptionName, in_mOptionValue) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_bindingOptionList::CollectionElementPtr_bindingOptionList (const GGS_bindingOptionList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mOptionName, inElement.mProperty_mOptionValue) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_bindingOptionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_bindingOptionList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_bindingOptionList (mObject.mProperty_mOptionName, mObject.mProperty_mOptionValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @bindingOptionList
//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList::GGS_bindingOptionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList::GGS_bindingOptionList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_bindingOptionList * p = (CollectionElementPtr_bindingOptionList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_bindingOptionList) ;
    const GGS_bindingOptionList_2E_element element (p->mObject.mProperty_mOptionName, p->mObject.mProperty_mOptionValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                       const GGS_lstring & in_mOptionName,
                                                       const GGS_abstractDefaultValue & in_mOptionValue
                                                       COMMA_LOCATION_ARGS) {
  CollectionElementPtr_bindingOptionList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_bindingOptionList (in_mOptionName, in_mOptionValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_bindingOptionList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_bindingOptionList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::description (String & ioString,
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
      ioString.appendString ("mOptionValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mOptionValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bindingOptionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::plusPlusAssignOperation (const GGS_bindingOptionList_2E_element & inValue
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                       const GGS_abstractDefaultValue & inOperand1
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_bindingOptionList_2E_element element (inOperand0, inOperand1) ;
  GGS_bindingOptionList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::addAssignOperation (const GGS_lstring & inOperand0,
                                                const GGS_abstractDefaultValue & inOperand1
                                                COMMA_LOCATION_ARGS) {
  const GGS_bindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_append (const GGS_lstring inOperand0,
                                           const GGS_abstractDefaultValue inOperand1,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  const GGS_bindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                  const GGS_abstractDefaultValue inOperand1,
                                                  const GGS_uint inInsertionIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  const GGS_bindingOptionList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_bindingOptionList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                  GGS_abstractDefaultValue & outOperand1,
                                                  const GGS_uint inRemoveIndex,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mOptionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mOptionValue ;
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

void GGS_bindingOptionList::setter_popFirst (GGS_lstring & outOperand0,
                                             GGS_abstractDefaultValue & outOperand1,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionValue ;
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

void GGS_bindingOptionList::setter_popLast (GGS_lstring & outOperand0,
                                            GGS_abstractDefaultValue & outOperand1,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionValue ;
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

void GGS_bindingOptionList::method_first (GGS_lstring & outOperand0,
                                          GGS_abstractDefaultValue & outOperand1,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mOptionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mOptionValue ;
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

void GGS_bindingOptionList::method_last (GGS_lstring & outOperand0,
                                         GGS_abstractDefaultValue & outOperand1,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mOptionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mOptionValue ;
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

GGS_bindingOptionList GGS_bindingOptionList::add_operation (const GGS_bindingOptionList & inOperand,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
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

GGS_bindingOptionList GGS_bindingOptionList::subList (const int32_t inStart,
                                                      const int32_t inLength,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
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

GGS_bindingOptionList GGS_bindingOptionList::getter_subListWithRange (const GGS_range & inRange,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  GGS_bindingOptionList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_bindingOptionList::plusAssignOperation (const GGS_bindingOptionList inList,
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

void GGS_bindingOptionList::setter_setMOptionNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_bindingOptionList::getter_mOptionNameAtIndex (const GGS_uint & inIndex,
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

void GGS_bindingOptionList::setter_setMOptionValueAtIndex (GGS_abstractDefaultValue inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionValue = inOperand ;
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
  
GGS_abstractDefaultValue GGS_bindingOptionList::getter_mOptionValueAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_abstractDefaultValue result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mOptionValue ;
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
// Down Enumerator for @bindingOptionList
//--------------------------------------------------------------------------------------------------

DownEnumerator_bindingOptionList::DownEnumerator_bindingOptionList (const GGS_bindingOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element DownEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue DownEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @bindingOptionList
//--------------------------------------------------------------------------------------------------

UpEnumerator_bindingOptionList::UpEnumerator_bindingOptionList (const GGS_bindingOptionList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList_2E_element UpEnumerator_bindingOptionList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_bindingOptionList::current_mOptionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDefaultValue UpEnumerator_bindingOptionList::current_mOptionValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mOptionValue ;
}




//--------------------------------------------------------------------------------------------------
//     @bindingOptionList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_bindingOptionList ("bindingOptionList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_bindingOptionList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_bindingOptionList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_bindingOptionList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_bindingOptionList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bindingOptionList GGS_bindingOptionList::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_bindingOptionList result ;
  const GGS_bindingOptionList * p = (const GGS_bindingOptionList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_bindingOptionList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("bindingOptionList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum observablePropertyAST
//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST::GGS_observablePropertyAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyRelationship (const GGS_lstring & inAssociatedValue0,
                                                                                          const GGS_lstring & inAssociatedValue1
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyRelationship (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_rootPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_rootPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_rootPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfWithoutProperty (const GGS_location & inAssociatedValue0
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfWithoutProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfWithoutProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfProperty (const GGS_lstring & inAssociatedValue0
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyArray (const GGS_lstring & inAssociatedValue0,
                                                                                   const GGS_lstring & inAssociatedValue1
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyArray ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyArray (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyObject (const GGS_lstring & inAssociatedValue0,
                                                                                    const GGS_lstring & inAssociatedValue1
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyObject ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyObject (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfPropertyNone (const GGS_lstring & inAssociatedValue0
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfPropertyNone ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfPropertyNone (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsProperty (const GGS_lstring & inAssociatedValue0
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_prefsPropertyWithOption (const GGS_lstring & inAssociatedValue0,
                                                                                         const GGS_lstring & inAssociatedValue1
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_prefsPropertyWithOption ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_prefsPropertyWithOption (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerProperty (const GGS_lstring & inAssociatedValue0,
                                                                                        const GGS_lstring & inAssociatedValue1
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (const GGS_lstring & inAssociatedValue0,
                                                                                                 const GGS_lstring & inAssociatedValue1,
                                                                                                 const GGS_lstring & inAssociatedValue2
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerSecondaryProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerAllProperties (const GGS_lstring & inAssociatedValue0,
                                                                                             const GGS_lstring & inAssociatedValue1,
                                                                                             const GGS_lstring & inAssociatedValue2
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerAllProperties ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerAllProperties (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_selfControllerOneProperty (const GGS_lstring & inAssociatedValue0,
                                                                                           const GGS_lstring & inAssociatedValue1
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_selfControllerOneProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_selfControllerOneProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_signatureProperty (const GGS_location & inAssociatedValue0
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_signatureProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_signatureProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionProperty (const GGS_location & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_versionShouldChangeProperty (const GGS_location & inAssociatedValue0
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_versionShouldChangeProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_versionShouldChangeProperty (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superProperty (const GGS_lstring & inAssociatedValue0,
                                                                               const GGS_lstring & inAssociatedValue1
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superProperty ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superProperty (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (const GGS_lstring & inAssociatedValue0,
                                                                                               const GGS_lstring & inAssociatedValue1,
                                                                                               const GGS_abstractDefaultValue & inAssociatedValue2
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  result.mEnum = Enumeration::enum_superPropertyWithDefaultValue ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyRelationship (GGS_lstring & outAssociatedValue_relationshipName,
                                                                        GGS_lstring & outAssociatedValue_propertyName,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyRelationship) {
    outAssociatedValue_relationshipName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractRootPropertyNone (GGS_lstring & outAssociatedValue_relationshipName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootPropertyNone) {
    outAssociatedValue_relationshipName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.rootPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_relationshipName = ptr->mProperty_relationshipName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfWithoutProperty (GGS_location & outAssociatedValue_issueLocation,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfWithoutProperty) {
    outAssociatedValue_issueLocation.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfWithoutProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_issueLocation = ptr->mProperty_issueLocation ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                      GGS_lstring & outAssociatedValue_optionName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyArray (GGS_lstring & outAssociatedValue_propertyName,
                                                                 GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyArray) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyArray invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyObject (GGS_lstring & outAssociatedValue_propertyName,
                                                                  GGS_lstring & outAssociatedValue_elementPropertyName,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyObject) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_elementPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyObject invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_elementPropertyName = ptr->mProperty_elementPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfPropertyNone (GGS_lstring & outAssociatedValue_propertyName,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfPropertyNone) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfPropertyNone invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsProperty (GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsProperty) {
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractPrefsPropertyWithOption (GGS_lstring & outAssociatedValue_propertyName,
                                                                       GGS_lstring & outAssociatedValue_optionName,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_prefsPropertyWithOption) {
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_optionName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.prefsPropertyWithOption invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_optionName = ptr->mProperty_optionName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                      GGS_lstring & outAssociatedValue_propertyName,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerSecondaryProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                               GGS_lstring & outAssociatedValue_propertyName,
                                                                               GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerSecondaryProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerSecondaryProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerAllProperties (GGS_lstring & outAssociatedValue_controllerName,
                                                                           GGS_lstring & outAssociatedValue_propertyName,
                                                                           GGS_lstring & outAssociatedValue_secondaryPropertyName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerAllProperties) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_secondaryPropertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerAllProperties invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSelfControllerOneProperty (GGS_lstring & outAssociatedValue_controllerName,
                                                                         GGS_lstring & outAssociatedValue_propertyName,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_selfControllerOneProperty) {
    outAssociatedValue_controllerName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.selfControllerOneProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_controllerName = ptr->mProperty_controllerName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSignatureProperty (GGS_location & outAssociatedValue_location,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_signatureProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.signatureProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionProperty (GGS_location & outAssociatedValue_location,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractVersionShouldChangeProperty (GGS_location & outAssociatedValue_location,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_versionShouldChangeProperty) {
    outAssociatedValue_location.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.versionShouldChangeProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_location = ptr->mProperty_location ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperProperty (GGS_lstring & outAssociatedValue_superEntityName,
                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superProperty) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superProperty invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::method_extractSuperPropertyWithDefaultValue (GGS_lstring & outAssociatedValue_superEntityName,
                                                                             GGS_lstring & outAssociatedValue_propertyName,
                                                                             GGS_abstractDefaultValue & outAssociatedValue_defaultValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_superPropertyWithDefaultValue) {
    outAssociatedValue_superEntityName.drop () ;
    outAssociatedValue_propertyName.drop () ;
    outAssociatedValue_defaultValue.drop () ;
    String s ;
    s.appendCString ("method @observablePropertyAST.superPropertyWithDefaultValue invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_superEntityName = ptr->mProperty_superEntityName ;
    outAssociatedValue_propertyName = ptr->mProperty_propertyName ;
    outAssociatedValue_defaultValue = ptr->mProperty_defaultValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootProperty_3F_ GGS_observablePropertyAST::getter_getRootProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootProperty_3F_ result ;
  if (mEnum == Enumeration::enum_rootProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ GGS_observablePropertyAST::getter_getRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyRelationship) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyRelationship (GGS_lstring & out_relationshipName,
                                                                                 GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_rootPropertyNone_3F_ GGS_observablePropertyAST::getter_getRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_rootPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_rootPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_rootPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_rootPropertyNone (GGS_lstring & out_relationshipName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_rootPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_relationshipName = ptr->mProperty_relationshipName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ GGS_observablePropertyAST::getter_getSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfWithoutProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfWithoutProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfWithoutProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfWithoutProperty (GGS_location & out_issueLocation) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfWithoutProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_issueLocation = ptr->mProperty_issueLocation ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfProperty_3F_ GGS_observablePropertyAST::getter_getSelfProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyWithOption (GGS_lstring & out_propertyName,
                                                                               GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyArray_3F_ GGS_observablePropertyAST::getter_getSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyArray_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyArray) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyArray (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyArray (GGS_lstring & out_propertyName,
                                                                          GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyArray *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyObject_3F_ GGS_observablePropertyAST::getter_getSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyObject_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyObject) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyObject (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyObject (GGS_lstring & out_propertyName,
                                                                           GGS_lstring & out_elementPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyObject *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_elementPropertyName = ptr->mProperty_elementPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfPropertyNone_3F_ GGS_observablePropertyAST::getter_getSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfPropertyNone_3F_ result ;
  if (mEnum == Enumeration::enum_selfPropertyNone) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfPropertyNone (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfPropertyNone (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfPropertyNone *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsProperty_3F_ GGS_observablePropertyAST::getter_getPrefsProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsProperty_3F_ result ;
  if (mEnum == Enumeration::enum_prefsProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsProperty (GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ GGS_observablePropertyAST::getter_getPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_prefsPropertyWithOption_3F_ result ;
  if (mEnum == Enumeration::enum_prefsPropertyWithOption) {
    const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_prefsPropertyWithOption (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_prefsPropertyWithOption (GGS_lstring & out_propertyName,
                                                                                GGS_lstring & out_optionName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_prefsPropertyWithOption *) mAssociatedValues.associatedValuesPointer () ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_optionName = ptr->mProperty_optionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerProperty (GGS_lstring & out_controllerName,
                                                                               GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerSecondaryProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerSecondaryProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerSecondaryProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerSecondaryProperty (GGS_lstring & out_controllerName,
                                                                                        GGS_lstring & out_propertyName,
                                                                                        GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerSecondaryProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ GGS_observablePropertyAST::getter_getSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerAllProperties_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerAllProperties) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerAllProperties (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerAllProperties (GGS_lstring & out_controllerName,
                                                                                    GGS_lstring & out_propertyName,
                                                                                    GGS_lstring & out_secondaryPropertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerAllProperties *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_secondaryPropertyName = ptr->mProperty_secondaryPropertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ GGS_observablePropertyAST::getter_getSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_selfControllerOneProperty_3F_ result ;
  if (mEnum == Enumeration::enum_selfControllerOneProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_selfControllerOneProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_selfControllerOneProperty (GGS_lstring & out_controllerName,
                                                                                  GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_selfControllerOneProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_controllerName = ptr->mProperty_controllerName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_signatureProperty_3F_ GGS_observablePropertyAST::getter_getSignatureProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_signatureProperty_3F_ result ;
  if (mEnum == Enumeration::enum_signatureProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_signatureProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_signatureProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_signatureProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionProperty_3F_ GGS_observablePropertyAST::getter_getVersionProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ GGS_observablePropertyAST::getter_getVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ result ;
  if (mEnum == Enumeration::enum_versionShouldChangeProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_versionShouldChangeProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_versionShouldChangeProperty (GGS_location & out_location) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_versionShouldChangeProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_location = ptr->mProperty_location ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superProperty_3F_ GGS_observablePropertyAST::getter_getSuperProperty (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superProperty_3F_ result ;
  if (mEnum == Enumeration::enum_superProperty) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superProperty (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superProperty (GGS_lstring & out_superEntityName,
                                                                      GGS_lstring & out_propertyName) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superProperty *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ GGS_observablePropertyAST::getter_getSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  GGS_observablePropertyAST_2E_superPropertyWithDefaultValue_3F_ result ;
  if (mEnum == Enumeration::enum_superPropertyWithDefaultValue) {
    const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_observablePropertyAST_2E_superPropertyWithDefaultValue (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::getAssociatedValuesFor_superPropertyWithDefaultValue (GGS_lstring & out_superEntityName,
                                                                                      GGS_lstring & out_propertyName,
                                                                                      GGS_abstractDefaultValue & out_defaultValue) const {
  const auto ptr = (const GGS_observablePropertyAST_2E_superPropertyWithDefaultValue *) mAssociatedValues.associatedValuesPointer () ;
  out_superEntityName = ptr->mProperty_superEntityName ;
  out_propertyName = ptr->mProperty_propertyName ;
  out_defaultValue = ptr->mProperty_defaultValue ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_observablePropertyAST [22] = {
  "(not built)",
  "rootProperty",
  "rootPropertyWithOption",
  "rootPropertyRelationship",
  "rootPropertyNone",
  "selfWithoutProperty",
  "selfProperty",
  "selfPropertyWithOption",
  "selfPropertyArray",
  "selfPropertyObject",
  "selfPropertyNone",
  "prefsProperty",
  "prefsPropertyWithOption",
  "selfControllerProperty",
  "selfControllerSecondaryProperty",
  "selfControllerAllProperties",
  "selfControllerOneProperty",
  "signatureProperty",
  "versionProperty",
  "versionShouldChangeProperty",
  "superProperty",
  "superPropertyWithDefaultValue"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isRootPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfWithoutProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfWithoutProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyObject (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyObject == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfPropertyNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfPropertyNone == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isPrefsPropertyWithOption (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_prefsPropertyWithOption == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerSecondaryProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerSecondaryProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerAllProperties (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerAllProperties == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSelfControllerOneProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfControllerOneProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSignatureProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_signatureProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isVersionShouldChangeProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_versionShouldChangeProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperProperty (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superProperty == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_observablePropertyAST::getter_isSuperPropertyWithDefaultValue (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_superPropertyWithDefaultValue == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_observablePropertyAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @observablePropertyAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_observablePropertyAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @observablePropertyAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_observablePropertyAST ("observablePropertyAST",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_observablePropertyAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_observablePropertyAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_observablePropertyAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_observablePropertyAST GGS_observablePropertyAST::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_observablePropertyAST result ;
  const GGS_observablePropertyAST * p = (const GGS_observablePropertyAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_observablePropertyAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("observablePropertyAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST modelStringForSelf'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_modelStringForSelf (const GGS_observablePropertyAST & inObject,
                                               const GGS_string & constinArgument_inSelf,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_7025_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_7025_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 189)).add_operation (extractedValue_7025_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 189)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 189)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_7143_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_7143_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 191)).add_operation (extractedValue_7143_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 191)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 191)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_7263_propertyName_0 ;
      GGS_lstring extractedValue_7286_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_7263_propertyName_0, extractedValue_7286_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)).add_operation (extractedValue_7263_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)).add_operation (extractedValue_7286_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 193)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_7443_relationshipName_0 ;
      GGS_lstring extractedValue_7461__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_7443_relationshipName_0, extractedValue_7461__1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 195)).add_operation (extractedValue_7443_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 195)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 195)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_7566__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_7566__0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("objectIndex"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 197)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_7640_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_7640_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7640_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 199)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 199)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_7748_propertyName_0 ;
      GGS_lstring extractedValue_7771_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_7748_propertyName_0, extractedValue_7771_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7748_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 201)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 201)).add_operation (extractedValue_7771_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 201)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_7905_propertyName_0 ;
      GGS_lstring extractedValue_7935_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_7905_propertyName_0, extractedValue_7935_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7905_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 203)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 203)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_8046_propertyName_0 ;
      GGS_lstring extractedValue_8069_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_8046_propertyName_0, extractedValue_8069_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8046_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 205)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 205)).add_operation (extractedValue_8069_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 205)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 205)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_8215_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_8215_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8215_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 207)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 207)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_8310_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_8310_propertyName_0) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8310_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 209)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 209)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_8427_propertyName_0 ;
      GGS_lstring extractedValue_8450_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_8427_propertyName_0, extractedValue_8450_optionName_1) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8427_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 211)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 211)).add_operation (extractedValue_8450_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 211)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_8597_controllerName_0 ;
      GGS_lstring extractedValue_8622_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_8597_controllerName_0, extractedValue_8622_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8597_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 213)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 213)).add_operation (extractedValue_8622_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 213)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 213)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_8762_controllerName_0 ;
      GGS_lstring extractedValue_8787_propertyName_1 ;
      GGS_lstring extractedValue_8810_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_8762_controllerName_0, extractedValue_8787_propertyName_1, extractedValue_8810_secondaryPropertyName_2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8762_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (extractedValue_8787_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (extractedValue_8810_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 215)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_8999_controllerName_0 ;
      GGS_lstring extractedValue_9024_propertyName_1 ;
      GGS_lstring extractedValue_9038__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_8999_controllerName_0, extractedValue_9024_propertyName_1, extractedValue_9038__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8999_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 217)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 217)).add_operation (extractedValue_9024_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 217)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 217)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_9161_controllerName_0 ;
      GGS_lstring extractedValue_9186_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_9161_controllerName_0, extractedValue_9186_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9161_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 219)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 219)).add_operation (extractedValue_9186_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 219)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 219)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_9303__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_9303__0) ;
      result_outResult = GGS_string ("self.signatureObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_9382__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_9382__0) ;
      result_outResult = GGS_string ("self.versionObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_9471__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_9471__0) ;
      result_outResult = GGS_string ("self.versionShouldChangeObserver_property") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_9558__0 ;
      GGS_lstring extractedValue_9570_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_9558__0, extractedValue_9570_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9570_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 227)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 227)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_9676__0 ;
      GGS_lstring extractedValue_9688_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_9702__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_9676__0, extractedValue_9688_propertyName_1, extractedValue_9702__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9688_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 229)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 229)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST modelStringFunctionArgument'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_modelStringFunctionArgument (const GGS_observablePropertyAST & inObject,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_9997_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_9997_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_9997_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 238)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_10087_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_10087_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10087_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 240)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 240)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_10192_propertyName_0 ;
      GGS_lstring extractedValue_10215_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_10192_propertyName_0, extractedValue_10215_optionName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10192_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 242)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 242)).add_operation (extractedValue_10215_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 242)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_10329_relationshipName_0 ;
      GGS_lstring extractedValue_10356_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_10329_relationshipName_0, extractedValue_10356_elementPropertyName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10329_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)).add_operation (extractedValue_10356_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_10478__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_10478__0) ;
      result_outResult = GGS_string ("self_address") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_10544_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_10544_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10544_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 248)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_10639_propertyName_0 ;
      GGS_lstring extractedValue_10662_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_10639_propertyName_0, extractedValue_10662_optionName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10639_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 250)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 250)).add_operation (extractedValue_10662_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 250)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_10769_propertyName_0 ;
      GGS_lstring extractedValue_10792_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_10769_propertyName_0, extractedValue_10792_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10769_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 252)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 252)).add_operation (extractedValue_10792_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 252)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_10918_propertyName_0 ;
      GGS_lstring extractedValue_10941_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_10918_propertyName_0, extractedValue_10941_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10918_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)).add_operation (extractedValue_10941_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_11065_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_11065_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11065_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 256)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 256)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_11161_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_11161_propertyName_0) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11161_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_11258_propertyName_0 ;
      GGS_lstring extractedValue_11281_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_11258_propertyName_0, extractedValue_11281_optionName_1) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11258_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (extractedValue_11281_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_11394_controllerName_0 ;
      GGS_lstring extractedValue_11419_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_11394_controllerName_0, extractedValue_11419_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11394_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)).add_operation (extractedValue_11419_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_11546_controllerName_0 ;
      GGS_lstring extractedValue_11571_propertyName_1 ;
      GGS_lstring extractedValue_11594_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_11546_controllerName_0, extractedValue_11571_propertyName_1, extractedValue_11594_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11546_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 264)).add_operation (extractedValue_11571_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 264)).add_operation (extractedValue_11594_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 264)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_11756_controllerName_0 ;
      GGS_lstring extractedValue_11781_propertyName_1 ;
      GGS_lstring extractedValue_11804_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_11756_controllerName_0, extractedValue_11781_propertyName_1, extractedValue_11804_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11756_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 266)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 266)).add_operation (extractedValue_11781_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 266)).add_operation (GGS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 266)).add_operation (extractedValue_11804_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 266)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_11968_controllerName_0 ;
      GGS_lstring extractedValue_11993_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_11968_controllerName_0, extractedValue_11993_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11968_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 268)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 268)).add_operation (extractedValue_11993_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 268)).add_operation (GGS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 268)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_12112__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_12112__0) ;
      result_outResult = GGS_string ("self_signatureObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_12182__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_12182__0) ;
      result_outResult = GGS_string ("self_versionObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_12262__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_12262__0) ;
      result_outResult = GGS_string ("self_versionShouldChangeObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_12349_superEntityName_0 ;
      GGS_lstring extractedValue_12375_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_12349_superEntityName_0, extractedValue_12375_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12349_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 276)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 276)).add_operation (extractedValue_12375_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 276)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_12501_superEntityName_0 ;
      GGS_lstring extractedValue_12527_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_12541__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_12501_superEntityName_0, extractedValue_12527_propertyName_1, extractedValue_12541__2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12501_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 278)).add_operation (extractedValue_12527_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 278)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST needs_unwSelf'
//--------------------------------------------------------------------------------------------------

GGS_bool extensionGetter_needs_5F_unwSelf (const GGS_observablePropertyAST & inObject,
                                           const GGS_bool & constinArgument_inPreferences,
                                           Compiler *
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_12846__0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_12846__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_12897__0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_12897__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_12955__0 ;
      GGS_lstring extractedValue_12955__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_12955__0, extractedValue_12955__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_13015__0 ;
      GGS_lstring extractedValue_13015__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_13015__0, extractedValue_13015__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_13069__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_13069__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_13116__0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_13116__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 297)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_13187__0 ;
      GGS_lstring extractedValue_13187__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_13187__0, extractedValue_13187__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 299)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_13253__0 ;
      GGS_lstring extractedValue_13253__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_13253__0, extractedValue_13253__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 301)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_13320__0 ;
      GGS_lstring extractedValue_13320__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_13320__0, extractedValue_13320__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 303)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_13384__0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_13384__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 305)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_13445__0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_13445__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_13505__0 ;
      GGS_lstring extractedValue_13505__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_13505__0, extractedValue_13505__1) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_13564__0 ;
      GGS_lstring extractedValue_13564__1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_13564__0, extractedValue_13564__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_13631__0 ;
      GGS_lstring extractedValue_13631__1 ;
      GGS_lstring extractedValue_13631__2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_13631__0, extractedValue_13631__1, extractedValue_13631__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_13694__0 ;
      GGS_lstring extractedValue_13694__1 ;
      GGS_lstring extractedValue_13694__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_13694__0, extractedValue_13694__1, extractedValue_13694__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_13755__0 ;
      GGS_lstring extractedValue_13755__1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_13755__0, extractedValue_13755__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_13807__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_13807__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_13857__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_13857__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_13919__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_13919__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_13968__0 ;
      GGS_lstring extractedValue_13968__1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_13968__0, extractedValue_13968__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_14033__0 ;
      GGS_lstring extractedValue_14033__1 ;
      GGS_abstractDefaultValue extractedValue_14033__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_14033__0, extractedValue_14033__1, extractedValue_14033__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//  Extension Getter '@observablePropertyAST location'
//--------------------------------------------------------------------------------------------------

GGS_location extensionGetter_location (const GGS_observablePropertyAST & inObject,
                                       Compiler *
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_14280_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_14280_propertyName_0) ;
      result_outResult = extractedValue_14280_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_14368_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_14368_propertyName_0) ;
      result_outResult = extractedValue_14368_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_14453__0 ;
      GGS_lstring extractedValue_14465_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_14453__0, extractedValue_14465_optionName_1) ;
      result_outResult = extractedValue_14465_optionName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_14548__0 ;
      GGS_lstring extractedValue_14560_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_14548__0, extractedValue_14560_propertyName_1) ;
      result_outResult = extractedValue_14560_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_14642_issueLocation_0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_14642_issueLocation_0) ;
      result_outResult = extractedValue_14642_issueLocation_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_14719_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_14719_propertyName_0) ;
      result_outResult = extractedValue_14719_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_14813_propertyName_0 ;
      GGS_lstring extractedValue_14827__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_14813_propertyName_0, extractedValue_14827__1) ;
      result_outResult = extractedValue_14813_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_14905_propertyName_0 ;
      GGS_lstring extractedValue_14919__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_14905_propertyName_0, extractedValue_14919__1) ;
      result_outResult = extractedValue_14905_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_14998_propertyName_0 ;
      GGS_lstring extractedValue_15012__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_14998_propertyName_0, extractedValue_15012__1) ;
      result_outResult = extractedValue_14998_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_15089_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_15089_propertyName_0) ;
      result_outResult = extractedValue_15089_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_15174_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_15174_propertyName_0) ;
      result_outResult = extractedValue_15174_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_15269_propertyName_0 ;
      GGS_lstring extractedValue_15283__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_15269_propertyName_0, extractedValue_15283__1) ;
      result_outResult = extractedValue_15269_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_15357__0 ;
      GGS_lstring extractedValue_15369_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_15357__0, extractedValue_15369_propertyName_1) ;
      result_outResult = extractedValue_15369_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_15464__0 ;
      GGS_lstring extractedValue_15464__1 ;
      GGS_lstring extractedValue_15476_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_15464__0, extractedValue_15464__1, extractedValue_15476_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15476_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_15585__0 ;
      GGS_lstring extractedValue_15585__1 ;
      GGS_lstring extractedValue_15597_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_15585__0, extractedValue_15585__1, extractedValue_15597_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15597_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_15703__0 ;
      GGS_lstring extractedValue_15715_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_15703__0, extractedValue_15715_propertyName_1) ;
      result_outResult = extractedValue_15715_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_15805_location_0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_15805_location_0) ;
      result_outResult = extractedValue_15805_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_15876_location_0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_15876_location_0) ;
      result_outResult = extractedValue_15876_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_15959_location_0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_15959_location_0) ;
      result_outResult = extractedValue_15959_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_16018__0 ;
      GGS_lstring extractedValue_16030_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_16018__0, extractedValue_16030_propertyName_1) ;
      result_outResult = extractedValue_16030_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_16122__0 ;
      GGS_lstring extractedValue_16134_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_16148__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_16122__0, extractedValue_16134_propertyName_1, extractedValue_16148__2) ;
      result_outResult = extractedValue_16134_propertyName_1.readProperty_location () ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension method '@observablePropertyAST analyzeObservableProperty'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_analyzeObservableProperty (const GGS_observablePropertyAST inObject,
                                                const GGS_propertyMap constinArgument_inRootPropertyMap,
                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                const GGS_propertyMap constinArgument_inBoundModelPropertyMap,
                                                GGS_propertyKind & outArgument_outKind,
                                                GGS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                                GGS_string & outArgument_outProtocolTypeString,
                                                GGS_string & outArgument_outDefaultValue,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  outArgument_outProtocolTypeString.drop () ; // Release 'out' argument
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  outArgument_outDefaultValue = GGS_string::makeEmptyString () ;
  outArgument_outProtocolTypeString = GGS_string::makeEmptyString () ;
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_17094__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_17094__0) ;
      GGS_typeKind var_type_17107 = GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 393)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17107, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 394))  COMMA_SOURCE_FILE ("observable-property.galgas4", 394)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17107, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 395)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_17316__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_17316__0) ;
      GGS_typeKind var_type_17329 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 397)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17329, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 398))  COMMA_SOURCE_FILE ("observable-property.galgas4", 398)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17329, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 399)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_17543__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_17543__0) ;
      GGS_typeKind var_type_17556 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 401)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17556, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 402))  COMMA_SOURCE_FILE ("observable-property.galgas4", 402)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17556, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 403)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_17774_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_17774_propertyName_0) ;
      GGS_actionMap joker_17866_2 ; // Joker input parameter
      GGS_bool joker_17866_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17774_propertyName_0, outArgument_outKind, joker_17866_2, joker_17866_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 405)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 410)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_17985_relationshipName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_17985_relationshipName_0) ;
      GGS_propertyKind var_kind_18061 ;
      GGS_actionMap joker_18067_2 ; // Joker input parameter
      GGS_bool joker_18067_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17985_relationshipName_0, var_kind_18061, joker_18067_2, joker_18067_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 412)) ;
      switch (var_kind_18061.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18108__0 ;
          GGS_propertyAccessibility extractedValue_18108__1 ;
          var_kind_18061.getAssociatedValuesFor_property (extractedValue_18108__0, extractedValue_18108__1) ;
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.galgas4", 415)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_18214__0 ;
          GGS_propertyAccessibility extractedValue_18214__1 ;
          GGS_bool extractedValue_18214__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_18214__3 ;
          var_kind_18061.getAssociatedValuesFor_toMany (extractedValue_18214__0, extractedValue_18214__1, extractedValue_18214__2, extractedValue_18214__3) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("an array property does not accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas4", 417)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_18326__0 ;
          GGS_propertyAccessibility extractedValue_18326__1 ;
          GGS_bool extractedValue_18326__2 ;
          GGS_toOneOppositeRelationship extractedValue_18326__3 ;
          GGS_bool extractedValue_18326__4 ;
          var_kind_18061.getAssociatedValuesFor_toOne (extractedValue_18326__0, extractedValue_18326__1, extractedValue_18326__2, extractedValue_18326__3, extractedValue_18326__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 419)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 419))  COMMA_SOURCE_FILE ("observable-property.galgas4", 419)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_18452__0 ;
          GGS_bool extractedValue_18452__1 ;
          var_kind_18061.getAssociatedValuesFor_arrayController (extractedValue_18452__0, extractedValue_18452__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.galgas4", 421)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_18579__0 ;
          var_kind_18061.getAssociatedValuesFor_selectionController (extractedValue_18579__0) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.galgas4", 423)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 425)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_18802_propertyName_0 ;
      GGS_lstring extractedValue_18825_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_18802_propertyName_0, extractedValue_18825_optionName_1) ;
      GGS_propertyKind var_kind_18904 ;
      GGS_actionMap joker_18916_2 ; // Joker input parameter
      GGS_bool joker_18916_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_18802_propertyName_0, var_kind_18904, joker_18916_2, joker_18916_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 427)) ;
      switch (var_kind_18904.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18962__0 ;
          GGS_propertyAccessibility extractedValue_18962__1 ;
          var_kind_18904.getAssociatedValuesFor_property (extractedValue_18962__0, extractedValue_18962__1) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas4", 434)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_19068__0 ;
          GGS_propertyAccessibility extractedValue_19068__1 ;
          GGS_bool extractedValue_19068__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_19068__3 ;
          var_kind_18904.getAssociatedValuesFor_toMany (extractedValue_19068__0, extractedValue_19068__1, extractedValue_19068__2, extractedValue_19068__3) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, extractedValue_18825_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 437)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 437))  COMMA_SOURCE_FILE ("observable-property.galgas4", 437)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_18825_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas4", 439)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_19334__0 ;
          GGS_propertyAccessibility extractedValue_19334__1 ;
          GGS_bool extractedValue_19334__2 ;
          GGS_toOneOppositeRelationship extractedValue_19334__3 ;
          GGS_bool extractedValue_19334__4 ;
          var_kind_18904.getAssociatedValuesFor_toOne (extractedValue_19334__0, extractedValue_19334__1, extractedValue_19334__2, extractedValue_19334__3, extractedValue_19334__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas4", 442)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_19455__0 ;
          GGS_bool extractedValue_19455__1 ;
          var_kind_18904.getAssociatedValuesFor_arrayController (extractedValue_19455__0, extractedValue_19455__1) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, extractedValue_18825_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 445)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 445))  COMMA_SOURCE_FILE ("observable-property.galgas4", 445)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, extractedValue_18825_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 447)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 447))  COMMA_SOURCE_FILE ("observable-property.galgas4", 447)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_18825_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas4", 449)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_19885__0 ;
          var_kind_18904.getAssociatedValuesFor_selectionController (extractedValue_19885__0) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas4", 452)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 454)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_20110_relationshipName_0 ;
      GGS_lstring extractedValue_20137_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_20110_relationshipName_0, extractedValue_20137_propertyName_1) ;
      GGS_propertyKind var_kind_20229 ;
      GGS_actionMap joker_20235_2 ; // Joker input parameter
      GGS_bool joker_20235_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_20110_relationshipName_0, var_kind_20229, joker_20235_2, joker_20235_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 456)) ;
      switch (var_kind_20229.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_20276__0 ;
          GGS_propertyAccessibility extractedValue_20276__1 ;
          var_kind_20229.getAssociatedValuesFor_property (extractedValue_20276__0, extractedValue_20276__1) ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.galgas4", 459)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_20380_typeName_0 ;
          GGS_propertyAccessibility extractedValue_20391__1 ;
          GGS_bool extractedValue_20391__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_20391__3 ;
          var_kind_20229.getAssociatedValuesFor_toMany (extractedValue_20380_typeName_0, extractedValue_20391__1, extractedValue_20391__2, extractedValue_20391__3) ;
          GGS_propertyMap var_observablePropertyMap_20496 ;
          GGS_classKind joker_20487 ; // Joker input parameter
          GGS_actionMap joker_20519_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_20519_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_20380_typeName_0.readProperty_string (), extractedValue_20110_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE), joker_20487, var_observablePropertyMap_20496, joker_20519_2, joker_20519_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 461)) ;
          GGS_actionMap joker_20587_2 ; // Joker input parameter
          GGS_bool joker_20587_1 ; // Joker input parameter
          var_observablePropertyMap_20496.method_searchKey (extractedValue_20137_propertyName_1, outArgument_outKind, joker_20587_2, joker_20587_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 462)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_20609__0 ;
          GGS_propertyAccessibility extractedValue_20609__1 ;
          GGS_bool extractedValue_20609__2 ;
          GGS_toOneOppositeRelationship extractedValue_20609__3 ;
          GGS_bool extractedValue_20609__4 ;
          var_kind_20229.getAssociatedValuesFor_toOne (extractedValue_20609__0, extractedValue_20609__1, extractedValue_20609__2, extractedValue_20609__3, extractedValue_20609__4) ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas4", 464)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_20729__0 ;
          GGS_bool extractedValue_20729__1 ;
          var_kind_20229.getAssociatedValuesFor_arrayController (extractedValue_20729__0, extractedValue_20729__1) ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.galgas4", 466)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_20855__0 ;
          var_kind_20229.getAssociatedValuesFor_selectionController (extractedValue_20855__0) ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.galgas4", 468)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_20229, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 470)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 470)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 470)).add_operation (extractedValue_20137_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 470)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 470)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_20229, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 471)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 471)).add_operation (extractedValue_20137_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 471)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_21173_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_21173_propertyName_0) ;
      GGS_actionMap joker_21270_2 ; // Joker input parameter
      GGS_bool joker_21270_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_21173_propertyName_0, outArgument_outKind, joker_21270_2, joker_21270_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 473)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_21319__0 ;
          GGS_propertyAccessibility extractedValue_21319__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_21319__0, extractedValue_21319__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 480)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_21419__0 ;
          GGS_propertyAccessibility extractedValue_21419__1 ;
          GGS_bool extractedValue_21419__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_21419__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_21419__0, extractedValue_21419__1, extractedValue_21419__2, extractedValue_21419__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_21510__0 ;
          GGS_propertyAccessibility extractedValue_21510__1 ;
          GGS_bool extractedValue_21510__2 ;
          GGS_toOneOppositeRelationship extractedValue_21510__3 ;
          GGS_bool extractedValue_21510__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_21510__0, extractedValue_21510__1, extractedValue_21510__2, extractedValue_21510__3, extractedValue_21510__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_21610__0 ;
          GGS_bool extractedValue_21610__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_21610__0, extractedValue_21610__1) ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_21173_propertyName_0.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas4", 486)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_21768__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_21768__0) ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_21173_propertyName_0.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.galgas4", 488)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_21935__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_21935__0) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("Int") ;
      outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 492)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 492))  COMMA_SOURCE_FILE ("observable-property.galgas4", 492)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_22134_propertyName_0 ;
      GGS_lstring extractedValue_22157_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_22134_propertyName_0, extractedValue_22157_optionName_1) ;
      GGS_propertyKind var_kind_22241 ;
      GGS_actionMap joker_22253_2 ; // Joker input parameter
      GGS_bool joker_22253_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_22134_propertyName_0, var_kind_22241, joker_22253_2, joker_22253_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 494)) ;
      switch (var_kind_22241.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_22299__0 ;
          GGS_propertyAccessibility extractedValue_22299__1 ;
          var_kind_22241.getAssociatedValuesFor_property (extractedValue_22299__0, extractedValue_22299__1) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.galgas4", 501)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_22404__0 ;
          GGS_propertyAccessibility extractedValue_22404__1 ;
          GGS_bool extractedValue_22404__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_22404__3 ;
          var_kind_22241.getAssociatedValuesFor_toMany (extractedValue_22404__0, extractedValue_22404__1, extractedValue_22404__2, extractedValue_22404__3) ;
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, extractedValue_22157_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 504)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 504))  COMMA_SOURCE_FILE ("observable-property.galgas4", 504)) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_22157_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.galgas4", 506)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_22670__0 ;
          GGS_propertyAccessibility extractedValue_22670__1 ;
          GGS_bool extractedValue_22670__2 ;
          GGS_toOneOppositeRelationship extractedValue_22670__3 ;
          GGS_bool extractedValue_22670__4 ;
          var_kind_22241.getAssociatedValuesFor_toOne (extractedValue_22670__0, extractedValue_22670__1, extractedValue_22670__2, extractedValue_22670__3, extractedValue_22670__4) ;
          GenericArray <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.galgas4", 509)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_22782__0 ;
          GGS_bool extractedValue_22782__1 ;
          var_kind_22241.getAssociatedValuesFor_arrayController (extractedValue_22782__0, extractedValue_22782__1) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::equal, extractedValue_22157_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 512)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 512))  COMMA_SOURCE_FILE ("observable-property.galgas4", 512)) ;
            }
          }
          if (GalgasBool::boolFalse == test_23) {
            GalgasBool test_24 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_24) {
              test_24 = GGS_bool (ComparisonKind::equal, extractedValue_22157_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 514)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 514))  COMMA_SOURCE_FILE ("observable-property.galgas4", 514)) ;
              }
            }
            if (GalgasBool::boolFalse == test_24) {
              GenericArray <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_22157_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.galgas4", 516)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_23212__0 ;
          var_kind_22241.getAssociatedValuesFor_selectionController (extractedValue_23212__0) ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.galgas4", 519)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 521)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_23421_propertyName_0 ;
      GGS_lstring extractedValue_23444_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_23421_propertyName_0, extractedValue_23444_elementPropertyName_1) ;
      GGS_propertyKind var_kind_23557 ;
      GGS_actionMap joker_23569_2 ; // Joker input parameter
      GGS_bool joker_23569_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_23421_propertyName_0, var_kind_23557, joker_23569_2, joker_23569_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 523)) ;
      switch (var_kind_23557.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_23615__0 ;
          GGS_propertyAccessibility extractedValue_23615__1 ;
          var_kind_23557.getAssociatedValuesFor_property (extractedValue_23615__0, extractedValue_23615__1) ;
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas4", 530)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_23719_typeName_0 ;
          GGS_propertyAccessibility extractedValue_23730__1 ;
          GGS_bool extractedValue_23730__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_23730__3 ;
          var_kind_23557.getAssociatedValuesFor_toMany (extractedValue_23719_typeName_0, extractedValue_23730__1, extractedValue_23730__2, extractedValue_23730__3) ;
          GGS_propertyMap var_observablePropertyMap_23799 ;
          GGS_classKind joker_23790 ; // Joker input parameter
          GGS_actionMap joker_23822_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_23822_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_23719_typeName_0, joker_23790, var_observablePropertyMap_23799, joker_23822_2, joker_23822_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 532)) ;
          GGS_actionMap joker_23921_2 ; // Joker input parameter
          GGS_bool joker_23921_1 ; // Joker input parameter
          var_observablePropertyMap_23799.method_searchKey (extractedValue_23444_elementPropertyName_1, outArgument_outKind, joker_23921_2, joker_23921_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 533)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_23950__0 ;
          GGS_propertyAccessibility extractedValue_23950__1 ;
          GGS_bool extractedValue_23950__2 ;
          GGS_toOneOppositeRelationship extractedValue_23950__3 ;
          GGS_bool extractedValue_23950__4 ;
          var_kind_23557.getAssociatedValuesFor_toOne (extractedValue_23950__0, extractedValue_23950__1, extractedValue_23950__2, extractedValue_23950__3, extractedValue_23950__4) ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.galgas4", 539)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_24062__0 ;
          GGS_bool extractedValue_24062__1 ;
          var_kind_23557.getAssociatedValuesFor_arrayController (extractedValue_24062__0, extractedValue_24062__1) ;
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("an array controller accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas4", 541)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_24180__0 ;
          var_kind_23557.getAssociatedValuesFor_selectionController (extractedValue_24180__0) ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.galgas4", 543)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_23557, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 545)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 545)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 545)).add_operation (extractedValue_23444_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 546)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 546)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_23557, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 547)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 547)).add_operation (extractedValue_23444_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 547)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_24520_propertyName_0 ;
      GGS_lstring extractedValue_24543_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_24520_propertyName_0, extractedValue_24543_elementPropertyName_1) ;
      GGS_propertyKind var_kind_24656 ;
      GGS_actionMap joker_24668_2 ; // Joker input parameter
      GGS_bool joker_24668_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_24520_propertyName_0, var_kind_24656, joker_24668_2, joker_24668_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 549)) ;
      switch (var_kind_24656.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_24714__0 ;
          GGS_propertyAccessibility extractedValue_24714__1 ;
          var_kind_24656.getAssociatedValuesFor_property (extractedValue_24714__0, extractedValue_24714__1) ;
          GenericArray <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'one'"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas4", 556)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_24823__0 ;
          GGS_propertyAccessibility extractedValue_24823__1 ;
          GGS_bool extractedValue_24823__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_24823__3 ;
          var_kind_24656.getAssociatedValuesFor_toMany (extractedValue_24823__0, extractedValue_24823__1, extractedValue_24823__2, extractedValue_24823__3) ;
          GenericArray <FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'one'"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.galgas4", 558)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_24928_typeName_0 ;
          GGS_propertyAccessibility extractedValue_24939__1 ;
          GGS_bool extractedValue_24939__2 ;
          GGS_toOneOppositeRelationship extractedValue_24939__3 ;
          GGS_bool extractedValue_24939__4 ;
          var_kind_24656.getAssociatedValuesFor_toOne (extractedValue_24928_typeName_0, extractedValue_24939__1, extractedValue_24939__2, extractedValue_24939__3, extractedValue_24939__4) ;
          GGS_propertyMap var_observablePropertyMap_25008 ;
          GGS_classKind joker_24999 ; // Joker input parameter
          GGS_actionMap joker_25031_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_25031_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_24928_typeName_0, joker_24999, var_observablePropertyMap_25008, joker_25031_2, joker_25031_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 560)) ;
          GGS_actionMap joker_25130_2 ; // Joker input parameter
          GGS_bool joker_25130_1 ; // Joker input parameter
          var_observablePropertyMap_25008.method_searchKey (extractedValue_24543_elementPropertyName_1, outArgument_outKind, joker_25130_2, joker_25130_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 561)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_25169__0 ;
          GGS_bool extractedValue_25169__1 ;
          var_kind_24656.getAssociatedValuesFor_arrayController (extractedValue_25169__0, extractedValue_25169__1) ;
          GenericArray <FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.galgas4", 567)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_25291__0 ;
          var_kind_24656.getAssociatedValuesFor_selectionController (extractedValue_25291__0) ;
          GenericArray <FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas4", 569)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 571)).add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 571)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_25509_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_25509_propertyName_0) ;
      GGS_propertyKind var_kind_25612 ;
      GGS_actionMap joker_25624_2 ; // Joker input parameter
      GGS_bool joker_25624_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_25509_propertyName_0, var_kind_25612, joker_25624_2, joker_25624_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 573)) ;
      switch (var_kind_25612.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_25670__0 ;
          GGS_propertyAccessibility extractedValue_25670__1 ;
          var_kind_25612.getAssociatedValuesFor_property (extractedValue_25670__0, extractedValue_25670__1) ;
          GenericArray <FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'none'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas4", 580)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_25780__0 ;
          GGS_propertyAccessibility extractedValue_25780__1 ;
          GGS_bool extractedValue_25780__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_25780__3 ;
          var_kind_25612.getAssociatedValuesFor_toMany (extractedValue_25780__0, extractedValue_25780__1, extractedValue_25780__2, extractedValue_25780__3) ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'none'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas4", 582)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_25887__0 ;
          GGS_propertyAccessibility extractedValue_25887__1 ;
          GGS_bool extractedValue_25887__2 ;
          GGS_toOneOppositeRelationship extractedValue_25887__3 ;
          GGS_bool extractedValue_25887__4 ;
          var_kind_25612.getAssociatedValuesFor_toOne (extractedValue_25887__0, extractedValue_25887__1, extractedValue_25887__2, extractedValue_25887__3, extractedValue_25887__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 584)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 584))  COMMA_SOURCE_FILE ("observable-property.galgas4", 584)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_26013__0 ;
          GGS_bool extractedValue_26013__1 ;
          var_kind_25612.getAssociatedValuesFor_arrayController (extractedValue_26013__0, extractedValue_26013__1) ;
          GenericArray <FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas4", 586)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_26136__0 ;
          var_kind_25612.getAssociatedValuesFor_selectionController (extractedValue_26136__0) ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas4", 588)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 590)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_26346_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_26346_propertyName_0) ;
      GGS_propertyMap var_observablePropertyMap_26447 ;
      GGS_classKind joker_26438 ; // Joker input parameter
      GGS_actionMap joker_26470_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_26470_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 592)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 592)), inCompiler COMMA_HERE), joker_26438, var_observablePropertyMap_26447, joker_26470_2, joker_26470_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 592)) ;
      GGS_actionMap joker_26554_2 ; // Joker input parameter
      GGS_bool joker_26554_1 ; // Joker input parameter
      var_observablePropertyMap_26447.method_searchKey (extractedValue_26346_propertyName_0, outArgument_outKind, joker_26554_2, joker_26554_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 593)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 598)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_26680_propertyName_0 ;
      GGS_lstring extractedValue_26703_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_26680_propertyName_0, extractedValue_26703_optionName_1) ;
      GGS_propertyMap var_observablePropertyMap_26802 ;
      GGS_classKind joker_26793 ; // Joker input parameter
      GGS_actionMap joker_26825_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_26825_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 600)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 600)), inCompiler COMMA_HERE), joker_26793, var_observablePropertyMap_26802, joker_26825_2, joker_26825_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 600)) ;
      GGS_propertyKind var_kind_26898 ;
      GGS_actionMap joker_26910_2 ; // Joker input parameter
      GGS_bool joker_26910_1 ; // Joker input parameter
      var_observablePropertyMap_26802.method_searchKey (extractedValue_26680_propertyName_0, var_kind_26898, joker_26910_2, joker_26910_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 601)) ;
      switch (var_kind_26898.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_26956__0 ;
          GGS_propertyAccessibility extractedValue_26956__1 ;
          var_kind_26898.getAssociatedValuesFor_property (extractedValue_26956__0, extractedValue_26956__1) ;
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas4", 608)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_27062__0 ;
          GGS_propertyAccessibility extractedValue_27062__1 ;
          GGS_bool extractedValue_27062__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_27062__3 ;
          var_kind_26898.getAssociatedValuesFor_toMany (extractedValue_27062__0, extractedValue_27062__1, extractedValue_27062__2, extractedValue_27062__3) ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.galgas4", 610)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_27174__0 ;
          GGS_propertyAccessibility extractedValue_27174__1 ;
          GGS_bool extractedValue_27174__2 ;
          GGS_toOneOppositeRelationship extractedValue_27174__3 ;
          GGS_bool extractedValue_27174__4 ;
          var_kind_26898.getAssociatedValuesFor_toOne (extractedValue_27174__0, extractedValue_27174__1, extractedValue_27174__2, extractedValue_27174__3, extractedValue_27174__4) ;
          GenericArray <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.galgas4", 612)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_27295__0 ;
          GGS_bool extractedValue_27295__1 ;
          var_kind_26898.getAssociatedValuesFor_arrayController (extractedValue_27295__0, extractedValue_27295__1) ;
          GalgasBool test_42 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_42) {
            test_42 = GGS_bool (ComparisonKind::equal, extractedValue_26703_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_42) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 615)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 615))  COMMA_SOURCE_FILE ("observable-property.galgas4", 615)) ;
            }
          }
          if (GalgasBool::boolFalse == test_42) {
            GalgasBool test_43 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_43) {
              test_43 = GGS_bool (ComparisonKind::equal, extractedValue_26703_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_43) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 617)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 617))  COMMA_SOURCE_FILE ("observable-property.galgas4", 617)) ;
              }
            }
            if (GalgasBool::boolFalse == test_43) {
              GenericArray <FixItDescription> fixItArray44 ;
              inCompiler->emitSemanticError (extractedValue_26703_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray44  COMMA_SOURCE_FILE ("observable-property.galgas4", 619)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_27725__0 ;
          var_kind_26898.getAssociatedValuesFor_selectionController (extractedValue_27725__0) ;
          GenericArray <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray45  COMMA_SOURCE_FILE ("observable-property.galgas4", 622)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 624)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_27948_controllerName_0 ;
      GGS_lstring extractedValue_27973_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_27948_controllerName_0, extractedValue_27973_propertyName_1) ;
      GGS_propertyKind var_propertyKind_28075 ;
      GGS_actionMap joker_28095_2 ; // Joker input parameter
      GGS_bool joker_28095_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_27948_controllerName_0, var_propertyKind_28075, joker_28095_2, joker_28095_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 626)) ;
      switch (var_propertyKind_28075.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_28149__0 ;
          GGS_propertyAccessibility extractedValue_28149__1 ;
          var_propertyKind_28075.getAssociatedValuesFor_property (extractedValue_28149__0, extractedValue_28149__1) ;
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.galgas4", 633)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_28255__0 ;
          GGS_propertyAccessibility extractedValue_28255__1 ;
          GGS_bool extractedValue_28255__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_28255__3 ;
          var_propertyKind_28075.getAssociatedValuesFor_toMany (extractedValue_28255__0, extractedValue_28255__1, extractedValue_28255__2, extractedValue_28255__3) ;
          GenericArray <FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.galgas4", 635)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_28367__0 ;
          GGS_propertyAccessibility extractedValue_28367__1 ;
          GGS_bool extractedValue_28367__2 ;
          GGS_toOneOppositeRelationship extractedValue_28367__3 ;
          GGS_bool extractedValue_28367__4 ;
          var_propertyKind_28075.getAssociatedValuesFor_toOne (extractedValue_28367__0, extractedValue_28367__1, extractedValue_28367__2, extractedValue_28367__3, extractedValue_28367__4) ;
          GenericArray <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas4", 637)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_28487_typeName_0 ;
          GGS_bool extractedValue_28497_graphic_1 ;
          var_propertyKind_28075.getAssociatedValuesFor_arrayController (extractedValue_28487_typeName_0, extractedValue_28497_graphic_1) ;
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            GGS_bool test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27973_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
            if (GalgasBool::boolTrue != test_50.boolEnum ()) {
              test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27973_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
            }
            test_49 = test_50.boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              outArgument_outKind = GGS_propertyKind::class_func_toMany (extractedValue_28487_typeName_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 642)), extractedValue_28497_graphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("observable-property.galgas4", 644))  COMMA_SOURCE_FILE ("observable-property.galgas4", 640)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GenericArray <FixItDescription> fixItArray51 ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
            inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray51  COMMA_SOURCE_FILE ("observable-property.galgas4", 647)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_29040_entityName_0 ;
          var_propertyKind_28075.getAssociatedValuesFor_selectionController (extractedValue_29040_entityName_0) ;
          GGS_propertyMap var_observablePropertyMap_29173 ;
          GGS_classKind joker_29156 ; // Joker input parameter
          GGS_actionMap joker_29204_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_29204_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_29040_entityName_0, extractedValue_27948_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_29156, var_observablePropertyMap_29173, joker_29204_2, joker_29204_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 653)) ;
          GGS_actionMap joker_29279_2 ; // Joker input parameter
          GGS_bool joker_29279_1 ; // Joker input parameter
          var_observablePropertyMap_29173.method_searchKey (extractedValue_27973_propertyName_1, outArgument_outKind, joker_29279_2, joker_29279_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 659)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 661)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_29416_controllerName_0 ;
      GGS_lstring extractedValue_29441_propertyName_1 ;
      GGS_lstring extractedValue_29464_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_29416_controllerName_0, extractedValue_29441_propertyName_1, extractedValue_29464_secondaryPropertyName_2) ;
      GGS_propertyKind joker_29544_3 ; // Joker input parameter
      GGS_actionMap joker_29544_2 ; // Joker input parameter
      GGS_bool joker_29544_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_29416_controllerName_0, joker_29544_3, joker_29544_2, joker_29544_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 663)) ;
      GalgasBool test_52 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_52) {
        GGS_bool test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29441_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
        if (GalgasBool::boolTrue == test_53.boolEnum ()) {
          test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29464_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
        }
        test_52 = test_53.boolEnum () ;
        if (GalgasBool::boolTrue == test_52) {
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 665)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 665))  COMMA_SOURCE_FILE ("observable-property.galgas4", 665)) ;
        }
      }
      if (GalgasBool::boolFalse == test_52) {
        GalgasBool test_54 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_54) {
          GGS_bool test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29441_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
          if (GalgasBool::boolTrue == test_55.boolEnum ()) {
            test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29464_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
          }
          test_54 = test_55.boolEnum () ;
          if (GalgasBool::boolTrue == test_54) {
            outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 667)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 667))  COMMA_SOURCE_FILE ("observable-property.galgas4", 667)) ;
          }
        }
        if (GalgasBool::boolFalse == test_54) {
          GenericArray <FixItDescription> fixItArray56 ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_29441_propertyName_1.readProperty_location (), GGS_string ("unknown option"), fixItArray56  COMMA_SOURCE_FILE ("observable-property.galgas4", 669)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 671)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_30195_controllerName_0 ;
      GGS_lstring extractedValue_30220_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_30195_controllerName_0, extractedValue_30220_propertyName_1) ;
      GGS_propertyKind var_propertyKind_30310 ;
      GGS_actionMap joker_30324_2 ; // Joker input parameter
      GGS_bool joker_30324_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_30195_controllerName_0, var_propertyKind_30310, joker_30324_2, joker_30324_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 673)) ;
      GGS_string var_controllerTypeName_30345 = GGS_string::makeEmptyString () ;
      switch (var_propertyKind_30310.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_30420__0 ;
          GGS_bool extractedValue_30420__1 ;
          var_propertyKind_30310.getAssociatedValuesFor_arrayController (extractedValue_30420__0, extractedValue_30420__1) ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (extractedValue_30195_controllerName_0.readProperty_location (), GGS_string ("an array controller does not support 'one'"), fixItArray57  COMMA_SOURCE_FILE ("observable-property.galgas4", 677)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_30531__0 ;
          var_propertyKind_30310.getAssociatedValuesFor_selectionController (extractedValue_30531__0) ;
          GenericArray <FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_30195_controllerName_0.readProperty_location (), GGS_string ("a selection controller does not support 'one'"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.galgas4", 679)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_30635__0 ;
          GGS_propertyAccessibility extractedValue_30635__1 ;
          var_propertyKind_30310.getAssociatedValuesFor_property (extractedValue_30635__0, extractedValue_30635__1) ;
          GenericArray <FixItDescription> fixItArray59 ;
          inCompiler->emitSemanticError (extractedValue_30195_controllerName_0.readProperty_location (), GGS_string ("a property does not support 'one'"), fixItArray59  COMMA_SOURCE_FILE ("observable-property.galgas4", 681)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_30725__0 ;
          GGS_propertyAccessibility extractedValue_30725__1 ;
          GGS_bool extractedValue_30725__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_30725__3 ;
          var_propertyKind_30310.getAssociatedValuesFor_toMany (extractedValue_30725__0, extractedValue_30725__1, extractedValue_30725__2, extractedValue_30725__3) ;
          GenericArray <FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (extractedValue_30195_controllerName_0.readProperty_location (), GGS_string ("a toMany relationship does not support 'one'"), fixItArray60  COMMA_SOURCE_FILE ("observable-property.galgas4", 683)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_30825__0 ;
          GGS_propertyAccessibility extractedValue_30825__1 ;
          GGS_bool extractedValue_30825__2 ;
          GGS_toOneOppositeRelationship extractedValue_30825__3 ;
          GGS_bool extractedValue_30825__4 ;
          var_propertyKind_30310.getAssociatedValuesFor_toOne (extractedValue_30825__0, extractedValue_30825__1, extractedValue_30825__2, extractedValue_30825__3, extractedValue_30825__4) ;
          GenericArray <FixItDescription> fixItArray61 ;
          inCompiler->emitSemanticError (extractedValue_30195_controllerName_0.readProperty_location (), GGS_string ("a toOne relationship does not support 'one'"), fixItArray61  COMMA_SOURCE_FILE ("observable-property.galgas4", 685)) ;
        }
        break ;
      }
      GGS_propertyMap var_observablePropertyMap_31034 ;
      GGS_classKind joker_31019 ; // Joker input parameter
      GGS_actionMap joker_31063_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_31063_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (var_controllerTypeName_30345, extractedValue_30195_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_31019, var_observablePropertyMap_31034, joker_31063_2, joker_31063_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 687)) ;
      GGS_actionMap joker_31133_2 ; // Joker input parameter
      GGS_bool joker_31133_1 ; // Joker input parameter
      var_observablePropertyMap_31034.method_searchKey (extractedValue_30220_propertyName_1, outArgument_outKind, joker_31133_2, joker_31133_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 693)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = var_controllerTypeName_30345.add_operation (GGS_string ("\?<<8>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 694)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_31266_controllerName_0 ;
      GGS_lstring extractedValue_31291_propertyName_1 ;
      GGS_lstring extractedValue_31314_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_31266_controllerName_0, extractedValue_31291_propertyName_1, extractedValue_31314_secondaryPropertyName_2) ;
      GGS_propertyKind var_propertyKind_31413 ;
      GGS_actionMap joker_31427_2 ; // Joker input parameter
      GGS_bool joker_31427_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_31266_controllerName_0, var_propertyKind_31413, joker_31427_2, joker_31427_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 696)) ;
      GalgasBool test_62 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_62) {
        test_62 = GGS_bool (ComparisonKind::notEqual, extractedValue_31291_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_62) {
          GenericArray <FixItDescription> fixItArray63 ;
          appendFixItActions (fixItArray63, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_31291_propertyName_1.readProperty_location (), GGS_string ("unknown property"), fixItArray63  COMMA_SOURCE_FILE ("observable-property.galgas4", 698)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_62) {
        outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 702)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 702))  COMMA_SOURCE_FILE ("observable-property.galgas4", 702)) ;
        switch (var_propertyKind_31413.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_31797__0 ;
            GGS_propertyAccessibility extractedValue_31797__1 ;
            var_propertyKind_31413.getAssociatedValuesFor_property (extractedValue_31797__0, extractedValue_31797__1) ;
            GenericArray <FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (extractedValue_31291_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray64  COMMA_SOURCE_FILE ("observable-property.galgas4", 705)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_31975__0 ;
            GGS_propertyAccessibility extractedValue_31975__1 ;
            GGS_bool extractedValue_31975__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_31975__3 ;
            var_propertyKind_31413.getAssociatedValuesFor_toMany (extractedValue_31975__0, extractedValue_31975__1, extractedValue_31975__2, extractedValue_31975__3) ;
            GenericArray <FixItDescription> fixItArray65 ;
            inCompiler->emitSemanticError (extractedValue_31291_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray65  COMMA_SOURCE_FILE ("observable-property.galgas4", 709)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_32158__0 ;
            GGS_propertyAccessibility extractedValue_32158__1 ;
            GGS_bool extractedValue_32158__2 ;
            GGS_toOneOppositeRelationship extractedValue_32158__3 ;
            GGS_bool extractedValue_32158__4 ;
            var_propertyKind_31413.getAssociatedValuesFor_toOne (extractedValue_32158__0, extractedValue_32158__1, extractedValue_32158__2, extractedValue_32158__3, extractedValue_32158__4) ;
            GenericArray <FixItDescription> fixItArray66 ;
            inCompiler->emitSemanticError (extractedValue_31291_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray66  COMMA_SOURCE_FILE ("observable-property.galgas4", 713)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_32350_typeName_0 ;
            GGS_bool extractedValue_32360__1 ;
            var_propertyKind_31413.getAssociatedValuesFor_arrayController (extractedValue_32350_typeName_0, extractedValue_32360__1) ;
            GGS_propertyMap var_observablePropertyMap_32491 ;
            GGS_classKind joker_32472 ; // Joker input parameter
            GGS_actionMap joker_32524_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_32524_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32350_typeName_0.readProperty_string (), extractedValue_31266_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32472, var_observablePropertyMap_32491, joker_32524_2, joker_32524_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 717)) ;
            GGS_actionMap joker_32611_2 ; // Joker input parameter
            GGS_bool joker_32611_1 ; // Joker input parameter
            var_observablePropertyMap_32491.method_searchKey (extractedValue_31314_secondaryPropertyName_2, outArgument_outKind, joker_32611_2, joker_32611_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 723)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32350_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 724)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 724)).add_operation (extractedValue_31314_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 724)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 724)) ;
            outArgument_outProtocolTypeString = extractedValue_32350_typeName_0.readProperty_string ().add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 725)).add_operation (extractedValue_31314_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 725)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_32845_entityName_0 ;
            var_propertyKind_31413.getAssociatedValuesFor_selectionController (extractedValue_32845_entityName_0) ;
            GGS_propertyMap var_observablePropertyMap_32986 ;
            GGS_classKind joker_32967 ; // Joker input parameter
            GGS_actionMap joker_33019_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_33019_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32845_entityName_0, extractedValue_31266_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32967, var_observablePropertyMap_32986, joker_33019_2, joker_33019_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 727)) ;
            GGS_actionMap joker_33107_2 ; // Joker input parameter
            GGS_bool joker_33107_1 ; // Joker input parameter
            var_observablePropertyMap_32986.method_searchKey (extractedValue_31314_secondaryPropertyName_2, outArgument_outKind, joker_33107_2, joker_33107_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 733)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32845_entityName_0, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 734)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 734)).add_operation (extractedValue_31314_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 734)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 734)) ;
            outArgument_outProtocolTypeString = extractedValue_32845_entityName_0.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 735)).add_operation (extractedValue_31314_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 735)) ;
          }
          break ;
        }
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_33345__0 ;
      GGS_lstring extractedValue_33357_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_33345__0, extractedValue_33357_propertyName_1) ;
      GGS_actionMap joker_33454_2 ; // Joker input parameter
      GGS_bool joker_33454_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_33357_propertyName_1, outArgument_outKind, joker_33454_2, joker_33454_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 739)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_33503__0 ;
          GGS_propertyAccessibility extractedValue_33503__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_33503__0, extractedValue_33503__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 746)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_33603__0 ;
          GGS_propertyAccessibility extractedValue_33603__1 ;
          GGS_bool extractedValue_33603__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_33603__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_33603__0, extractedValue_33603__1, extractedValue_33603__2, extractedValue_33603__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_33694__0 ;
          GGS_propertyAccessibility extractedValue_33694__1 ;
          GGS_bool extractedValue_33694__2 ;
          GGS_toOneOppositeRelationship extractedValue_33694__3 ;
          GGS_bool extractedValue_33694__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_33694__0, extractedValue_33694__1, extractedValue_33694__2, extractedValue_33694__3, extractedValue_33694__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_33794__0 ;
          GGS_bool extractedValue_33794__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_33794__0, extractedValue_33794__1) ;
          GenericArray <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (extractedValue_33357_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray67  COMMA_SOURCE_FILE ("observable-property.galgas4", 752)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_33952__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_33952__0) ;
          GenericArray <FixItDescription> fixItArray68 ;
          inCompiler->emitSemanticError (extractedValue_33357_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray68  COMMA_SOURCE_FILE ("observable-property.galgas4", 754)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_34129__0 ;
      GGS_lstring extractedValue_34141_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_34155_defaultValue_2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_34129__0, extractedValue_34141_propertyName_1, extractedValue_34155_defaultValue_2) ;
      GGS_actionMap joker_34252_2 ; // Joker input parameter
      GGS_bool joker_34252_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_34141_propertyName_1, outArgument_outKind, joker_34252_2, joker_34252_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 757)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_34300_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_34314__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_34300_propertyType_0, extractedValue_34314__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 764)) ;
          GGS_propertyMap var_preferencesPropertyMap_34483 ;
          GGS_classKind joker_34474 ; // Joker input parameter
          GGS_actionMap joker_34507_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_34507_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 765)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 765)), inCompiler COMMA_HERE), joker_34474, var_preferencesPropertyMap_34483, joker_34507_2, joker_34507_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 765)) ;
          GGS_typeKindList temp_69 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 767)) ;
          temp_69.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_34300_propertyType_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("observable-property.galgas4", 767)) ;
          callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) extractedValue_34155_defaultValue_2.ptr (), temp_69, var_preferencesPropertyMap_34483, outArgument_outDefaultValue, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 766)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_34667__0 ;
          GGS_propertyAccessibility extractedValue_34667__1 ;
          GGS_bool extractedValue_34667__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_34667__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_34667__0, extractedValue_34667__1, extractedValue_34667__2, extractedValue_34667__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_34758__0 ;
          GGS_propertyAccessibility extractedValue_34758__1 ;
          GGS_bool extractedValue_34758__2 ;
          GGS_toOneOppositeRelationship extractedValue_34758__3 ;
          GGS_bool extractedValue_34758__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_34758__0, extractedValue_34758__1, extractedValue_34758__2, extractedValue_34758__3, extractedValue_34758__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_34858__0 ;
          GGS_bool extractedValue_34858__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_34858__0, extractedValue_34858__1) ;
          GenericArray <FixItDescription> fixItArray70 ;
          inCompiler->emitSemanticError (extractedValue_34141_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray70  COMMA_SOURCE_FILE ("observable-property.galgas4", 776)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_35016__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_35016__0) ;
          GenericArray <FixItDescription> fixItArray71 ;
          inCompiler->emitSemanticError (extractedValue_34141_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray71  COMMA_SOURCE_FILE ("observable-property.galgas4", 778)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutClassParameterList' list
//--------------------------------------------------------------------------------------------------

class CollectionElementPtr_autoLayoutClassParameterList : public CollectionElementPtr {
  public: GGS_autoLayoutClassParameterList_2E_element mObject ;

//--- Class functions
  public: CollectionElementPtr_autoLayoutClassParameterList (const GGS_lstring & in_mParameterName,
                                                             const GGS_autoLayoutClassParameterType & in_mParameterType
                                                             COMMA_LOCATION_ARGS) ;
  public: CollectionElementPtr_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual CollectionElementPtr * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutClassParameterList::CollectionElementPtr_autoLayoutClassParameterList (const GGS_lstring & in_mParameterName,
                                                                                                      const GGS_autoLayoutClassParameterType & in_mParameterType
                                                                                                      COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (in_mParameterName, in_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr_autoLayoutClassParameterList::CollectionElementPtr_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
CollectionElementPtr (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterType) {
}

//--------------------------------------------------------------------------------------------------

bool CollectionElementPtr_autoLayoutClassParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

CollectionElementPtr * CollectionElementPtr_autoLayoutClassParameterList::copy (void) {
  CollectionElementPtr * result = nullptr ;
  macroMyNew (result, CollectionElementPtr_autoLayoutClassParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterType COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList::GGS_autoLayoutClassParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList::GGS_autoLayoutClassParameterList (const CollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const CollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    CollectionElementPtr_autoLayoutClassParameterList * p = (CollectionElementPtr_autoLayoutClassParameterList *) v.ptr () ;
    macroValidSharedObject (p, CollectionElementPtr_autoLayoutClassParameterList) ;
    const GGS_autoLayoutClassParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterType) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::makeAttributesFromObjects (CollectionElement & outAttributes,
                                                                  const GGS_lstring & in_mParameterName,
                                                                  const GGS_autoLayoutClassParameterType & in_mParameterType
                                                                  COMMA_LOCATION_ARGS) {
  CollectionElementPtr_autoLayoutClassParameterList * p = nullptr ;
  macroMyNew (p, CollectionElementPtr_autoLayoutClassParameterList (in_mParameterName, in_mParameterType COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutClassParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutClassParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::description (String & ioString,
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
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::plusPlusAssignOperation (const GGS_autoLayoutClassParameterList_2E_element & inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::class_func_listWithValue (const GGS_lstring & inOperand0,
                                                                                             const GGS_autoLayoutClassParameterType & inOperand1
                                                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutClassParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::addAssignOperation (const GGS_lstring & inOperand0,
                                                           const GGS_autoLayoutClassParameterType & inOperand1
                                                           COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_append (const GGS_lstring inOperand0,
                                                      const GGS_autoLayoutClassParameterType inOperand1,
                                                      Compiler * /* inCompiler */
                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::setter_insertAtIndex (const GGS_lstring inOperand0,
                                                             const GGS_autoLayoutClassParameterType inOperand1,
                                                             const GGS_uint inInsertionIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutClassParameterList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutClassParameterList::setter_removeAtIndex (GGS_lstring & outOperand0,
                                                             GGS_autoLayoutClassParameterType & outOperand1,
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

void GGS_autoLayoutClassParameterList::setter_popFirst (GGS_lstring & outOperand0,
                                                        GGS_autoLayoutClassParameterType & outOperand1,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
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

void GGS_autoLayoutClassParameterList::setter_popLast (GGS_lstring & outOperand0,
                                                       GGS_autoLayoutClassParameterType & outOperand1,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
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

void GGS_autoLayoutClassParameterList::method_first (GGS_lstring & outOperand0,
                                                     GGS_autoLayoutClassParameterType & outOperand1,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterType ;
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

void GGS_autoLayoutClassParameterList::method_last (GGS_lstring & outOperand0,
                                                    GGS_autoLayoutClassParameterType & outOperand1,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterType ;
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

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::add_operation (const GGS_autoLayoutClassParameterList & inOperand,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
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

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::subList (const int32_t inStart,
                                                                            const int32_t inLength,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
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

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterList::plusAssignOperation (const GGS_autoLayoutClassParameterList inList,
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

void GGS_autoLayoutClassParameterList::setter_setMParameterNameAtIndex (GGS_lstring inOperand,
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
  
GGS_lstring GGS_autoLayoutClassParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
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

void GGS_autoLayoutClassParameterList::setter_setMParameterTypeAtIndex (GGS_autoLayoutClassParameterType inOperand,
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
  
GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterList::getter_mParameterTypeAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutClassParameterList::DownEnumerator_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element DownEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType DownEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutClassParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutClassParameterList::UpEnumerator_autoLayoutClassParameterList (const GGS_autoLayoutClassParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList_2E_element UpEnumerator_autoLayoutClassParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutClassParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType UpEnumerator_autoLayoutClassParameterList::current_mParameterType (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterType ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutClassParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterList ("autoLayoutClassParameterList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterList GGS_autoLayoutClassParameterList::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterList result ;
  const GGS_autoLayoutClassParameterList * p = (const GGS_autoLayoutClassParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutViewClassDeclarationAST_2E_weak::objectCompare (const GGS_autoLayoutViewClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_autoLayoutViewClassDeclarationAST_2E_weak::GGS_autoLayoutViewClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak & GGS_autoLayoutViewClassDeclarationAST_2E_weak::operator = (const GGS_autoLayoutViewClassDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak::GGS_autoLayoutViewClassDeclarationAST_2E_weak (const GGS_autoLayoutViewClassDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak GGS_autoLayoutViewClassDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutViewClassDeclarationAST result ;
  if (isValid ()) {
    const cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutViewClassDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST_2E_weak::bang_autoLayoutViewClassDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutViewClassDeclarationAST) ;
      result = GGS_autoLayoutViewClassDeclarationAST ((cPtr_autoLayoutViewClassDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewClassDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ("autoLayoutViewClassDeclarationAST.weak",
                                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewClassDeclarationAST_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewClassDeclarationAST_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST_2E_weak GGS_autoLayoutViewClassDeclarationAST_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewClassDeclarationAST_2E_weak result ;
  const GGS_autoLayoutViewClassDeclarationAST_2E_weak * p = (const GGS_autoLayoutViewClassDeclarationAST_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewClassDeclarationAST_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autoLayoutClassParameterType
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType::GGS_autoLayoutClassParameterType (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeString (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeStringArray (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeStringArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeInt (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeInt ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeBool (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeBool ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeView (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeView ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_menuItem (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_menuItem ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_entity (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_entity ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::class_func_typeEnum (const GGS_lstring & inAssociatedValue0
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  result.mEnum = Enumeration::enum_typeEnum ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autoLayoutClassParameterType_2E_typeEnum (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::method_extractTypeEnum (GGS_lstring & outAssociatedValue_name,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_typeEnum) {
    outAssociatedValue_name.drop () ;
    String s ;
    s.appendCString ("method @autoLayoutClassParameterType.typeEnum invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_name = ptr->mProperty_name ;
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

GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ GGS_autoLayoutClassParameterType::getter_getTypeEnum (UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutClassParameterType_2E_typeEnum_3F_ result ;
  if (mEnum == Enumeration::enum_typeEnum) {
    const auto ptr = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autoLayoutClassParameterType_2E_typeEnum (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::getAssociatedValuesFor_typeEnum (GGS_lstring & out_name) const {
  const auto ptr = (const GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
  out_name = ptr->mProperty_name ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutClassParameterType [9] = {
  "(not built)",
  "typeString",
  "typeStringArray",
  "typeInt",
  "typeBool",
  "typeView",
  "menuItem",
  "entity",
  "typeEnum"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeString == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeStringArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeStringArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeInt (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeInt == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeBool (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeBool == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeView (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeView == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutClassParameterType::getter_isTypeEnum (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_typeEnum == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutClassParameterType::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autoLayoutClassParameterType: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutClassParameterType [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutClassParameterType::objectCompare (const GGS_autoLayoutClassParameterType & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_typeEnum: {
        const auto left = (GGS_autoLayoutClassParameterType_2E_typeEnum *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_autoLayoutClassParameterType_2E_typeEnum *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @autoLayoutClassParameterType generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutClassParameterType ("autoLayoutClassParameterType",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutClassParameterType::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutClassParameterType ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutClassParameterType::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutClassParameterType (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutClassParameterType GGS_autoLayoutClassParameterType::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutClassParameterType result ;
  const GGS_autoLayoutClassParameterType * p = (const GGS_autoLayoutClassParameterType *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutClassParameterType *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutClassParameterType", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Extension Getter '@autoLayoutClassParameterType string'
//--------------------------------------------------------------------------------------------------

GGS_string extensionGetter_string (const GGS_autoLayoutClassParameterType & inObject,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutClassParameterType temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_autoLayoutClassParameterType::Enumeration::invalid:
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeString:
    {
      result_result = GGS_string ("String") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeStringArray:
    {
      result_result = GGS_string ("String array") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeInt:
    {
      result_result = GGS_string ("Int") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeBool:
    {
      result_result = GGS_string ("Bool") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeView:
    {
      result_result = GGS_string ("a view") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_menuItem:
    {
      result_result = GGS_string ("a menu item") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_entity:
    {
      result_result = GGS_string ("an entity name") ;
    }
    break ;
  case GGS_autoLayoutClassParameterType::Enumeration::enum_typeEnum:
    {
      GGS_lstring extractedValue_1433_name_0 ;
      temp_0.getAssociatedValuesFor_typeEnum (extractedValue_1433_name_0) ;
      result_result = GGS_string ("the ").add_operation (extractedValue_1433_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 41)).add_operation (GGS_string (" enum type"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 41)) ;
    }
    break ;
  }
//---
  return result_result ;
}






//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GGS_location & outArgument_outEndOfFile,
                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 40)) ;
      GGS_lstring var_filePath_1781 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 42)) ;
      GGS_lstring var_sourceFile_1811 = GGS_lstring::init_21__21_ (var_filePath_1781.readProperty_string ().getter_absolutePathFromPath (GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 44)).getter_deletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas4", 44)) COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 44)), var_filePath_1781.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_location joker_2033 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_1811, ioArgument_ioDeclarationAST, joker_2033  COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 47)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_ (ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_ (ioArgument_ioDeclarationAST.mProperty_mBindingSpecificationListMap, inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_ (ioArgument_ioDeclarationAST.mProperty_mXcodeProject, inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mMainXibDescriptorList, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  outArgument_outEndOfFile = GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 73)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 40)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 42)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_indexing (inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_indexing (inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GGS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas4", 20)) ;
  GGS_lstring var_externDelegateName_793 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas4", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas4", 22)) ;
  {
  ioArgument_ioExternSwiftDelegateList.setter_append (var_externDelegateName_793, inCompiler COMMA_SOURCE_FILE ("extern-delegate.galgas4", 23)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas4", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas4", 22)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i2_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring constinArgument_inRootEntity,
                                                                                                GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 63)) ;
  GGS_lstring var_controllerName_2962 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 64)) ;
  GGS_autoLayoutTableViewControllerAttributListAST temp_0 = GGS_autoLayoutTableViewControllerAttributListAST::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 65)) ;
  GGS_autoLayoutTableViewControllerAttributListAST var_arrayControllerAttributListAST_3032 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 66)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_attributeName_3121 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 69)) ;
    GGS_abstractDefaultValue var_attributeValue_3197 ;
    nt_explicit_5F_value_ (var_attributeValue_3197, inCompiler) ;
    {
    var_arrayControllerAttributListAST_3032.setter_append (var_attributeName_3121, var_attributeValue_3197, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 71)) ;
    }
    if (select_easyBindings_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 73)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 75)) ;
  GGS_bool var_isRoot_3354 ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 79)) ;
    var_isRoot_3354 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 82)) ;
    var_isRoot_3354 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 85)) ;
  GGS_lstring var_relationshipName_3494 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 86)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST temp_2 = GGS_autoLayoutTableViewControllerBoundColumnListAST::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 87)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3569 = temp_2 ;
  switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 91)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
        GGS_bool var_editableColumn_3689 ;
        switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 96)) ;
          var_editableColumn_3689 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 99)) ;
          var_editableColumn_3689 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_propertyName_3880 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 102)) ;
        GGS_stringset var_unusedSet_3906 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS_astAutoLayoutViewInstructionParameterList var_columnParameterListAST_3988 ;
        nt_view_5F_actual_5F_parameter_5F_list_ (var_unusedSet_3906, var_columnParameterListAST_3988, inCompiler) ;
        GGS_lstring var_sortPropertyName_4033 ;
        switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4033 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 107)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 109)) ;
          var_sortPropertyName_4033 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 110)) ;
        } break ;
        default:
          break ;
        }
        {
        var_arrayControllerBoundColumnListAST_3569.setter_append (var_editableColumn_3689, var_propertyName_3880, var_columnParameterListAST_3988, var_sortPropertyName_4033, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 112)) ;
        }
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 119)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutTableViewControllerDeclarationAST::init_21__21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2962, var_isRoot_3354, constinArgument_inRootEntity, var_relationshipName_3494, var_arrayControllerBoundColumnListAST_3569, var_arrayControllerAttributListAST_3032, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 121)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i2_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 69)) ;
    nt_explicit_5F_value_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 75)) ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 86)) ;
  switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
        switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
        switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 109)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 110)) ;
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 119)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i3_ (GGS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas4", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_1178 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 37)) ;
      GGS_lstring var_outletName_1226 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 38)) ;
      {
      GGS_mainXibLineDescriptorList temp_1 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 39)) ;
      temp_1.plusPlusAssignOperation (GGS_mainXibLineDescriptorList_2E_element::init_21_ (GGS_mainXibElement::class_func_outlet (var_outletType_1178, var_outletName_1226  COMMA_SOURCE_FILE ("main-xib.galgas4", 39)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.galgas4", 39)) ;
      ioArgument_ioElementList.setter_append (temp_1, inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 39)) ;
      }
    } break ;
    case 2: {
      GGS_lstring var_s_1382 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 41)) ;
      {
      GGS_mainXibLineDescriptorList temp_2 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 42)) ;
      temp_2.plusPlusAssignOperation (GGS_mainXibLineDescriptorList_2E_element::init_21_ (GGS_mainXibElement::class_func_text (var_s_1382  COMMA_SOURCE_FILE ("main-xib.galgas4", 42)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.galgas4", 42)) ;
      ioArgument_ioElementList.setter_append (temp_2, inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 42)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 44)) ;
      GGS_mainXibLineDescriptorList var_lineDescription_1517 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1517, inCompiler) ;
      {
      ioArgument_ioElementList.setter_append (var_lineDescription_1517, inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 46)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i3_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas4", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 37)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 44)) ;
      nt_main_5F_xib_5F_line_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 52)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_ (GGS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  GGS_mainXibLineDescriptorList temp_0 = GGS_mainXibLineDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 60)) ;
  outArgument_outLineDescription = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_1916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 63)) ;
      GGS_lstring var_outletName_1964 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 64)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_outlet (var_outletType_1916, var_outletName_1964  COMMA_SOURCE_FILE ("main-xib.galgas4", 66)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 65)) ;
      }
    } break ;
    case 2: {
      GGS_lstring var_s_2140 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 69)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_text (var_s_2140  COMMA_SOURCE_FILE ("main-xib.galgas4", 70)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 70)) ;
      }
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 73)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 63)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 69)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                             GGS_stringset & ioArgument_ioSignatureList,
                                                                                             GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 57)) ;
  GGS_bool var_usedForSignature_2403 = GGS_bool (false) ;
  GGS_bool var_customStore_2436 = GGS_bool (false) ;
  GGS_bool var_generateDirectAccess_2464 = GGS_bool (false) ;
  GGS_bool var_generateDirectRead_2501 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_11 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2574 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 64)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_2403.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 67)) ;
            }
          }
          var_usedForSignature_2403 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("customStore"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_customStore_2436.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 72)) ;
              }
            }
            var_customStore_2436 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("generateDirectRead"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_generateDirectRead_2501.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  GenericArray <FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 77)) ;
                }
              }
              var_generateDirectRead_2501 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_attributeName_2574.readProperty_string ().objectCompare (GGS_string ("generateDirectAccess"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2464.boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    GenericArray <FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 82)) ;
                  }
                }
                var_generateDirectAccess_2464 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@customStore")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectAccess")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectRead")) ;
              inCompiler->emitSemanticError (var_attributeName_2574.readProperty_location (), GGS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 86)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = var_generateDirectAccess_2464 ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2501 ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 93)), GGS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 93)) ;
    }
  }
  GGS_lstring var_destinationEntityName_3814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 95)) ;
  GGS_lstring var_relationshipName_3860 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 96)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_usedForSignature_2403.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_relationshipName_3860.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 98)) ;
      }
    }
  }
  GGS_toManyRelationshipOptionAST var_toManyRelationshipOption_4009 ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 103)) ;
    GGS_lstring var_inserseRelationshipName_4100 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 104)) ;
    var_toManyRelationshipOption_4009 = GGS_toManyRelationshipOptionAST::class_func_hasOpposite (var_inserseRelationshipName_4100  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 109)) ;
    GGS_lstring var_masterPropertyName_4287 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 110)) ;
    var_toManyRelationshipOption_4009 = GGS_toManyRelationshipOptionAST::class_func_hasDependance (var_masterPropertyName_4287  COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 111)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_4009 = GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("to-many-relationship.galgas4", 113)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_toManyRelationshipAST::init_21__21__21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_destinationEntityName_3814, var_relationshipName_3860, var_toManyRelationshipOption_4009, var_customStore_2436, var_usedForSignature_2403, var_generateDirectAccess_2464, var_generateDirectRead_2501, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 116)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i5_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_11 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 96)) ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 103)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 110)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.galgas4", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i6_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 52)) ;
  GGS_lstring var_documentName_2225 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 53)) ;
  GGS_string var_customSuperClassName_2255 ;
  switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_customSuperClassName_2255 = GGS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 58)) ;
    GGS_lstring var_name_2361 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 59)) ;
    var_customSuperClassName_2255 = var_name_2361.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 62)) ;
  GGS_lstring var_rootEntityName_2459 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 64)) ;
  GGS_lstring var_mainViewName_2521 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 66)) ;
  GGS_outletDeclarationList temp_0 = GGS_outletDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 67)) ;
  GGS_outletDeclarationList var_outletDeclarationList_2574 = temp_0 ;
  GGS_lstringlist temp_1 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 68)) ;
  GGS_lstringlist var_actionDeclarationList_2622 = temp_1 ;
  GGS_arrayControllerBindingListAST temp_2 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 69)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2688 = temp_2 ;
  GGS_astViewDeclarationList temp_3 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 70)) ;
  GGS_astViewDeclarationList var_viewDeclarationList_2755 = temp_3 ;
  GGS_astAutoLayoutOutletLinkerList temp_4 = GGS_astAutoLayoutOutletLinkerList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 72)) ;
  GGS_astAutoLayoutOutletLinkerList var_autoLayoutOutletLinkerList_2890 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2755, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2622, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2225, var_rootEntityName_2459, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_2574, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2225, var_rootEntityName_2459, var_arrayControllerBindingListAST_2688, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 85)) ;
      GGS_lstring var_linkerName_3390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 86)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 87)) ;
      GGS_lstringlist temp_6 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 88)) ;
      GGS_lstringlist var_outletNameList_3435 = temp_6 ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lstring var_outletName_3495 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 90)) ;
        {
        var_outletNameList_3435.setter_append (var_outletName_3495, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 91)) ;
        }
        if (select_easyBindings_5F_syntax_15 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 93)) ;
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 95)) ;
      {
      var_autoLayoutOutletLinkerList_2890.setter_append (var_linkerName_3390, var_outletNameList_3435, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 96)) ;
      }
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 98)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutDocumentDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_documentName_2225, var_rootEntityName_2459, var_mainViewName_2521, var_outletDeclarationList_2574, var_actionDeclarationList_2622, var_arrayControllerBindingListAST_2688, var_viewDeclarationList_2755, var_customSuperClassName_2255, var_autoLayoutOutletLinkerList_2890, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 99)) ;
  }
  {
  GGS_observablePropertyList temp_8 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 116)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_documentName_2225, var_rootEntityName_2459, GGS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 114)), GGS_string ("documentFileName").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 115)), temp_8, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 111)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 52)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 53)) ;
  switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 58)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 59)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 86)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 87)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 90)) ;
        if (select_easyBindings_5F_syntax_15 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 93)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 95)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas4", 48)) ;
  GGS_lstring var_prefs_1956 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 49)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 49)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas4", 50)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 51)) ;
  GGS_stringset var_signatureList_2028 = temp_0 ;
  GGS_arrayControllerBindingListAST temp_1 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 52)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2086 = temp_1 ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 2: {
      GGS_astViewDeclarationList temp_3 = GGS_astViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 55)) ;
      GGS_astViewDeclarationList var_viewDeclarationList_2176 = temp_3 ;
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2176, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mViewDeclarationList.plusAssignOperation(var_viewDeclarationList_2176, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 57)) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 4: {
      GGS_simpleStoredPropertyList temp_4 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 61)) ;
      GGS_simpleStoredPropertyList var_simpleStoredPropertyList_2476 = temp_4 ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_1956, var_simpleStoredPropertyList_2476, var_signatureList_2028, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssignOperation(var_simpleStoredPropertyList_2476, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 67)) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_ (var_prefs_1956, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas4", 71)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 8: {
      GGS_stringset var_unusedSignatureList_3026 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      nt_toMany_5F_relationship_ (var_prefs_1956, var_unusedSignatureList_3026, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_ (var_prefs_1956, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas4", 78)), var_arrayControllerBindingListAST_2086, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssignOperation(var_signatureList_2028, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 80)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas4", 48)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas4", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_simple_5F_stored_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_toMany_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_userDefined_1554 ;
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas4", 41)) ;
    var_userDefined_1554 = GGS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_1554 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas4", 47)) ;
  GGS_lstring var_outletClassName_1715 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas4", 48)) ;
  GGS_lstring var_superClassName_1749 ;
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
    var_superClassName_1749 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas4", 53)) ;
    var_superClassName_1749 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasRunAction_1882 = GGS_bool (false) ;
  GGS_bool var_hasEnabled_1917 = GGS_bool (false) ;
  GGS_bool var_hasHidden_1950 = GGS_bool (false) ;
  GGS_bool var_handlesTableViewBinding_1982 = GGS_bool (false) ;
  GGS_bool var_handlesGraphicControllerBinding_2028 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas4", 63)) ;
      var_handlesTableViewBinding_1982 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas4", 66)) ;
      var_hasRunAction_1882 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas4", 69)) ;
      var_hasEnabled_1917 = GGS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas4", 72)) ;
      var_hasHidden_1950 = GGS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas4", 75)) ;
      var_handlesGraphicControllerBinding_2028 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas4", 78)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_outletClassDeclarationAST::init_21__21__21__21__21__21__21__21_ (var_outletClassName_1715, var_userDefined_1554, var_superClassName_1749, var_hasRunAction_1882, var_hasEnabled_1917, var_handlesTableViewBinding_1982, var_handlesGraphicControllerBinding_2028, var_hasHidden_1950, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("outlet-class.galgas4", 79)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.galgas4", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas4", 48)) ;
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.galgas4", 53)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.galgas4", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.galgas4", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.galgas4", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.galgas4", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.galgas4", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.galgas4", 78)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_ (const GGS_lstring constinArgument_inClassName,
                                                                                                      GGS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                      GGS_stringset & ioArgument_ioSignatureList,
                                                                                                      GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 51)) ;
  GGS_bool var_usedForSignature_2352 = GGS_bool (false) ;
  GGS_bool var_generateResetMethod_2385 = GGS_bool (false) ;
  GGS_bool var_generateDirectRead_2421 = GGS_bool (false) ;
  GGS_bool var_generateDirectAccess_2456 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2531 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 58)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_2352.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 61)) ;
            }
          }
          var_usedForSignature_2352 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateResetMethod"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_generateResetMethod_2385.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 66)) ;
              }
            }
            var_generateResetMethod_2385 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateDirectRead"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_generateDirectRead_2421.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  GenericArray <FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 71)) ;
                }
              }
              var_generateDirectRead_2421 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_attributeName_2531.readProperty_string ().objectCompare (GGS_string ("generateDirectAccess"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2456.boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    GenericArray <FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 76)) ;
                  }
                }
                var_generateDirectAccess_2456 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateResetMethod")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectRead")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectAccess")) ;
              inCompiler->emitSemanticError (var_attributeName_2531.readProperty_location (), GGS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 80)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    GGS_bool test_15 = var_generateDirectAccess_2456 ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2421 ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 87)), GGS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 87)) ;
    }
  }
  GGS_lstring var_attributeTypeName_3812 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 89)) ;
  GGS_lstring var_attributeName_3863 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 90)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_usedForSignature_2352.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_attributeName_3863.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 92)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 94)) ;
  GGS_abstractDefaultValue var_defaultValue_4032 ;
  nt_explicit_5F_value_ (var_defaultValue_4032, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 96)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_3812, var_attributeName_3863, var_defaultValue_4032, var_generateResetMethod_2385, var_generateDirectRead_2421, var_generateDirectAccess_2456, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 97)) ;
  }
  {
  ioArgument_ioAttributeList.setter_append (var_attributeTypeName_3812, var_attributeName_3863, var_defaultValue_4032, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 109)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 58)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 89)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 90)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 94)) ;
  nt_explicit_5F_value_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 96)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_ (const GGS_lstring constinArgument_inClassName,
                                                                                                       GGS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GGS_stringset & /* ioArgument_ioSignatureList */,
                                                                                                       GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 123)) ;
  GGS_lstring var_attributeTypeName_5006 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 124)) ;
  GGS_lstring var_attributeName_5057 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 126)) ;
  GGS_abstractDefaultValue var_defaultValue_5135 ;
  nt_explicit_5F_value_ (var_defaultValue_5135, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 128)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_5006, var_attributeName_5057, var_defaultValue_5135, GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 129)) ;
  }
  {
  ioArgument_ioAttributeList.setter_append (var_attributeTypeName_5006, var_attributeName_5057, var_defaultValue_5135, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 141)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 126)) ;
  nt_explicit_5F_value_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 128)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i11_ (GGS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 55)) ;
    outArgument_outDefaultValue = GGS_boolAsDefaultValue::init_21_ (GGS_lbool::init_21__21_ (GGS_bool (true), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 56)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 58)) ;
    outArgument_outDefaultValue = GGS_boolAsDefaultValue::init_21_ (GGS_lbool::init_21__21_ (GGS_bool (false), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 59)), inCompiler COMMA_HERE), inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    GGS_luint var_integerValue_2036 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 61)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2036, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 64)) ;
    GGS_luint var_integerValue_2173 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 65)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2173, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_ldouble var_doubleValue_2300 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 68)) ;
    outArgument_outDefaultValue = GGS_doubleAsDefaultValue::init_21_ (var_doubleValue_2300, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_lstring var_stringValue_2422 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 71)) ;
    outArgument_outDefaultValue = GGS_stringAsDefaultValue::init_21_ (var_stringValue_2422, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_lstring var_stringValue_2536 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 74)) ;
    outArgument_outDefaultValue = GGS_identifierAsDefaultValue::init_21_ (var_stringValue_2536, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 78)) ;
    GGS_lstring var_name_2669 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 79)) ;
    outArgument_outDefaultValue = GGS_prefsAsDefaultValue::init_21_ (var_name_2669, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i11_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 64)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 78)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 79)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_ (GGS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  GGS_bindingOptionList temp_0 = GGS_bindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("regular-binding.galgas4", 20)) ;
  outArgument_outBindingOptions = temp_0 ;
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 23)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_optionName_916 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas4", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 26)) ;
      GGS_abstractDefaultValue var_optionValue_993 ;
      nt_explicit_5F_value_ (var_optionValue_993, inCompiler) ;
      {
      outArgument_outBindingOptions.setter_append (var_optionName_916, var_optionValue_993, inCompiler COMMA_SOURCE_FILE ("regular-binding.galgas4", 28)) ;
      }
      if (select_easyBindings_5F_syntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 30)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 32)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas4", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 26)) ;
      nt_explicit_5F_value_indexing (inCompiler) ;
      if (select_easyBindings_5F_syntax_23 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 32)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i13_ (GGS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas4", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 46)) ;
    GGS_lstring var_propertyName_2333 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 47)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootProperty (var_propertyName_2333  COMMA_SOURCE_FILE ("observable-property.galgas4", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 51)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        GGS_lstring var_optionName_2503 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 53)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyWithOption (var_propertyName_2333, var_optionName_2503  COMMA_SOURCE_FILE ("observable-property.galgas4", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 57)) ;
        GGS_lstring var_observablePropertyName_2699 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 58)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyRelationship (var_propertyName_2333, var_observablePropertyName_2699  COMMA_SOURCE_FILE ("observable-property.galgas4", 59)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 63)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyNone (var_propertyName_2333  COMMA_SOURCE_FILE ("observable-property.galgas4", 64)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas4", 68)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfWithoutProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 70))  COMMA_SOURCE_FILE ("observable-property.galgas4", 70)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 72)) ;
      GGS_lstring var_propertyName_3180 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 73)) ;
      switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfProperty (var_propertyName_3180  COMMA_SOURCE_FILE ("observable-property.galgas4", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 77)) ;
        switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 80)) ;
          GGS_lstring var_elementPropertyName_3396 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 81)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyArray (var_propertyName_3180, var_elementPropertyName_3396  COMMA_SOURCE_FILE ("observable-property.galgas4", 82)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 88)) ;
          GGS_lstring var_elementPropertyName_3666 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 89)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyObject (var_propertyName_3180, var_elementPropertyName_3666  COMMA_SOURCE_FILE ("observable-property.galgas4", 90)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 95)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyNone (var_propertyName_3180  COMMA_SOURCE_FILE ("observable-property.galgas4", 96)) ;
        } break ;
        case 4: {
          GGS_lstring var_optionName_4021 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 98)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyWithOption (var_propertyName_3180, var_optionName_4021  COMMA_SOURCE_FILE ("observable-property.galgas4", 99)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas4", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 105)) ;
    GGS_lstring var_propertyName_4241 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 106)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsProperty (var_propertyName_4241  COMMA_SOURCE_FILE ("observable-property.galgas4", 108)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 110)) ;
      GGS_lstring var_optionName_4395 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 111)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsPropertyWithOption (var_propertyName_4241, var_optionName_4395  COMMA_SOURCE_FILE ("observable-property.galgas4", 112)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GGS_lstring var_controllerName_4566 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas4", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 116)) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 119)) ;
      GGS_lstring var_propertyName_4658 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 120)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerOneProperty (var_controllerName_4566, var_propertyName_4658  COMMA_SOURCE_FILE ("observable-property.galgas4", 121)) ;
    } break ;
    case 2: {
      GGS_lstring var_propertyName_4831 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 123)) ;
      switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerProperty (var_controllerName_4566, var_propertyName_4831  COMMA_SOURCE_FILE ("observable-property.galgas4", 125)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 127)) ;
        GGS_lstring var_secondaryPropertyName_5036 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 128)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (var_controllerName_4566, var_propertyName_4831, var_secondaryPropertyName_5036  COMMA_SOURCE_FILE ("observable-property.galgas4", 129)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 137)) ;
        GGS_lstring var_secondaryPropertyName_5368 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 138)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerAllProperties (var_controllerName_4566, var_propertyName_4831, var_secondaryPropertyName_5368  COMMA_SOURCE_FILE ("observable-property.galgas4", 139)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas4", 147)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_signatureProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 148))  COMMA_SOURCE_FILE ("observable-property.galgas4", 148)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas4", 150)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 151))  COMMA_SOURCE_FILE ("observable-property.galgas4", 151)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas4", 153)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionShouldChangeProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 154))  COMMA_SOURCE_FILE ("observable-property.galgas4", 154)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas4", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 157)) ;
    GGS_lstring var_superEntityName_5994 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 159)) ;
    GGS_lstring var_propertyName_6046 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 160)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superProperty (var_superEntityName_5994, var_propertyName_6046  COMMA_SOURCE_FILE ("observable-property.galgas4", 162)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.galgas4", 167)) ;
      GGS_abstractDefaultValue var_defaultValue_6298 ;
      nt_explicit_5F_value_ (var_defaultValue_6298, inCompiler) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (var_superEntityName_5994, var_propertyName_6046, var_defaultValue_6298  COMMA_SOURCE_FILE ("observable-property.galgas4", 169)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i13_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas4", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 46)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 47)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 51)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 57)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 63)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas4", 68)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 72)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 73)) ;
      switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 77)) ;
        switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 80)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 88)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 98)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas4", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 105)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 106)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 110)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas4", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 116)) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 119)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 123)) ;
      switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 127)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 137)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 138)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      break ;
    }
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas4", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas4", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas4", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas4", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 157)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 159)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 160)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.galgas4", 167)) ;
      nt_explicit_5F_value_indexing (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 85)) ;
  GGS_lstring var_functionName_3150 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 86)) ;
  GGS_autoLayoutClassParameterList var_parameterList_3223 ;
  GGS_lstring var_mangledName_3243 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3150, var_parameterList_3223, var_mangledName_3243, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 88)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3243, var_parameterList_3223, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 89)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i14_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 88)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 96)) ;
  GGS_lstring var_functionName_3594 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 97)) ;
  GGS_autoLayoutClassParameterList var_parameterList_3667 ;
  GGS_lstring var_mangledName_3687 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3594, var_parameterList_3667, var_mangledName_3687, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 99)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3687, var_parameterList_3667, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 100)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 99)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_userDefined_4005 ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 108)) ;
    var_userDefined_4005 = GGS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_4005 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 114)) ;
  GGS_lstring var_outletClassName_4170 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 115)) ;
  GGS_autoLayoutClassParameterList var_parameterList_4225 ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    GGS_autoLayoutClassParameterList temp_0 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 118)) ;
    var_parameterList_4225 = temp_0 ;
  } break ;
  case 2: {
    GGS_lstring joker_4353 ; // Joker input parameter
    nt_autolayout_5F_formal_5F_parameter_5F_list_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas4", 120)), var_parameterList_4225, joker_4353, inCompiler) ;
    joker_4353.drop () ; // Release temporary input variables (joker in source)
  } break ;
  default:
    break ;
  }
  GGS_lstring var_superClassName_4382 ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
    var_superClassName_4382 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 126)) ;
    var_superClassName_4382 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 127)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasRunAction_4515 = GGS_bool (false) ;
  GGS_bool var_hasEnabled_4550 = GGS_bool (false) ;
  GGS_bool var_hasHidden_4583 = GGS_bool (false) ;
  GGS_bool var_handlesTableViewBinding_4615 = GGS_bool (false) ;
  GGS_bool var_handlesGraphicControllerBinding_4661 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 136)) ;
      var_handlesTableViewBinding_4615 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 139)) ;
      var_hasRunAction_4515 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 142)) ;
      var_hasEnabled_4550 = GGS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 145)) ;
      var_hasHidden_4583 = GGS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 148)) ;
      var_handlesGraphicControllerBinding_4661 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GGS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_5051 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 152)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 155)) ;
      GGS_lstring var_functionName_5152 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 156)) ;
      GGS_autoLayoutClassParameterList var_parameterList_5227 ;
      GGS_lstring var_mangledName_5247 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_5152, var_parameterList_5227, var_mangledName_5247, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_5051.setter_insertKey (var_mangledName_5247, var_parameterList_5227, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 158)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4170, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 162)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutViewClassDeclarationAST::init_21__21__21__21__21__21__21__21__21__21_ (var_outletClassName_4170, var_userDefined_4005, var_superClassName_4382, var_hasRunAction_4515, var_hasEnabled_4550, var_handlesTableViewBinding_4615, var_handlesGraphicControllerBinding_4661, var_hasHidden_4583, var_parameterList_4225, var_astAutoLayoutViewFunctionMap_5051, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 163)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 114)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 115)) ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 126)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 155)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 156)) ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 162)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_ (const GGS_lstring constinArgument_inFunctionName,
                                                                                                                 GGS_autoLayoutClassParameterList & outArgument_ioParameterList,
                                                                                                                 GGS_lstring & outArgument_outMangledName,
                                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  GGS_autoLayoutClassParameterList temp_0 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 183)) ;
  outArgument_ioParameterList = temp_0 ;
  GGS_string var_mangledName_6203 = constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 184)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 185)) ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_6311 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 189)) ;
      var_mangledName_6203.plusAssignOperation(var_parameterName_6311.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 190)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 191)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 193)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view-class.galgas4", 194)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 194)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 196)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view-class.galgas4", 197)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 197)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 199)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view-class.galgas4", 200)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 200)) ;
        }
      } break ;
      case 4: {
        GGS_lstring var_parameterTypeName_6706 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 202)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("String"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view-class.galgas4", 204)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 204)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("StringArray"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view-class.galgas4", 206)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 206)) ;
              }
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("Int"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view-class.galgas4", 208)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 208)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6706.readProperty_string ().objectCompare (GGS_string ("Bool"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view-class.galgas4", 210)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 210)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6311, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_parameterTypeName_6706  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 212)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 212)) ;
                }
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_40 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 216)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 219)) ;
  var_mangledName_6203.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 220)) ;
  outArgument_outMangledName = GGS_lstring::init_21__21_ (var_mangledName_6203, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 185)) ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 189)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 191)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 199)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 202)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_40 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 219)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.galgas4", 10)) ;
  GGS_lstring var_entityName_473 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.galgas4", 11)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mGraphvizList.setter_append (var_entityName_473, inCompiler COMMA_SOURCE_FILE ("graphviz.galgas4", 12)) ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.galgas4", 13)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i18_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.galgas4", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.galgas4", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.galgas4", 13)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i19_ (GGS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas4", 12)) ;
  GGS_lstring var_xcodeProjectString_399 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas4", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas4", 14)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, var_xcodeProjectString_399.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_399.readProperty_location (), GGS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.galgas4", 16)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioXcodeProjectString.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_399.readProperty_location (), GGS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.galgas4", 18)) ;
      }
    }
    if (GalgasBool::boolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_399 ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i19_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.galgas4", 12)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.galgas4", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.galgas4", 14)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_ (const GGS_lstring constinArgument_inClassName,
                                                                                                                          GGS_autoLayoutViewClassBindingSpecificationList & ioArgument_ioBindingList,
                                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_lstring var_bindingName_1068 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 22)) ;
  GGS_outletClassBindingSpecificationModelList temp_0 = GGS_outletClassBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 23)) ;
  GGS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1131 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1204 ;
    switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 27)) ;
      var_modelShouldBeWritableProperty_1204 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 30)) ;
      var_modelShouldBeWritableProperty_1204 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1415 ;
    switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
    case 1: {
      var_modelTypeName_1415 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 37)) ;
      var_modelTypeName_1415 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 38)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1131.setter_append (var_modelTypeName_1415, var_modelShouldBeWritableProperty_1204, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 40)) ;
    }
    if (select_easyBindings_5F_syntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 42)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_controllerBindingOptionList temp_2 = GGS_controllerBindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 44)) ;
  GGS_controllerBindingOptionList var_bindingOptionList_1723 = temp_2 ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 47)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_1823 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 50)) ;
      GGS_lstring var_optionType_1883 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 51)) ;
      {
      var_bindingOptionList_1723.setter_append (var_optionName_1823, var_optionType_1883, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 52)) ;
      }
      if (select_easyBindings_5F_syntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 54)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 56)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioBindingList.setter_append (constinArgument_inClassName, var_bindingName_1068, var_outletClassBindingSpecificationModelList_1131, var_bindingOptionList_1723, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 58)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i20_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 50)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 51)) ;
      if (select_easyBindings_5F_syntax_46 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 56)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_ (GGS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 36)) ;
  GGS_lstring var_outletClassName_1443 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 37)) ;
  GGS_lstring var_bindingName_1493 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 39)) ;
  GGS_outletClassBindingSpecificationModelList temp_0 = GGS_outletClassBindingSpecificationModelList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 40)) ;
  GGS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1564 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1637 ;
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 44)) ;
      var_modelShouldBeWritableProperty_1637 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 47)) ;
      var_modelShouldBeWritableProperty_1637 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1848 ;
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      var_modelTypeName_1848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 54)) ;
      var_modelTypeName_1848 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 55)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1564.setter_append (var_modelTypeName_1848, var_modelShouldBeWritableProperty_1637, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 57)) ;
    }
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 59)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS_controllerBindingOptionList temp_2 = GGS_controllerBindingOptionList::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 61)) ;
  GGS_controllerBindingOptionList var_bindingOptionList_2156 = temp_2 ;
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 64)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_2256 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 67)) ;
      GGS_lstring var_optionType_2316 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 68)) ;
      {
      var_bindingOptionList_2156.setter_append (var_optionName_2256, var_optionType_2316, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 69)) ;
      }
      if (select_easyBindings_5F_syntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 71)) ;
      }else{
        repeatFlag_3 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 75)) ;
  {
  ioArgument_ioControllerTemplateList.setter_append (var_outletClassName_1443, var_bindingName_1493, var_outletClassBindingSpecificationModelList_1564, var_bindingOptionList_2156, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 76)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 36)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 37)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 54)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 67)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 68)) ;
      if (select_easyBindings_5F_syntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 75)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i22_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring constinArgument_inRootEntity,
                                                                                                 GGS_arrayControllerBindingListAST & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas4", 61)) ;
  GGS_lstring var_controllerName_2691 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.galgas4", 62)) ;
  GGS_arrayControllerBoundModelAST var_model_2758 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas4", 65)) ;
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas4", 67)) ;
    var_model_2758 = GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.galgas4", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas4", 70)) ;
    var_model_2758 = GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (SOURCE_FILE ("array-controller.galgas4", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas4", 73)) ;
  GGS_lstring var_relationshipName_2972 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas4", 74)) ;
  switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas4", 78)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3140 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3140, inCompiler) ;
    GGS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3169 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_3140  COMMA_SOURCE_FILE ("array-controller.galgas4", 80)) ;
    {
    ioArgument_ioArrayControllerBindingListAST.setter_append (var_controllerName_2691, var_hiddenSelectionViewBindingDescriptor_3169, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 81)) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas4", 86)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_arrayControllerDeclarationAST::init_21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2691, var_model_2758, var_relationshipName_2972, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 87)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i22_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas4", 65)) ;
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas4", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas4", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas4", 73)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas4", 74)) ;
  switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas4", 78)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas4", 86)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 87)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_3582 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3582, inCompiler) ;
      outArgument_outBinding = GGS_andBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_3582, inCompiler COMMA_HERE) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i23_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_54 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 87)) ;
      nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 99)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4009 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4009, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greater (SOURCE_FILE ("multiple-binding.galgas4", 101)), var_rightBinding_4009, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 103)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4178 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4178, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greaterOrEqual (SOURCE_FILE ("multiple-binding.galgas4", 105)), var_rightBinding_4178, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 107)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4354 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4354, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lowerOrEqual (SOURCE_FILE ("multiple-binding.galgas4", 109)), var_rightBinding_4354, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 111)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4527 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4527, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lower (SOURCE_FILE ("multiple-binding.galgas4", 113)), var_rightBinding_4527, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 115)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4694 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4694, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_equal (SOURCE_FILE ("multiple-binding.galgas4", 117)), var_rightBinding_4694, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 119)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4861 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4861, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_notEqual (SOURCE_FILE ("multiple-binding.galgas4", 121)), var_rightBinding_4861, inCompiler COMMA_HERE) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i24_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 99)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 103)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 107)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 111)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 115)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 119)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 133)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5363 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5363, inCompiler) ;
      outArgument_outBinding = GGS_orBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5363, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 137)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5562 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5562, inCompiler) ;
      outArgument_outBinding = GGS_xorBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5562, inCompiler COMMA_HERE) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i25_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 133)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 137)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GGS_observablePropertyAST var_observablePropertyAST_5932 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5932, inCompiler) ;
  outArgument_outBinding = GGS_observablePropertyInMultipleBindingExpressionAST::init_21_ (var_observablePropertyAST_5932, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i26_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 157)) ;
  GGS_abstractBooleanMultipleBindingExpressionAST var_binding_6358 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6358, inCompiler) ;
  outArgument_outBinding = GGS_negateBooleanMultipleBindingExpressionAST::init_21_ (var_binding_6358, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i27_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 157)) ;
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 167)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i28_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 167)) ;
  nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 169)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_ (GGS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GGS_luint var_value_6965 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas4", 177)) ;
  outArgument_outBinding = GGS_literalIntMultipleBindingExpressionAST::init_21_ (var_value_6965, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas4", 177)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i30_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas4", 41)) ;
  GGS_lstring var_selectionEntityName_2014 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 42)) ;
  GGS_lstring var_selectionControllerName_2071 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 44)) ;
  GGS_lstring var_modelControllerName_2131 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 46)) ;
  GGS_lstring var_propertyName_2192 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 48)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_selectionControllerDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, var_selectionControllerName_2071, var_modelControllerName_2131, var_propertyName_2192, var_selectionEntityName_2014, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 49)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas4", 41)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 42)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 44)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 48)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_ (GGS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 192)) ;
  GGS_lstring var_viewName_8942 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 193)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 194)) ;
  GGS_bool var_hasVerticalScroller_8979 ;
  switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_8979 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 199)) ;
    var_hasVerticalScroller_8979 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_9131 ;
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_configuratorName_9131 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 204)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 206)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 207)) ;
    var_configuratorName_9131 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 208)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 209)) ;
  } break ;
  default:
    break ;
  }
  GGS_stringset var_unusedSet_9298 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_9376 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_9298, var_functionCallList_9376, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 213)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 214)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_9442 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 215)) ;
  GGS_stringset var_stackViewInstances_9497 = temp_1 ;
  GGS_astViewInstructionList temp_2 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 216)) ;
  GGS_astViewInstructionList var_instructionList_9529 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), var_stackViewInstances_9497, var_astNewStackViewDeclarationList_9442, var_instructionList_9529, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 223)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_8942, GGS_astComputedVerticalViewDeclaration::init_21__21__21__21__21_ (var_hasVerticalScroller_8979, var_configuratorName_9131, var_functionCallList_9376, var_instructionList_9529, var_astNewStackViewDeclarationList_9442, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 224)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 192)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 193)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 194)) ;
  switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 199)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 206)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 207)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 208)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 209)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 213)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 223)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_ (GGS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 239)) ;
  GGS_lstring var_viewName_10223 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 240)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 241)) ;
  GGS_stringset var_unusedSet_10254 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_10332 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_10254, var_functionCallList_10332, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 244)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 245)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_10398 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 246)) ;
  GGS_stringset var_stackViewInstances_10453 = temp_1 ;
  GGS_astViewInstructionList temp_2 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 247)) ;
  GGS_astViewInstructionList var_instructionList_10485 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), var_stackViewInstances_10453, var_astNewStackViewDeclarationList_10398, var_instructionList_10485, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 249)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_10223, GGS_astComputedHorizontalViewDeclaration::init_21__21__21_ (var_functionCallList_10332, var_instructionList_10485, var_astNewStackViewDeclarationList_10398, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 250)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 239)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 240)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 241)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 244)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 249)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                              GGS_astAutoLayoutViewFunctionCallList & outArgument_outFunctionCallList,
                                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  GGS_astAutoLayoutViewFunctionCallList temp_0 = GGS_astAutoLayoutViewFunctionCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 260)) ;
  outArgument_outFunctionCallList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_59 (inCompiler) == 2) {
      GGS_lstring var_functionName_11184 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 263)) ;
      GGS_astAutoLayoutViewInstructionParameterList var_actualParameterList_11264 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_actualParameterList_11264, inCompiler) ;
      {
      outArgument_outFunctionCallList.setter_append (var_functionName_11184, var_actualParameterList_11264, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 265)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_59 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 263)) ;
      nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_ (const GGS_bool constinArgument_inHorizontal,
                                                                                                   GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                   GGS_astNewStackViewDeclarationList & ioArgument_ioNewStackViewDeclarationList,
                                                                                                   GGS_astViewInstructionList & ioArgument_ioInstructionList,
                                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 277)) ;
      GGS_lstring var_instancedStackViewName_11848 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 278)) ;
      {
      ioArgument_ioStackViewInstances.setter_insert (var_instancedStackViewName_11848.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 279)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 280)) ;
      GGS_lstring var_typeStackViewName_11966 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 281)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 283)) ;
      {
      ioArgument_ioNewStackViewDeclarationList.setter_append (var_instancedStackViewName_11848, var_typeStackViewName_11966, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 284)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 286)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astSeparatorInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 287)) ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 289)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astGutterInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 290)) ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 292)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astDividerInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 293)) ;
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 295)) ;
      GGS_lstring var_localViewName_12513 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 296)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = ioArgument_ioStackViewInstances.getter_hasKey (var_localViewName_12513.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 297)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 297)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_localViewName_12513.readProperty_location (), GGS_string ("the view is not instancied"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 298)) ;
        }
      }
      {
      ioArgument_ioInstructionList.setter_append (GGS_astLocalViewInstruction::init_21_ (var_localViewName_12513, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 300)) ;
      }
    } break ;
    case 7: {
      GGS_astAbstractViewInstructionDeclaration var_instruction_12809 ;
      nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_12809, inCompiler) ;
      {
      ioArgument_ioInstructionList.setter_append (var_instruction_12809, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 303)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 277)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 278)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 280)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 281)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 283)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 286)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 289)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 292)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 295)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 296)) ;
    } break ;
    case 7: {
      nt_view_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i35_ (GGS_stringset & /* ioArgument_ioStackViewInstances */,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 311)) ;
  outArgument_outInstruction = GGS_astSpaceViewInstruction::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i35_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 311)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i36_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_astComputedViewInstruction var_instruction_13517 ;
  nt_computed_5F_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_13517, inCompiler) ;
  outArgument_outInstruction = var_instruction_13517 ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i36_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_indexing (inCompiler) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                       GGS_astComputedViewInstruction & outArgument_outInstruction,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_lstring var_viewClassName_13849 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 327)) ;
  GGS_astAutoLayoutViewInstructionParameterList var_instanciationParameterList_13915 ;
  switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
  case 1: {
    GGS_astAutoLayoutViewInstructionParameterList temp_0 = GGS_astAutoLayoutViewInstructionParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 330)) ;
    var_instanciationParameterList_13915 = temp_0 ;
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_instanciationParameterList_13915, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_14112 ;
  GGS_lstring var_outletName_14146 ;
  GGS_bool var_outletIsArray_14171 ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    var_outletName_14146 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 338)) ;
    var_configuratorName_14112 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 339)) ;
    var_outletIsArray_14171 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 342)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
      var_outletName_14146 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 344)) ;
      var_outletIsArray_14171 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 347)) ;
      var_outletName_14146 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 348)) ;
      var_outletIsArray_14171 = GGS_bool (false) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 351)) ;
      var_outletName_14146 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 352)) ;
      var_outletIsArray_14171 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
      var_configuratorName_14112 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 356)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 358)) ;
      var_configuratorName_14112 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 359)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 361)) ;
  } break ;
  default:
    break ;
  }
  GGS_tableValueBinding var_tableValueBinding_14757 ;
  GGS_runActionDescriptor var_runActionDescriptor_14804 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_14859 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_14919 ;
  GGS_graphicController var_graphicController_14970 ;
  GGS_regularBindingList var_regularBindingList_15016 ;
  GGS_astAutoLayoutViewFunctionCallList var_autoLayoutViewFunctionCallList_15078 ;
  switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_tableValueBinding_14757 = GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("auto-layout-view.galgas4", 371)) ;
    var_runActionDescriptor_14804 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.galgas4", 372)) ;
    var_enabledBindingDescriptor_14859 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 373)) ;
    var_hiddenBindingDescriptor_14919 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 374)) ;
    var_graphicController_14970 = GGS_graphicController::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 375)) ;
    GGS_regularBindingList temp_1 = GGS_regularBindingList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 376)) ;
    var_regularBindingList_15016 = temp_1 ;
    GGS_astAutoLayoutViewFunctionCallList temp_2 = GGS_astAutoLayoutViewFunctionCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 377)) ;
    var_autoLayoutViewFunctionCallList_15078 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 379)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_autoLayoutViewFunctionCallList_15078, inCompiler) ;
    nt_outlet_5F_binding_ (var_tableValueBinding_14757, var_runActionDescriptor_14804, var_enabledBindingDescriptor_14859, var_hiddenBindingDescriptor_14919, var_graphicController_14970, var_regularBindingList_15016, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 387)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_astComputedViewInstruction::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_viewClassName_13849, var_instanciationParameterList_13915, var_autoLayoutViewFunctionCallList_15078, var_tableValueBinding_14757, var_runActionDescriptor_14804, var_enabledBindingDescriptor_14859, var_hiddenBindingDescriptor_14919, var_graphicController_14970, var_regularBindingList_15016, var_configuratorName_14112, var_outletName_14146, var_outletIsArray_14171, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 327)) ;
  switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 342)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 347)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 348)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 351)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 352)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 358)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 359)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 361)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 379)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
    nt_outlet_5F_binding_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 387)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                           GGS_astAutoLayoutViewInstructionParameterList & outArgument_outParameterList,
                                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  GGS_astAutoLayoutViewInstructionParameterList temp_0 = GGS_astAutoLayoutViewInstructionParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 409)) ;
  outArgument_outParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 410)) ;
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_16555 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 414)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 415)) ;
      switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
      case 1: {
        GGS_astAbstractViewInstructionDeclaration var_instruction_16695 ;
        nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_16695, inCompiler) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.galgas4", 418)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (var_instruction_16695  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 418)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 418)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 420)) ;
        GGS_lstring var_entityName_16869 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 421)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view.galgas4", 422)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_entity (var_entityName_16869  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 422)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 422)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 424)) ;
        GGS_lstring var_menuItemTitle_17041 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 425)) ;
        GGS_runActionDescriptor var_runActionDescriptor_17091 ;
        switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
        case 1: {
          var_runActionDescriptor_17091 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.galgas4", 428)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 430)) ;
          GGS_lstring var_runTargetName_17228 ;
          switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
          case 1: {
            var_runTargetName_17228 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 433)), inCompiler COMMA_HERE) ;
          } break ;
          case 2: {
            var_runTargetName_17228 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 435)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 436)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_runActionName_17453 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 438)) ;
          var_runActionDescriptor_17091 = GGS_runActionDescriptor::class_func_action (var_runTargetName_17228, var_runActionName_17453  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 439)) ;
        } break ;
        default:
          break ;
        }
        GGS_multipleBindingDescriptor var_enabledBindingDescriptor_17612 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 441)) ;
        switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
        case 1: {
          var_enabledBindingDescriptor_17612 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 443)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 445)) ;
          GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_17850 ;
          nt_booleanMultipleBindingExpression_ (var_bindingExpression_17850, inCompiler) ;
          var_enabledBindingDescriptor_17612 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_17850  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 447)) ;
        } break ;
        default:
          break ;
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view.galgas4", 451)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (var_menuItemTitle_17041.readProperty_string (), var_runActionDescriptor_17091, var_enabledBindingDescriptor_17612  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 452)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 449)) ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 455)) ;
        GGS_lstring var_viewName_18228 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 456)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = ioArgument_ioStackViewInstances.getter_hasKey (var_viewName_18228.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 457)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 457)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_viewName_18228.readProperty_location (), GGS_string ("view is not instancied"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 458)) ;
          }
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.galgas4", 460)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_viewName_18228.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 460)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 460)) ;
        }
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 462)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.galgas4", 463)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 463)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 463)) ;
        }
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 465)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.galgas4", 466)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 466)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 466)) ;
        }
      } break ;
      case 7: {
        GGS_luint var_uint_33__32__18751 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 468)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.galgas4", 469)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_uint_33__32__18751.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 469))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 469)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 469)) ;
        }
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 471)) ;
        GGS_luint var_uint_33__32__18919 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 472)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.galgas4", 473)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("-").add_operation (var_uint_33__32__18919.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 473)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 473))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 473)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 473)) ;
        }
      } break ;
      case 9: {
        GGS_lstring var_literalString_19077 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 475)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view.galgas4", 476)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_literalString_19077.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas4", 476))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 476)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 476)) ;
        }
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 478)) ;
        GGS_lstring var_enumConstantName_19270 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 479)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_enumConstantName_19270  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 480)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string (".").add_operation (var_enumConstantName_19270.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 480))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 480)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 480)) ;
        }
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 482)) ;
        GGS_lstring var_enumTypeName_19476 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 483)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 484)) ;
        GGS_lstring var_enumFuncName_19533 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 485)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_16555, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view.galgas4", 488)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (var_enumTypeName_19476, var_enumFuncName_19533  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 489)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 486)) ;
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_67 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 493)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 496)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 410)) ;
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 414)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 415)) ;
      switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 420)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 421)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 424)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 425)) ;
        switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 430)) ;
          switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 435)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 436)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 438)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 445)) ;
          nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 455)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 456)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 462)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 465)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 468)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 471)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 472)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 475)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 478)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 479)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 482)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 483)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 484)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 485)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_67 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 493)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 496)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i39_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 503)) ;
  GGS_bool var_hasVerticalScroller_20081 ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_20081 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 508)) ;
    var_hasVerticalScroller_20081 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_20233 ;
  switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
  case 1: {
    var_configuratorName_20233 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 513)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 515)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 516)) ;
    var_configuratorName_20233 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 517)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 518)) ;
  } break ;
  default:
    break ;
  }
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_20455 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_20455, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_20504 ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_20504 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 523)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 525)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_20692 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_20692, inCompiler) ;
    var_optionalHiddenBinding_20504 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_20692  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 527)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 529)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 530)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_20835 = temp_0 ;
  GGS_astViewInstructionList temp_1 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 531)) ;
  GGS_astViewInstructionList var_instructionList_20879 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_20835, var_instructionList_20879, inCompiler) ;
  outArgument_outInstruction = GGS_astVStackViewInstructionDeclaration::init_21__21__21__21__21__21_ (var_hasVerticalScroller_20081, var_configuratorName_20233, var_functionCallList_20455, var_instructionList_20879, var_optionalHiddenBinding_20504, var_astNewStackViewDeclarationList_20835, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 546)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i39_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 503)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 508)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 515)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 516)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 517)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 518)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 525)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 529)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 546)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i40_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 553)) ;
  GGS_astAutoLayoutViewFunctionCallList var_functionCallList_21649 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_21649, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_21698 ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_21698 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 557)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 559)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_21886 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_21886, inCompiler) ;
    var_optionalHiddenBinding_21698 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_21886  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 561)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 563)) ;
  GGS_astNewStackViewDeclarationList temp_0 = GGS_astNewStackViewDeclarationList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 564)) ;
  GGS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_22029 = temp_0 ;
  GGS_astViewInstructionList temp_1 = GGS_astViewInstructionList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 565)) ;
  GGS_astViewInstructionList var_instructionList_22073 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_22029, var_instructionList_22073, inCompiler) ;
  outArgument_outInstruction = GGS_astHStackViewInstructionDeclaration::init_21__21__21__21_ (var_functionCallList_21649, var_instructionList_22073, var_optionalHiddenBinding_21698, var_astNewStackViewDeclarationList_22029, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 578)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i40_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 553)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 559)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 563)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 578)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_ (GGS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 46)) ;
  GGS_lstring var_outletTypeName_1775 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 47)) ;
  GGS_lstring var_outletName_1814 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 48)) ;
  GGS_tableValueBinding var_tableValueBinding_1872 ;
  GGS_runActionDescriptor var_runActionDescriptor_1938 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_2012 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_2091 ;
  GGS_graphicController var_graphicController_2161 ;
  GGS_regularBindingList var_regularBindingList_2226 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_1872, var_runActionDescriptor_1938, var_enabledBindingDescriptor_2012, var_hiddenBindingDescriptor_2091, var_graphicController_2161, var_regularBindingList_2226, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 55)) ;
  {
  ioArgument_ioOutletDeclarationList.setter_append (var_outletTypeName_1775, var_outletName_1814, var_tableValueBinding_1872, var_runActionDescriptor_1938, var_enabledBindingDescriptor_2012, var_hiddenBindingDescriptor_2091, var_regularBindingList_2226, var_graphicController_2161, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 56)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 48)) ;
  nt_outlet_5F_binding_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 55)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i42_ (GGS_tableValueBinding & outArgument_tableValueBinding,
                                                                                         GGS_runActionDescriptor & outArgument_runActionDescriptor,
                                                                                         GGS_multipleBindingDescriptor & outArgument_enabledBindingDescriptor,
                                                                                         GGS_multipleBindingDescriptor & outArgument_hiddenBindingDescriptor,
                                                                                         GGS_graphicController & outArgument_graphicController,
                                                                                         GGS_regularBindingList & outArgument_regularBindingList,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_tableValueBinding.drop () ; // Release 'out' argument
  outArgument_runActionDescriptor.drop () ; // Release 'out' argument
  outArgument_enabledBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_hiddenBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_graphicController.drop () ; // Release 'out' argument
  outArgument_regularBindingList.drop () ; // Release 'out' argument
  outArgument_tableValueBinding = GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas4", 77)) ;
  outArgument_runActionDescriptor = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.galgas4", 78)) ;
  outArgument_enabledBindingDescriptor = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.galgas4", 79)) ;
  outArgument_hiddenBindingDescriptor = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.galgas4", 80)) ;
  outArgument_graphicController = GGS_graphicController::class_func_none (SOURCE_FILE ("outlet-declaration.galgas4", 81)) ;
  GGS_regularBindingList temp_0 = GGS_regularBindingList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 82)) ;
  outArgument_regularBindingList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 85)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = GGS_bool (ComparisonKind::notEqual, outArgument_tableValueBinding.objectCompare (GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.galgas4", 86)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 87)), GGS_string ("duplicated $tableValue binding"), fixItArray3  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 87)) ;
        }
      }
      GGS_lstring var_controllerName_3570 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 89)) ;
      outArgument_tableValueBinding = GGS_tableValueBinding::class_func_tableValueBinding (var_controllerName_3570  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 92)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::notEqual, outArgument_runActionDescriptor.objectCompare (GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.galgas4", 93)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 94)), GGS_string ("duplicated $run binding"), fixItArray5  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 94)) ;
        }
      }
      GGS_lstring var_runTargetName_3813 ;
      switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
      case 1: {
        var_runTargetName_3813 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 98)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 100)) ;
        var_runTargetName_3813 = GGS_lstring::init_21__21_ (GGS_string ("prefs"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 101)), inCompiler COMMA_HERE) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 102)) ;
      } break ;
      case 3: {
        var_runTargetName_3813 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 105)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_runActionName_4083 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 107)) ;
      outArgument_runActionDescriptor = GGS_runActionDescriptor::class_func_action (var_runTargetName_3813, var_runActionName_4083  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 108)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 111)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, outArgument_enabledBindingDescriptor.objectCompare (GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.galgas4", 112)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 113)), GGS_string ("duplicated $enabled binding"), fixItArray7  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 113)) ;
        }
      }
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4432 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4432, inCompiler) ;
      outArgument_enabledBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4432  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 116)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 119)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, outArgument_hiddenBindingDescriptor.objectCompare (GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.galgas4", 120)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 121)), GGS_string ("duplicated $hidden binding"), fixItArray9  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 121)) ;
        }
      }
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4771 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4771, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4771  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 124)) ;
    } break ;
    case 6: {
      GGS_lstring var_bindingName_4931 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 127)) ;
      GGS_observablePropertyList temp_10 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 128)) ;
      GGS_observablePropertyList var_observablePropertyList_4978 = temp_10 ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GGS_observablePropertyAST var_observableProperty_5078 ;
        nt_observable_5F_property_ (var_observableProperty_5078, inCompiler) ;
        {
        var_observablePropertyList_4978.setter_append (var_observableProperty_5078, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 131)) ;
        }
        if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 133)) ;
        }else{
          repeatFlag_11 = false ;
        }
      }
      GGS_bindingOptionList var_bindingOptions_5227 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5227, inCompiler) ;
      {
      outArgument_regularBindingList.setter_append (var_bindingName_4931, var_observablePropertyList_4978, var_bindingOptions_5227, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 136)) ;
      }
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 143)) ;
      GGS_lstring var_graphicControllerName_5474 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 144)) ;
      GGS_lstring var_propertyName_5516 ;
      switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
      case 1: {
        var_propertyName_5516 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 147)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 149)) ;
        var_propertyName_5516 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 150)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.galgas4", 152)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          outArgument_graphicController = GGS_graphicController::class_func_defined (var_graphicControllerName_5474, var_propertyName_5516  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 153)) ;
        }
      }
      if (GalgasBool::boolFalse == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5474.readProperty_location (), GGS_string ("binding already defined"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 155)) ;
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i42_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 92)) ;
      switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 102)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 105)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 107)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 111)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 119)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 127)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_indexing (inCompiler) ;
        if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 133)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      nt_binding_5F_option_5F_list_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 143)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 144)) ;
      switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 149)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 150)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i43_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring constinArgument_inRootEntity,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas4", 95)) ;
  GGS_lstring var_transientTypeName_5574 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 96)) ;
  GGS_lstring var_transientName_5625 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 98)) ;
  {
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 104)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5574, var_transientName_5625, temp_0, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 99)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i43_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.galgas4", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas4", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 98)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i44_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring constinArgument_inRootEntity,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_isOverriding_6163 ;
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
    var_isOverriding_6163 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.galgas4", 119)) ;
    var_isOverriding_6163 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas4", 122)) ;
  GGS_lstring var_transientTypeName_6311 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 123)) ;
  GGS_lstring var_transientName_6362 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas4", 125)) ;
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 126)) ;
  GGS_observablePropertyList var_dependanceList_6427 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_6515 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6515, inCompiler) ;
    {
    var_dependanceList_6427.setter_append (var_observablePropertyAST_6515, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 129)) ;
    }
    if (select_easyBindings_5F_syntax_81 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas4", 131)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 133)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6311, var_transientName_6362, var_dependanceList_6427, var_isOverriding_6163, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 134)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i44_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.galgas4", 119)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas4", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas4", 125)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_81 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas4", 131)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 133)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_ (GGS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 21)) ;
  GGS_lstring var_externFunctionName_819 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 23)) ;
  GGS_lstring var_callerName_886 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 25)) ;
  {
  ioArgument_ioExternSwiftFunctionList.setter_append (var_externFunctionName_819, var_callerName_886, inCompiler COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 26)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 23)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 25)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i46_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas4", 39)) ;
  GGS_lstring var_enumName_1507 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 40)) ;
  GGS_bool var_caseIterable_1531 ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
    var_caseIterable_1531 = GGS_bool (false) ;
  } break ;
  case 2: {
    GGS_lstring var_attribute_1614 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.galgas4", 45)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1614.readProperty_string ().objectCompare (GGS_string ("CaseIterable"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@CaseIterable")) ;
        inCompiler->emitSemanticError (var_attribute_1614.readProperty_location (), GGS_string ("only @CaseIterable attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("enumeration.galgas4", 47)) ;
      }
    }
    var_caseIterable_1531 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 51)) ;
  GGS_lstringlist temp_2 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 52)) ;
  GGS_lstringlist var_enumConstants_1856 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GGS_lstring var_constantName_1920 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 54)) ;
    {
    var_enumConstants_1856.setter_append (var_constantName_1920, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 55)) ;
    }
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas4", 57)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 59)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_enumerationDeclarationAST::init_21__21__21_ (var_enumName_1507, var_enumConstants_1856, var_caseIterable_1531, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 60)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i46_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas4", 39)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 40)) ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.galgas4", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 54)) ;
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas4", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 59)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas4", 67)) ;
  GGS_lstring var_enumName_2378 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.galgas4", 69)) ;
  GGS_lstring var_funcName_2432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 71)) ;
  GGS__32_lstringlist temp_0 = GGS__32_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 72)) ;
  GGS__32_lstringlist var_associationList_2472 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_84 (inCompiler) == 2) {
      GGS_lstring var_constantName_2548 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.galgas4", 76)) ;
      GGS_lstring var_associatedString_2610 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 78)) ;
      {
      var_associationList_2472.setter_append (var_constantName_2548, var_associatedString_2610, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 79)) ;
      }
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 81)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.setter_append (var_enumName_2378, var_funcName_2432, var_associationList_2472, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 82)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.galgas4", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas4", 67)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.galgas4", 69)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_84 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.galgas4", 76)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 81)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i48_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_bool var_isAbstract_1738 ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_isAbstract_1738 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas4", 46)) ;
    var_isAbstract_1738 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_graphicEntity_1855 ;
  switch (select_easyBindings_5F_syntax_86 (inCompiler)) {
  case 1: {
    var_graphicEntity_1855 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 53)) ;
    var_graphicEntity_1855 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_handlingOpposite_1980 ;
  switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
  case 1: {
    var_handlingOpposite_1980 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.galgas4", 60)) ;
    var_handlingOpposite_1980 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas4", 63)) ;
  GGS_lstring var_entityName_2154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 64)) ;
  GGS_lstringlist temp_0 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 65)) ;
  GGS_lstringlist var_obsoleteEntityNames_2187 = temp_0 ;
  switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas4", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_obsoleteName_2289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 70)) ;
      {
      var_obsoleteEntityNames_2187.setter_append (var_obsoleteName_2289, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 71)) ;
      }
      if (select_easyBindings_5F_syntax_89 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas4", 73)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas4", 75)) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_superEntityName_2424 ;
  switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
  case 1: {
    var_superEntityName_2424 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas4", 81)) ;
    var_superEntityName_2424 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas4", 84)) ;
  GGS_simpleStoredPropertyList temp_2 = GGS_simpleStoredPropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 85)) ;
  GGS_simpleStoredPropertyList var_simpleStoredPropertyList_2592 = temp_2 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 86)) ;
  GGS_stringset var_signatureList_2641 = temp_3 ;
  GGS_lstringlist temp_4 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 87)) ;
  GGS_lstringlist var_actionDeclarationList_2681 = temp_4 ;
  GGS_externSwiftDelegateList temp_5 = GGS_externSwiftDelegateList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 88)) ;
  GGS_externSwiftDelegateList var_externSwiftDelegateList_2741 = temp_5 ;
  GGS_arrayControllerBindingListAST temp_6 = GGS_arrayControllerBindingListAST::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 89)) ;
  GGS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2809 = temp_6 ;
  GGS_lstringlist temp_7 = GGS_lstringlist::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 90)) ;
  GGS_lstringlist var_graphicOptionArray_2865 = temp_7 ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_2154, var_simpleStoredPropertyList_2592, var_signatureList_2641, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 95)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_2154, var_signatureList_2641, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_2154, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2681, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 103)), var_arrayControllerBindingListAST_2809, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2741, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 107)) ;
      GGS_lstring var_graphicOption_3568 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.galgas4", 108)) ;
      {
      var_graphicOptionArray_2865.setter_append (var_graphicOption_3568, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 109)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.galgas4", 110)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_graphicEntity_1855.operator_not (SOURCE_FILE ("entity.galgas4", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (var_graphicOption_3568.readProperty_location (), GGS_string ("only a graphic entity accepts a graphic option"), fixItArray10  COMMA_SOURCE_FILE ("entity.galgas4", 112)) ;
        }
      }
    } break ;
    default:
      repeatFlag_8 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas4", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_entityDeclarationAST::init_21__21__21__21__21__21__21__21__21__21__21_ (var_entityName_2154, var_isAbstract_1738, var_superEntityName_2424, var_handlingOpposite_1980, var_simpleStoredPropertyList_2592, var_signatureList_2641, var_actionDeclarationList_2681, var_obsoleteEntityNames_2187, var_graphicEntity_1855, var_externSwiftDelegateList_2741, var_graphicOptionArray_2865, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 116)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = var_isAbstract_1738 ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      test_12 = var_graphicEntity_1855 ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      GGS_observablePropertyList temp_13 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 136)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 133)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 134)), GGS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 135)), temp_13, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 131)) ;
      }
      {
      GGS_observablePropertyList temp_14 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 145)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2154, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 142)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 143)), GGS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 144)), temp_14, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 140)) ;
      }
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas4", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_86 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 53)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.galgas4", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 64)) ;
  switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas4", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 70)) ;
      if (select_easyBindings_5F_syntax_89 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.galgas4", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.galgas4", 75)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas4", 81)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas4", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_indexing (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_indexing (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_indexing (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 107)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.galgas4", 108)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.galgas4", 110)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.galgas4", 115)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i49_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GGS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_proxyKind var_proxyKind_1966 ;
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.galgas4", 51)) ;
    var_proxyKind_1966 = GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.galgas4", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.galgas4", 54)) ;
    var_proxyKind_1966 = GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.galgas4", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas4", 57)) ;
  GGS_lstring var_proxyTypeName_2142 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.galgas4", 58)) ;
  GGS_lstring var_proxyName_2189 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas4", 60)) ;
  GGS_lstring var_toOnePropertyName_2240 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas4", 62)) ;
  GGS_lstring var_propertyName_2299 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas4", 64)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_proxyDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_proxyKind_1966, var_proxyTypeName_2142, var_proxyName_2189, var_toOnePropertyName_2240, var_propertyName_2299, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 65)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i49_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.galgas4", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.galgas4", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas4", 57)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.galgas4", 58)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas4", 60)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas4", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas4", 64)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i50_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring constinArgument_inRootEntity,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.galgas4", 97)) ;
  GGS_lstring var_transientTypeName_5563 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 98)) ;
  GGS_lstring var_transientName_5614 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.galgas4", 100)) ;
  GGS_observablePropertyList temp_0 = GGS_observablePropertyList::init (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 101)) ;
  GGS_observablePropertyList var_dependanceList_5679 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_5767 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5767, inCompiler) ;
    {
    var_dependanceList_5679.setter_append (var_observablePropertyAST_5767, inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 104)) ;
    }
    if (select_easyBindings_5F_syntax_93 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.galgas4", 106)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.galgas4", 108)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_computedPropertyDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5563, var_transientName_5614, var_dependanceList_5679, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 109)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i50_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 98)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.galgas4", 100)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_93 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.galgas4", 106)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.galgas4", 108)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i51_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas4", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas4", 31)) ;
  GGS_bool var_isClass_1251 ;
  switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas4", 34)) ;
    var_isClass_1251 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas4", 37)) ;
    var_isClass_1251 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_propertyTypeName_1389 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas4", 41)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientClassDeclarationAST::init_21__21_ (var_propertyTypeName_1389, var_isClass_1251, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property-class.galgas4", 42)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i51_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.galgas4", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.galgas4", 31)) ;
  switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.galgas4", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.galgas4", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.galgas4", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.galgas4", 41)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i52_ (GGS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas4", 19)) ;
  GGS_lstring var_actionName_796 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas4", 21)) ;
  {
  ioArgument_ioActionDeclarationList.setter_append (var_actionName_796, inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 22)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i52_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas4", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas4", 21)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                             GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 45)) ;
  GGS_bool var_usedForSignature_1989 = GGS_bool (false) ;
  GGS_bool var_isWeak_2022 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_95 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2083 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 50)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2083.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_1989.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 53)) ;
            }
          }
          var_usedForSignature_1989 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2083.readProperty_string ().objectCompare (GGS_string ("weak"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_isWeak_2022.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 58)) ;
              }
            }
            var_isWeak_2022 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GenericArray <FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
          appendFixItActions (fixItArray7, EnumFixItKind::fixItReplace, GGS_string ("@weak")) ;
          inCompiler->emitSemanticError (var_attributeName_2083.readProperty_location (), GGS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 62)) ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GGS_lstring var_destinationEntityName_2637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 65)) ;
  GGS_lstring var_relationshipName_2692 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 66)) ;
  GGS_toOneOppositeRelationship var_opposite_2745 ;
  switch (select_easyBindings_5F_syntax_96 (inCompiler)) {
  case 1: {
    var_opposite_2745 = GGS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.galgas4", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 71)) ;
    switch (select_easyBindings_5F_syntax_97 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 73)) ;
      GGS_lstring var_inverseRelationshipName_2867 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 74)) ;
      var_opposite_2745 = GGS_toOneOppositeRelationship::class_func_oppositeIsToOne (var_inverseRelationshipName_2867  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 75)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 77)) ;
      GGS_lstring var_inverseRelationshipName_3034 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 78)) ;
      var_opposite_2745 = GGS_toOneOppositeRelationship::class_func_oppositeIsToMany (var_inverseRelationshipName_3034  COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 79)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 82)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_toOneRelationshipAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_destinationEntityName_2637, var_relationshipName_2692, var_opposite_2745, var_usedForSignature_1989, var_isWeak_2022, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 83)) ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i53_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_95 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 66)) ;
  switch (select_easyBindings_5F_syntax_96 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 71)) ;
    switch (select_easyBindings_5F_syntax_97 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 73)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 78)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.galgas4", 82)) ;
}

