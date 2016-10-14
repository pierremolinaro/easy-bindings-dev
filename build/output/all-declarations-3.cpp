#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-3.h"


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (void) :
mProperty_mOwnerName (),
mProperty_mCustomObjectControllerName (),
mProperty_mClassNameForSwift (),
mProperty_mEntityTypeName (),
mProperty_mSelectionObservablePropertyMap () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::~ GALGAS_customObjectControllerForGeneration_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element::GALGAS_customObjectControllerForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                              const GALGAS_string & inOperand1,
                                                                                                              const GALGAS_string & inOperand2,
                                                                                                              const GALGAS_string & inOperand3,
                                                                                                              const GALGAS_observablePropertyMap & inOperand4) :
mProperty_mOwnerName (inOperand0),
mProperty_mCustomObjectControllerName (inOperand1),
mProperty_mClassNameForSwift (inOperand2),
mProperty_mEntityTypeName (inOperand3),
mProperty_mSelectionObservablePropertyMap (inOperand4) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_customObjectControllerForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_string::constructor_default (HERE),
                                                                GALGAS_observablePropertyMap::constructor_emptyMap (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                              const GALGAS_string & inOperand1,
                                                                                                                              const GALGAS_string & inOperand2,
                                                                                                                              const GALGAS_string & inOperand3,
                                                                                                                              const GALGAS_observablePropertyMap & inOperand4 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid ()) {
    result = GALGAS_customObjectControllerForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_customObjectControllerForGeneration_2D_element::objectCompare (const GALGAS_customObjectControllerForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOwnerName.objectCompare (inOperand.mProperty_mOwnerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mCustomObjectControllerName.objectCompare (inOperand.mProperty_mCustomObjectControllerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mClassNameForSwift.objectCompare (inOperand.mProperty_mClassNameForSwift) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEntityTypeName.objectCompare (inOperand.mProperty_mEntityTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSelectionObservablePropertyMap.objectCompare (inOperand.mProperty_mSelectionObservablePropertyMap) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_customObjectControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mCustomObjectControllerName.isValid () && mProperty_mClassNameForSwift.isValid () && mProperty_mEntityTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_customObjectControllerForGeneration_2D_element::drop (void) {
  mProperty_mOwnerName.drop () ;
  mProperty_mCustomObjectControllerName.drop () ;
  mProperty_mClassNameForSwift.drop () ;
  mProperty_mEntityTypeName.drop () ;
  mProperty_mSelectionObservablePropertyMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_customObjectControllerForGeneration_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @customObjectControllerForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mCustomObjectControllerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mClassNameForSwift.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEntityTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mOwnerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOwnerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mCustomObjectControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomObjectControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mClassNameForSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassNameForSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string GALGAS_customObjectControllerForGeneration_2D_element::getter_mEntityTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyMap GALGAS_customObjectControllerForGeneration_2D_element::getter_mSelectionObservablePropertyMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionObservablePropertyMap ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  @customObjectControllerForGeneration-element type                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ("customObjectControllerForGeneration-element",
                                                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_customObjectControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_customObjectControllerForGeneration_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_customObjectControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_customObjectControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerForGeneration_2D_element GALGAS_customObjectControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_customObjectControllerForGeneration_2D_element result ;
  const GALGAS_customObjectControllerForGeneration_2D_element * p = (const GALGAS_customObjectControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_customObjectControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("customObjectControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (void) :
mProperty_mDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::~ GALGAS_defaultValueList_2D_element (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element::GALGAS_defaultValueList_2D_element (const GALGAS_abstractDefaultValue & inOperand0) :
mProperty_mDefaultValue (inOperand0) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::constructor_new (const GALGAS_abstractDefaultValue & inOperand0 
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_defaultValueList_2D_element (inOperand0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_defaultValueList_2D_element::objectCompare (const GALGAS_defaultValueList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValue.objectCompare (inOperand.mProperty_mDefaultValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_defaultValueList_2D_element::isValid (void) const {
  return mProperty_mDefaultValue.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::drop (void) {
  mProperty_mDefaultValue.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_defaultValueList_2D_element::description (C_String & ioString,
                                                      const int32_t inIndentation) const {
  ioString << "<struct @defaultValueList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mDefaultValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_abstractDefaultValue GALGAS_defaultValueList_2D_element::getter_mDefaultValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValue ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @defaultValueList-element type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_defaultValueList_2D_element ("defaultValueList-element",
                                                    NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_defaultValueList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_defaultValueList_2D_element ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_defaultValueList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_defaultValueList_2D_element (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_defaultValueList_2D_element GALGAS_defaultValueList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_defaultValueList_2D_element result ;
  const GALGAS_defaultValueList_2D_element * p = (const GALGAS_defaultValueList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_defaultValueList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("defaultValueList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

#include "utilities/MF_MemoryControl.h"
#include "galgas2/C_galgas_CLI_Options.h"

#include "files/C_FileManager.h"

//---------------------------------------------------------------------------------------------------------------------*


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                                       N O N    T E R M I N A L    N A M E S                                          
//                                                                                                                      
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
//                                                                                                                      
//                                            SLR states successors table                                               
//                                                                                                                      
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
//                                                                                                                      
//                          Production rules infos (left non terminal, size of right string)                            
//                                                                                                                      
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
      macroMyNew (scanner, C_Lexique_easyBindings_5F_lexique (inCompiler, filePath COMMA_HERE)) ;
      if (scanner->sourceText ().isValid ()) {
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
                                const GALGAS_bool  parameter_1,
                                GALGAS_astDeclarationStruct &  parameter_2,
                                GALGAS_location &  parameter_3
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
        grammar.nt_start_5F_symbol_ (parameter_1, parameter_2, parameter_3, scanner) ;
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
//                                                                                                                      
//                                   'enum_declaration' non terminal implementation                                     
//                                                                                                                      
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
//                                                                                                                      
//                                 'toMany_relationship' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                  'toOne_relationship' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                  'entity_declaration' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                 'document_declaration' non terminal implementation                                   
//                                                                                                                      
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
//                                                                                                                      
//                               'preferences_declaration' non terminal implementation                                  
//                                                                                                                      
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
//                                                                                                                      
//                               'outlet_class_declaration' non terminal implementation                                 
//                                                                                                                      
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
//                                                                                                                      
//                                'binding_specification' non terminal implementation                                   
//                                                                                                                      
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
//                                                                                                                      
//                                  'outlet_declaration' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                 'observable_property' non terminal implementation                                    
//                                                                                                                      
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
//                                                                                                                      
//                                'transient_declaration' non terminal implementation                                   
//                                                                                                                      
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
//                                                                                                                      
//                              'simple_stored_declaration' non terminal implementation                                 
//                                                                                                                      
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
//                                                                                                                      
//                               'stored_array_declaration' non terminal implementation                                 
//                                                                                                                      
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
//                             'array_controller_declaration' non terminal implementation                               
//                                                                                                                      
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
//                                                                                                                      
//                                   'column_bindings' non terminal implementation                                      
//                                                                                                                      
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
// Productions numbers : 36 37 38 39 40 41 42 43 44 45 46
  return inLexique->nextProductionIndex () - 35 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_1' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_1 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 47 48
  return inLexique->nextProductionIndex () - 46 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_2' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_2 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 49 50
  return inLexique->nextProductionIndex () - 48 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_3' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_3 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 51 52
  return inLexique->nextProductionIndex () - 50 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_4' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_4 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 53 54
  return inLexique->nextProductionIndex () - 52 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_5' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_5 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 55 56 57 58 59 60
  return inLexique->nextProductionIndex () - 54 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_6' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_6 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 61 62
  return inLexique->nextProductionIndex () - 60 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_7' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_7 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 63 64 65 66 67 68
  return inLexique->nextProductionIndex () - 62 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_8' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_8 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 69 70 71 72 73 74
  return inLexique->nextProductionIndex () - 68 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_9' non terminal implementation                              
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_9 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 75 76 77 78 79 80 81 82
  return inLexique->nextProductionIndex () - 74 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_10' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_10 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 83 84 85 86
  return inLexique->nextProductionIndex () - 82 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_11' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_11 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 87 88
  return inLexique->nextProductionIndex () - 86 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_12' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_12 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 89 90
  return inLexique->nextProductionIndex () - 88 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_13' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_13 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 91 92
  return inLexique->nextProductionIndex () - 90 ;
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
// Productions numbers : 97 98 99 100 101 102
  return inLexique->nextProductionIndex () - 96 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_17' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_17 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 103 104
  return inLexique->nextProductionIndex () - 102 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_18' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_18 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 105 106
  return inLexique->nextProductionIndex () - 104 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_19' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_19 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 107 108 109 110 111 112 113
  return inLexique->nextProductionIndex () - 106 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_20' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_20 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 114 115
  return inLexique->nextProductionIndex () - 113 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_21' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_21 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 116 117
  return inLexique->nextProductionIndex () - 115 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_22' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_22 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 118 119
  return inLexique->nextProductionIndex () - 117 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_23' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_23 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 120 121
  return inLexique->nextProductionIndex () - 119 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_24' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_24 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 122 123
  return inLexique->nextProductionIndex () - 121 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_25' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_25 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 124 125
  return inLexique->nextProductionIndex () - 123 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_26' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_26 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 126 127
  return inLexique->nextProductionIndex () - 125 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_27' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_27 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 128 129
  return inLexique->nextProductionIndex () - 127 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_28' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_28 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 130 131
  return inLexique->nextProductionIndex () - 129 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_29' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_29 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 132 133
  return inLexique->nextProductionIndex () - 131 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_30' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_30 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 134 135
  return inLexique->nextProductionIndex () - 133 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_31' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_31 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 136 137
  return inLexique->nextProductionIndex () - 135 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_32' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_32 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 138 139 140
  return inLexique->nextProductionIndex () - 137 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_33' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_33 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 141 142
  return inLexique->nextProductionIndex () - 140 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_34' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_34 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 143 144
  return inLexique->nextProductionIndex () - 142 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_35' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_35 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 145 146
  return inLexique->nextProductionIndex () - 144 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_36' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_36 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 147 148 149
  return inLexique->nextProductionIndex () - 146 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_37' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_37 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 150 151
  return inLexique->nextProductionIndex () - 149 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_38' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_38 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 152 153
  return inLexique->nextProductionIndex () - 151 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_39' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_39 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 154 155
  return inLexique->nextProductionIndex () - 153 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_40' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_40 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 156 157
  return inLexique->nextProductionIndex () - 155 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_41' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_41 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 158 159 160 161 162
  return inLexique->nextProductionIndex () - 157 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_42' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_42 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 163 164
  return inLexique->nextProductionIndex () - 162 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_43' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_43 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 165 166 167 168 169 170 171
  return inLexique->nextProductionIndex () - 164 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_44' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_44 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 172 173
  return inLexique->nextProductionIndex () - 171 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_45' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_45 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 174 175
  return inLexique->nextProductionIndex () - 173 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_46' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_46 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 176 177 178
  return inLexique->nextProductionIndex () - 175 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_47' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_47 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 179 180
  return inLexique->nextProductionIndex () - 178 ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                      
//                           'select_easyBindings_5F_syntax_48' non terminal implementation                             
//                                                                                                                      
//---------------------------------------------------------------------------------------------------------------------*

int32_t cGrammar_easyBindings_5F_grammar::select_easyBindings_5F_syntax_48 (C_Lexique_easyBindings_5F_lexique * inLexique) {
// Productions numbers : 181 182
  return inLexique->nextProductionIndex () - 180 ;
}

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*



typeComparisonResult GALGAS_astDeclaration::objectCompare (const GALGAS_astDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration::GALGAS_astDeclaration (void) :
AC_GALGAS_class () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration::GALGAS_astDeclaration (const cPtr_astDeclaration * inSourcePtr) :
AC_GALGAS_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_astDeclaration * p = (const cPtr_astDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDeclaration) ;
    result = p->mProperty_mUserDefined ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_astDeclaration::getter_mUserDefined (UNUSED_LOCATION_ARGS) const {
  return mProperty_mUserDefined ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                       Pointer class for @astDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_astDeclaration::cPtr_astDeclaration (const GALGAS_bool & in_mUserDefined
                                          COMMA_LOCATION_ARGS) :
acPtr_class (THERE),
mProperty_mUserDefined (in_mUserDefined) {
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @astDeclaration type                                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astDeclaration ("astDeclaration",
                                       NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_astDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_astDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_astDeclaration GALGAS_astDeclaration::extractObject (const GALGAS_object & inObject,
                                                            C_Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  GALGAS_astDeclaration result ;
  const GALGAS_astDeclaration * p = (const GALGAS_astDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

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
cGenericAbstractEnumerator (inOrder) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
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

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mSecondaryPropertyList (),
mProperty_mMainXibDescriptorList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayList (),
mProperty_mArrayControllerForGeneration (),
mProperty_mSignatureList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                const GALGAS_stringset & inOperand8) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mSecondaryPropertyList (inOperand3),
mProperty_mMainXibDescriptorList (inOperand4),
mProperty_mExternSwiftFunctionList (inOperand5),
mProperty_mStoredArrayList (inOperand6),
mProperty_mArrayControllerForGeneration (inOperand7),
mProperty_mSignatureList (inOperand8) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_storedArrayPropertyList::constructor_emptyList (HERE),
                                 GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_secondaryPropertyList & inOperand3,
                                                                const GALGAS_mainXibDescriptorList & inOperand4,
                                                                const GALGAS_externSwiftFunctionList & inOperand5,
                                                                const GALGAS_storedArrayPropertyList & inOperand6,
                                                                const GALGAS_arrayControllerForGeneration & inOperand7,
                                                                const GALGAS_stringset & inOperand8 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_prefDeclaration::objectCompare (const GALGAS_prefDeclaration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mOutletDeclarationList.objectCompare (inOperand.mProperty_mOutletDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (inOperand.mProperty_mSimpleStoredAttributeList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionDeclarationList.objectCompare (inOperand.mProperty_mActionDeclarationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSecondaryPropertyList.objectCompare (inOperand.mProperty_mSecondaryPropertyList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayList.objectCompare (inOperand.mProperty_mStoredArrayList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (inOperand.mProperty_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mSecondaryPropertyList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayList.isValid () && mProperty_mArrayControllerForGeneration.isValid () && mProperty_mSignatureList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mSecondaryPropertyList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayList.drop () ;
  mProperty_mArrayControllerForGeneration.drop () ;
  mProperty_mSignatureList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_prefDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @prefDeclaration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_prefDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_prefDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_prefDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_prefDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_prefDeclaration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_prefDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyList GALGAS_prefDeclaration::getter_mStoredArrayList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_prefDeclaration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_prefDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @prefDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_propertyClassDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassPropertyName.objectCompare (p->mProperty_mClassPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDefaultValues.objectCompare (p->mProperty_mDefaultValues) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_propertyClassDeclaration::objectCompare (const GALGAS_propertyClassDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDeclaration::GALGAS_propertyClassDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDeclaration::GALGAS_propertyClassDeclaration (const cPtr_propertyClassDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_propertyClassDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDeclaration GALGAS_propertyClassDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                                  const GALGAS_lstring & inAttribute_mClassPropertyName,
                                                                                  const GALGAS_propertyClassDefaultValues & inAttribute_mDefaultValues
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassPropertyName.isValid () && inAttribute_mDefaultValues.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_propertyClassDeclaration (inAttribute_mUserDefined, inAttribute_mClassPropertyName, inAttribute_mDefaultValues COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_propertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
    result = p->mProperty_mClassPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_propertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDefaultValues GALGAS_propertyClassDeclaration::getter_mDefaultValues (UNUSED_LOCATION_ARGS) const {
  GALGAS_propertyClassDefaultValues result ;
  if (NULL != mObjectPtr) {
    const cPtr_propertyClassDeclaration * p = (const cPtr_propertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_propertyClassDeclaration) ;
    result = p->mProperty_mDefaultValues ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDefaultValues cPtr_propertyClassDeclaration::getter_mDefaultValues (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDefaultValues ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                  Pointer class for @propertyClassDeclaration class                                  *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_propertyClassDeclaration::cPtr_propertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                                              const GALGAS_lstring & in_mClassPropertyName,
                                                              const GALGAS_propertyClassDefaultValues & in_mDefaultValues
                                                              COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassPropertyName (in_mClassPropertyName),
mProperty_mDefaultValues (in_mDefaultValues) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_propertyClassDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDeclaration ;
}

void cPtr_propertyClassDeclaration::description (C_String & ioString,
                                                 const int32_t inIndentation) const {
  ioString << "[@propertyClassDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassPropertyName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDefaultValues.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_propertyClassDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_propertyClassDeclaration (mProperty_mUserDefined, mProperty_mClassPropertyName, mProperty_mDefaultValues COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @propertyClassDeclaration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyClassDeclaration ("propertyClassDeclaration",
                                                 & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_propertyClassDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyClassDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_propertyClassDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyClassDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_propertyClassDeclaration GALGAS_propertyClassDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_propertyClassDeclaration result ;
  const GALGAS_propertyClassDeclaration * p = (const GALGAS_propertyClassDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_propertyClassDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyClassDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_transientPropertyClassDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientPropertyClassDeclaration * p = (const cPtr_transientPropertyClassDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientPropertyClassDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassPropertyName.objectCompare (p->mProperty_mClassPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_transientPropertyClassDeclaration::objectCompare (const GALGAS_transientPropertyClassDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientPropertyClassDeclaration::GALGAS_transientPropertyClassDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientPropertyClassDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientPropertyClassDeclaration::GALGAS_transientPropertyClassDeclaration (const cPtr_transientPropertyClassDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientPropertyClassDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                    const GALGAS_lstring & inAttribute_mClassPropertyName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyClassDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientPropertyClassDeclaration (inAttribute_mUserDefined, inAttribute_mClassPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientPropertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientPropertyClassDeclaration * p = (const cPtr_transientPropertyClassDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientPropertyClassDeclaration) ;
    result = p->mProperty_mClassPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_transientPropertyClassDeclaration::getter_mClassPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @transientPropertyClassDeclaration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_transientPropertyClassDeclaration::cPtr_transientPropertyClassDeclaration (const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mClassPropertyName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassPropertyName (in_mClassPropertyName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_transientPropertyClassDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ;
}

void cPtr_transientPropertyClassDeclaration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@transientPropertyClassDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_transientPropertyClassDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientPropertyClassDeclaration (mProperty_mUserDefined, mProperty_mClassPropertyName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @transientPropertyClassDeclaration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ("transientPropertyClassDeclaration",
                                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientPropertyClassDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyClassDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientPropertyClassDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyClassDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientPropertyClassDeclaration GALGAS_transientPropertyClassDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyClassDeclaration result ;
  const GALGAS_transientPropertyClassDeclaration * p = (const GALGAS_transientPropertyClassDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyClassDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyClassDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_enumDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumTypeName.objectCompare (p->mProperty_mEnumTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_enumDeclaration::objectCompare (const GALGAS_enumDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration::GALGAS_enumDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                  GALGAS_lstring::constructor_default (HERE),
                                                  GALGAS_lstringlist::constructor_emptyList (HERE)
                                                  COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration::GALGAS_enumDeclaration (const cPtr_enumDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                const GALGAS_lstring & inAttribute_mEnumTypeName,
                                                                const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEnumTypeName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumDeclaration (inAttribute_mUserDefined, inAttribute_mEnumTypeName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_enumDeclaration::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mProperty_mEnumTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_enumDeclaration::getter_mEnumTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_enumDeclaration::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_enumDeclaration * p = (const cPtr_enumDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumDeclaration) ;
    result = p->mProperty_mEnumConstantNameList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_enumDeclaration::getter_mEnumConstantNameList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnumConstantNameList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @enumDeclaration class                                       *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_enumDeclaration::cPtr_enumDeclaration (const GALGAS_bool & in_mUserDefined,
                                            const GALGAS_lstring & in_mEnumTypeName,
                                            const GALGAS_lstringlist & in_mEnumConstantNameList
                                            COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEnumTypeName (in_mEnumTypeName),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_enumDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

void cPtr_enumDeclaration::description (C_String & ioString,
                                        const int32_t inIndentation) const {
  ioString << "[@enumDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_enumDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumDeclaration (mProperty_mUserDefined, mProperty_mEnumTypeName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                @enumDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumDeclaration ("enumDeclaration",
                                        & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_enumDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_enumDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_enumDeclaration GALGAS_enumDeclaration::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumDeclaration result ;
  const GALGAS_enumDeclaration * p = (const GALGAS_enumDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_classDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_classDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (p->mProperty_mExternSwiftFunctionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_classDeclaration::objectCompare (const GALGAS_classDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classDeclaration::GALGAS_classDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classDeclaration GALGAS_classDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_classDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                   GALGAS_lstring::constructor_default (HERE),
                                                   GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                   GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                                   GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                   GALGAS_lstringlist::constructor_emptyList (HERE)
                                                   COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classDeclaration::GALGAS_classDeclaration (const cPtr_classDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_classDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classDeclaration GALGAS_classDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                  const GALGAS_lstring & inAttribute_mClassName,
                                                                  const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                  const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                  const GALGAS_externSwiftFunctionList & inAttribute_mExternSwiftFunctionList,
                                                                  const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                  const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_classDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mClassName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mExternSwiftFunctionList.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_classDeclaration (inAttribute_mUserDefined, inAttribute_mClassName, inAttribute_mSimpleStoredAttributeList, inAttribute_mSecondaryPropertyList, inAttribute_mExternSwiftFunctionList, inAttribute_mExternSwiftDelegateList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_classDeclaration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mClassName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_classDeclaration::getter_mClassName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_classDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_classDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_classDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList cPtr_classDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_classDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftFunctionList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mExternSwiftFunctionList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList cPtr_classDeclaration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList GALGAS_classDeclaration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  GALGAS_externSwiftDelegateList result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mExternSwiftDelegateList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftDelegateList cPtr_classDeclaration::getter_mExternSwiftDelegateList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftDelegateList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_classDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_classDeclaration * p = (const cPtr_classDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_classDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_classDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                      Pointer class for @classDeclaration class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_classDeclaration::cPtr_classDeclaration (const GALGAS_bool & in_mUserDefined,
                                              const GALGAS_lstring & in_mClassName,
                                              const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                              const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                              const GALGAS_externSwiftFunctionList & in_mExternSwiftFunctionList,
                                              const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                              const GALGAS_lstringlist & in_mActionDeclarationList
                                              COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mExternSwiftFunctionList (in_mExternSwiftFunctionList),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_classDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclaration ;
}

void cPtr_classDeclaration::description (C_String & ioString,
                                         const int32_t inIndentation) const {
  ioString << "[@classDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_classDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_classDeclaration (mProperty_mUserDefined, mProperty_mClassName, mProperty_mSimpleStoredAttributeList, mProperty_mSecondaryPropertyList, mProperty_mExternSwiftFunctionList, mProperty_mExternSwiftDelegateList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @classDeclaration type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_classDeclaration ("classDeclaration",
                                         & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_classDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_classDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_classDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_classDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_classDeclaration GALGAS_classDeclaration::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_classDeclaration result ;
  const GALGAS_classDeclaration * p = (const GALGAS_classDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_classDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("classDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_entityDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToOneRelationshipList.objectCompare (p->mProperty_mToOneRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mToManyRelationshipList.objectCompare (p->mProperty_mToManyRelationshipList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_entityDeclaration::objectCompare (const GALGAS_entityDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration::GALGAS_entityDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_lstring::constructor_default (HERE),
                                                    GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                    GALGAS_toOneRelationshipList::constructor_emptyList (HERE),
                                                    GALGAS_toManyRelationshipList::constructor_emptyList (HERE),
                                                    GALGAS_secondaryPropertyList::constructor_emptyList (HERE),
                                                    GALGAS_stringset::constructor_emptySet (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE)
                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration::GALGAS_entityDeclaration (const cPtr_entityDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                    const GALGAS_lstring & inAttribute_mEntityName,
                                                                    const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                    const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                    const GALGAS_toOneRelationshipList & inAttribute_mToOneRelationshipList,
                                                                    const GALGAS_toManyRelationshipList & inAttribute_mToManyRelationshipList,
                                                                    const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList,
                                                                    const GALGAS_stringset & inAttribute_mSignatureList,
                                                                    const GALGAS_lstringlist & inAttribute_mActionDeclarationList
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mToOneRelationshipList.isValid () && inAttribute_mToManyRelationshipList.isValid () && inAttribute_mSecondaryPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclaration (inAttribute_mUserDefined, inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredAttributeList, inAttribute_mToOneRelationshipList, inAttribute_mToManyRelationshipList, inAttribute_mSecondaryPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityDeclaration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_entityDeclaration::getter_mEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_entityDeclaration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSuperEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_entityDeclaration::getter_mSuperEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSuperEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_entityDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_entityDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList GALGAS_entityDeclaration::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toOneRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mToOneRelationshipList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toOneRelationshipList cPtr_entityDeclaration::getter_mToOneRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToOneRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList GALGAS_entityDeclaration::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  GALGAS_toManyRelationshipList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mToManyRelationshipList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_toManyRelationshipList cPtr_entityDeclaration::getter_mToManyRelationshipList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mToManyRelationshipList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_entityDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList cPtr_entityDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset GALGAS_entityDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringset result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mSignatureList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset cPtr_entityDeclaration::getter_mSignatureList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSignatureList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_entityDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_entityDeclaration * p = (const cPtr_entityDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_entityDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @entityDeclaration class                                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_entityDeclaration::cPtr_entityDeclaration (const GALGAS_bool & in_mUserDefined,
                                                const GALGAS_lstring & in_mEntityName,
                                                const GALGAS_lstring & in_mSuperEntityName,
                                                const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                const GALGAS_toOneRelationshipList & in_mToOneRelationshipList,
                                                const GALGAS_toManyRelationshipList & in_mToManyRelationshipList,
                                                const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList,
                                                const GALGAS_stringset & in_mSignatureList,
                                                const GALGAS_lstringlist & in_mActionDeclarationList
                                                COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mToOneRelationshipList (in_mToOneRelationshipList),
mProperty_mToManyRelationshipList (in_mToManyRelationshipList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_entityDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

void cPtr_entityDeclaration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@entityDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToOneRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mToManyRelationshipList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_entityDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclaration (mProperty_mUserDefined, mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mSimpleStoredAttributeList, mProperty_mToOneRelationshipList, mProperty_mToManyRelationshipList, mProperty_mSecondaryPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @entityDeclaration type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclaration ("entityDeclaration",
                                          & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_entityDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_entityDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_entityDeclaration GALGAS_entityDeclaration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclaration result ;
  const GALGAS_entityDeclaration * p = (const GALGAS_entityDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_documentDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_documentDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredAttributeList.objectCompare (p->mProperty_mSimpleStoredAttributeList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSecondaryPropertyList.objectCompare (p->mProperty_mSecondaryPropertyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_documentDeclaration::objectCompare (const GALGAS_documentDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration::GALGAS_documentDeclaration (void) :
GALGAS_astDeclaration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_documentDeclaration::constructor_new (GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                      GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                      GALGAS_lstringlist::constructor_emptyList (HERE),
                                                      GALGAS_secondaryPropertyList::constructor_emptyList (HERE)
                                                      COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration::GALGAS_documentDeclaration (const cPtr_documentDeclaration * inSourcePtr) :
GALGAS_astDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_documentDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::constructor_new (const GALGAS_bool & inAttribute_mUserDefined,
                                                                        const GALGAS_lstring & inAttribute_mDocumentName,
                                                                        const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                        const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                        const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredAttributeList,
                                                                        const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                        const GALGAS_secondaryPropertyList & inAttribute_mSecondaryPropertyList
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  if (inAttribute_mUserDefined.isValid () && inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mSimpleStoredAttributeList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mSecondaryPropertyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_documentDeclaration (inAttribute_mUserDefined, inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mOutletDeclarationList, inAttribute_mSimpleStoredAttributeList, inAttribute_mActionDeclarationList, inAttribute_mSecondaryPropertyList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentDeclaration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mDocumentName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_documentDeclaration::getter_mDocumentName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDocumentName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_documentDeclaration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mRootEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_documentDeclaration::getter_mRootEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRootEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList GALGAS_documentDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_outletDeclarationList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mOutletDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_outletDeclarationList cPtr_documentDeclaration::getter_mOutletDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList GALGAS_documentDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_simpleStoredPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mSimpleStoredAttributeList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyList cPtr_documentDeclaration::getter_mSimpleStoredAttributeList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredAttributeList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_documentDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mActionDeclarationList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_documentDeclaration::getter_mActionDeclarationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionDeclarationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList GALGAS_documentDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_secondaryPropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_documentDeclaration * p = (const cPtr_documentDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_documentDeclaration) ;
    result = p->mProperty_mSecondaryPropertyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_secondaryPropertyList cPtr_documentDeclaration::getter_mSecondaryPropertyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSecondaryPropertyList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                    Pointer class for @documentDeclaration class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_documentDeclaration::cPtr_documentDeclaration (const GALGAS_bool & in_mUserDefined,
                                                    const GALGAS_lstring & in_mDocumentName,
                                                    const GALGAS_lstring & in_mRootEntityName,
                                                    const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                    const GALGAS_simpleStoredPropertyList & in_mSimpleStoredAttributeList,
                                                    const GALGAS_lstringlist & in_mActionDeclarationList,
                                                    const GALGAS_secondaryPropertyList & in_mSecondaryPropertyList
                                                    COMMA_LOCATION_ARGS) :
cPtr_astDeclaration (in_mUserDefined COMMA_THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mSimpleStoredAttributeList (in_mSimpleStoredAttributeList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mSecondaryPropertyList (in_mSecondaryPropertyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_documentDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

void cPtr_documentDeclaration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@documentDeclaration:" ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSecondaryPropertyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_documentDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_documentDeclaration (mProperty_mUserDefined, mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mOutletDeclarationList, mProperty_mSimpleStoredAttributeList, mProperty_mActionDeclarationList, mProperty_mSecondaryPropertyList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @documentDeclaration type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_documentDeclaration ("documentDeclaration",
                                            & kTypeDescriptor_GALGAS_astDeclaration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_documentDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_documentDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_documentDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_documentDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_documentDeclaration GALGAS_documentDeclaration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_documentDeclaration result ;
  const GALGAS_documentDeclaration * p = (const GALGAS_documentDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_documentDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("documentDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Extension method '@prefDeclaration typeInventory'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_typeInventory (const GALGAS_prefDeclaration inObject,
                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_typeInventory (inObject.mProperty_mSimpleStoredAttributeList, ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 65)) ;
  cEnumerator_secondaryPropertyList enumerator_2985 (inObject.mProperty_mSecondaryPropertyList, kENUMERATION_UP) ;
  while (enumerator_2985.hasCurrentObject ()) {
    callExtensionMethod_typeInventory ((const cPtr_abstractSecondaryProperty *) enumerator_2985.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioUnifiedTypeMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 67)) ;
    enumerator_2985.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension method '@prefDeclaration solveSecondaryProperty'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_solveSecondaryProperty (const GALGAS_prefDeclaration /* inObject */,
                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                             const GALGAS_unifiedTypeMap /* constinArgument_inUnifiedTypeMap */,
                                             const GALGAS_secondaryPropertyList constinArgument_inPropertiesToSolve,
                                             GALGAS_secondaryPropertyList & outArgument_outUnsolvedProperties,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUnsolvedProperties.drop () ; // Release 'out' argument
  outArgument_outUnsolvedProperties = GALGAS_secondaryPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 81)) ;
  GALGAS_observablePropertyMap var_preferencesObservablePropertyMap_3475 = ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap ;
  cEnumerator_secondaryPropertyList enumerator_3569 (constinArgument_inPropertiesToSolve, kENUMERATION_UP) ;
  while (enumerator_3569.hasCurrentObject ()) {
    callExtensionMethod_tryToSolveSecondaryProperty ((const cPtr_abstractSecondaryProperty *) enumerator_3569.current_mSecondaryProperty (HERE).ptr (), ioArgument_ioSemanticContext, GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 86)), var_preferencesObservablePropertyMap_3475, outArgument_outUnsolvedProperties, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 84)) ;
    enumerator_3569.gotoNextObject () ;
  }
  ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap = var_preferencesObservablePropertyMap_3475 ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Extension method '@prefDeclaration buildObservablePropertyMapsFromStoredProperties'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_buildObservablePropertyMapsFromStoredProperties (const GALGAS_prefDeclaration inObject,
                                                                      const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  extensionMethod_buildObservablePropertyMap (inObject.mProperty_mSimpleStoredAttributeList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 103)) ;
  extensionMethod_buildObservablePropertyMap (inObject.mProperty_mStoredArrayList, constinArgument_inUnifiedTypeMap, ioArgument_ioSemanticContext.mProperty_mPreferencesObservablePropertyMap, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 108)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension method '@prefDeclaration semanticAnalysis'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_semanticAnalysis (const GALGAS_prefDeclaration inObject,
                                       const GALGAS_externSwiftFunctionList constinArgument_inExternSwiftFunctionList,
                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                       GALGAS_structForGeneration & ioArgument_ioGeneration,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.galgas", 122)) ;
  temp_0.addAssign_operation (GALGAS_string ("awakeFromNib")  COMMA_SOURCE_FILE ("preferences.galgas", 122)) ;
  temp_0.addAssign_operation (GALGAS_string ("init")  COMMA_SOURCE_FILE ("preferences.galgas", 122)) ;
  GALGAS_stringset var_availableCallers_5076 = temp_0 ;
  GALGAS_externFunctionMap var_externFunctionMap_5144 = GALGAS_externFunctionMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 123)) ;
  cEnumerator_externSwiftFunctionList enumerator_5187 (constinArgument_inExternSwiftFunctionList, kENUMERATION_UP) ;
  while (enumerator_5187.hasCurrentObject ()) {
    {
    var_externFunctionMap_5144.setter_insertKey (enumerator_5187.current_mExternSwiftFunctionName (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 125)) ;
    }
    const enumGalgasBool test_1 = var_availableCallers_5076.getter_hasKey (enumerator_5187.current_mCallerName (HERE).mProperty_string COMMA_SOURCE_FILE ("preferences.galgas", 126)).operator_not (SOURCE_FILE ("preferences.galgas", 126)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_string var_s_5326 = GALGAS_string ("invalid caller; available callers:") ;
      cEnumerator_stringset enumerator_5401 (var_availableCallers_5076, kENUMERATION_UP) ;
      while (enumerator_5401.hasCurrentObject ()) {
        var_s_5326.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_5401.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 129)) ;
        enumerator_5401.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_5187.current_mCallerName (HERE).getter_location (SOURCE_FILE ("preferences.galgas", 131)), var_s_5326, fixItArray2  COMMA_SOURCE_FILE ("preferences.galgas", 131)) ;
    }
    enumerator_5187.gotoNextObject () ;
  }
  GALGAS_simpleStoredPropertyListForGeneration var_simpleStoredPropertyListForGeneration_5797 ;
  extensionMethod_simpleStoredPropertySemanticAnalysis (inObject.mProperty_mSimpleStoredAttributeList, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 136)), constinArgument_inSemanticContext.mProperty_mUnifiedTypeMap, ioArgument_ioGeneration.mProperty_mValidationStubRoutineListForGeneration, var_simpleStoredPropertyListForGeneration_5797, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 135)) ;
  GALGAS_storedArrayPropertyListForGeneration var_storedArrayPropertyListForGeneration_6017 ;
  extensionMethod_storedArrayPropertySemanticAnalysis (inObject.mProperty_mStoredArrayList, constinArgument_inSemanticContext.mProperty_mUnifiedTypeMap, var_storedArrayPropertyListForGeneration_6017, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 142)) ;
  GALGAS_transientDefinitionListForGeneration var_transientDefinitionListForGeneration_6122 = GALGAS_transientDefinitionListForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 147)) ;
  GALGAS_arrayControllerForGeneration var_arrayControllerListForGeneration_6192 = GALGAS_arrayControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 148)) ;
  cEnumerator_secondaryPropertyList enumerator_6236 (inObject.mProperty_mSecondaryPropertyList, kENUMERATION_UP) ;
  while (enumerator_6236.hasCurrentObject ()) {
    GALGAS_selectionControllerForGeneration joker_6547 = GALGAS_selectionControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 158)) ;
    GALGAS_customObjectControllerForGeneration joker_6583 = GALGAS_customObjectControllerForGeneration::constructor_emptyList (SOURCE_FILE ("preferences.galgas", 159)) ;
    callExtensionMethod_secondaryPropertySemanticAnalysis ((const cPtr_abstractSecondaryProperty *) enumerator_6236.current_mSecondaryProperty (HERE).ptr (), function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 151)), GALGAS_string::makeEmptyString (), GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 153)), constinArgument_inSemanticContext, constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap, var_transientDefinitionListForGeneration_6122, var_arrayControllerListForGeneration_6192, joker_6547, joker_6583, ioArgument_ioGeneration.mProperty_mNeededOutletClasses, inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 150)) ;
    enumerator_6236.gotoNextObject () ;
  }
  ioArgument_ioGeneration.mProperty_mTransientListForGeneration.plusAssign_operation(var_transientDefinitionListForGeneration_6122, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 163)) ;
  ioArgument_ioGeneration.mProperty_mAllArrayControllerForGeneration.plusAssign_operation(var_arrayControllerListForGeneration_6192, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 164)) ;
  GALGAS_actionMap var_actionMap_6925 ;
  {
  routine_buildActionMap (inObject.mProperty_mActionDeclarationList, var_actionMap_6925, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 166)) ;
  }
  cEnumerator_actionMap enumerator_6948 (var_actionMap_6925, kENUMERATION_UP) ;
  while (enumerator_6948.hasCurrentObject ()) {
    ioArgument_ioGeneration.mProperty_mActionListForGeneration.addAssign_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 169)), enumerator_6948.current_lkey (HERE).mProperty_string  COMMA_SOURCE_FILE ("preferences.galgas", 168)) ;
    enumerator_6948.gotoNextObject () ;
  }
  GALGAS_regularBindingsGenerationList var_regularBindingsGenerationList_7361 ;
  GALGAS_multipleBindingGenerationList var_multipleBindingGenerationList_7431 ;
  GALGAS_actionBindingListForGeneration var_actionBindingListForGeneration_7503 ;
  GALGAS_decoratedOutletMap var_outletMap_7542 ;
  GALGAS_tableViewBindingGenerationList var_tableViewBindingGenerationList_7614 ;
  {
  routine_analyzeOutlets (GALGAS_observablePropertyMap::constructor_emptyMap (SOURCE_FILE ("preferences.galgas", 174)), constinArgument_inSemanticContext, inObject.mProperty_mOutletDeclarationList, constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap, var_actionMap_6925, function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas", 179)), ioArgument_ioGeneration, var_regularBindingsGenerationList_7361, var_multipleBindingGenerationList_7431, var_actionBindingListForGeneration_7503, var_outletMap_7542, var_tableViewBindingGenerationList_7614, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas", 173)) ;
  }
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mSimpleStoredPropertyListForGeneration = var_simpleStoredPropertyListForGeneration_5797 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mTransientDefinitionListForGeneration = var_transientDefinitionListForGeneration_6122 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mRegularBindingsGenerationList = var_regularBindingsGenerationList_7361 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mActionBindingListForGeneration = var_actionBindingListForGeneration_7503 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mMultipleBindingGenerationList = var_multipleBindingGenerationList_7431 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mOutletMap = var_outletMap_7542 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mMainXibDescriptorList = inObject.mProperty_mMainXibDescriptorList ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mExternSwiftFunctionList = constinArgument_inExternSwiftFunctionList ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mStoredArrayPropertyListForGeneration = var_storedArrayPropertyListForGeneration_6017 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mArrayControllerForGeneration = var_arrayControllerListForGeneration_6192 ;
  ioArgument_ioGeneration.mProperty_mPreferencesForGeneration.mProperty_mTableViewBindingGenerationList = var_tableViewBindingGenerationList_7614 ;
}


//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (void) :
mProperty_mSimpleStoredPropertyListForGeneration (),
mProperty_mTransientDefinitionListForGeneration (),
mProperty_mRegularBindingsGenerationList (),
mProperty_mMultipleBindingGenerationList (),
mProperty_mActionBindingListForGeneration (),
mProperty_mOutletMap (),
mProperty_mMainXibDescriptorList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mStoredArrayPropertyListForGeneration (),
mProperty_mArrayControllerForGeneration (),
mProperty_mTableViewBindingGenerationList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::~ GALGAS_preferencesForGeneration (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration::GALGAS_preferencesForGeneration (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10) :
mProperty_mSimpleStoredPropertyListForGeneration (inOperand0),
mProperty_mTransientDefinitionListForGeneration (inOperand1),
mProperty_mRegularBindingsGenerationList (inOperand2),
mProperty_mMultipleBindingGenerationList (inOperand3),
mProperty_mActionBindingListForGeneration (inOperand4),
mProperty_mOutletMap (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mExternSwiftFunctionList (inOperand7),
mProperty_mStoredArrayPropertyListForGeneration (inOperand8),
mProperty_mArrayControllerForGeneration (inOperand9),
mProperty_mTableViewBindingGenerationList (inOperand10) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_preferencesForGeneration (GALGAS_simpleStoredPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_transientDefinitionListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                          GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                          GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                          GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                          GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                          GALGAS_storedArrayPropertyListForGeneration::constructor_emptyList (HERE),
                                          GALGAS_arrayControllerForGeneration::constructor_emptyList (HERE),
                                          GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::constructor_new (const GALGAS_simpleStoredPropertyListForGeneration & inOperand0,
                                                                                  const GALGAS_transientDefinitionListForGeneration & inOperand1,
                                                                                  const GALGAS_regularBindingsGenerationList & inOperand2,
                                                                                  const GALGAS_multipleBindingGenerationList & inOperand3,
                                                                                  const GALGAS_actionBindingListForGeneration & inOperand4,
                                                                                  const GALGAS_decoratedOutletMap & inOperand5,
                                                                                  const GALGAS_mainXibDescriptorList & inOperand6,
                                                                                  const GALGAS_externSwiftFunctionList & inOperand7,
                                                                                  const GALGAS_storedArrayPropertyListForGeneration & inOperand8,
                                                                                  const GALGAS_arrayControllerForGeneration & inOperand9,
                                                                                  const GALGAS_tableViewBindingGenerationList & inOperand10 
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GALGAS_preferencesForGeneration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_preferencesForGeneration::objectCompare (const GALGAS_preferencesForGeneration & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mSimpleStoredPropertyListForGeneration.objectCompare (inOperand.mProperty_mSimpleStoredPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTransientDefinitionListForGeneration.objectCompare (inOperand.mProperty_mTransientDefinitionListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (inOperand.mProperty_mRegularBindingsGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (inOperand.mProperty_mMultipleBindingGenerationList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActionBindingListForGeneration.objectCompare (inOperand.mProperty_mActionBindingListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletMap.objectCompare (inOperand.mProperty_mOutletMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mStoredArrayPropertyListForGeneration.objectCompare (inOperand.mProperty_mStoredArrayPropertyListForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mArrayControllerForGeneration.objectCompare (inOperand.mProperty_mArrayControllerForGeneration) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (inOperand.mProperty_mTableViewBindingGenerationList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_preferencesForGeneration::isValid (void) const {
  return mProperty_mSimpleStoredPropertyListForGeneration.isValid () && mProperty_mTransientDefinitionListForGeneration.isValid () && mProperty_mRegularBindingsGenerationList.isValid () && mProperty_mMultipleBindingGenerationList.isValid () && mProperty_mActionBindingListForGeneration.isValid () && mProperty_mOutletMap.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mStoredArrayPropertyListForGeneration.isValid () && mProperty_mArrayControllerForGeneration.isValid () && mProperty_mTableViewBindingGenerationList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::drop (void) {
  mProperty_mSimpleStoredPropertyListForGeneration.drop () ;
  mProperty_mTransientDefinitionListForGeneration.drop () ;
  mProperty_mRegularBindingsGenerationList.drop () ;
  mProperty_mMultipleBindingGenerationList.drop () ;
  mProperty_mActionBindingListForGeneration.drop () ;
  mProperty_mOutletMap.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mStoredArrayPropertyListForGeneration.drop () ;
  mProperty_mArrayControllerForGeneration.drop () ;
  mProperty_mTableViewBindingGenerationList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_preferencesForGeneration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "<struct @preferencesForGeneration:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mSimpleStoredPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTransientDefinitionListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActionBindingListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mStoredArrayPropertyListForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mArrayControllerForGeneration.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_simpleStoredPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mSimpleStoredPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSimpleStoredPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientDefinitionListForGeneration GALGAS_preferencesForGeneration::getter_mTransientDefinitionListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientDefinitionListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingsGenerationList GALGAS_preferencesForGeneration::getter_mRegularBindingsGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingsGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingGenerationList GALGAS_preferencesForGeneration::getter_mMultipleBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMultipleBindingGenerationList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_actionBindingListForGeneration GALGAS_preferencesForGeneration::getter_mActionBindingListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mActionBindingListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_decoratedOutletMap GALGAS_preferencesForGeneration::getter_mOutletMap (UNUSED_LOCATION_ARGS) const {
  return mProperty_mOutletMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_mainXibDescriptorList GALGAS_preferencesForGeneration::getter_mMainXibDescriptorList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mMainXibDescriptorList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_externSwiftFunctionList GALGAS_preferencesForGeneration::getter_mExternSwiftFunctionList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mExternSwiftFunctionList ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_storedArrayPropertyListForGeneration GALGAS_preferencesForGeneration::getter_mStoredArrayPropertyListForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mStoredArrayPropertyListForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerForGeneration GALGAS_preferencesForGeneration::getter_mArrayControllerForGeneration (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_tableViewBindingGenerationList GALGAS_preferencesForGeneration::getter_mTableViewBindingGenerationList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTableViewBindingGenerationList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           @preferencesForGeneration type                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_preferencesForGeneration ("preferencesForGeneration",
                                                 NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_preferencesForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_preferencesForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_preferencesForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_preferencesForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_preferencesForGeneration GALGAS_preferencesForGeneration::extractObject (const GALGAS_object & inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_preferencesForGeneration result ;
  const GALGAS_preferencesForGeneration * p = (const GALGAS_preferencesForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_preferencesForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("preferencesForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@observablePropertyAST modelString'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_observablePropertyAST & inObject,
                                           const GALGAS_string & constinArgument_inSelf,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_4999 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_4999->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 123)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 123)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 123)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_5149 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5149->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5149->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 125)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_5272 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_5272->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string (".rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 127)).add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("observable-property.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 127)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_5362 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5362->mAssociatedValue0 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 129)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_5501 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5501->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5501->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 131)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_5632 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5632->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_5632->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 133)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 133)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 133)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_5777 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5777->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 135)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 135)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_5937 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_5937->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_5937->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (GALGAS_string ("!."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("observable-property.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 137)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_6080 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6080->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6080->mAssociatedValue1 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 139)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_6293 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_6293->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_6293->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_6293->mAssociatedValue2 ;
      result_outResult = constinArgument_inSelf.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_controllerName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 141)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("self.signatureObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("self.versionObserver ()") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("self.versionShouldChangeObserver ()") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@observablePropertyAST needs_unwSelf'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_needs_5F_unwSelf (const GALGAS_observablePropertyAST & inObject,
                                              C_Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      result_outResult = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Extension Getter '@observablePropertyAST isPropertyDefined'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool extensionGetter_isPropertyDefined (const GALGAS_observablePropertyAST & inObject,
                                               const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                               const GALGAS_observablePropertyMap & constinArgument_inRootObservableProperties,
                                               const GALGAS_observablePropertyMap & constinArgument_inObservableProperties,
                                               C_Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_7957 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_7957->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 194)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_8113 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8113->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8113->mAssociatedValue1 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 196)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_8254 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_8254->mAssociatedValue0 ;
      result_outResult = constinArgument_inRootObservableProperties.getter_hasKey (extractedValue_relationshipName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 198)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_8369 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8369->mAssociatedValue0 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 200)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_8521 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8521->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_8521->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 202)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_8677 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8677->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_8677->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 204)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_8822 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_8822->mAssociatedValue0 ;
      result_outResult = constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 206)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_9004 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9004->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9004->mAssociatedValue1 ;
      result_outResult = constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap.getter_hasKey (extractedValue_propertyName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 208)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_9158 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9158->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9158->mAssociatedValue1 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 210)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9359 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9359->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9359->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9359->mAssociatedValue2 ;
      result_outResult = constinArgument_inObservableProperties.getter_hasKey (extractedValue_controllerName.mProperty_string COMMA_SOURCE_FILE ("observable-property.galgas", 212)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_bool (true) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Extension Getter '@observablePropertyAST location'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_location extensionGetter_location (const GALGAS_observablePropertyAST & inObject,
                                          C_Compiler * /* inCompiler */
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_location result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_9818 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9818->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_9910 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_9910->mAssociatedValue1 ;
      result_outResult = extractedValue_optionName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10008 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10008->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_10092 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10092->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_10188 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10188->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_10279 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10279->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_10364 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10364->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_10461 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10461->mAssociatedValue0 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_10553 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10553->mAssociatedValue1 ;
      result_outResult = extractedValue_propertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_10674 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_10674->mAssociatedValue2 ;
      result_outResult = extractedValue_secondaryPropertyName.mProperty_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_signatureProperty * extractPtr_10747 = (const cEnumAssociatedValues_observablePropertyAST_signatureProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10747->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionProperty * extractPtr_10818 = (const cEnumAssociatedValues_observablePropertyAST_versionProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10818->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty * extractPtr_10901 = (const cEnumAssociatedValues_observablePropertyAST_versionShouldChangeProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_location extractedValue_location = extractPtr_10901->mAssociatedValue0 ;
      result_outResult = extractedValue_location ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Extension method '@observablePropertyAST analyzeObservableProperty'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void extensionMethod_analyzeObservableProperty (const GALGAS_observablePropertyAST inObject,
                                                const GALGAS_observablePropertyMap constinArgument_inRootObservablePropertyMap,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_observablePropertyMap constinArgument_inObservablePropertyMap,
                                                GALGAS_typeKind & outArgument_outType,
                                                GALGAS_propertyKind & outArgument_outKind,
                                                GALGAS_propertyMultiplicity & outArgument_outMultiplicity,
                                                GALGAS_string & outArgument_outSwiftTypeStringForTransientFunctionArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outType.drop () ; // Release 'out' argument
  outArgument_outKind.drop () ; // Release 'out' argument
  outArgument_outMultiplicity.drop () ; // Release 'out' argument
  outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release 'out' argument
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 270)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 271)) ;
      outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 272)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 273)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 275)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 276)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 277)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 278)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 280)) ;
      outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 281)) ;
      outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 282)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 283)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_12477 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12477->mAssociatedValue0 ;
      GALGAS_string joker_12392_2 ; // Joker input parameter
      GALGAS_actionMap joker_12392_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_12392_2, joker_12392_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 285)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 292)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_13182 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_13182->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_13182->mAssociatedValue1 ;
      GALGAS_string joker_12677_2 ; // Joker input parameter
      GALGAS_actionMap joker_12677_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_12677_2, joker_12677_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 294)) ;
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 301)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 302)), GALGAS_string ("a property cannot accept any option"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas", 302)) ;
      }else if (kBoolFalse == test_1) {
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 304)) ;
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 305)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, extractedValue_optionName.mProperty_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 307)) ;
        }else if (kBoolFalse == test_3) {
          const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, extractedValue_optionName.mProperty_string.objectCompare (GALGAS_string ("empty"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outType = GALGAS_typeKind::constructor_boolType (SOURCE_FILE ("observable-property.galgas", 309)) ;
          }else if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 311)), GALGAS_string ("uknown option (accepted : 'count', 'empty')"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas", 311)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 314)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_14758 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_14758->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_14758->mAssociatedValue1 ;
      GALGAS_typeKind var_relationshipType_13375 ;
      GALGAS_string joker_13421_2 ; // Joker input parameter
      GALGAS_actionMap joker_13421_1 ; // Joker input parameter
      constinArgument_inRootObservablePropertyMap.method_searchKey (extractedValue_relationshipName, var_relationshipType_13375, outArgument_outKind, outArgument_outMultiplicity, joker_13421_2, joker_13421_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 316)) ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 323)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 324)), GALGAS_string ("a property cannot accept 'all'"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas", 324)) ;
      }
      switch (var_relationshipType_13375.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 328)), GALGAS_string ("a property cannot accept 'all'"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas", 328)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 330)), GALGAS_string ("a property cannot accept 'all'"), fixItArray9  COMMA_SOURCE_FILE ("observable-property.galgas", 330)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          TC_Array <C_FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 332)), GALGAS_string ("a property cannot accept 'all'"), fixItArray10  COMMA_SOURCE_FILE ("observable-property.galgas", 332)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (extractedValue_relationshipName.getter_location (SOURCE_FILE ("observable-property.galgas", 334)), GALGAS_string ("a property cannot accept 'all'"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas", 334)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 336)), GALGAS_string ("a property cannot accept 'all'"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas", 336)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_14624 = (const cEnumAssociatedValues_typeKind_entityType *) (var_relationshipType_13375.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_14624->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap_14339 ;
          constinArgument_inSemanticContext.mProperty_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.getter_nowhere (SOURCE_FILE ("observable-property.galgas", 339)), var_entityObservablePropertyMap_14339, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 338)) ;
          GALGAS_string joker_14483_2 ; // Joker input parameter
          GALGAS_actionMap joker_14483_1 ; // Joker input parameter
          var_entityObservablePropertyMap_14339.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_14483_2, joker_14483_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 342)) ;
          const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 349)))).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 350)), GALGAS_string ("the observed property cannot be a collection"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas", 350)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_relationshipType_13375, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 353)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 354)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 354)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 354)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_15162 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15162->mAssociatedValue0 ;
      GALGAS_string joker_14924_2 ; // Joker input parameter
      GALGAS_actionMap joker_14924_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_14924_2, joker_14924_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 356)) ;
      const enumGalgasBool test_15 = outArgument_outMultiplicity.getter_isCollection (SOURCE_FILE ("observable-property.galgas", 363)).boolEnum () ;
      if (kBoolTrue == test_15) {
        outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 364)) ;
      }else if (kBoolFalse == test_15) {
        outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 366)) ;
      }
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_15826 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_15826->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_15826->mAssociatedValue1 ;
      GALGAS_string joker_15358_2 ; // Joker input parameter
      GALGAS_actionMap joker_15358_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_15358_2, joker_15358_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 369)) ;
      const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 376)))).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <C_FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 377)), GALGAS_string ("a property cannot accept any option"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas", 377)) ;
      }else if (kBoolFalse == test_16) {
        const enumGalgasBool test_18 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 378)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 379)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 380)) ;
          const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, extractedValue_optionName.mProperty_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_19) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 382)) ;
          }else if (kBoolFalse == test_19) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 384)), GALGAS_string ("uknown option (accepted : 'count', 'empty')"), fixItArray20  COMMA_SOURCE_FILE ("observable-property.galgas", 384)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 387)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_17384 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17384->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_17384->mAssociatedValue1 ;
      GALGAS_typeKind var_propertyType_16008 ;
      GALGAS_string joker_16054_2 ; // Joker input parameter
      GALGAS_actionMap joker_16054_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_propertyName, var_propertyType_16008, outArgument_outKind, outArgument_outMultiplicity, joker_16054_2, joker_16054_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 389)) ;
      const enumGalgasBool test_21 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 396)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 397)), GALGAS_string ("a property cannot accept 'all'"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.galgas", 397)) ;
      }
      switch (var_propertyType_16008.enumValue ()) {
      case GALGAS_typeKind::kNotBuilt:
        break ;
      case GALGAS_typeKind::kEnum_stringType:
      case GALGAS_typeKind::kEnum_boolType:
      case GALGAS_typeKind::kEnum_dateType:
      case GALGAS_typeKind::kEnum_doubleType:
      case GALGAS_typeKind::kEnum_integerType:
      case GALGAS_typeKind::kEnum_fontType:
        {
          TC_Array <C_FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 401)), GALGAS_string ("a property cannot accept 'all'"), fixItArray23  COMMA_SOURCE_FILE ("observable-property.galgas", 401)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_enumType:
        {
          TC_Array <C_FixItDescription> fixItArray24 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 403)), GALGAS_string ("a property cannot accept 'all'"), fixItArray24  COMMA_SOURCE_FILE ("observable-property.galgas", 403)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_classType:
        {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 405)), GALGAS_string ("a property cannot accept 'all'"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.galgas", 405)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_propertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 407)), GALGAS_string ("a property cannot accept 'all'"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.galgas", 407)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_transientPropertyClassType:
        {
          TC_Array <C_FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 409)), GALGAS_string ("a property cannot accept 'all'"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas", 409)) ;
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_typeKind::kEnum_entityType:
        {
          const cEnumAssociatedValues_typeKind_entityType * extractPtr_17247 = (const cEnumAssociatedValues_typeKind_entityType *) (var_propertyType_16008.unsafePointer ()) ;
          const GALGAS_string extractedValue_entityName = extractPtr_17247->mAssociatedValue0 ;
          GALGAS_observablePropertyMap var_entityObservablePropertyMap_16948 ;
          constinArgument_inSemanticContext.mProperty_mEntityObservablePropertyMap.method_searchKey (extractedValue_entityName.getter_nowhere (SOURCE_FILE ("observable-property.galgas", 412)), var_entityObservablePropertyMap_16948, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 411)) ;
          GALGAS_string joker_17099_2 ; // Joker input parameter
          GALGAS_actionMap joker_17099_1 ; // Joker input parameter
          var_entityObservablePropertyMap_16948.method_searchKey (extractedValue_elementPropertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17099_2, joker_17099_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 415)) ;
          const enumGalgasBool test_28 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 422)))).boolEnum () ;
          if (kBoolTrue == test_28) {
            TC_Array <C_FixItDescription> fixItArray29 ;
            inCompiler->emitSemanticError (extractedValue_elementPropertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 423)), GALGAS_string ("the observed property cannot be a collection"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas", 423)) ;
          }
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GALGAS_string ("[").add_operation (extensionGetter_swiftTypeName (var_propertyType_16008, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 426)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("observable-property.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 427)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 427)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_17664 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_17664->mAssociatedValue0 ;
      GALGAS_string joker_17579_2 ; // Joker input parameter
      GALGAS_actionMap joker_17579_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17579_2, joker_17579_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 429)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 436)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_18364 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_18364->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_18364->mAssociatedValue1 ;
      GALGAS_string joker_17889_2 ; // Joker input parameter
      GALGAS_actionMap joker_17889_1 ; // Joker input parameter
      constinArgument_inSemanticContext.mProperty_mPreferencesObservablePropertyMap.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_17889_2, joker_17889_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 438)) ;
      const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 445)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 446)), GALGAS_string ("a single property cannot accept any option"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas", 446)) ;
      }else if (kBoolFalse == test_30) {
        const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, outArgument_outMultiplicity.objectCompare (GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 447)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 448)) ;
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 449)) ;
          const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, extractedValue_optionName.mProperty_string.objectCompare (GALGAS_string ("count"))).boolEnum () ;
          if (kBoolTrue == test_33) {
            outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 451)) ;
          }else if (kBoolFalse == test_33) {
            TC_Array <C_FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (extractedValue_optionName.getter_location (SOURCE_FILE ("observable-property.galgas", 453)), GALGAS_string ("uknown option (accepted : 'count', 'empty')"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas", 453)) ;
          }
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 456)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_20385 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_20385->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20385->mAssociatedValue1 ;
      GALGAS_typeKind var_type_18527 ;
      GALGAS_propertyKind var_propertyKind_18565 ;
      GALGAS_propertyMultiplicity joker_18573_3 ; // Joker input parameter
      GALGAS_string joker_18573_2 ; // Joker input parameter
      GALGAS_actionMap joker_18573_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_type_18527, var_propertyKind_18565, joker_18573_3, joker_18573_2, joker_18573_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 458)) ;
      switch (var_propertyKind_18565.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          switch (var_type_18527.enumValue ()) {
          case GALGAS_typeKind::kNotBuilt:
            break ;
          case GALGAS_typeKind::kEnum_stringType:
          case GALGAS_typeKind::kEnum_boolType:
          case GALGAS_typeKind::kEnum_dateType:
          case GALGAS_typeKind::kEnum_doubleType:
          case GALGAS_typeKind::kEnum_integerType:
          case GALGAS_typeKind::kEnum_fontType:
            {
              TC_Array <C_FixItDescription> fixItArray35 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 468)), GALGAS_string ("the bound model should be an entity"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas", 468)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_classType:
            {
              TC_Array <C_FixItDescription> fixItArray36 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 470)), GALGAS_string ("the bound model should be an entity"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas", 470)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_propertyClassType:
            {
              TC_Array <C_FixItDescription> fixItArray37 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 472)), GALGAS_string ("the bound model should be an entity"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas", 472)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_transientPropertyClassType:
            {
              TC_Array <C_FixItDescription> fixItArray38 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 474)), GALGAS_string ("the bound model should be an entity"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas", 474)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_enumType:
            {
              TC_Array <C_FixItDescription> fixItArray39 ;
              inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 476)), GALGAS_string ("the bound model should be an entity"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas", 476)) ;
              outArgument_outMultiplicity.drop () ; // Release error dropped variable
              outArgument_outKind.drop () ; // Release error dropped variable
              outArgument_outType.drop () ; // Release error dropped variable
            }
            break ;
          case GALGAS_typeKind::kEnum_entityType:
            {
              const cEnumAssociatedValues_typeKind_entityType * extractPtr_19775 = (const cEnumAssociatedValues_typeKind_entityType *) (var_type_18527.unsafePointer ()) ;
              const GALGAS_string extractedValue_entityName = extractPtr_19775->mAssociatedValue0 ;
              GALGAS_observablePropertyMap var_observablePropertyMap_19611 ;
              constinArgument_inSemanticContext.mProperty_mEntityObservablePropertyMap.method_searchKey (GALGAS_lstring::constructor_new (extractedValue_entityName, extractedValue_controllerName.mProperty_location  COMMA_SOURCE_FILE ("observable-property.galgas", 479)), var_observablePropertyMap_19611, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 478)) ;
              GALGAS_string joker_19763_2 ; // Joker input parameter
              GALGAS_actionMap joker_19763_1 ; // Joker input parameter
              var_observablePropertyMap_19611.method_searchKey (extractedValue_propertyName, outArgument_outType, outArgument_outKind, outArgument_outMultiplicity, joker_19763_2, joker_19763_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 482)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          GALGAS_bool test_40 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mProperty_string.objectCompare (GALGAS_string ("sortedArray"))) ;
          if (kBoolTrue != test_40.boolEnum ()) {
            test_40 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mProperty_string.objectCompare (GALGAS_string ("selectedArray"))) ;
          }
          const enumGalgasBool test_41 = test_40.boolEnum () ;
          if (kBoolTrue == test_41) {
            outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_collection (SOURCE_FILE ("observable-property.galgas", 492)) ;
            outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 493)) ;
            outArgument_outType = var_type_18527 ;
          }else if (kBoolFalse == test_41) {
            TC_Array <C_FixItDescription> fixItArray42 ;
            inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 496)), GALGAS_string ("uknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray42  COMMA_SOURCE_FILE ("observable-property.galgas", 496)) ;
            outArgument_outMultiplicity.drop () ; // Release error dropped variable
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outType.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GALGAS_propertyKind::kEnum_stored:
      case GALGAS_propertyKind::kEnum_transient:
        {
          TC_Array <C_FixItDescription> fixItArray43 ;
          inCompiler->emitSemanticError (extractedValue_controllerName.getter_location (SOURCE_FILE ("observable-property.galgas", 501)), GALGAS_string ("this property should be a controller"), fixItArray43  COMMA_SOURCE_FILE ("observable-property.galgas", 501)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 503)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_21140 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_21140->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_21140->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_21140->mAssociatedValue2 ;
      GALGAS_typeKind joker_20570_5 ; // Joker input parameter
      GALGAS_propertyKind joker_20570_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_20570_3 ; // Joker input parameter
      GALGAS_string joker_20570_2 ; // Joker input parameter
      GALGAS_actionMap joker_20570_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, joker_20570_5, joker_20570_4, joker_20570_3, joker_20570_2, joker_20570_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 505)) ;
      GALGAS_bool test_44 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mProperty_string.objectCompare (GALGAS_string ("sortedArray"))) ;
      if (kBoolTrue == test_44.boolEnum ()) {
        test_44 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mProperty_string.objectCompare (GALGAS_string ("count"))) ;
      }
      const enumGalgasBool test_45 = test_44.boolEnum () ;
      if (kBoolTrue == test_45) {
        outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 510)) ;
        outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 511)) ;
        outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 512)) ;
      }else if (kBoolFalse == test_45) {
        GALGAS_bool test_46 = GALGAS_bool (kIsEqual, extractedValue_propertyName.mProperty_string.objectCompare (GALGAS_string ("selectedArray"))) ;
        if (kBoolTrue == test_46.boolEnum ()) {
          test_46 = GALGAS_bool (kIsEqual, extractedValue_secondaryPropertyName.mProperty_string.objectCompare (GALGAS_string ("count"))) ;
        }
        const enumGalgasBool test_47 = test_46.boolEnum () ;
        if (kBoolTrue == test_47) {
          outArgument_outMultiplicity = GALGAS_propertyMultiplicity::constructor_single (SOURCE_FILE ("observable-property.galgas", 514)) ;
          outArgument_outKind = GALGAS_propertyKind::constructor_transient (SOURCE_FILE ("observable-property.galgas", 515)) ;
          outArgument_outType = GALGAS_typeKind::constructor_integerType (SOURCE_FILE ("observable-property.galgas", 516)) ;
        }else if (kBoolFalse == test_47) {
          TC_Array <C_FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_propertyName.getter_location (SOURCE_FILE ("observable-property.galgas", 518)), GALGAS_string ("uknown option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas", 518)) ;
          outArgument_outMultiplicity.drop () ; // Release error dropped variable
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outType.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outType, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas", 522)) ;
    }
    break ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_transientAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientAST * p = (const cPtr_transientAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mTransientTypeName.objectCompare (p->mProperty_mTransientTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsArray.objectCompare (p->mProperty_mIsArray) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTransientName.objectCompare (p->mProperty_mTransientName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_transientAST::objectCompare (const GALGAS_transientAST & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientAST::GALGAS_transientAST (void) :
GALGAS_abstractSecondaryProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientAST GALGAS_transientAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_bool::constructor_default (HERE),
                                               GALGAS_lstring::constructor_default (HERE),
                                               GALGAS_observablePropertyList::constructor_emptyList (HERE)
                                               COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientAST::GALGAS_transientAST (const cPtr_transientAST * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientAST GALGAS_transientAST::constructor_new (const GALGAS_lstring & inAttribute_mTransientTypeName,
                                                          const GALGAS_bool & inAttribute_mIsArray,
                                                          const GALGAS_lstring & inAttribute_mTransientName,
                                                          const GALGAS_observablePropertyList & inAttribute_mDependencyList
                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientAST result ;
  if (inAttribute_mTransientTypeName.isValid () && inAttribute_mIsArray.isValid () && inAttribute_mTransientName.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientAST (inAttribute_mTransientTypeName, inAttribute_mIsArray, inAttribute_mTransientName, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mTransientTypeName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_transientAST::getter_mTransientTypeName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientTypeName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_transientAST::getter_mIsArray (UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mIsArray ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool cPtr_transientAST::getter_mIsArray (UNUSED_LOCATION_ARGS) const {
  return mProperty_mIsArray ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_transientAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mTransientName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_transientAST::getter_mTransientName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mTransientName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList GALGAS_transientAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyList result ;
  if (NULL != mObjectPtr) {
    const cPtr_transientAST * p = (const cPtr_transientAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientAST) ;
    result = p->mProperty_mDependencyList ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyList cPtr_transientAST::getter_mDependencyList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mDependencyList ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                        Pointer class for @transientAST class                                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_transientAST::cPtr_transientAST (const GALGAS_lstring & in_mTransientTypeName,
                                      const GALGAS_bool & in_mIsArray,
                                      const GALGAS_lstring & in_mTransientName,
                                      const GALGAS_observablePropertyList & in_mDependencyList
                                      COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mTransientTypeName (in_mTransientTypeName),
mProperty_mIsArray (in_mIsArray),
mProperty_mTransientName (in_mTransientName),
mProperty_mDependencyList (in_mDependencyList) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_transientAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientAST ;
}

void cPtr_transientAST::description (C_String & ioString,
                                     const int32_t inIndentation) const {
  ioString << "[@transientAST:" ;
  mProperty_mTransientTypeName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsArray.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTransientName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_transientAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientAST (mProperty_mTransientTypeName, mProperty_mIsArray, mProperty_mTransientName, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                                 @transientAST type                                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientAST ("transientAST",
                                     & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_transientAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_transientAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_transientAST GALGAS_transientAST::extractObject (const GALGAS_object & inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientAST result ;
  const GALGAS_transientAST * p = (const GALGAS_transientAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Extension Getter '@observablePropertyAST generateAddObserverCall'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateAddObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_9534 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9534->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9534->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 250)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 250)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 250)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_9759 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_9759->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_9759->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_9759->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 252)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_9856 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9856->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 254)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_9965 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_9965->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 256)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_10121 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10121->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_10121->mAssociatedValue1 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 258)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_10252 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10252->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 260)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_10395 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10395->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 262)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_10501 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10501->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 264)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_10656 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_10656->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_10656->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)).add_operation (GALGAS_string (".addEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 266)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_10831 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_10831->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_10831->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)).add_operation (GALGAS_string (".addEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 268)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 243 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 245 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 247 >>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Extension Getter '@observablePropertyAST generateRemoveObserverCall'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_generateRemoveObserverCall (const GALGAS_observablePropertyAST & inObject,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_observablePropertyAST::kNotBuilt:
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerProperty * extractPtr_11417 = (const cEnumAssociatedValues_observablePropertyAST_controllerProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11417->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11417->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 283)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_controllerSecondaryProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty * extractPtr_11645 = (const cEnumAssociatedValues_observablePropertyAST_controllerSecondaryProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_11645->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_11645->mAssociatedValue1 ;
      const GALGAS_lstring extractedValue_secondaryPropertyName = extractPtr_11645->mAssociatedValue2 ;
      result_outResult = extractedValue_controllerName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)).add_operation (extractedValue_secondaryPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 285)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfProperty * extractPtr_11745 = (const cEnumAssociatedValues_observablePropertyAST_selfProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11745->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 287)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption * extractPtr_11857 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_11857->mAssociatedValue0 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 289)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_selfPropertyArray:
    {
      const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray * extractPtr_12016 = (const cEnumAssociatedValues_observablePropertyAST_selfPropertyArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12016->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_elementPropertyName = extractPtr_12016->mAssociatedValue1 ;
      result_outResult = extractedValue_masterName.mProperty_string.add_operation (GALGAS_string (".removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)).add_operation (extractedValue_elementPropertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 291)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsProperty * extractPtr_12150 = (const cEnumAssociatedValues_observablePropertyAST_prefsProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12150->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 293)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_prefsPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption * extractPtr_12296 = (const cEnumAssociatedValues_observablePropertyAST_prefsPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12296->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("g_").add_operation (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (GALGAS_string ("\?."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 295)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 295)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootProperty:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootProperty * extractPtr_12405 = (const cEnumAssociatedValues_observablePropertyAST_rootProperty *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12405->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 297)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyWithOption:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption * extractPtr_12563 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyWithOption *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_masterName = extractPtr_12563->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_optionName = extractPtr_12563->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_masterName.getter_string (SOURCE_FILE ("transient-property.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (extractedValue_optionName.getter_string (SOURCE_FILE ("transient-property.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)).add_operation (GALGAS_string (".removeEBObserver"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 299)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_rootPropertyRelationship:
    {
      const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship * extractPtr_12741 = (const cEnumAssociatedValues_observablePropertyAST_rootPropertyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_relationshipName = extractPtr_12741->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_12741->mAssociatedValue1 ;
      result_outResult = GALGAS_string ("self.rootObject.").add_operation (extractedValue_relationshipName.getter_string (SOURCE_FILE ("transient-property.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 301)).add_operation (GALGAS_string (".removeEBObserverOf_"), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 301)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("transient-property.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas", 301)) ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_signatureProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 270 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 272 >>") ;
    }
    break ;
  case GALGAS_observablePropertyAST::kEnum_versionShouldChangeProperty:
    {
      result_outResult = GALGAS_string ("<< ligne 274 >>") ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_observablePropertyInMultipleBindingExpressionAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mProperty.objectCompare (p->mProperty_mProperty) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (void) :
GALGAS_abstractBooleanMultipleBindingExpressionAST () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST::GALGAS_observablePropertyInMultipleBindingExpressionAST (const cPtr_observablePropertyInMultipleBindingExpressionAST * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyInMultipleBindingExpressionAST GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (const GALGAS_observablePropertyAST & inAttribute_mProperty
                                                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_observablePropertyInMultipleBindingExpressionAST result ;
  if (inAttribute_mProperty.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_observablePropertyInMultipleBindingExpressionAST (inAttribute_mProperty COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST GALGAS_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  GALGAS_observablePropertyAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_observablePropertyInMultipleBindingExpressionAST * p = (const cPtr_observablePropertyInMultipleBindingExpressionAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_observablePropertyInMultipleBindingExpressionAST) ;
    result = p->mProperty_mProperty ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_observablePropertyAST cPtr_observablePropertyInMultipleBindingExpressionAST::getter_mProperty (UNUSED_LOCATION_ARGS) const {
  return mProperty_mProperty ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                      Pointer class for @observablePropertyInMultipleBindingExpressionAST class                      *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_observablePropertyInMultipleBindingExpressionAST::cPtr_observablePropertyInMultipleBindingExpressionAST (const GALGAS_observablePropertyAST & in_mProperty
                                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionAST (THERE),
mProperty_mProperty (in_mProperty) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_observablePropertyInMultipleBindingExpressionAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

void cPtr_observablePropertyInMultipleBindingExpressionAST::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "[@observablePropertyInMultipleBindingExpressionAST:" ;
  mProperty_mProperty.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_observablePropertyInMultipleBindingExpressionAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_observablePropertyInMultipleBindingExpressionAST (mProperty_mProperty COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               @observablePropertyInMultipleBindingExpressionAST type                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ("observablePropertyInMultipleBindingExpressionAST",
                                                                         & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionAST) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_observablePropertyInMultipleBindingExpressionAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyInMultipleBindingExpressionAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_observablePropertyInMultipleBindingExpressionAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyInMultipleBindingExpressionAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_booleanMultipleBindingLiteralIntForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (void) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (GALGAS_uint::constructor_default (HERE)
                                                                                COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanMultipleBindingLiteralIntForGeneration::GALGAS_booleanMultipleBindingLiteralIntForGeneration (const cPtr_booleanMultipleBindingLiteralIntForGeneration * inSourcePtr) :
GALGAS_abstractBooleanMultipleBindingExpressionForGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_booleanMultipleBindingLiteralIntForGeneration GALGAS_booleanMultipleBindingLiteralIntForGeneration::constructor_new (const GALGAS_uint & inAttribute_mValue
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_booleanMultipleBindingLiteralIntForGeneration result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_booleanMultipleBindingLiteralIntForGeneration (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint GALGAS_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result ;
  if (NULL != mObjectPtr) {
    const cPtr_booleanMultipleBindingLiteralIntForGeneration * p = (const cPtr_booleanMultipleBindingLiteralIntForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_booleanMultipleBindingLiteralIntForGeneration) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_uint cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                       Pointer class for @booleanMultipleBindingLiteralIntForGeneration class                        *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_booleanMultipleBindingLiteralIntForGeneration::cPtr_booleanMultipleBindingLiteralIntForGeneration (const GALGAS_uint & in_mValue
                                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractBooleanMultipleBindingExpressionForGeneration (THERE),
mProperty_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_booleanMultipleBindingLiteralIntForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

void cPtr_booleanMultipleBindingLiteralIntForGeneration::description (C_String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString << "[@booleanMultipleBindingLiteralIntForGeneration:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_booleanMultipleBindingLiteralIntForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_booleanMultipleBindingLiteralIntForGeneration (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 @booleanMultipleBindingLiteralIntForGeneration type                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ("booleanMultipleBindingLiteralIntForGeneration",
                                                                      & kTypeDescriptor_GALGAS_abstractBooleanMultipleBindingExpressionForGeneration) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_booleanMultipleBindingLiteralIntForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_booleanMultipleBindingLiteralIntForGeneration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_booleanMultipleBindingLiteralIntForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_booleanMultipleBindingLiteralIntForGeneration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (void) :
mProperty_mRunActionName (),
mProperty_mEnabledBindingDescriptor (),
mProperty_mHiddenBindingDescriptor (),
mProperty_mRegularBindingList () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::~ GALGAS_columnBindingAST (void) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST::GALGAS_columnBindingAST (const GALGAS_lstring & inOperand0,
                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                  const GALGAS_regularBindingList & inOperand3) :
mProperty_mRunActionName (inOperand0),
mProperty_mEnabledBindingDescriptor (inOperand1),
mProperty_mHiddenBindingDescriptor (inOperand2),
mProperty_mRegularBindingList (inOperand3) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST GALGAS_columnBindingAST::constructor_new (const GALGAS_lstring & inOperand0,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand1,
                                                                  const GALGAS_multipleBindingDescriptor & inOperand2,
                                                                  const GALGAS_regularBindingList & inOperand3 
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_columnBindingAST (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_columnBindingAST::objectCompare (const GALGAS_columnBindingAST & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mRunActionName.objectCompare (inOperand.mProperty_mRunActionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (inOperand.mProperty_mEnabledBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (inOperand.mProperty_mHiddenBindingDescriptor) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRegularBindingList.objectCompare (inOperand.mProperty_mRegularBindingList) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

bool GALGAS_columnBindingAST::isValid (void) const {
  return mProperty_mRunActionName.isValid () && mProperty_mEnabledBindingDescriptor.isValid () && mProperty_mHiddenBindingDescriptor.isValid () && mProperty_mRegularBindingList.isValid () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_columnBindingAST::drop (void) {
  mProperty_mRunActionName.drop () ;
  mProperty_mEnabledBindingDescriptor.drop () ;
  mProperty_mHiddenBindingDescriptor.drop () ;
  mProperty_mRegularBindingList.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_columnBindingAST::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "<struct @columnBindingAST:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mRunActionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_columnBindingAST::getter_mRunActionName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRunActionName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mEnabledBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mEnabledBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_multipleBindingDescriptor GALGAS_columnBindingAST::getter_mHiddenBindingDescriptor (UNUSED_LOCATION_ARGS) const {
  return mProperty_mHiddenBindingDescriptor ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_regularBindingList GALGAS_columnBindingAST::getter_mRegularBindingList (UNUSED_LOCATION_ARGS) const {
  return mProperty_mRegularBindingList ;
}



//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                               @columnBindingAST type                                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_columnBindingAST ("columnBindingAST",
                                         NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_columnBindingAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_columnBindingAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_columnBindingAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_columnBindingAST (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_columnBindingAST GALGAS_columnBindingAST::extractObject (const GALGAS_object & inObject,
                                                                C_Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  GALGAS_columnBindingAST result ;
  const GALGAS_columnBindingAST * p = (const GALGAS_columnBindingAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_columnBindingAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("columnBindingAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_selfCollection::cEnumAssociatedValues_arrayControllerModel_selfCollection (const GALGAS_lstring & inAssociatedValue0
                                                                                                                      COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_selfCollection::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_selfCollection::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_selfCollection * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_selfCollection *> (inOperand) ;
  macroValidPointer (ptr) ;
  typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mAssociatedValue0.objectCompare (ptr->mAssociatedValue0) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

cEnumAssociatedValues_arrayControllerModel_controllerArray::cEnumAssociatedValues_arrayControllerModel_controllerArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                                                        const GALGAS_lstring & inAssociatedValue1
                                                                                                                        COMMA_LOCATION_ARGS) :
cEnumAssociatedValues (THERE),
mAssociatedValue0 (inAssociatedValue0),
mAssociatedValue1 (inAssociatedValue1) {
} ;

//---------------------------------------------------------------------------------------------------------------------*

void cEnumAssociatedValues_arrayControllerModel_controllerArray::description (C_String & ioString,
                                                                              const int32_t inIndentation) const {
  ioString << "(\n" ;
  mAssociatedValue0.description (ioString, inIndentation) ;
  mAssociatedValue1.description (ioString, inIndentation) ;
  ioString << ")" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cEnumAssociatedValues_arrayControllerModel_controllerArray::compare (const cEnumAssociatedValues * inOperand) const {
  const cEnumAssociatedValues_arrayControllerModel_controllerArray * ptr = dynamic_cast<const cEnumAssociatedValues_arrayControllerModel_controllerArray *> (inOperand) ;
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

GALGAS_arrayControllerModel::GALGAS_arrayControllerModel (void) :
mAssociatedValues (),
mEnum (kNotBuilt) {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_rootToManyRelationship (const GALGAS_lstring & inAssociatedValue0
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_rootToManyRelationship ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_selfCollection (const GALGAS_lstring & inAssociatedValue0
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid ()) {
    result.mEnum = kEnum_selfCollection ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_selfCollection (inAssociatedValue0 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::constructor_controllerArray (const GALGAS_lstring & inAssociatedValue0,
                                                                                      const GALGAS_lstring & inAssociatedValue1
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  if (inAssociatedValue0.isValid () && inAssociatedValue1.isValid ()) {
    result.mEnum = kEnum_controllerArray ;
    cEnumAssociatedValues * ptr = NULL ;
    macroMyNew (ptr, cEnumAssociatedValues_arrayControllerModel_controllerArray (inAssociatedValue0, inAssociatedValue1 COMMA_THERE)) ;
    result.mAssociatedValues.setPointer (ptr) ;
    macroDetachSharedObject (ptr) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_rootToManyRelationship (GALGAS_lstring & outAssociatedValue0,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_rootToManyRelationship) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerModel rootToManyRelationship invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * ptr = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_selfCollection (GALGAS_lstring & outAssociatedValue0,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_selfCollection) {
    outAssociatedValue0.drop () ;
    C_String s ;
    s << "method @arrayControllerModel selfCollection invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_selfCollection * ptr = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::method_controllerArray (GALGAS_lstring & outAssociatedValue0,
                                                          GALGAS_lstring & outAssociatedValue1,
                                                          C_Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  if (mEnum != kEnum_controllerArray) {
    outAssociatedValue0.drop () ;
    outAssociatedValue1.drop () ;
    C_String s ;
    s << "method @arrayControllerModel controllerArray invoked with an invalid enum value" ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const cEnumAssociatedValues_arrayControllerModel_controllerArray * ptr = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) unsafePointer () ;
    outAssociatedValue0 = ptr->mAssociatedValue0 ;
    outAssociatedValue1 = ptr->mAssociatedValue1 ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static const char * gEnumNameArrayFor_arrayControllerModel [4] = {
  "(not built)",
  "rootToManyRelationship",
  "selfCollection",
  "controllerArray"
} ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_rootToManyRelationship == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isSelfCollection (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_selfCollection == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_bool GALGAS_arrayControllerModel::getter_isControllerArray (UNUSED_LOCATION_ARGS) const {
  return GALGAS_bool (kNotBuilt != mEnum, kEnum_controllerArray == mEnum) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void GALGAS_arrayControllerModel::description (C_String & ioString,
                                               const int32_t inIndentation) const {
  ioString << "<enum @arrayControllerModel: " << gEnumNameArrayFor_arrayControllerModel [mEnum] ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString << ">" ;
}

//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult GALGAS_arrayControllerModel::objectCompare (const GALGAS_arrayControllerModel & inOperand) const {
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
//                                             @arrayControllerModel type                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerModel ("arrayControllerModel",
                                             NULL) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerModel::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerModel (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerModel::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerModel result ;
  const GALGAS_arrayControllerModel * p = (const GALGAS_arrayControllerModel *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerModel *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerModel", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_arrayControllerDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mControllerName.objectCompare (p->mProperty_mControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerModel.objectCompare (p->mProperty_mArrayControllerModel) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFilterProperties.objectCompare (p->mProperty_mFilterProperties) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBoundColumnListAST.objectCompare (p->mProperty_mArrayControllerBoundColumnListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerAttributListAST.objectCompare (p->mProperty_mArrayControllerAttributListAST) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_arrayControllerDeclaration::objectCompare (const GALGAS_arrayControllerDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclaration::GALGAS_arrayControllerDeclaration (void) :
GALGAS_abstractSecondaryProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclaration::GALGAS_arrayControllerDeclaration (const cPtr_arrayControllerDeclaration * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclaration GALGAS_arrayControllerDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mControllerName,
                                                                                      const GALGAS_arrayControllerModel & inAttribute_mArrayControllerModel,
                                                                                      const GALGAS_lstringlist & inAttribute_mFilterProperties,
                                                                                      const GALGAS_arrayControllerBoundColumnListAST & inAttribute_mArrayControllerBoundColumnListAST,
                                                                                      const GALGAS_arrayControllerAttributListAST & inAttribute_mArrayControllerAttributListAST
                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclaration result ;
  if (inAttribute_mControllerName.isValid () && inAttribute_mArrayControllerModel.isValid () && inAttribute_mFilterProperties.isValid () && inAttribute_mArrayControllerBoundColumnListAST.isValid () && inAttribute_mArrayControllerAttributListAST.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_arrayControllerDeclaration (inAttribute_mControllerName, inAttribute_mArrayControllerModel, inAttribute_mFilterProperties, inAttribute_mArrayControllerBoundColumnListAST, inAttribute_mArrayControllerAttributListAST COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_arrayControllerDeclaration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
    result = p->mProperty_mControllerName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_arrayControllerDeclaration::getter_mControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel GALGAS_arrayControllerDeclaration::getter_mArrayControllerModel (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerModel result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
    result = p->mProperty_mArrayControllerModel ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerModel cPtr_arrayControllerDeclaration::getter_mArrayControllerModel (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerModel ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist GALGAS_arrayControllerDeclaration::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
    result = p->mProperty_mFilterProperties ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstringlist cPtr_arrayControllerDeclaration::getter_mFilterProperties (UNUSED_LOCATION_ARGS) const {
  return mProperty_mFilterProperties ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST GALGAS_arrayControllerDeclaration::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerBoundColumnListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
    result = p->mProperty_mArrayControllerBoundColumnListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerBoundColumnListAST cPtr_arrayControllerDeclaration::getter_mArrayControllerBoundColumnListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerBoundColumnListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST GALGAS_arrayControllerDeclaration::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  GALGAS_arrayControllerAttributListAST result ;
  if (NULL != mObjectPtr) {
    const cPtr_arrayControllerDeclaration * p = (const cPtr_arrayControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerDeclaration) ;
    result = p->mProperty_mArrayControllerAttributListAST ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerAttributListAST cPtr_arrayControllerDeclaration::getter_mArrayControllerAttributListAST (UNUSED_LOCATION_ARGS) const {
  return mProperty_mArrayControllerAttributListAST ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                 Pointer class for @arrayControllerDeclaration class                                 *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_arrayControllerDeclaration::cPtr_arrayControllerDeclaration (const GALGAS_lstring & in_mControllerName,
                                                                  const GALGAS_arrayControllerModel & in_mArrayControllerModel,
                                                                  const GALGAS_lstringlist & in_mFilterProperties,
                                                                  const GALGAS_arrayControllerBoundColumnListAST & in_mArrayControllerBoundColumnListAST,
                                                                  const GALGAS_arrayControllerAttributListAST & in_mArrayControllerAttributListAST
                                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mControllerName (in_mControllerName),
mProperty_mArrayControllerModel (in_mArrayControllerModel),
mProperty_mFilterProperties (in_mFilterProperties),
mProperty_mArrayControllerBoundColumnListAST (in_mArrayControllerBoundColumnListAST),
mProperty_mArrayControllerAttributListAST (in_mArrayControllerAttributListAST) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_arrayControllerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclaration ;
}

void cPtr_arrayControllerDeclaration::description (C_String & ioString,
                                                   const int32_t inIndentation) const {
  ioString << "[@arrayControllerDeclaration:" ;
  mProperty_mControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerModel.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mFilterProperties.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBoundColumnListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerAttributListAST.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_arrayControllerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_arrayControllerDeclaration (mProperty_mControllerName, mProperty_mArrayControllerModel, mProperty_mFilterProperties, mProperty_mArrayControllerBoundColumnListAST, mProperty_mArrayControllerAttributListAST COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          @arrayControllerDeclaration type                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_arrayControllerDeclaration ("arrayControllerDeclaration",
                                                   & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_arrayControllerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_arrayControllerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_arrayControllerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_arrayControllerDeclaration GALGAS_arrayControllerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_arrayControllerDeclaration result ;
  const GALGAS_arrayControllerDeclaration * p = (const GALGAS_arrayControllerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_arrayControllerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("arrayControllerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Extension Getter '@arrayControllerModel modelString'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelString (const GALGAS_arrayControllerModel & inObject,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_20251 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_20251->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("self.").add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 530)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 530)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_20368 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_20368->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("rootObject.").add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 532)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_20500 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_20500->mAssociatedValue0 ;
      const GALGAS_lstring extractedValue_propertyName = extractPtr_20500->mAssociatedValue1 ;
      result_outResult = extractedValue_controllerName.mProperty_string.add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 534)).add_operation (extractedValue_propertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 534)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@arrayControllerModel modelTypeName'                                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName (const GALGAS_arrayControllerModel & inObject,
                                             const GALGAS_string & constinArgument_inRootEntityName,
                                             const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_20928 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedPropertyName = extractPtr_20928->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("Ligne328_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)).add_operation (extractedValue_storedPropertyName.getter_string (SOURCE_FILE ("array-controller.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 547)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_21078 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_21078->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 549)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_21293 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_21293->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType_21213 ;
      GALGAS_propertyKind joker_21221_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_21221_3 ; // Joker input parameter
      GALGAS_string joker_21221_2 ; // Joker input parameter
      GALGAS_actionMap joker_21221_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType_21213, joker_21221_4, joker_21221_3, joker_21221_2, joker_21221_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 551)) ;
      result_outResult = GALGAS_string ("TransientArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType_21213, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 556)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Extension Getter '@arrayControllerModel modelTypeName2'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string extensionGetter_modelTypeName_32_ (const GALGAS_arrayControllerModel & inObject,
                                                 const GALGAS_string & constinArgument_inRootEntityName,
                                                 const GALGAS_observablePropertyMap & constinArgument_inObservablePropertyMap,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_arrayControllerModel temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GALGAS_arrayControllerModel::kNotBuilt:
    break ;
  case GALGAS_arrayControllerModel::kEnum_selfCollection:
    {
      const cEnumAssociatedValues_arrayControllerModel_selfCollection * extractPtr_22154 = (const cEnumAssociatedValues_arrayControllerModel_selfCollection *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_storedProprtyName = extractPtr_22154->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType_21772 ;
      GALGAS_propertyKind var_kind_21802 ;
      GALGAS_propertyMultiplicity joker_21810_3 ; // Joker input parameter
      GALGAS_string joker_21810_2 ; // Joker input parameter
      GALGAS_actionMap joker_21810_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_storedProprtyName, var_modelType_21772, var_kind_21802, joker_21810_3, joker_21810_2, joker_21810_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 569)) ;
      switch (var_kind_21802.enumValue ()) {
      case GALGAS_propertyKind::kNotBuilt:
        break ;
      case GALGAS_propertyKind::kEnum_stored:
        {
          result_outResult = GALGAS_string ("EBClassArray_").add_operation (extensionGetter_swiftTypeName (var_modelType_21772, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 577)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 577)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_transient:
        {
          result_outResult = GALGAS_string ("ReadOnlyArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType_21772, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 579)) ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_arrayController:
        {
          result_outResult = GALGAS_string ("<< arrayController >>") ;
        }
        break ;
      case GALGAS_propertyKind::kEnum_selectionController:
        {
          result_outResult = GALGAS_string ("<< selectionController >>") ;
        }
        break ;
      }
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_rootToManyRelationship:
    {
      const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship * extractPtr_22304 = (const cEnumAssociatedValues_arrayControllerModel_rootToManyRelationship *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_rootRelationshipName = extractPtr_22304->mAssociatedValue0 ;
      result_outResult = GALGAS_string ("ToManyRelationship_").add_operation (constinArgument_inRootEntityName, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)).add_operation (extractedValue_rootRelationshipName.getter_string (SOURCE_FILE ("array-controller.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 586)) ;
    }
    break ;
  case GALGAS_arrayControllerModel::kEnum_controllerArray:
    {
      const cEnumAssociatedValues_arrayControllerModel_controllerArray * extractPtr_22518 = (const cEnumAssociatedValues_arrayControllerModel_controllerArray *) (temp_0.unsafePointer ()) ;
      const GALGAS_lstring extractedValue_controllerName = extractPtr_22518->mAssociatedValue0 ;
      GALGAS_typeKind var_modelType_22439 ;
      GALGAS_propertyKind joker_22447_4 ; // Joker input parameter
      GALGAS_propertyMultiplicity joker_22447_3 ; // Joker input parameter
      GALGAS_string joker_22447_2 ; // Joker input parameter
      GALGAS_actionMap joker_22447_1 ; // Joker input parameter
      constinArgument_inObservablePropertyMap.method_searchKey (extractedValue_controllerName, var_modelType_22439, joker_22447_4, joker_22447_3, joker_22447_2, joker_22447_1, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 588)) ;
      result_outResult = GALGAS_string ("ReadOnlyArrayOf_").add_operation (extensionGetter_swiftTypeName (var_modelType_22439, inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas", 593)) ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_selectionControllerDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_selectionControllerDeclaration * p = (const cPtr_selectionControllerDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_selectionControllerDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mSelectionControllerName.objectCompare (p->mProperty_mSelectionControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerName.objectCompare (p->mProperty_mModelControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mModelControllerPropertyName.objectCompare (p->mProperty_mModelControllerPropertyName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_selectionControllerDeclaration::objectCompare (const GALGAS_selectionControllerDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerDeclaration::GALGAS_selectionControllerDeclaration (void) :
GALGAS_abstractSecondaryProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerDeclaration GALGAS_selectionControllerDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_selectionControllerDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE),
                                                                 GALGAS_lstring::constructor_default (HERE)
                                                                 COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerDeclaration::GALGAS_selectionControllerDeclaration (const cPtr_selectionControllerDeclaration * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_selectionControllerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerDeclaration GALGAS_selectionControllerDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mSelectionControllerName,
                                                                                              const GALGAS_lstring & inAttribute_mModelControllerName,
                                                                                              const GALGAS_lstring & inAttribute_mModelControllerPropertyName
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclaration result ;
  if (inAttribute_mSelectionControllerName.isValid () && inAttribute_mModelControllerName.isValid () && inAttribute_mModelControllerPropertyName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_selectionControllerDeclaration (inAttribute_mSelectionControllerName, inAttribute_mModelControllerName, inAttribute_mModelControllerPropertyName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selectionControllerDeclaration::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclaration * p = (const cPtr_selectionControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclaration) ;
    result = p->mProperty_mSelectionControllerName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selectionControllerDeclaration::getter_mSelectionControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mSelectionControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selectionControllerDeclaration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclaration * p = (const cPtr_selectionControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclaration) ;
    result = p->mProperty_mModelControllerName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selectionControllerDeclaration::getter_mModelControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_selectionControllerDeclaration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_selectionControllerDeclaration * p = (const cPtr_selectionControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_selectionControllerDeclaration) ;
    result = p->mProperty_mModelControllerPropertyName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_selectionControllerDeclaration::getter_mModelControllerPropertyName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mModelControllerPropertyName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                               Pointer class for @selectionControllerDeclaration class                               *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_selectionControllerDeclaration::cPtr_selectionControllerDeclaration (const GALGAS_lstring & in_mSelectionControllerName,
                                                                          const GALGAS_lstring & in_mModelControllerName,
                                                                          const GALGAS_lstring & in_mModelControllerPropertyName
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mSelectionControllerName (in_mSelectionControllerName),
mProperty_mModelControllerName (in_mModelControllerName),
mProperty_mModelControllerPropertyName (in_mModelControllerPropertyName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_selectionControllerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclaration ;
}

void cPtr_selectionControllerDeclaration::description (C_String & ioString,
                                                       const int32_t inIndentation) const {
  ioString << "[@selectionControllerDeclaration:" ;
  mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mModelControllerPropertyName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_selectionControllerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_selectionControllerDeclaration (mProperty_mSelectionControllerName, mProperty_mModelControllerName, mProperty_mModelControllerPropertyName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        @selectionControllerDeclaration type                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerDeclaration ("selectionControllerDeclaration",
                                                       & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_selectionControllerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_selectionControllerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_selectionControllerDeclaration GALGAS_selectionControllerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerDeclaration result ;
  const GALGAS_selectionControllerDeclaration * p = (const GALGAS_selectionControllerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_selectionControllerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_customObjectControllerDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_customObjectControllerDeclaration * p = (const cPtr_customObjectControllerDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_customObjectControllerDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mCustomObjectControllerName.objectCompare (p->mProperty_mCustomObjectControllerName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassNameForSwift.objectCompare (p->mProperty_mClassNameForSwift) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyEntityName.objectCompare (p->mProperty_mPropertyEntityName) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_customObjectControllerDeclaration::objectCompare (const GALGAS_customObjectControllerDeclaration & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerDeclaration::GALGAS_customObjectControllerDeclaration (void) :
GALGAS_abstractSecondaryProperty () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerDeclaration GALGAS_customObjectControllerDeclaration::constructor_default (LOCATION_ARGS) {
  return GALGAS_customObjectControllerDeclaration::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE),
                                                                    GALGAS_lstring::constructor_default (HERE)
                                                                    COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerDeclaration::GALGAS_customObjectControllerDeclaration (const cPtr_customObjectControllerDeclaration * inSourcePtr) :
GALGAS_abstractSecondaryProperty (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_customObjectControllerDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerDeclaration GALGAS_customObjectControllerDeclaration::constructor_new (const GALGAS_lstring & inAttribute_mCustomObjectControllerName,
                                                                                                    const GALGAS_lstring & inAttribute_mClassNameForSwift,
                                                                                                    const GALGAS_lstring & inAttribute_mPropertyEntityName
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_customObjectControllerDeclaration result ;
  if (inAttribute_mCustomObjectControllerName.isValid () && inAttribute_mClassNameForSwift.isValid () && inAttribute_mPropertyEntityName.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_customObjectControllerDeclaration (inAttribute_mCustomObjectControllerName, inAttribute_mClassNameForSwift, inAttribute_mPropertyEntityName COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_customObjectControllerDeclaration::getter_mCustomObjectControllerName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_customObjectControllerDeclaration * p = (const cPtr_customObjectControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_customObjectControllerDeclaration) ;
    result = p->mProperty_mCustomObjectControllerName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_customObjectControllerDeclaration::getter_mCustomObjectControllerName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mCustomObjectControllerName ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_customObjectControllerDeclaration::getter_mClassNameForSwift (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_customObjectControllerDeclaration * p = (const cPtr_customObjectControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_customObjectControllerDeclaration) ;
    result = p->mProperty_mClassNameForSwift ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_customObjectControllerDeclaration::getter_mClassNameForSwift (UNUSED_LOCATION_ARGS) const {
  return mProperty_mClassNameForSwift ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring GALGAS_customObjectControllerDeclaration::getter_mPropertyEntityName (UNUSED_LOCATION_ARGS) const {
  GALGAS_lstring result ;
  if (NULL != mObjectPtr) {
    const cPtr_customObjectControllerDeclaration * p = (const cPtr_customObjectControllerDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_customObjectControllerDeclaration) ;
    result = p->mProperty_mPropertyEntityName ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lstring cPtr_customObjectControllerDeclaration::getter_mPropertyEntityName (UNUSED_LOCATION_ARGS) const {
  return mProperty_mPropertyEntityName ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                             Pointer class for @customObjectControllerDeclaration class                              *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_customObjectControllerDeclaration::cPtr_customObjectControllerDeclaration (const GALGAS_lstring & in_mCustomObjectControllerName,
                                                                                const GALGAS_lstring & in_mClassNameForSwift,
                                                                                const GALGAS_lstring & in_mPropertyEntityName
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractSecondaryProperty (THERE),
mProperty_mCustomObjectControllerName (in_mCustomObjectControllerName),
mProperty_mClassNameForSwift (in_mClassNameForSwift),
mProperty_mPropertyEntityName (in_mPropertyEntityName) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_customObjectControllerDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_customObjectControllerDeclaration ;
}

void cPtr_customObjectControllerDeclaration::description (C_String & ioString,
                                                          const int32_t inIndentation) const {
  ioString << "[@customObjectControllerDeclaration:" ;
  mProperty_mCustomObjectControllerName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mClassNameForSwift.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyEntityName.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_customObjectControllerDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_customObjectControllerDeclaration (mProperty_mCustomObjectControllerName, mProperty_mClassNameForSwift, mProperty_mPropertyEntityName COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       @customObjectControllerDeclaration type                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_customObjectControllerDeclaration ("customObjectControllerDeclaration",
                                                          & kTypeDescriptor_GALGAS_abstractSecondaryProperty) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_customObjectControllerDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_customObjectControllerDeclaration ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_customObjectControllerDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_customObjectControllerDeclaration (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_customObjectControllerDeclaration GALGAS_customObjectControllerDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_customObjectControllerDeclaration result ;
  const GALGAS_customObjectControllerDeclaration * p = (const GALGAS_customObjectControllerDeclaration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_customObjectControllerDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("customObjectControllerDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*
//   Object comparison                                                                                                 *
//---------------------------------------------------------------------------------------------------------------------*

typeComparisonResult cPtr_boolAsDefaultValue::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
  if (kOperandEqual == result) {
    result = mProperty_mValue.objectCompare (p->mProperty_mValue) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*


typeComparisonResult GALGAS_boolAsDefaultValue::objectCompare (const GALGAS_boolAsDefaultValue & inOperand) const {
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

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (void) :
GALGAS_abstractDefaultValue () {
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_default (LOCATION_ARGS) {
  return GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_default (HERE)
                                                     COMMA_THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue::GALGAS_boolAsDefaultValue (const cPtr_boolAsDefaultValue * inSourcePtr) :
GALGAS_abstractDefaultValue (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_boolAsDefaultValue) ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::constructor_new (const GALGAS_lbool & inAttribute_mValue
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  if (inAttribute_mValue.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_boolAsDefaultValue (inAttribute_mValue COMMA_THERE)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool GALGAS_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  GALGAS_lbool result ;
  if (NULL != mObjectPtr) {
    const cPtr_boolAsDefaultValue * p = (const cPtr_boolAsDefaultValue *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_boolAsDefaultValue) ;
    result = p->mProperty_mValue ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_lbool cPtr_boolAsDefaultValue::getter_mValue (UNUSED_LOCATION_ARGS) const {
  return mProperty_mValue ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                     Pointer class for @boolAsDefaultValue class                                     *
//---------------------------------------------------------------------------------------------------------------------*

cPtr_boolAsDefaultValue::cPtr_boolAsDefaultValue (const GALGAS_lbool & in_mValue
                                                  COMMA_LOCATION_ARGS) :
cPtr_abstractDefaultValue (THERE),
mProperty_mValue (in_mValue) {
}

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * cPtr_boolAsDefaultValue::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

void cPtr_boolAsDefaultValue::description (C_String & ioString,
                                           const int32_t inIndentation) const {
  ioString << "[@boolAsDefaultValue:" ;
  mProperty_mValue.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//---------------------------------------------------------------------------------------------------------------------*

acPtr_class * cPtr_boolAsDefaultValue::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_boolAsDefaultValue (mProperty_mValue COMMA_THERE)) ;
  return ptr ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                              @boolAsDefaultValue type                                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boolAsDefaultValue ("boolAsDefaultValue",
                                           & kTypeDescriptor_GALGAS_abstractDefaultValue) ;

//---------------------------------------------------------------------------------------------------------------------*

const C_galgas_type_descriptor * GALGAS_boolAsDefaultValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boolAsDefaultValue ;
}

//---------------------------------------------------------------------------------------------------------------------*

AC_GALGAS_root * GALGAS_boolAsDefaultValue::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boolAsDefaultValue (*this)) ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_boolAsDefaultValue GALGAS_boolAsDefaultValue::extractObject (const GALGAS_object & inObject,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_boolAsDefaultValue result ;
  const GALGAS_boolAsDefaultValue * p = (const GALGAS_boolAsDefaultValue *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_boolAsDefaultValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("boolAsDefaultValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

