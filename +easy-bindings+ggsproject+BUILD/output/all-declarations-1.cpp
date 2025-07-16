#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-1.h"

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

GGS_autolayoutViewClassMap GGS_autolayoutViewClassMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_autoLayoutBindingSpecificationMap GGS_autoLayoutBindingSpecificationMap::class_func_emptyMap (LOCATION_ARGS) {
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

ComparisonResult GGS_abstractDeclarationAST_2E_weak::objectCompare (const GGS_abstractDeclarationAST_2E_weak & inOperand) const {
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

GGS_abstractDeclarationAST_2E_weak::GGS_abstractDeclarationAST_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractDeclarationAST_2E_weak & GGS_abstractDeclarationAST_2E_weak::operator = (const GGS_abstractDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//'@declarationPrecedenceGraph' graph
//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph::GGS_declarationPrecedenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GGS_declarationPrecedenceGraph GGS_declarationPrecedenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GGS_declarationPrecedenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
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
  capCollectionElement attributes ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
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
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoSuccessor (GGS_declarationListAST & outInfoList,
                                                                  GGS_lstringlist & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS_declarationListAST (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_declarationPrecedenceGraph::method_nodesWithNoPredecessor (GGS_declarationListAST & outInfoList,
                                                                    GGS_lstringlist & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
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
//Class for element of '@externSwiftDelegateList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftDelegateList : public cCollectionElement {
  public: GGS_externSwiftDelegateList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GGS_lstring & in_mExternSwiftDelegateName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftDelegateList::cCollectionElement_externSwiftDelegateList (const GGS_externSwiftDelegateList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftDelegateName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftDelegateList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftDelegateList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externSwiftDelegateList (mObject.mProperty_mExternSwiftDelegateName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externSwiftDelegateList
//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftDelegateList::GGS_externSwiftDelegateList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_externSwiftDelegateList * p = (cCollectionElement_externSwiftDelegateList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_externSwiftDelegateList) ;
    const GGS_externSwiftDelegateList_2E_element element (p->mObject.mProperty_mExternSwiftDelegateName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftDelegateList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftDelegateName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftDelegateList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftDelegateList (in_mExternSwiftDelegateName COMMA_THERE)) ;
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

GGS_externSwiftDelegateList GGS_externSwiftDelegateList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_externSwiftDelegateList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//Class for element of '@externSwiftFunctionList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_externSwiftFunctionList : public cCollectionElement {
  public: GGS_externSwiftFunctionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                      const GGS_lstring & in_mCallerName
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GGS_lstring & in_mExternSwiftFunctionName,
                                                                                        const GGS_lstring & in_mCallerName
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mExternSwiftFunctionName, in_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_externSwiftFunctionList::cCollectionElement_externSwiftFunctionList (const GGS_externSwiftFunctionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mExternSwiftFunctionName, inElement.mProperty_mCallerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_externSwiftFunctionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_externSwiftFunctionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_externSwiftFunctionList (mObject.mProperty_mExternSwiftFunctionName, mObject.mProperty_mCallerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @externSwiftFunctionList
//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_externSwiftFunctionList::GGS_externSwiftFunctionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_externSwiftFunctionList * p = (cCollectionElement_externSwiftFunctionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_externSwiftFunctionList) ;
    const GGS_externSwiftFunctionList_2E_element element (p->mObject.mProperty_mExternSwiftFunctionName, p->mObject.mProperty_mCallerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_externSwiftFunctionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_lstring & in_mExternSwiftFunctionName,
                                                             const GGS_lstring & in_mCallerName
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_externSwiftFunctionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_externSwiftFunctionList (in_mExternSwiftFunctionName, in_mCallerName COMMA_THERE)) ;
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

GGS_externSwiftFunctionList GGS_externSwiftFunctionList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_externSwiftFunctionList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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
//  Map type @externFunctionMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::~ GGS_externFunctionMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap::GGS_externFunctionMap (const GGS_externFunctionMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap & GGS_externFunctionMap::operator = (const GGS_externFunctionMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::class_func_emptyMap (LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionMap::getter_hasKey (const GGS_string & inKey
                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_externFunctionMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                      const GGS_uint & inLevel
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externFunctionMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_externFunctionMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_externFunctionMap::getter_locationForKey (const GGS_string & inKey,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_externFunctionMap::getter_keyList (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_externFunctionMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::performInsert (const GGS_externFunctionMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_externFunctionMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>
GGS_externFunctionMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_externFunctionMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>>
GGS_externFunctionMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_externFunctionMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element_3F_ GGS_externFunctionMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_externFunctionMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_externFunctionMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_externFunctionMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::class_func_mapWithMapToOverride (const GGS_externFunctionMap & inMapToOverride
                                                                              COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::getter_overriddenMap (Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  GGS_externFunctionMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_externFunctionMap::setter_insertKey (GGS_lstring inLKey,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  const GGS_externFunctionMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' extern function is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

static void GGS_externFunctionMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> & inArray,
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

void GGS_externFunctionMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_externFunctionMap_2E_element>> array = sortedInfoArray () ;
    GGS_externFunctionMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_externFunctionMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_externFunctionMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @externFunctionMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_externFunctionMap::DownEnumerator_externFunctionMap (const GGS_externFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element DownEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @externFunctionMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_externFunctionMap::UpEnumerator_externFunctionMap (const GGS_externFunctionMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap_2E_element UpEnumerator_externFunctionMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_externFunctionMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @externFunctionMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_externFunctionMap ("externFunctionMap",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_externFunctionMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_externFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_externFunctionMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_externFunctionMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_externFunctionMap GGS_externFunctionMap::extractObject (const GGS_object & inObject,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GGS_externFunctionMap result ;
  const GGS_externFunctionMap * p = (const GGS_externFunctionMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_externFunctionMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("externFunctionMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_transientClassDeclarationAST_2E_weak::objectCompare (const GGS_transientClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_transientClassDeclarationAST_2E_weak::GGS_transientClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientClassDeclarationAST_2E_weak & GGS_transientClassDeclarationAST_2E_weak::operator = (const GGS_transientClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractFileGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

ComparisonResult GGS_abstractFileGeneration_2E_weak::objectCompare (const GGS_abstractFileGeneration_2E_weak & inOperand) const {
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

GGS_abstractFileGeneration_2E_weak::GGS_abstractFileGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration_2E_weak & GGS_abstractFileGeneration_2E_weak::operator = (const GGS_abstractFileGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

ComparisonResult GGS_atomicClassDeclarationAST_2E_weak::objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak & GGS_atomicClassDeclarationAST_2E_weak::operator = (const GGS_atomicClassDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@simpleStoredPropertyList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_simpleStoredPropertyList : public cCollectionElement {
  public: GGS_simpleStoredPropertyList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                       const GGS_lstring & in_mPropertyName,
                                                       const GGS_abstractDefaultValue & in_mDefaultValue
                                                       COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GGS_lstring & in_mPropertyTypeName,
                                                                                          const GGS_lstring & in_mPropertyName,
                                                                                          const GGS_abstractDefaultValue & in_mDefaultValue
                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_simpleStoredPropertyList::cCollectionElement_simpleStoredPropertyList (const GGS_simpleStoredPropertyList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mPropertyTypeName, inElement.mProperty_mPropertyName, inElement.mProperty_mDefaultValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_simpleStoredPropertyList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_simpleStoredPropertyList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_simpleStoredPropertyList (mObject.mProperty_mPropertyTypeName, mObject.mProperty_mPropertyName, mObject.mProperty_mDefaultValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @simpleStoredPropertyList
//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_simpleStoredPropertyList::GGS_simpleStoredPropertyList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_simpleStoredPropertyList * p = (cCollectionElement_simpleStoredPropertyList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_simpleStoredPropertyList) ;
    const GGS_simpleStoredPropertyList_2E_element element (p->mObject.mProperty_mPropertyTypeName, p->mObject.mProperty_mPropertyName, p->mObject.mProperty_mDefaultValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_simpleStoredPropertyList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                              const GGS_lstring & in_mPropertyTypeName,
                                                              const GGS_lstring & in_mPropertyName,
                                                              const GGS_abstractDefaultValue & in_mDefaultValue
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_simpleStoredPropertyList * p = nullptr ;
  macroMyNew (p, cCollectionElement_simpleStoredPropertyList (in_mPropertyTypeName, in_mPropertyName, in_mDefaultValue COMMA_THERE)) ;
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

GGS_simpleStoredPropertyList GGS_simpleStoredPropertyList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_simpleStoredPropertyList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

ComparisonResult GGS_entityDeclarationAST_2E_weak::objectCompare (const GGS_entityDeclarationAST_2E_weak & inOperand) const {
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

GGS_entityDeclarationAST_2E_weak::GGS_entityDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityDeclarationAST_2E_weak & GGS_entityDeclarationAST_2E_weak::operator = (const GGS_entityDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@entityListForGeneratingEBManagedObjectContext' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_entityListForGeneratingEBManagedObjectContext : public cCollectionElement {
  public: GGS_entityListForGeneratingEBManagedObjectContext_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                            const GGS_lstringlist & in_mObsoleteEntityNames
                                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_string & in_mEntityName,
                                                                                                                                    const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEntityName, in_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_entityListForGeneratingEBManagedObjectContext::cCollectionElement_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEntityName, inElement.mProperty_mObsoleteEntityNames) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_entityListForGeneratingEBManagedObjectContext::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_entityListForGeneratingEBManagedObjectContext::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_entityListForGeneratingEBManagedObjectContext (mObject.mProperty_mEntityName, mObject.mProperty_mObsoleteEntityNames COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext::GGS_entityListForGeneratingEBManagedObjectContext (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = (cCollectionElement_entityListForGeneratingEBManagedObjectContext *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext) ;
    const GGS_entityListForGeneratingEBManagedObjectContext_2E_element element (p->mObject.mProperty_mEntityName, p->mObject.mProperty_mObsoleteEntityNames) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                   const GGS_string & in_mEntityName,
                                                                                   const GGS_lstringlist & in_mObsoleteEntityNames
                                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_entityListForGeneratingEBManagedObjectContext * p = nullptr ;
  macroMyNew (p, cCollectionElement_entityListForGeneratingEBManagedObjectContext (in_mEntityName, in_mObsoleteEntityNames COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_entityListForGeneratingEBManagedObjectContext::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_entityListForGeneratingEBManagedObjectContext::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::description (String & ioString,
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
      ioString.appendString ("mEntityName:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mEntityName.description (ioString, inIndentation + 1) ;
      ioString.appendNewLine () ;
      ioString.appendStringMultiple ("| ", inIndentation + 1) ;
      ioString.appendString ("mObsoleteEntityNames:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mObsoleteEntityNames.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::plusPlusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext_2E_element & inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                               const GGS_lstringlist & inOperand1
                                                                                                                               COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element element (inOperand0, inOperand1) ;
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::addAssignOperation (const GGS_string & inOperand0,
                                                                            const GGS_lstringlist & inOperand1
                                                                            COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_append (const GGS_string inOperand0,
                                                                       const GGS_lstringlist inOperand1,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::setter_insertAtIndex (const GGS_string inOperand0,
                                                                              const GGS_lstringlist inOperand1,
                                                                              const GGS_uint inInsertionIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_entityListForGeneratingEBManagedObjectContext_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_removeAtIndex (GGS_string & outOperand0,
                                                                              GGS_lstringlist & outOperand1,
                                                                              const GGS_uint inRemoveIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mEntityName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popFirst (GGS_string & outOperand0,
                                                                         GGS_lstringlist & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEntityName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_popLast (GGS_string & outOperand0,
                                                                        GGS_lstringlist & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEntityName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::method_first (GGS_string & outOperand0,
                                                                      GGS_lstringlist & outOperand1,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mEntityName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mObsoleteEntityNames ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::method_last (GGS_string & outOperand0,
                                                                     GGS_lstringlist & outOperand1,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mEntityName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mObsoleteEntityNames ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::add_operation (const GGS_entityListForGeneratingEBManagedObjectContext & inOperand,
                                                                                                                    Compiler * /* inCompiler */
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::subList (const int32_t inStart,
                                                                                                              const int32_t inLength,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
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

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                            Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) const {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityListForGeneratingEBManagedObjectContext::plusAssignOperation (const GGS_entityListForGeneratingEBManagedObjectContext inList,
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMEntityNameAtIndex (GGS_string inOperand,
                                                                                      GGS_uint inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mEntityName = inOperand ;
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
  
GGS_string GGS_entityListForGeneratingEBManagedObjectContext::getter_mEntityNameAtIndex (const GGS_uint & inIndex,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mEntityName ;
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

void GGS_entityListForGeneratingEBManagedObjectContext::setter_setMObsoleteEntityNamesAtIndex (GGS_lstringlist inOperand,
                                                                                               GGS_uint inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mObsoleteEntityNames = inOperand ;
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
  
GGS_lstringlist GGS_entityListForGeneratingEBManagedObjectContext::getter_mObsoleteEntityNamesAtIndex (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mObsoleteEntityNames ;
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
// Down Enumerator for @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

DownEnumerator_entityListForGeneratingEBManagedObjectContext::DownEnumerator_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element DownEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist DownEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObsoleteEntityNames ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @entityListForGeneratingEBManagedObjectContext
//--------------------------------------------------------------------------------------------------

UpEnumerator_entityListForGeneratingEBManagedObjectContext::UpEnumerator_entityListForGeneratingEBManagedObjectContext (const GGS_entityListForGeneratingEBManagedObjectContext & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext_2E_element UpEnumerator_entityListForGeneratingEBManagedObjectContext::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_entityListForGeneratingEBManagedObjectContext::current_mEntityName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mEntityName ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstringlist UpEnumerator_entityListForGeneratingEBManagedObjectContext::current_mObsoleteEntityNames (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mObsoleteEntityNames ;
}




//--------------------------------------------------------------------------------------------------
//     @entityListForGeneratingEBManagedObjectContext generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ("entityListForGeneratingEBManagedObjectContext",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityListForGeneratingEBManagedObjectContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_entityListForGeneratingEBManagedObjectContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_entityListForGeneratingEBManagedObjectContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityListForGeneratingEBManagedObjectContext GGS_entityListForGeneratingEBManagedObjectContext::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_entityListForGeneratingEBManagedObjectContext result ;
  const GGS_entityListForGeneratingEBManagedObjectContext * p = (const GGS_entityListForGeneratingEBManagedObjectContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_entityListForGeneratingEBManagedObjectContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityListForGeneratingEBManagedObjectContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@propertyGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_propertyGenerationList : public cCollectionElement {
  public: GGS_propertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GGS_propertyGeneration & in_mProperty
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_propertyGenerationList::cCollectionElement_propertyGenerationList (const GGS_propertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_propertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_propertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_propertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @propertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_propertyGenerationList::GGS_propertyGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_propertyGenerationList * p = (cCollectionElement_propertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_propertyGenerationList) ;
    const GGS_propertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_propertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_propertyGeneration & in_mProperty
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_propertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_propertyGenerationList (in_mProperty COMMA_THERE)) ;
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

GGS_propertyGenerationList GGS_propertyGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_propertyGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

ComparisonResult GGS_entityForGeneration_2E_weak::objectCompare (const GGS_entityForGeneration_2E_weak & inOperand) const {
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

GGS_entityForGeneration_2E_weak::GGS_entityForGeneration_2E_weak (void) :
GGS_abstractFileGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_entityForGeneration_2E_weak & GGS_entityForGeneration_2E_weak::operator = (const GGS_entityForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
//Class for element of '@outletDeclarationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_outletDeclarationList : public cCollectionElement {
  public: GGS_outletDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                    const GGS_lstring & in_mOutletName,
                                                    const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                    const GGS_runActionDescriptor & in_mRunDescriptor,
                                                    const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                    const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                    const GGS_regularBindingList & in_mRegularBindingList,
                                                    const GGS_graphicController & in_mGraphicController
                                                    COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GGS_lstring & in_mOutletTypeName,
                                                                                    const GGS_lstring & in_mOutletName,
                                                                                    const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                                                    const GGS_runActionDescriptor & in_mRunDescriptor,
                                                                                    const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                                    const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                                    const GGS_regularBindingList & in_mRegularBindingList,
                                                                                    const GGS_graphicController & in_mGraphicController
                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_outletDeclarationList::cCollectionElement_outletDeclarationList (const GGS_outletDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletTypeName, inElement.mProperty_mOutletName, inElement.mProperty_mTableValueBindingDescriptor, inElement.mProperty_mRunDescriptor, inElement.mProperty_mEnabledBindingDescriptor, inElement.mProperty_mHiddenBindingDescriptor, inElement.mProperty_mRegularBindingList, inElement.mProperty_mGraphicController) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_outletDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_outletDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_outletDeclarationList (mObject.mProperty_mOutletTypeName, mObject.mProperty_mOutletName, mObject.mProperty_mTableValueBindingDescriptor, mObject.mProperty_mRunDescriptor, mObject.mProperty_mEnabledBindingDescriptor, mObject.mProperty_mHiddenBindingDescriptor, mObject.mProperty_mRegularBindingList, mObject.mProperty_mGraphicController COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @outletDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletDeclarationList::GGS_outletDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_outletDeclarationList * p = (cCollectionElement_outletDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_outletDeclarationList) ;
    const GGS_outletDeclarationList_2E_element element (p->mObject.mProperty_mOutletTypeName, p->mObject.mProperty_mOutletName, p->mObject.mProperty_mTableValueBindingDescriptor, p->mObject.mProperty_mRunDescriptor, p->mObject.mProperty_mEnabledBindingDescriptor, p->mObject.mProperty_mHiddenBindingDescriptor, p->mObject.mProperty_mRegularBindingList, p->mObject.mProperty_mGraphicController) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                           const GGS_lstring & in_mOutletTypeName,
                                                           const GGS_lstring & in_mOutletName,
                                                           const GGS_tableValueBinding & in_mTableValueBindingDescriptor,
                                                           const GGS_runActionDescriptor & in_mRunDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                           const GGS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                           const GGS_regularBindingList & in_mRegularBindingList,
                                                           const GGS_graphicController & in_mGraphicController
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_outletDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_outletDeclarationList (in_mOutletTypeName, in_mOutletName, in_mTableValueBindingDescriptor, in_mRunDescriptor, in_mEnabledBindingDescriptor, in_mHiddenBindingDescriptor, in_mRegularBindingList, in_mGraphicController COMMA_THERE)) ;
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

GGS_outletDeclarationList GGS_outletDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_outletDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_arrayControllerBindingListAST : public cCollectionElement {
  public: GGS_arrayControllerBindingListAST_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                            const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_lstring & in_mControllerName,
                                                                                                    const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_arrayControllerBindingListAST::cCollectionElement_arrayControllerBindingListAST (const GGS_arrayControllerBindingListAST_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mControllerName, inElement.mProperty_mHiddenSelectionViewBindingDescriptor) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_arrayControllerBindingListAST::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_arrayControllerBindingListAST::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_arrayControllerBindingListAST (mObject.mProperty_mControllerName, mObject.mProperty_mHiddenSelectionViewBindingDescriptor COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @arrayControllerBindingListAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBindingListAST::GGS_arrayControllerBindingListAST (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_arrayControllerBindingListAST * p = (cCollectionElement_arrayControllerBindingListAST *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_arrayControllerBindingListAST) ;
    const GGS_arrayControllerBindingListAST_2E_element element (p->mObject.mProperty_mControllerName, p->mObject.mProperty_mHiddenSelectionViewBindingDescriptor) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBindingListAST::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mControllerName,
                                                                   const GGS_multipleBindingDescriptor & in_mHiddenSelectionViewBindingDescriptor
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_arrayControllerBindingListAST * p = nullptr ;
  macroMyNew (p, cCollectionElement_arrayControllerBindingListAST (in_mControllerName, in_mHiddenSelectionViewBindingDescriptor COMMA_THERE)) ;
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

GGS_arrayControllerBindingListAST GGS_arrayControllerBindingListAST::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBindingListAST result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_astViewDeclarationList : public cCollectionElement {
  public: GGS_astViewDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                     const GGS_astAbstractViewDeclaration & in_mView
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GGS_lstring & in_mViewName,
                                                                                      const GGS_astAbstractViewDeclaration & in_mView
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewDeclarationList::cCollectionElement_astViewDeclarationList (const GGS_astViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astViewDeclarationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astViewDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewDeclarationList::GGS_astViewDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astViewDeclarationList * p = (cCollectionElement_astViewDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astViewDeclarationList) ;
    const GGS_astViewDeclarationList_2E_element element (p->mObject.mProperty_mViewName, p->mObject.mProperty_mView) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_lstring & in_mViewName,
                                                            const GGS_astAbstractViewDeclaration & in_mView
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astViewDeclarationList (in_mViewName, in_mView COMMA_THERE)) ;
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

GGS_astViewDeclarationList GGS_astViewDeclarationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_astViewDeclarationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_astAutoLayoutOutletLinkerList : public cCollectionElement {
  public: GGS_astAutoLayoutOutletLinkerList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                            const GGS_lstringlist & in_mOutletNameList
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_lstring & in_mLinkerName,
                                                                                                    const GGS_lstringlist & in_mOutletNameList
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutOutletLinkerList::cCollectionElement_astAutoLayoutOutletLinkerList (const GGS_astAutoLayoutOutletLinkerList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutOutletLinkerList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutOutletLinkerList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutOutletLinkerList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutOutletLinkerList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutOutletLinkerList::GGS_astAutoLayoutOutletLinkerList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astAutoLayoutOutletLinkerList * p = (cCollectionElement_astAutoLayoutOutletLinkerList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutOutletLinkerList) ;
    const GGS_astAutoLayoutOutletLinkerList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutOutletLinkerList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_lstring & in_mLinkerName,
                                                                   const GGS_lstringlist & in_mOutletNameList
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutOutletLinkerList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutOutletLinkerList (in_mLinkerName, in_mOutletNameList COMMA_THERE)) ;
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

GGS_astAutoLayoutOutletLinkerList GGS_astAutoLayoutOutletLinkerList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutOutletLinkerList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_autoLayoutDocumentDeclarationAST_2E_weak::GGS_autoLayoutDocumentDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDocumentDeclarationAST_2E_weak & GGS_autoLayoutDocumentDeclarationAST_2E_weak::operator = (const GGS_autoLayoutDocumentDeclarationAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_autoLayoutOutletLinkerGenerationList : public cCollectionElement {
  public: GGS_autoLayoutOutletLinkerGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                   const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                   COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_string & in_mLinkerName,
                                                                                                                  const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mLinkerName, in_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutOutletLinkerGenerationList::cCollectionElement_autoLayoutOutletLinkerGenerationList (const GGS_autoLayoutOutletLinkerGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mLinkerName, inElement.mProperty_mOutletNameAndTypeNameList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutOutletLinkerGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutOutletLinkerGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutOutletLinkerGenerationList (mObject.mProperty_mLinkerName, mObject.mProperty_mOutletNameAndTypeNameList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutOutletLinkerGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutOutletLinkerGenerationList::GGS_autoLayoutOutletLinkerGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutOutletLinkerGenerationList * p = (cCollectionElement_autoLayoutOutletLinkerGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutOutletLinkerGenerationList) ;
    const GGS_autoLayoutOutletLinkerGenerationList_2E_element element (p->mObject.mProperty_mLinkerName, p->mObject.mProperty_mOutletNameAndTypeNameList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutOutletLinkerGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                          const GGS_string & in_mLinkerName,
                                                                          const GGS__32_stringlist & in_mOutletNameAndTypeNameList
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutOutletLinkerGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutOutletLinkerGenerationList (in_mLinkerName, in_mOutletNameAndTypeNameList COMMA_THERE)) ;
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

GGS_autoLayoutOutletLinkerGenerationList GGS_autoLayoutOutletLinkerGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutOutletLinkerGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

GGS_decoratedOutletMap GGS_decoratedOutletMap::class_func_emptyMap (LOCATION_ARGS) {
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

GGS_autoLayoutOutletMap GGS_autoLayoutOutletMap::class_func_emptyMap (LOCATION_ARGS) {
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

class cCollectionElement_actionBindingListForGeneration : public cCollectionElement {
  public: GGS_actionBindingListForGeneration_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_actionBindingListForGeneration (const GGS_string & in_mOutletName,
                                                             const GGS_string & in_mTargetName,
                                                             const GGS_string & in_mActionName,
                                                             const GGS_string & in_mTargetTypeName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_actionBindingListForGeneration (const GGS_actionBindingListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GGS_string & in_mOutletName,
                                                                                                      const GGS_string & in_mTargetName,
                                                                                                      const GGS_string & in_mActionName,
                                                                                                      const GGS_string & in_mTargetTypeName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_actionBindingListForGeneration::cCollectionElement_actionBindingListForGeneration (const GGS_actionBindingListForGeneration_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mTargetName, inElement.mProperty_mActionName, inElement.mProperty_mTargetTypeName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_actionBindingListForGeneration::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_actionBindingListForGeneration::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_actionBindingListForGeneration (mObject.mProperty_mOutletName, mObject.mProperty_mTargetName, mObject.mProperty_mActionName, mObject.mProperty_mTargetTypeName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @actionBindingListForGeneration
//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration::GGS_actionBindingListForGeneration (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_actionBindingListForGeneration::GGS_actionBindingListForGeneration (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_actionBindingListForGeneration * p = (cCollectionElement_actionBindingListForGeneration *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_actionBindingListForGeneration) ;
    const GGS_actionBindingListForGeneration_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mTargetName, p->mObject.mProperty_mActionName, p->mObject.mProperty_mTargetTypeName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_actionBindingListForGeneration::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_string & in_mOutletName,
                                                                    const GGS_string & in_mTargetName,
                                                                    const GGS_string & in_mActionName,
                                                                    const GGS_string & in_mTargetTypeName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_actionBindingListForGeneration * p = nullptr ;
  macroMyNew (p, cCollectionElement_actionBindingListForGeneration (in_mOutletName, in_mTargetName, in_mActionName, in_mTargetTypeName COMMA_THERE)) ;
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

GGS_actionBindingListForGeneration GGS_actionBindingListForGeneration::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_actionBindingListForGeneration result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_regularBindingsGenerationList : public cCollectionElement {
  public: GGS_regularBindingsGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_regularBindingsGenerationList (const GGS_string & in_mOutletName,
                                                            const GGS_string & in_mBindingName,
                                                            const GGS_boundObjectList & in_mBoundObjectList,
                                                            const GGS_string & in_mBindingOptionsString
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_regularBindingsGenerationList (const GGS_regularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GGS_string & in_mOutletName,
                                                                                                    const GGS_string & in_mBindingName,
                                                                                                    const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                    const GGS_string & in_mBindingOptionsString
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_regularBindingsGenerationList::cCollectionElement_regularBindingsGenerationList (const GGS_regularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_regularBindingsGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_regularBindingsGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_regularBindingsGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @regularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList::GGS_regularBindingsGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_regularBindingsGenerationList::GGS_regularBindingsGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_regularBindingsGenerationList * p = (cCollectionElement_regularBindingsGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_regularBindingsGenerationList) ;
    const GGS_regularBindingsGenerationList_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectList, p->mObject.mProperty_mBindingOptionsString) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_regularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_string & in_mOutletName,
                                                                   const GGS_string & in_mBindingName,
                                                                   const GGS_boundObjectList & in_mBoundObjectList,
                                                                   const GGS_string & in_mBindingOptionsString
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_regularBindingsGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_regularBindingsGenerationList (in_mOutletName, in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString COMMA_THERE)) ;
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

GGS_regularBindingsGenerationList GGS_regularBindingsGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_regularBindingsGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_multipleBindingGenerationList : public cCollectionElement {
  public: GGS_multipleBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_multipleBindingGenerationList (const GGS_string & in_mOutletName,
                                                            const GGS_string & in_mBindingName,
                                                            const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_multipleBindingGenerationList (const GGS_multipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GGS_string & in_mOutletName,
                                                                                                    const GGS_string & in_mBindingName,
                                                                                                    const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mOutletName, in_mBindingName, in_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_multipleBindingGenerationList::cCollectionElement_multipleBindingGenerationList (const GGS_multipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mOutletName, inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_multipleBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_multipleBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_multipleBindingGenerationList (mObject.mProperty_mOutletName, mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @multipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList::GGS_multipleBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingGenerationList::GGS_multipleBindingGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_multipleBindingGenerationList * p = (cCollectionElement_multipleBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_multipleBindingGenerationList) ;
    const GGS_multipleBindingGenerationList_2E_element element (p->mObject.mProperty_mOutletName, p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                   const GGS_string & in_mOutletName,
                                                                   const GGS_string & in_mBindingName,
                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_multipleBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_multipleBindingGenerationList (in_mOutletName, in_mBindingName, in_mBoundObjectExpression COMMA_THERE)) ;
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

GGS_multipleBindingGenerationList GGS_multipleBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_tableViewBindingGenerationList : public cCollectionElement {
  public: GGS_tableViewBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_tableViewBindingGenerationList (const GGS_string & in_mTableValueBindingOutletName,
                                                             const GGS_string & in_mTableValueBindingControllerName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GGS_string & in_mTableValueBindingOutletName,
                                                                                                      const GGS_string & in_mTableValueBindingControllerName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_tableViewBindingGenerationList::cCollectionElement_tableViewBindingGenerationList (const GGS_tableViewBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTableValueBindingOutletName, inElement.mProperty_mTableValueBindingControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_tableViewBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_tableViewBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_tableViewBindingGenerationList (mObject.mProperty_mTableValueBindingOutletName, mObject.mProperty_mTableValueBindingControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @tableViewBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList::GGS_tableViewBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_tableViewBindingGenerationList::GGS_tableViewBindingGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_tableViewBindingGenerationList * p = (cCollectionElement_tableViewBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_tableViewBindingGenerationList) ;
    const GGS_tableViewBindingGenerationList_2E_element element (p->mObject.mProperty_mTableValueBindingOutletName, p->mObject.mProperty_mTableValueBindingControllerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_tableViewBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_string & in_mTableValueBindingOutletName,
                                                                    const GGS_string & in_mTableValueBindingControllerName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_tableViewBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_tableViewBindingGenerationList (in_mTableValueBindingOutletName, in_mTableValueBindingControllerName COMMA_THERE)) ;
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

GGS_tableViewBindingGenerationList GGS_tableViewBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_tableViewBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_ebViewGraphicControllerBindingGenerationList : public cCollectionElement {
  public: GGS_ebViewGraphicControllerBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GGS_string & in_mEBViewOutletName,
                                                                           const GGS_string & in_mArrayControllerControllerName
                                                                           COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GGS_string & in_mEBViewOutletName,
                                                                                                                                  const GGS_string & in_mArrayControllerControllerName
                                                                                                                                  COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mEBViewOutletName, in_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_ebViewGraphicControllerBindingGenerationList::cCollectionElement_ebViewGraphicControllerBindingGenerationList (const GGS_ebViewGraphicControllerBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mEBViewOutletName, inElement.mProperty_mArrayControllerControllerName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_ebViewGraphicControllerBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_ebViewGraphicControllerBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_ebViewGraphicControllerBindingGenerationList (mObject.mProperty_mEBViewOutletName, mObject.mProperty_mArrayControllerControllerName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @ebViewGraphicControllerBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList::GGS_ebViewGraphicControllerBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_ebViewGraphicControllerBindingGenerationList::GGS_ebViewGraphicControllerBindingGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = (cCollectionElement_ebViewGraphicControllerBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList) ;
    const GGS_ebViewGraphicControllerBindingGenerationList_2E_element element (p->mObject.mProperty_mEBViewOutletName, p->mObject.mProperty_mArrayControllerControllerName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_ebViewGraphicControllerBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                  const GGS_string & in_mEBViewOutletName,
                                                                                  const GGS_string & in_mArrayControllerControllerName
                                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_ebViewGraphicControllerBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_ebViewGraphicControllerBindingGenerationList (in_mEBViewOutletName, in_mArrayControllerControllerName COMMA_THERE)) ;
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

GGS_ebViewGraphicControllerBindingGenerationList GGS_ebViewGraphicControllerBindingGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_ebViewGraphicControllerBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

class cCollectionElement_viewGenerationList : public cCollectionElement {
  public: GGS_viewGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_viewGenerationList (const GGS_string & in_mViewName,
                                                 const GGS_abstractViewGeneration & in_mView
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_viewGenerationList (const GGS_viewGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GGS_string & in_mViewName,
                                                                              const GGS_abstractViewGeneration & in_mView
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mViewName, in_mView) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_viewGenerationList::cCollectionElement_viewGenerationList (const GGS_viewGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mViewName, inElement.mProperty_mView) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_viewGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_viewGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_viewGenerationList (mObject.mProperty_mViewName, mObject.mProperty_mView COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @viewGenerationList
//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList::GGS_viewGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_viewGenerationList::GGS_viewGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_viewGenerationList * p = (cCollectionElement_viewGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_viewGenerationList) ;
    const GGS_viewGenerationList_2E_element element (p->mObject.mProperty_mViewName, p->mObject.mProperty_mView) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_viewGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_string & in_mViewName,
                                                        const GGS_abstractViewGeneration & in_mView
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_viewGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_viewGenerationList (in_mViewName, in_mView COMMA_THERE)) ;
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

GGS_viewGenerationList GGS_viewGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  GGS_viewGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
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

