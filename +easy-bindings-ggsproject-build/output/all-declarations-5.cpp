#include "Compiler.h"
#include "C_galgas_io.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::class_func_new (const GALGAS_string & in_mOwnerName,
                                                                                                                       const GALGAS_string & in_mSelectionControllerName,
                                                                                                                       const GALGAS_string & in_mBoundControllerName,
                                                                                                                       const GALGAS_string & in_mBoundControllerPropertyName,
                                                                                                                       const GALGAS_string & in_mBaseTypeName,
                                                                                                                       const GALGAS_string & in_mSelectionTypeName,
                                                                                                                       const GALGAS_propertyMap & in_mSelectionObservablePropertyMap,
                                                                                                                       const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                                                                                       Compiler * /* inCompiler */
                                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  if (in_mOwnerName.isValid () && in_mSelectionControllerName.isValid () && in_mBoundControllerName.isValid () && in_mBoundControllerPropertyName.isValid () && in_mBaseTypeName.isValid () && in_mSelectionTypeName.isValid () && in_mSelectionObservablePropertyMap.isValid () && in_mPropertyGenerationList.isValid ()) {
    result = GALGAS_selectionControllerForGeneration_2D_element (in_mOwnerName, in_mSelectionControllerName, in_mBoundControllerName, in_mBoundControllerPropertyName, in_mBaseTypeName, in_mSelectionTypeName, in_mSelectionObservablePropertyMap, in_mPropertyGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_selectionControllerForGeneration_2D_element::description (String & ioString,
                                                                      const int32_t inIndentation) const {
  ioString.addString ("<struct @selectionControllerForGeneration-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mOwnerName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelectionControllerName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBoundControllerName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBoundControllerPropertyName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBaseTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelectionTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSelectionObservablePropertyMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @selectionControllerForGeneration-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element GALGAS_selectionControllerForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_selectionControllerForGeneration_2D_element result ;
  const GALGAS_selectionControllerForGeneration_2D_element * p = (const GALGAS_selectionControllerForGeneration_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_selectionControllerForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("selectionControllerForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::class_func_new (const GALGAS_typeKind & in_mType,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (in_mType.isValid ()) {
    result = GALGAS_typeKindList_2D_element (in_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_typeKindList_2D_element::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("<struct @typeKindList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mType.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @typeKindList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  const GALGAS_typeKindList_2D_element * p = (const GALGAS_typeKindList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_typeKindList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("typeKindList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::class_func_new (const GALGAS_propertyGeneration & in_mProperty,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (in_mProperty.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (in_mProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList_2D_element::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.addString ("<struct @propertyGenerationList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @propertyGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  const GALGAS_propertyGenerationList_2D_element * p = (const GALGAS_propertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_propertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("propertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::class_func_new (const GALGAS_string & in_mTypeName,
                                                                                                     const GALGAS_bool & in_mIsClass,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (in_mTypeName.isValid () && in_mIsClass.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (in_mTypeName, in_mIsClass) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList_2D_element::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("<struct @transientExternTypeList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTypeName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mIsClass.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @transientExternTypeList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  const GALGAS_transientExternTypeList_2D_element * p = (const GALGAS_transientExternTypeList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientExternTypeList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::class_func_new (const GALGAS_abstractFileGeneration & in_mFileGeneration,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (in_mFileGeneration.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (in_mFileGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @fileGenerationList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFileGeneration.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @fileGenerationList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  const GALGAS_fileGenerationList_2D_element * p = (const GALGAS_fileGenerationList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_fileGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::class_func_new (const GALGAS_string & in_mGroupReference,
                                                                                   const GALGAS_string & in_mGroupName,
                                                                                   const GALGAS_string & in_mGroupPath,
                                                                                   const GALGAS_stringlist & in_mChildrenRefs,
                                                                                   Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  if (in_mGroupReference.isValid () && in_mGroupName.isValid () && in_mGroupPath.isValid () && in_mChildrenRefs.isValid ()) {
    result = GALGAS_XCodeGroupList_2D_element (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.addString ("<struct @XCodeGroupList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mGroupReference.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGroupName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mGroupPath.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mChildrenRefs.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeGroupList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_XCodeGroupList_2D_element result ;
  const GALGAS_XCodeGroupList_2D_element * p = (const GALGAS_XCodeGroupList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeGroupList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeGroupList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::class_func_new (const GALGAS_string & in_mTargetRef,
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
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  if (in_mTargetRef.isValid () && in_mTargetName.isValid () && in_mProductFileReference.isValid () && in_mProductFileName.isValid () && in_mBuildPhaseRefList.isValid () && in_mBuildPhaseRef.isValid () && in_mBuildConfigurationListRef.isValid () && in_mBuildConfigurationSettingList.isValid () && in_mBuildConfigurationRef.isValid () && in_mFrameworksFileRefList.isValid () && in_mFrameworkBuildPhaseRef.isValid ()) {
    result = GALGAS_XCodeToolTargetList_2D_element (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeToolTargetList_2D_element::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("<struct @XCodeToolTargetList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeToolTargetList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element GALGAS_XCodeToolTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_XCodeToolTargetList_2D_element result ;
  const GALGAS_XCodeToolTargetList_2D_element * p = (const GALGAS_XCodeToolTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeToolTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeToolTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::class_func_new (const GALGAS_string & in_mTargetRef,
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
                                                                                           const GALGAS_string & in_mInfoPListFile,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  if (in_mTargetRef.isValid () && in_mTargetName.isValid () && in_mProductFileReference.isValid () && in_mProductFileName.isValid () && in_mBuildPhaseRefList.isValid () && in_mBuildPhaseRef.isValid () && in_mBuildConfigurationListRef.isValid () && in_mBuildConfigurationSettingList.isValid () && in_mBuildConfigurationRef.isValid () && in_mFrameworksFileRefList.isValid () && in_mFrameworkBuildPhaseRef.isValid () && in_mDependentTargets.isValid () && in_mResourceBuildRef.isValid () && in_mResourceFileBuildRefs.isValid () && in_mInfoPListFile.isValid ()) {
    result = GALGAS_XCodeAppTargetList_2D_element (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

void GALGAS_XCodeAppTargetList_2D_element::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("<struct @XCodeAppTargetList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mTargetRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mTargetName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mProductFileReference.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mProductFileName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildPhaseRefList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationListRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildConfigurationRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFrameworksFileRefList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mDependentTargets.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mResourceBuildRef.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mResourceFileBuildRefs.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mInfoPListFile.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @XCodeAppTargetList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element GALGAS_XCodeAppTargetList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_XCodeAppTargetList_2D_element result ;
  const GALGAS_XCodeAppTargetList_2D_element * p = (const GALGAS_XCodeAppTargetList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_XCodeAppTargetList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("XCodeAppTargetList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::class_func_new (const GALGAS_string & in_mFileReference,
                                                                                 const GALGAS_string & in_mFileName,
                                                                                 const GALGAS_string & in_mBuildReference,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  if (in_mFileReference.isValid () && in_mFileName.isValid () && in_mBuildReference.isValid ()) {
    result = GALGAS_BuildFileList_2D_element (in_mFileReference, in_mFileName, in_mBuildReference) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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

//--------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("<struct @BuildFileList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mFileReference.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mFileName.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBuildReference.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @BuildFileList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_BuildFileList_2D_element result ;
  const GALGAS_BuildFileList_2D_element * p = (const GALGAS_BuildFileList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_BuildFileList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("BuildFileList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::class_func_new (const GALGAS_mainXibLineDescriptorList & in_mLine,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (in_mLine.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (in_mLine) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList_2D_element::description (String & ioString,
                                                           const int32_t inIndentation) const {
  ioString.addString ("<struct @mainXibDescriptorList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mLine.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mainXibDescriptorList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  const GALGAS_mainXibDescriptorList_2D_element * p = (const GALGAS_mainXibDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mainXibDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::class_func_new (const GALGAS_mainXibElement & in_mElement,
                                                                                                         Compiler * /* inCompiler */
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (in_mElement.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (in_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList_2D_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.addString ("<struct @mainXibLineDescriptorList-element:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mElement.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @mainXibLineDescriptorList-element generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  const GALGAS_mainXibLineDescriptorList_2D_element * p = (const GALGAS_mainXibLineDescriptorList_2D_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_mainXibLineDescriptorList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("mainXibLineDescriptorList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}



//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GALGAS_location & outArgument_outEndOfFile,
                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      GALGAS_lstring var_filePath_1971 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
      GALGAS_lstring var_sourceFile_2001 = GALGAS_lstring::class_func_new (var_filePath_1971.readProperty_string ().getter_absolutePathFromPath (GALGAS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.ggs", 44)) COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)), var_filePath_1971.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 43)) ;
      GALGAS_location joker_2233 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_2001, ioArgument_ioDeclarationAST, joker_2233  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 47)) ;
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
  outArgument_outEndOfFile = GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 73)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
    } break ;
    case 3: {
      nt_autolayout_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_graphviz_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_enum_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_enum_5F_function_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_entity_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_preferences_5F_declaration_parse (inCompiler) ;
    } break ;
    case 10: {
      nt_document_5F_declaration_parse (inCompiler) ;
    } break ;
    case 11: {
      nt_outlet_5F_class_5F_declaration_parse (inCompiler) ;
    } break ;
    case 12: {
      nt_outlet_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    case 13: {
      nt_xcode_5F_project_parse (inCompiler) ;
    } break ;
    case 14: {
      nt_main_5F_xib_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 40)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  GALGAS_lstring var_externDelegateName_901 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  {
  ioArgument_ioExternSwiftDelegateList.setter_append (var_externDelegateName_901, inCompiler COMMA_SOURCE_FILE ("extern-delegate.ggs", 23)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  GALGAS_lstring var_externFunctionName_927 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  GALGAS_lstring var_callerName_994 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  {
  ioArgument_ioExternSwiftFunctionList.setter_append (var_externFunctionName_927, var_callerName_994, inCompiler COMMA_SOURCE_FILE ("extern-swift-func.ggs", 26)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 23)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  GALGAS_bool var_isClass_1402 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
    var_isClass_1402 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
    var_isClass_1402 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientClassDeclarationAST::class_func_new (var_propertyTypeName_1540, var_isClass_1402  COMMA_SOURCE_FILE ("transient-property-class.ggs", 42)), inCompiler COMMA_SOURCE_FILE ("transient-property-class.ggs", 42)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  GALGAS_lstring var_enumName_1681 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  GALGAS_bool var_caseIterable_1705 ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    var_caseIterable_1705 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    GALGAS_lstring var_attribute_1788 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsNotEqual, var_attribute_1788.readProperty_string ().objectCompare (GALGAS_string ("CaseIterable"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, kFixItReplace, GALGAS_string ("@CaseIterable")) ;
        inCompiler->emitSemanticError (var_attribute_1788.readProperty_location (), GALGAS_string ("only @CaseIterable attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("enumeration.ggs", 47)) ;
      }
    }
    var_caseIterable_1705 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  GALGAS_lstringlist var_enumConstants_2031 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("enumeration.ggs", 52)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    GALGAS_lstring var_constantName_2095 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    {
    var_enumConstants_2031.setter_append (var_constantName_2095, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 55)) ;
    }
    if (select_easyBindings_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_2 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_enumerationDeclarationAST::class_func_new (var_enumName_1681, var_enumConstants_2031, var_caseIterable_1705  COMMA_SOURCE_FILE ("enumeration.ggs", 60)), inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 60)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    if (select_easyBindings_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 54)) ;
    if (select_easyBindings_5F_syntax_3 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  GALGAS_lstring var_enumName_2575 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  GALGAS_lstring var_funcName_2629 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  GALGAS__32_lstringlist var_associationList_2669 = GALGAS__32_lstringlist::class_func_emptyList (SOURCE_FILE ("enumeration.ggs", 72)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
      GALGAS_lstring var_constantName_2745 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      GALGAS_lstring var_associatedString_2807 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
      {
      var_associationList_2669.setter_append (var_constantName_2745, var_associatedString_2807, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 79)) ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.setter_append (var_enumName_2575, var_funcName_2629, var_associationList_2669, inCompiler COMMA_SOURCE_FILE ("enumeration.ggs", 82)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 69)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 76)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 78)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 81)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isAbstract_1866 ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_isAbstract_1866 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
    var_isAbstract_1866 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_graphicEntity_1983 ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
    var_graphicEntity_1983 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
    var_graphicEntity_1983 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_handlingOpposite_2108 ;
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
    var_handlingOpposite_2108 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
    var_handlingOpposite_2108 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  GALGAS_lstring var_entityName_2282 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  GALGAS_lstringlist var_obsoleteEntityNames_2315 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("entity.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_obsoleteName_2417 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      {
      var_obsoleteEntityNames_2315.setter_append (var_obsoleteName_2417, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 71)) ;
      }
      if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superEntityName_2552 ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
    var_superEntityName_2552 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    var_superEntityName_2552 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2723 = GALGAS_simpleStoredPropertyList::class_func_emptyList (SOURCE_FILE ("entity.ggs", 85)) ;
  GALGAS_stringset var_signatureList_2772 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("entity.ggs", 86)) ;
  GALGAS_lstringlist var_actionDeclarationList_2812 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("entity.ggs", 87)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_2872 = GALGAS_externSwiftDelegateList::class_func_emptyList (SOURCE_FILE ("entity.ggs", 88)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2940 = GALGAS_arrayControllerBindingListAST::class_func_emptyList (SOURCE_FILE ("entity.ggs", 89)) ;
  GALGAS_lstringlist var_graphicOptionArray_2996 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("entity.ggs", 90)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_2282, var_simpleStoredPropertyList_2723, var_signatureList_2772, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_2282, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 95)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_2282, var_signatureList_2772, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_2282, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2812, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_2282, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 103)), var_arrayControllerBindingListAST_2940, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2872, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      GALGAS_lstring var_graphicOption_3703 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      {
      var_graphicOptionArray_2996.setter_append (var_graphicOption_3703, inCompiler COMMA_SOURCE_FILE ("entity.ggs", 109)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_graphicEntity_1983.operator_not (SOURCE_FILE ("entity.ggs", 111)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_graphicOption_3703.readProperty_location (), GALGAS_string ("only a graphic entity accepts a graphic option"), fixItArray3  COMMA_SOURCE_FILE ("entity.ggs", 112)) ;
        }
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_entityDeclarationAST::class_func_new (var_entityName_2282, var_isAbstract_1866, var_superEntityName_2552, var_handlingOpposite_2108, var_simpleStoredPropertyList_2723, var_signatureList_2772, var_actionDeclarationList_2812, var_obsoleteEntityNames_2315, var_graphicEntity_1983, var_externSwiftDelegateList_2872, var_graphicOptionArray_2996  COMMA_SOURCE_FILE ("entity.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 116)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = var_isAbstract_1866 ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = var_graphicEntity_1983 ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientDeclarationAST::class_func_new (var_entityName_2282, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 133)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 134)), GALGAS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 135)), GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("entity.ggs", 135)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.ggs", 131)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 131)) ;
      }
      {
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientDeclarationAST::class_func_new (var_entityName_2282, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 142)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 143)), GALGAS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 144)), GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("entity.ggs", 144)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.ggs", 140)), inCompiler COMMA_SOURCE_FILE ("entity.ggs", 140)) ;
      }
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_parse (inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 46)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 53)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 64)) ;
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 68)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 70)) ;
      if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 75)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 81)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 84)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 110)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  GALGAS_lstring var_documentName_2917 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  GALGAS_string var_customSuperClassName_2947 ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
    var_customSuperClassName_2947 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
    GALGAS_lstring var_name_3053 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 73)) ;
    var_customSuperClassName_2947 = var_name_3053.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 76)) ;
  GALGAS_lstring var_rootEntityName_3151 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 77)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 78)) ;
  GALGAS_lstring var_mainViewName_3213 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 79)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 80)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_3266 = GALGAS_outletDeclarationList::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 81)) ;
  GALGAS_lstringlist var_actionDeclarationList_3314 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 82)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_3380 = GALGAS_arrayControllerBindingListAST::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 83)) ;
  GALGAS_astViewDeclarationList var_viewDeclarationList_3447 = GALGAS_astViewDeclarationList::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 84)) ;
  GALGAS_astAutoLayoutOutletLinkerList var_autoLayoutOutletLinkerList_3581 = GALGAS_astAutoLayoutOutletLinkerList::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_3447, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_3314, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2917, var_rootEntityName_3151, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_3266, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2917, var_rootEntityName_3151, var_arrayControllerBindingListAST_3380, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
      GALGAS_lstring var_linkerName_4081 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 100)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 101)) ;
      GALGAS_lstringlist var_outletNameList_4126 = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 102)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_outletName_4186 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 104)) ;
        {
        var_outletNameList_4126.setter_append (var_outletName_4186, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 105)) ;
        }
        if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 107)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 109)) ;
      {
      var_autoLayoutOutletLinkerList_3581.setter_append (var_linkerName_4081, var_outletNameList_4126, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 110)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 112)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_autoLayoutDocumentDeclarationAST::class_func_new (var_documentName_2917, var_rootEntityName_3151, var_mainViewName_3213, var_outletDeclarationList_3266, var_actionDeclarationList_3314, var_arrayControllerBindingListAST_3380, var_viewDeclarationList_3447, var_customSuperClassName_2947, var_autoLayoutOutletLinkerList_3581  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 113)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 113)) ;
  }
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientDeclarationAST::class_func_new (var_documentName_2917, var_rootEntityName_3151, GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 128)), GALGAS_string ("documentFileName").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 129)), GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 129)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 125)), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 125)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 76)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 77)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 78)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 79)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 100)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 104)) ;
        if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 107)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 109)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 112)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 76)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 77)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 78)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.ggs", 79)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 100)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 101)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 104)) ;
        if (select_easyBindings_5F_syntax_14 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 107)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 109)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 112)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  GALGAS_lstring var_prefs_2135 = GALGAS_lstring::class_func_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 49)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 49)), inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 49)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  GALGAS_stringset var_signatureList_2207 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.ggs", 51)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2265 = GALGAS_arrayControllerBindingListAST::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 2: {
      GALGAS_astViewDeclarationList var_viewDeclarationList_2355 = GALGAS_astViewDeclarationList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 55)) ;
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2355, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mViewDeclarationList.plusAssign_operation(var_viewDeclarationList_2355, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 57)) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 4: {
      GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2655 = GALGAS_simpleStoredPropertyList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 61)) ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_2135, var_simpleStoredPropertyList_2655, var_signatureList_2207, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssign_operation(var_simpleStoredPropertyList_2655, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 67)) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_ (var_prefs_2135, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 71)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 8: {
      GALGAS_stringset joker_3233 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.ggs", 75)) ;
      nt_toMany_5F_relationship_ (var_prefs_2135, joker_3233, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_ (var_prefs_2135, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 77)), var_arrayControllerBindingListAST_2265, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_2207, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 79)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_parse (inCompiler) ;
    } break ;
    case 4: {
      nt_simple_5F_stored_5F_declaration_parse (inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_parse (inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_parse (inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_parse (inCompiler) ;
    } break ;
    case 8: {
      nt_toMany_5F_relationship_parse (inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
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
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  GALGAS_lstring var_entityName_540 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mGraphvizList.setter_append (var_entityName_540, inCompiler COMMA_SOURCE_FILE ("graphviz.ggs", 12)) ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  GALGAS_lstring var_functionName_3367 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3440 ;
  GALGAS_lstring var_mangledName_3460 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3367, var_parameterList_3440, var_mangledName_3460, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3460, var_parameterList_3440, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 89)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  GALGAS_lstring var_functionName_3832 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3905 ;
  GALGAS_lstring var_mangledName_3925 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3832, var_parameterList_3905, var_mangledName_3925, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3925, var_parameterList_3905, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 100)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_4265 ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
    var_userDefined_4265 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_4265 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  GALGAS_lstring var_outletClassName_4430 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_4485 ;
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
    var_parameterList_4485 = GALGAS_autoLayoutClassParameterList::class_func_emptyList (SOURCE_FILE ("auto-layout-view-class.ggs", 118)) ;
  } break ;
  case 2: {
    GALGAS_lstring joker_4615 ; // Joker input parameter
    nt_autolayout_5F_formal_5F_parameter_5F_list_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 120)), var_parameterList_4485, joker_4615, inCompiler) ;
    joker_4615.drop () ; // Release temporary input variables (joker in source)
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superClassName_4644 ;
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
    var_superClassName_4644 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    var_superClassName_4644 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_4780 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_4815 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_4848 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_4880 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_4926 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
      var_handlesTableViewBinding_4880 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
      var_hasRunAction_4780 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
      var_hasEnabled_4815 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
      var_hasHidden_4848 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
      var_handlesGraphicControllerBinding_4926 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_5316 = GALGAS_astAutoLayoutViewFunctionMap::class_func_emptyMap (SOURCE_FILE ("auto-layout-view-class.ggs", 151)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      GALGAS_lstring var_functionName_5417 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      GALGAS_autoLayoutClassParameterList var_parameterList_5492 ;
      GALGAS_lstring var_mangledName_5512 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_5417, var_parameterList_5492, var_mangledName_5512, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_5316.setter_insertKey (var_mangledName_5512, var_parameterList_5492, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 158)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4430, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_autoLayoutViewClassDeclarationAST::class_func_new (var_outletClassName_4430, var_userDefined_4265, var_superClassName_4644, var_hasRunAction_4780, var_hasEnabled_4815, var_handlesTableViewBinding_4880, var_handlesGraphicControllerBinding_4926, var_hasHidden_4848, var_parameterList_4485, var_astAutoLayoutViewFunctionMap_5316  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 163)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 163)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
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
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GALGAS_lstring constinArgument_inFunctionName,
                                                                                                                 GALGAS_autoLayoutClassParameterList & outArgument_ioParameterList,
                                                                                                                 GALGAS_lstring & outArgument_outMangledName,
                                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  outArgument_ioParameterList = GALGAS_autoLayoutClassParameterList::class_func_emptyList (SOURCE_FILE ("auto-layout-view-class.ggs", 183)) ;
  GALGAS_string var_mangledName_6489 = constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 184)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_6597 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      var_mangledName_6489.plusAssign_operation(var_parameterName_6597.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view-class.ggs", 194)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 194)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view-class.ggs", 197)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 197)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
        {
        outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view-class.ggs", 200)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 200)) ;
        }
      } break ;
      case 4: {
        GALGAS_lstring var_parameterTypeName_6992 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_parameterTypeName_6992.readProperty_string ().objectCompare (GALGAS_string ("String"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view-class.ggs", 204)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 204)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsEqual, var_parameterTypeName_6992.readProperty_string ().objectCompare (GALGAS_string ("StringArray"))).boolEnum () ;
            if (kBoolTrue == test_2) {
              {
              outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view-class.ggs", 206)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 206)) ;
              }
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_parameterTypeName_6992.readProperty_string ().objectCompare (GALGAS_string ("Int"))).boolEnum () ;
              if (kBoolTrue == test_3) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view-class.ggs", 208)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 208)) ;
                }
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsEqual, var_parameterTypeName_6992.readProperty_string ().objectCompare (GALGAS_string ("Bool"))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view-class.ggs", 210)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 210)) ;
                  }
                }
              }
              if (kBoolFalse == test_4) {
                {
                outArgument_ioParameterList.setter_append (var_parameterName_6597, GALGAS_autoLayoutClassParameterType::class_func_typeEnum (var_parameterTypeName_6992  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 212)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 212)) ;
                }
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
  var_mangledName_6489.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 220)) ;
  outArgument_outMangledName = GALGAS_lstring::class_func_new (var_mangledName_6489, constinArgument_inFunctionName.readProperty_location (), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 221)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 185)) ;
  switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 191)) ;
      switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 202)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_22 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 216)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                          GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument_ioBindingList,
                                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_lstring var_bindingName_1176 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1239 = GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1312 ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
      var_modelShouldBeWritableProperty_1312 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
      var_modelShouldBeWritableProperty_1312 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1523 ;
    switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
    case 1: {
      var_modelTypeName_1523 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
      var_modelTypeName_1523 = GALGAS_lstring::class_func_new (GALGAS_string ("enum"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 38)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 38)) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1239.setter_append (var_modelTypeName_1523, var_modelShouldBeWritableProperty_1312, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 40)) ;
    }
    if (select_easyBindings_5F_syntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_1835 = GALGAS_controllerBindingOptionList::class_func_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 44)) ;
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_1935 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      GALGAS_lstring var_optionType_1995 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      {
      var_bindingOptionList_1835.setter_append (var_optionName_1935, var_optionType_1995, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 52)) ;
      }
      if (select_easyBindings_5F_syntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioBindingList.setter_append (constinArgument_inClassName, var_bindingName_1176, var_outletClassBindingSpecificationModelList_1239, var_bindingOptionList_1835, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 58)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      if (select_easyBindings_5F_syntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_24 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      if (select_easyBindings_5F_syntax_28 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 148)) ;
  GALGAS_lstring var_viewName_6599 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 149)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 150)) ;
  GALGAS_stringset joker_6656 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("auto-layout-view.ggs", 151)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_6666 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (joker_6656, var_functionCallList_6666, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 152)) ;
  GALGAS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_6732 = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 153)) ;
  GALGAS_stringset var_stackViewInstances_6787 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("auto-layout-view.ggs", 154)) ;
  GALGAS_astViewInstructionList var_instructionList_6819 = GALGAS_astViewInstructionList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 155)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (false), var_stackViewInstances_6787, var_astNewStackViewDeclarationList_6732, var_instructionList_6819, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 157)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_6599, GALGAS_astComputedVerticalViewDeclaration::class_func_new (var_functionCallList_6666, var_instructionList_6819, var_astNewStackViewDeclarationList_6732  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 160)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 158)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 148)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 149)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 150)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 152)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 157)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 148)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 149)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 150)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 152)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 157)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 167)) ;
  GALGAS_lstring var_viewName_7418 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 168)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 169)) ;
  GALGAS_stringset joker_7475 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("auto-layout-view.ggs", 170)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_7485 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (joker_7475, var_functionCallList_7485, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 171)) ;
  GALGAS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_7551 = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 172)) ;
  GALGAS_stringset var_stackViewInstances_7606 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("auto-layout-view.ggs", 173)) ;
  GALGAS_astViewInstructionList var_instructionList_7638 = GALGAS_astViewInstructionList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 174)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), var_stackViewInstances_7606, var_astNewStackViewDeclarationList_7551, var_instructionList_7638, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 176)) ;
  {
  ioArgument_ioViewDeclarationList.setter_append (var_viewName_7418, GALGAS_astComputedHorizontalViewDeclaration::class_func_new (var_functionCallList_7485, var_instructionList_7638, var_astNewStackViewDeclarationList_7551  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 179)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 177)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 167)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 168)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 169)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 171)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 176)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 167)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 168)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 169)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 171)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                                              GALGAS_astAutoLayoutViewFunctionCallList & outArgument_outFunctionCallList,
                                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  outArgument_outFunctionCallList = GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 187)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      GALGAS_lstring var_functionName_8359 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 190)) ;
      GALGAS_astAutoLayoutViewInstructionParameterList var_actualParameterList_8439 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_actualParameterList_8439, inCompiler) ;
      {
      outArgument_outFunctionCallList.setter_append (var_functionName_8359, var_actualParameterList_8439, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 192)) ;
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 190)) ;
      nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_29 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 190)) ;
      nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_ (GALGAS_bool inArgument_inHorizontal,
                                                                                                   GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                                   GALGAS_astNewStackViewDeclarationList & ioArgument_ioNewStackViewDeclarationList,
                                                                                                   GALGAS_astViewInstructionList & ioArgument_ioInstructionList,
                                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 204)) ;
      GALGAS_lstring var_instancedStackViewName_9041 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 205)) ;
      {
      ioArgument_ioStackViewInstances.setter_insert (var_instancedStackViewName_9041.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 206)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
      GALGAS_lstring var_typeStackViewName_9159 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 210)) ;
      {
      ioArgument_ioNewStackViewDeclarationList.setter_append (var_instancedStackViewName_9041, var_typeStackViewName_9159, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 211)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
      {
      ioArgument_ioInstructionList.setter_append (GALGAS_astSeparatorInstructionDeclaration::class_func_new (inArgument_inHorizontal  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 214)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 214)) ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 216)) ;
      {
      ioArgument_ioInstructionList.setter_append (GALGAS_astDividerInstructionDeclaration::class_func_new (inArgument_inHorizontal  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 217)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 217)) ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 219)) ;
      GALGAS_lstring var_localViewName_9585 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 220)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = ioArgument_ioStackViewInstances.getter_hasKey (var_localViewName_9585.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 221)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 221)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_localViewName_9585.readProperty_location (), GALGAS_string ("the view is not instancied"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 222)) ;
        }
      }
      {
      ioArgument_ioInstructionList.setter_append (GALGAS_astLocalViewInstruction::class_func_new (var_localViewName_9585  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 224)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 224)) ;
      }
    } break ;
    case 6: {
      GALGAS_astAbstractViewInstructionDeclaration var_instruction_9879 ;
      nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_9879, inCompiler) ;
      {
      ioArgument_ioInstructionList.setter_append (var_instruction_9879, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 227)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 204)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 205)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 210)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 216)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 219)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 220)) ;
    } break ;
    case 6: {
      nt_view_5F_instruction_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i18_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 204)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 205)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 207)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 208)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 209)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 210)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 213)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.ggs", 216)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 219)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 220)) ;
    } break ;
    case 6: {
      nt_view_5F_instruction_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i19_ (GALGAS_stringset & /* ioArgument_ioStackViewInstances */,
                                                                                           GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 235)) ;
  outArgument_outInstruction = GALGAS_astSpaceViewInstruction::class_func_new (SOURCE_FILE ("auto-layout-view.ggs", 236)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i19_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 235)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i19_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 235)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_astComputedViewInstruction var_instruction_10630 ;
  nt_computed_5F_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_10630, inCompiler) ;
  outArgument_outInstruction = var_instruction_10630 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i20_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                                       GALGAS_astComputedViewInstruction & outArgument_outInstruction,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_viewClassName_10984 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 251)) ;
  GALGAS_astAutoLayoutViewInstructionParameterList var_instanciationParameterList_11050 ;
  switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
  case 1: {
    var_instanciationParameterList_11050 = GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 254)) ;
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_instanciationParameterList_11050, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_configuratorName_11247 ;
  GALGAS_lstring var_outletName_11281 ;
  GALGAS_bool var_outletIsArray_11306 ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
    var_outletName_11281 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 262)) ;
    var_configuratorName_11247 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 263)) ;
    var_outletIsArray_11306 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 266)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      var_outletName_11281 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 268)) ;
      var_outletIsArray_11306 = GALGAS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 271)) ;
      var_outletName_11281 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 272)) ;
      var_outletIsArray_11306 = GALGAS_bool (false) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 275)) ;
      var_outletName_11281 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 276)) ;
      var_outletIsArray_11306 = GALGAS_bool (true) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 1: {
      var_configuratorName_11247 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      var_configuratorName_11247 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 285)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_tableValueBinding var_tableValueBinding_11904 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_11951 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_12006 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_12066 ;
  GALGAS_graphicController var_graphicController_12117 ;
  GALGAS_regularBindingList var_regularBindingList_12163 ;
  GALGAS_astAutoLayoutViewFunctionCallList var_autoLayoutViewFunctionCallList_12225 ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    var_tableValueBinding_11904 = GALGAS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("auto-layout-view.ggs", 295)) ;
    var_runActionDescriptor_11951 = GALGAS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.ggs", 296)) ;
    var_enabledBindingDescriptor_12006 = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 297)) ;
    var_hiddenBindingDescriptor_12066 = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 298)) ;
    var_graphicController_12117 = GALGAS_graphicController::class_func_none (SOURCE_FILE ("auto-layout-view.ggs", 299)) ;
    var_regularBindingList_12163 = GALGAS_regularBindingList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 300)) ;
    var_autoLayoutViewFunctionCallList_12225 = GALGAS_astAutoLayoutViewFunctionCallList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 301)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 303)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_autoLayoutViewFunctionCallList_12225, inCompiler) ;
    nt_outlet_5F_binding_ (var_tableValueBinding_11904, var_runActionDescriptor_11951, var_enabledBindingDescriptor_12006, var_hiddenBindingDescriptor_12066, var_graphicController_12117, var_regularBindingList_12163, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_astComputedViewInstruction::class_func_new (var_viewClassName_10984, var_instanciationParameterList_11050, var_autoLayoutViewFunctionCallList_12225, var_tableValueBinding_11904, var_runActionDescriptor_11951, var_enabledBindingDescriptor_12006, var_hiddenBindingDescriptor_12066, var_graphicController_12117, var_regularBindingList_12163, var_configuratorName_11247, var_outletName_11281, var_outletIsArray_11306  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 313)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 251)) ;
  switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 266)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 271)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 272)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 275)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 276)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 285)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 303)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
    nt_outlet_5F_binding_parse (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i21_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 251)) ;
  switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 266)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 271)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 272)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.ggs", 275)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 276)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 282)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 285)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 303)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
    nt_outlet_5F_binding_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 311)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                                           GALGAS_astAutoLayoutViewInstructionParameterList & outArgument_outParameterList,
                                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  outArgument_outParameterList = GALGAS_astAutoLayoutViewInstructionParameterList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 333)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 334)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_13723 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 338)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
      switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
      case 1: {
        GALGAS_astAbstractViewInstructionDeclaration var_instruction_13863 ;
        nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_13863, inCompiler) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.ggs", 342)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (var_instruction_13863  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 342)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 342)) ;
        }
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 344)) ;
        GALGAS_lstring var_entityName_14037 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 345)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view.ggs", 346)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_entity (var_entityName_14037  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 346)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 346)) ;
        }
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
        GALGAS_lstring var_menuItemTitle_14209 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 349)) ;
        GALGAS_runActionDescriptor var_runActionDescriptor_14259 ;
        switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
        case 1: {
          var_runActionDescriptor_14259 = GALGAS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.ggs", 352)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 354)) ;
          GALGAS_lstring var_runTargetName_14396 ;
          switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
          case 1: {
            var_runTargetName_14396 = GALGAS_lstring::class_func_new (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 357)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 357)) ;
          } break ;
          case 2: {
            var_runTargetName_14396 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 360)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_runActionName_14621 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 362)) ;
          var_runActionDescriptor_14259 = GALGAS_runActionDescriptor::class_func_action (var_runTargetName_14396, var_runActionName_14621  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 363)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_14780 = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 365)) ;
        switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
        case 1: {
          var_enabledBindingDescriptor_14780 = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 367)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 369)) ;
          GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_15018 ;
          nt_booleanMultipleBindingExpression_ (var_bindingExpression_15018, inCompiler) ;
          var_enabledBindingDescriptor_14780 = GALGAS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_15018  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 371)) ;
        } break ;
        default:
          break ;
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view.ggs", 375)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (var_menuItemTitle_14209.readProperty_string (), var_runActionDescriptor_14259, var_enabledBindingDescriptor_14780  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 376)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 373)) ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
        GALGAS_lstring var_viewName_15396 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 380)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = ioArgument_ioStackViewInstances.getter_hasKey (var_viewName_15396.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.ggs", 381)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 381)).boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (var_viewName_15396.readProperty_location (), GALGAS_string ("view is not instancied"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 382)) ;
          }
        }
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.ggs", 384)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_viewName_15396.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 384)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 384)) ;
        }
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 386)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 387)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (GALGAS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)) ;
        }
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 389)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 390)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (GALGAS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 390)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 390)) ;
        }
      } break ;
      case 7: {
        GALGAS_luint var_uint_33__32__15917 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 392)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 393)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_uint_33__32__15917.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 393))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 393)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 393)) ;
        }
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 395)) ;
        GALGAS_luint var_uint_33__32__16087 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 396)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 397)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (GALGAS_string ("-").add_operation (var_uint_33__32__16087.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 397)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 397))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 397)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 397)) ;
        }
      } break ;
      case 9: {
        GALGAS_lstring var_literalString_16245 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 399)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view.ggs", 400)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_literalString_16245.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 400))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 400)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 400)) ;
        }
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 402)) ;
        GALGAS_lstring var_enumConstantName_16438 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 403)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeEnum (var_enumConstantName_16438  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_string (GALGAS_string (".").add_operation (var_enumConstantName_16438.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404)) ;
        }
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 406)) ;
        GALGAS_lstring var_enumTypeName_16644 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 407)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 408)) ;
        GALGAS_lstring var_enumFuncName_16701 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 409)) ;
        {
        outArgument_outParameterList.setter_append (var_parameterName_13723, GALGAS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view.ggs", 412)), GALGAS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (var_enumTypeName_16644, var_enumFuncName_16701  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 413)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 410)) ;
        }
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 417)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 334)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 338)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
      switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 344)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 345)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 349)) ;
        switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 354)) ;
          switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 360)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 362)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 369)) ;
          nt_booleanMultipleBindingExpression_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 380)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 386)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 389)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 392)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 395)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 396)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 399)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 402)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 403)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 406)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 407)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 408)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 409)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 417)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i22_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 334)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 338)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
      switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 344)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 345)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 348)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 349)) ;
        switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 354)) ;
          switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 359)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 360)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 362)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 369)) ;
          nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 380)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 386)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 389)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 392)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 395)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 396)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 399)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 402)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 403)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 406)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 407)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 408)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 409)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_37 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 417)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 420)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i23_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 427)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_17320 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_17320, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_17369 ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_17369 = GALGAS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 431)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 433)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_17557 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_17557, inCompiler) ;
    var_optionalHiddenBinding_17369 = GALGAS_optionalHiddenBinding::class_func_binding (var_bindingExpression_17557  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 437)) ;
  GALGAS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_17700 = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 438)) ;
  GALGAS_astViewInstructionList var_instructionList_17744 = GALGAS_astViewInstructionList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 439)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (false), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_17700, var_instructionList_17744, inCompiler) ;
  outArgument_outInstruction = GALGAS_astVStackViewInstructionDeclaration::class_func_new (var_functionCallList_17320, var_instructionList_17744, var_optionalHiddenBinding_17369, var_astNewStackViewDeclarationList_17700  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 441)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i23_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 427)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 433)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 437)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 442)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i23_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 427)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 433)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 437)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 442)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i24_ (GALGAS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_18425 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_18425, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_18474 ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_18474 = GALGAS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 453)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_18662 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_18662, inCompiler) ;
    var_optionalHiddenBinding_18474 = GALGAS_optionalHiddenBinding::class_func_binding (var_bindingExpression_18662  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 457)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 459)) ;
  GALGAS_astNewStackViewDeclarationList var_astNewStackViewDeclarationList_18805 = GALGAS_astNewStackViewDeclarationList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 460)) ;
  GALGAS_astViewInstructionList var_instructionList_18849 = GALGAS_astViewInstructionList::class_func_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 461)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_18805, var_instructionList_18849, inCompiler) ;
  outArgument_outInstruction = GALGAS_astHStackViewInstructionDeclaration::class_func_new (var_functionCallList_18425, var_instructionList_18849, var_optionalHiddenBinding_18474, var_astNewStackViewDeclarationList_18805  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 463)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i24_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 459)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 464)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i24_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 459)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 464)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_1694 ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
    var_userDefined_1694 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_1694 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  GALGAS_lstring var_outletClassName_1855 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  GALGAS_lstring var_superClassName_1889 ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_superClassName_1889 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    var_superClassName_1889 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_2025 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_2060 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_2093 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_2125 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_2171 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
      var_handlesTableViewBinding_2125 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
      var_hasRunAction_2025 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
      var_hasEnabled_2060 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
      var_hasHidden_2093 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
      var_handlesGraphicControllerBinding_2171 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_outletClassDeclarationAST::class_func_new (var_outletClassName_1855, var_userDefined_1694, var_superClassName_1889, var_hasRunAction_2025, var_hasEnabled_2060, var_handlesTableViewBinding_2125, var_handlesGraphicControllerBinding_2171, var_hasHidden_2093  COMMA_SOURCE_FILE ("outlet-class.ggs", 79)), inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 79)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i25_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_ (GALGAS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  GALGAS_lstring var_outletClassName_1595 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  GALGAS_lstring var_bindingName_1645 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1716 = GALGAS_outletClassBindingSpecificationModelList::class_func_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1789 ;
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
      var_modelShouldBeWritableProperty_1789 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
      var_modelShouldBeWritableProperty_1789 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_2000 ;
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      var_modelTypeName_2000 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
      var_modelTypeName_2000 = GALGAS_lstring::class_func_new (GALGAS_string ("enum"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 55)), inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 55)) ;
    } break ;
    default:
      break ;
    }
    {
    var_outletClassBindingSpecificationModelList_1716.setter_append (var_modelTypeName_2000, var_modelShouldBeWritableProperty_1789, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 57)) ;
    }
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2312 = GALGAS_controllerBindingOptionList::class_func_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 61)) ;
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2412 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      GALGAS_lstring var_optionType_2472 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      {
      var_bindingOptionList_2312.setter_append (var_optionName_2412, var_optionType_2472, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 69)) ;
      }
      if (select_easyBindings_5F_syntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  {
  ioArgument_ioControllerTemplateList.setter_append (var_outletClassName_1595, var_bindingName_1645, var_outletClassBindingSpecificationModelList_1716, var_bindingOptionList_2312, inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 76)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      if (select_easyBindings_5F_syntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i26_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      if (select_easyBindings_5F_syntax_51 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  GALGAS_lstring var_outletTypeName_1921 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  GALGAS_lstring var_outletName_1960 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  GALGAS_tableValueBinding var_tableValueBinding_2018 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_2084 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_2158 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2237 ;
  GALGAS_graphicController var_graphicController_2307 ;
  GALGAS_regularBindingList var_regularBindingList_2372 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_2018, var_runActionDescriptor_2084, var_enabledBindingDescriptor_2158, var_hiddenBindingDescriptor_2237, var_graphicController_2307, var_regularBindingList_2372, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  {
  ioArgument_ioOutletDeclarationList.setter_append (var_outletTypeName_1921, var_outletName_1960, var_tableValueBinding_2018, var_runActionDescriptor_2084, var_enabledBindingDescriptor_2158, var_hiddenBindingDescriptor_2237, var_regularBindingList_2372, var_graphicController_2307, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 56)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  nt_outlet_5F_binding_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i27_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  nt_outlet_5F_binding_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i28_ (GALGAS_tableValueBinding & outArgument_tableValueBinding,
                                                                                         GALGAS_runActionDescriptor & outArgument_runActionDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_enabledBindingDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_hiddenBindingDescriptor,
                                                                                         GALGAS_graphicController & outArgument_graphicController,
                                                                                         GALGAS_regularBindingList & outArgument_regularBindingList,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_tableValueBinding.drop () ; // Release 'out' argument
  outArgument_runActionDescriptor.drop () ; // Release 'out' argument
  outArgument_enabledBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_hiddenBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_graphicController.drop () ; // Release 'out' argument
  outArgument_regularBindingList.drop () ; // Release 'out' argument
  outArgument_tableValueBinding = GALGAS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 77)) ;
  outArgument_runActionDescriptor = GALGAS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.ggs", 78)) ;
  outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 79)) ;
  outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 80)) ;
  outArgument_graphicController = GALGAS_graphicController::class_func_none (SOURCE_FILE ("outlet-declaration.ggs", 81)) ;
  outArgument_regularBindingList = GALGAS_regularBindingList::class_func_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 82)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, outArgument_tableValueBinding.objectCompare (GALGAS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 86)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 87)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 87)) ;
        }
      }
      GALGAS_lstring var_controllerName_3734 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
      outArgument_tableValueBinding = GALGAS_tableValueBinding::class_func_tableValueBinding (var_controllerName_3734  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 90)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, outArgument_runActionDescriptor.objectCompare (GALGAS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("outlet-declaration.ggs", 93)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 94)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 94)) ;
        }
      }
      GALGAS_lstring var_runTargetName_3975 ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 1: {
        var_runTargetName_3975 = GALGAS_lstring::class_func_new (GALGAS_string ("self"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 98)) ;
      } break ;
      case 2: {
        var_runTargetName_3975 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 101)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_runActionName_4158 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 103)) ;
      outArgument_runActionDescriptor = GALGAS_runActionDescriptor::class_func_action (var_runTargetName_3975, var_runActionName_4158  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 104)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, outArgument_enabledBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 108)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 109)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 109)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4504 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4504, inCompiler) ;
      outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4504  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 112)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 115)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, outArgument_hiddenBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 116)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 117)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 117)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4841 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4841, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4841  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 120)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_5001 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 123)) ;
      GALGAS_observablePropertyList var_observablePropertyList_5048 = GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 124)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_5148 ;
        nt_observable_5F_property_ (var_observableProperty_5148, inCompiler) ;
        {
        var_observablePropertyList_5048.setter_append (var_observableProperty_5148, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 127)) ;
        }
        if (select_easyBindings_5F_syntax_54 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 129)) ;
        }else{
          repeatFlag_9 = false ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_5297 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5297, inCompiler) ;
      {
      outArgument_regularBindingList.setter_append (var_bindingName_5001, var_observablePropertyList_5048, var_bindingOptions_5297, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 132)) ;
      }
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 139)) ;
      GALGAS_lstring var_graphicControllerName_5544 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 140)) ;
      GALGAS_lstring var_propertyName_5586 ;
      switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
      case 1: {
        var_propertyName_5586 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 145)) ;
        var_propertyName_5586 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 146)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.ggs", 148)).boolEnum () ;
        if (kBoolTrue == test_10) {
          outArgument_graphicController = GALGAS_graphicController::class_func_defined (var_graphicControllerName_5544, var_propertyName_5586  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 149)) ;
        }
      }
      if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5544.readProperty_location (), GALGAS_string ("binding already defined"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 151)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i28_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 101)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 103)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 115)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 123)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        if (select_easyBindings_5F_syntax_54 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 129)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 139)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 140)) ;
      switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 145)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 146)) ;
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
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i28_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 92)) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 101)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 103)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 107)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 115)) ;
      nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 123)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_indexing (inCompiler) ;
        if (select_easyBindings_5F_syntax_54 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 129)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      nt_binding_5F_option_5F_list_indexing (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 139)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 140)) ;
      switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 145)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 146)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i29_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    GALGAS_lstring var_propertyName_2416 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_rootProperty (var_propertyName_2416  COMMA_SOURCE_FILE ("observable-property.ggs", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2586 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_rootPropertyWithOption (var_propertyName_2416, var_optionName_2586  COMMA_SOURCE_FILE ("observable-property.ggs", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        GALGAS_lstring var_observablePropertyName_2782 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_rootPropertyRelationship (var_propertyName_2416, var_observablePropertyName_2782  COMMA_SOURCE_FILE ("observable-property.ggs", 59)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_rootPropertyNone (var_propertyName_2416  COMMA_SOURCE_FILE ("observable-property.ggs", 64)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfWithoutProperty (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 70))  COMMA_SOURCE_FILE ("observable-property.ggs", 70)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      GALGAS_lstring var_propertyName_3263 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfProperty (var_propertyName_3263  COMMA_SOURCE_FILE ("observable-property.ggs", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          GALGAS_lstring var_elementPropertyName_3479 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfPropertyArray (var_propertyName_3263, var_elementPropertyName_3479  COMMA_SOURCE_FILE ("observable-property.ggs", 82)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          GALGAS_lstring var_elementPropertyName_3749 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfPropertyObject (var_propertyName_3263, var_elementPropertyName_3749  COMMA_SOURCE_FILE ("observable-property.ggs", 90)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfPropertyNone (var_propertyName_3263  COMMA_SOURCE_FILE ("observable-property.ggs", 96)) ;
        } break ;
        case 4: {
          GALGAS_lstring var_optionName_4104 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfPropertyWithOption (var_propertyName_3263, var_optionName_4104  COMMA_SOURCE_FILE ("observable-property.ggs", 99)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    GALGAS_lstring var_propertyName_4324 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_prefsProperty (var_propertyName_4324  COMMA_SOURCE_FILE ("observable-property.ggs", 108)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      GALGAS_lstring var_optionName_4478 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_prefsPropertyWithOption (var_propertyName_4324, var_optionName_4478  COMMA_SOURCE_FILE ("observable-property.ggs", 112)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_4649 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      GALGAS_lstring var_propertyName_4741 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfControllerOneProperty (var_controllerName_4649, var_propertyName_4741  COMMA_SOURCE_FILE ("observable-property.ggs", 121)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_propertyName_4914 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfControllerProperty (var_controllerName_4649, var_propertyName_4914  COMMA_SOURCE_FILE ("observable-property.ggs", 125)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        GALGAS_lstring var_secondaryPropertyName_5119 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfControllerSecondaryProperty (var_controllerName_4649, var_propertyName_4914, var_secondaryPropertyName_5119  COMMA_SOURCE_FILE ("observable-property.ggs", 129)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        GALGAS_lstring var_secondaryPropertyName_5451 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_selfControllerAllProperties (var_controllerName_4649, var_propertyName_4914, var_secondaryPropertyName_5451  COMMA_SOURCE_FILE ("observable-property.ggs", 139)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_signatureProperty (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 148))  COMMA_SOURCE_FILE ("observable-property.ggs", 148)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_versionProperty (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 151))  COMMA_SOURCE_FILE ("observable-property.ggs", 151)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_versionShouldChangeProperty (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 154))  COMMA_SOURCE_FILE ("observable-property.ggs", 154)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    GALGAS_lstring var_superEntityName_6077 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    GALGAS_lstring var_propertyName_6129 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_superProperty (var_superEntityName_6077, var_propertyName_6129  COMMA_SOURCE_FILE ("observable-property.ggs", 162)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      GALGAS_abstractDefaultValue var_defaultValue_6381 ;
      nt_explicit_5F_value_ (var_defaultValue_6381, inCompiler) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::class_func_superPropertyWithDefaultValue (var_superEntityName_6077, var_propertyName_6129, var_defaultValue_6381  COMMA_SOURCE_FILE ("observable-property.ggs", 169)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i29_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i29_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i30_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  GALGAS_lstring var_transientTypeName_5559 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  GALGAS_lstring var_transientName_5610 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 101)) ;
  GALGAS_observablePropertyList var_dependanceList_5675 = GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("computed-property.ggs", 102)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_5763 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5763, inCompiler) ;
    {
    var_dependanceList_5675.setter_append (var_observablePropertyAST_5763, inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 105)) ;
    }
    if (select_easyBindings_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 109)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_computedPropertyDeclarationAST::class_func_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5559, var_transientName_5610, var_dependanceList_5675  COMMA_SOURCE_FILE ("computed-property.ggs", 110)), inCompiler COMMA_SOURCE_FILE ("computed-property.ggs", 110)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i30_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 109)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i30_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 98)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 100)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 101)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_66 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 107)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 109)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i31_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 91)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 92)) ;
  GALGAS_lstring var_transientTypeName_5389 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 93)) ;
  GALGAS_lstring var_transientName_5440 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientDeclarationAST::class_func_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5389, var_transientName_5440, GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("transient-property.ggs", 100)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("transient-property.ggs", 96)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 96)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i31_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 91)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 92)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 93)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 91)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 92)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 93)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i32_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isOverriding_5982 ;
  switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
  case 1: {
    var_isOverriding_5982 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 118)) ;
    var_isOverriding_5982 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 121)) ;
  GALGAS_lstring var_transientTypeName_6130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  GALGAS_lstring var_transientName_6181 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  GALGAS_observablePropertyList var_dependanceList_6246 = GALGAS_observablePropertyList::class_func_emptyList (SOURCE_FILE ("transient-property.ggs", 125)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_6334 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6334, inCompiler) ;
    {
    var_dependanceList_6246.setter_append (var_observablePropertyAST_6334, inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 128)) ;
    }
    if (select_easyBindings_5F_syntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 130)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 132)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_transientDeclarationAST::class_func_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6130, var_transientName_6181, var_dependanceList_6246, var_isOverriding_5982  COMMA_SOURCE_FILE ("transient-property.ggs", 133)), inCompiler COMMA_SOURCE_FILE ("transient-property.ggs", 133)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i32_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 118)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 121)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 130)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 132)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 118)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 121)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_68 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 130)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i33_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_proxyKind var_proxyKind_2105 ;
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
    var_proxyKind_2105 = GALGAS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.ggs", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
    var_proxyKind_2105 = GALGAS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.ggs", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  GALGAS_lstring var_proxyTypeName_2281 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  GALGAS_lstring var_proxyName_2328 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  GALGAS_lstring var_toOnePropertyName_2379 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  GALGAS_lstring var_propertyName_2438 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_proxyDeclarationAST::class_func_new (constinArgument_inCurrentEntity, var_proxyKind_2105, var_proxyTypeName_2281, var_proxyName_2328, var_toOnePropertyName_2379, var_propertyName_2438  COMMA_SOURCE_FILE ("proxy.ggs", 65)), inCompiler COMMA_SOURCE_FILE ("proxy.ggs", 65)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i33_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i33_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                       GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 52)) ;
  GALGAS_bool var_usedForSignature_2315 = GALGAS_bool (false) ;
  GALGAS_bool var_generateResetMethod_2348 = GALGAS_bool (false) ;
  GALGAS_bool var_generateDirectRead_2384 = GALGAS_bool (false) ;
  GALGAS_bool var_generateDirectAccess_2419 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_70 (inCompiler) == 2) {
      GALGAS_lstring var_attributeName_2494 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 59)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2494.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2315.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2494.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 62)) ;
            }
          }
          var_usedForSignature_2315 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2494.readProperty_string ().objectCompare (GALGAS_string ("generateResetMethod"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_generateResetMethod_2348.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2494.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 67)) ;
              }
            }
            var_generateResetMethod_2348 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, var_attributeName_2494.readProperty_string ().objectCompare (GALGAS_string ("generateDirectRead"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_generateDirectRead_2384.boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2494.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 72)) ;
                }
              }
              var_generateDirectRead_2384 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_attributeName_2494.readProperty_string ().objectCompare (GALGAS_string ("generateDirectAccess"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2419.boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2494.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 77)) ;
                  }
                }
                var_generateDirectAccess_2419 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@signature")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@generateResetMethod")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@generateDirectRead")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@generateDirectAccess")) ;
              inCompiler->emitSemanticError (var_attributeName_2494.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 81)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = var_generateDirectAccess_2419 ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2384 ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 88)), GALGAS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 88)) ;
    }
  }
  GALGAS_lstring var_attributeTypeName_3778 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  GALGAS_lstring var_attributeName_3829 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 91)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = var_usedForSignature_2315.boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_attributeName_3829.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 93)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 95)) ;
  GALGAS_abstractDefaultValue var_defaultValue_3998 ;
  nt_explicit_5F_value_ (var_defaultValue_3998, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 97)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_atomicPropertyDeclarationAST::class_func_new (constinArgument_inClassName, var_attributeTypeName_3778, var_attributeName_3829, var_defaultValue_3998, var_generateResetMethod_2348, var_generateDirectRead_2384, var_generateDirectAccess_2419  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 98)), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 98)) ;
  }
  {
  ioArgument_ioAttributeList.setter_append (var_attributeTypeName_3778, var_attributeName_3829, var_defaultValue_3998, inCompiler COMMA_SOURCE_FILE ("simple-stored-property.ggs", 108)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 91)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 95)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 97)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i34_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_70 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 59)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 90)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 91)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 95)) ;
  nt_explicit_5F_value_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                             GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  GALGAS_bool var_usedForSignature_2128 = GALGAS_bool (false) ;
  GALGAS_bool var_weak_2161 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_71 (inCompiler) == 2) {
      GALGAS_lstring var_attributeName_2220 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2220.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2128.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2220.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 53)) ;
            }
          }
          var_usedForSignature_2128 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2220.readProperty_string ().objectCompare (GALGAS_string ("weak"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_weak_2161.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2220.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 58)) ;
              }
            }
            var_weak_2161 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@weak")) ;
          inCompiler->emitSemanticError (var_attributeName_2220.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 62)) ;
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2773 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  GALGAS_lstring var_relationshipName_2828 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  GALGAS_toOneOppositeRelationship var_opposite_2881 ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
    var_opposite_2881 = GALGAS_toOneOppositeRelationship::class_func_none (SOURCE_FILE ("to-one-relationship.ggs", 69)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      GALGAS_lstring var_inverseRelationshipName_3003 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
      var_opposite_2881 = GALGAS_toOneOppositeRelationship::class_func_oppositeIsToOne (var_inverseRelationshipName_3003  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 75)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      GALGAS_lstring var_inverseRelationshipName_3170 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
      var_opposite_2881 = GALGAS_toOneOppositeRelationship::class_func_oppositeIsToMany (var_inverseRelationshipName_3170  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 79)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_toOneRelationshipAST::class_func_new (constinArgument_inCurrentEntity, var_destinationEntityName_2773, var_relationshipName_2828, var_opposite_2881, var_usedForSignature_2128, var_weak_2161  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 83)), inCompiler COMMA_SOURCE_FILE ("to-one-relationship.ggs", 83)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i35_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 45)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_71 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 73)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 74)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 78)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 82)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                              GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  GALGAS_bool var_usedForSignature_2541 = GALGAS_bool (false) ;
  GALGAS_bool var_customStore_2574 = GALGAS_bool (false) ;
  GALGAS_bool var_generateDirectAccess_2602 = GALGAS_bool (false) ;
  GALGAS_bool var_generateDirectRead_2639 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_74 (inCompiler) == 2) {
      GALGAS_lstring var_attributeName_2712 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2712.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2541.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2712.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 67)) ;
            }
          }
          var_usedForSignature_2541 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2712.readProperty_string ().objectCompare (GALGAS_string ("customStore"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_customStore_2574.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2712.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 72)) ;
              }
            }
            var_customStore_2574 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (kIsEqual, var_attributeName_2712.readProperty_string ().objectCompare (GALGAS_string ("generateDirectRead"))).boolEnum () ;
            if (kBoolTrue == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_generateDirectRead_2639.boolEnum () ;
                if (kBoolTrue == test_8) {
                  TC_Array <C_FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2712.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 77)) ;
                }
              }
              var_generateDirectRead_2639 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_7) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, var_attributeName_2712.readProperty_string ().objectCompare (GALGAS_string ("generateDirectAccess"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2602.boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2712.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 82)) ;
                  }
                }
                var_generateDirectAccess_2602 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@signature")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@customStore")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@generateDirectAccess")) ;
              appendFixItActions (fixItArray13, kFixItReplace, GALGAS_string ("@generateDirectRead")) ;
              inCompiler->emitSemanticError (var_attributeName_2712.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 86)) ;
            }
          }
        }
      }
    }else{
      repeatFlag_0 = false ;
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    GALGAS_bool test_15 = var_generateDirectAccess_2602 ;
    if (kBoolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2639 ;
    }
    test_14 = test_15.boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 93)), GALGAS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 93)) ;
    }
  }
  GALGAS_lstring var_destinationEntityName_3955 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  GALGAS_lstring var_relationshipName_4001 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = var_usedForSignature_2541.boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_relationshipName_4001.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 98)) ;
      }
    }
  }
  GALGAS_toManyRelationshipOptionAST var_toManyRelationshipOption_4150 ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    GALGAS_lstring var_inserseRelationshipName_4241 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
    var_toManyRelationshipOption_4150 = GALGAS_toManyRelationshipOptionAST::class_func_hasOpposite (var_inserseRelationshipName_4241  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 105)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    GALGAS_lstring var_masterPropertyName_4428 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
    var_toManyRelationshipOption_4150 = GALGAS_toManyRelationshipOptionAST::class_func_hasDependance (var_masterPropertyName_4428  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 111)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_4150 = GALGAS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("to-many-relationship.ggs", 113)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_toManyRelationshipAST::class_func_new (constinArgument_inCurrentEntity, var_destinationEntityName_3955, var_relationshipName_4001, var_toManyRelationshipOption_4150, var_customStore_2574, var_usedForSignature_2541, var_generateDirectAccess_2602, var_generateDirectRead_2639  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 116)), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 116)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i36_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 57)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_74 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 95)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 102)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 103)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 104)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 107)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 108)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 110)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 115)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i37_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  GALGAS_lstring var_actionName_885 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  {
  ioArgument_ioActionDeclarationList.setter_append (var_actionName_885, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i37_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i37_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_3851 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3851, inCompiler) ;
      outArgument_outBinding = GALGAS_andBooleanMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, var_binding_3851  COMMA_SOURCE_FILE ("multiple-binding.ggs", 89)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      nt_booleanMultipleBindingComparison_parse (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i38_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_76 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      nt_booleanMultipleBindingComparison_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4305 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4305, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_greater (SOURCE_FILE ("multiple-binding.ggs", 101)), var_rightBinding_4305  COMMA_SOURCE_FILE ("multiple-binding.ggs", 101)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4474 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4474, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_greaterOrEqual (SOURCE_FILE ("multiple-binding.ggs", 105)), var_rightBinding_4474  COMMA_SOURCE_FILE ("multiple-binding.ggs", 105)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4650 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4650, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_lowerOrEqual (SOURCE_FILE ("multiple-binding.ggs", 109)), var_rightBinding_4650  COMMA_SOURCE_FILE ("multiple-binding.ggs", 109)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4823 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4823, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_lower (SOURCE_FILE ("multiple-binding.ggs", 113)), var_rightBinding_4823  COMMA_SOURCE_FILE ("multiple-binding.ggs", 113)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4990 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4990, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_equal (SOURCE_FILE ("multiple-binding.ggs", 117)), var_rightBinding_4990  COMMA_SOURCE_FILE ("multiple-binding.ggs", 117)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_5157 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_5157, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::class_func_notEqual (SOURCE_FILE ("multiple-binding.ggs", 121)), var_rightBinding_5157  COMMA_SOURCE_FILE ("multiple-binding.ggs", 121)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i39_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    nt_booleanMultipleBindingTerm_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5681 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5681, inCompiler) ;
      outArgument_outBinding = GALGAS_orBooleanMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, var_binding_5681  COMMA_SOURCE_FILE ("multiple-binding.ggs", 135)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5884 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5884, inCompiler) ;
      outArgument_outBinding = GALGAS_xorBooleanMultipleBindingExpressionAST::class_func_new (outArgument_outBinding, var_binding_5884  COMMA_SOURCE_FILE ("multiple-binding.ggs", 139)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i40_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_6280 ;
  nt_observable_5F_property_ (var_observablePropertyAST_6280, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::class_func_new (var_observablePropertyAST_6280  COMMA_SOURCE_FILE ("multiple-binding.ggs", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i41_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6732 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6732, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::class_func_new (var_binding_6732  COMMA_SOURCE_FILE ("multiple-binding.ggs", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i42_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  nt_booleanMultipleBindingOperand_indexing (inCompiler) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i43_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_7387 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::class_func_new (var_value_7387  COMMA_SOURCE_FILE ("multiple-binding.ggs", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i44_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::class_func_emptyList (SOURCE_FILE ("regular-binding.ggs", 20)) ;
  switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName_1024 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      GALGAS_abstractDefaultValue var_optionValue_1101 ;
      nt_explicit_5F_value_ (var_optionValue_1101, inCompiler) ;
      {
      outArgument_outBindingOptions.setter_append (var_optionName_1024, var_optionValue_1101, inCompiler COMMA_SOURCE_FILE ("regular-binding.ggs", 28)) ;
      }
      if (select_easyBindings_5F_syntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      if (select_easyBindings_5F_syntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i45_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      nt_explicit_5F_value_indexing (inCompiler) ;
      if (select_easyBindings_5F_syntax_80 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i46_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  GALGAS_lstring var_controllerName_2843 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  GALGAS_arrayControllerBoundModelAST var_model_2910 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
    var_model_2910 = GALGAS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.ggs", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
    var_model_2910 = GALGAS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (SOURCE_FILE ("array-controller.ggs", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  GALGAS_lstring var_relationshipName_3124 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3292 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3292, inCompiler) ;
    GALGAS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3321 = GALGAS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_3292  COMMA_SOURCE_FILE ("array-controller.ggs", 80)) ;
    {
    ioArgument_ioArrayControllerBindingListAST.setter_append (var_controllerName_2843, var_hiddenSelectionViewBindingDescriptor_3321, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 81)) ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_arrayControllerDeclarationAST::class_func_new (constinArgument_inCurrentEntity, var_controllerName_2843, var_model_2910, var_relationshipName_3124  COMMA_SOURCE_FILE ("array-controller.ggs", 87)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 87)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i46_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i46_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i47_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  GALGAS_lstring var_controllerName_3130 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  GALGAS_autoLayoutTableViewControllerAttributListAST var_arrayControllerAttributListAST_3200 = GALGAS_autoLayoutTableViewControllerAttributListAST::class_func_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_3289 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    GALGAS_abstractDefaultValue var_attributeValue_3365 ;
    nt_explicit_5F_value_ (var_attributeValue_3365, inCompiler) ;
    {
    var_arrayControllerAttributListAST_3200.setter_append (var_attributeName_3289, var_attributeValue_3365, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 71)) ;
    }
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  GALGAS_bool var_isRoot_3522 ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
    var_isRoot_3522 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
    var_isRoot_3522 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  GALGAS_lstring var_relationshipName_3662 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3737 = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::class_func_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 87)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        GALGAS_bool var_editableColumn_3857 ;
        switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
          var_editableColumn_3857 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
          var_editableColumn_3857 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_propertyName_4048 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        GALGAS_stringset joker_4100 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 103)) ;
        GALGAS_astAutoLayoutViewInstructionParameterList var_columnParameterListAST_4110 ;
        nt_view_5F_actual_5F_parameter_5F_list_ (joker_4100, var_columnParameterListAST_4110, inCompiler) ;
        GALGAS_lstring var_sortPropertyName_4158 ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4158 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 106)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 108)) ;
          var_sortPropertyName_4158 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
        } break ;
        default:
          break ;
        }
        {
        var_arrayControllerBoundColumnListAST_3737.setter_append (var_editableColumn_3857, var_propertyName_4048, var_columnParameterListAST_4110, var_sortPropertyName_4158, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 111)) ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 118)) ;
  } break ;
  default:
    break ;
  }
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_autoLayoutTableViewControllerDeclarationAST::class_func_new (constinArgument_inCurrentEntity, var_controllerName_3130, var_isRoot_3522, constinArgument_inRootEntity, var_relationshipName_3662, var_arrayControllerBoundColumnListAST_3737, var_arrayControllerAttributListAST_3200  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 120)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 120)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i47_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 108)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 118)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i47_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    nt_explicit_5F_value_indexing (inCompiler) ;
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      if (select_easyBindings_5F_syntax_86 (inCompiler) == 2) {
        switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
        switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 108)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
        } break ;
        default:
          break ;
        }
      }else{
        repeatFlag_1 = false ;
      }
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 118)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i48_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  GALGAS_lstring var_selectionEntityName_2158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  GALGAS_lstring var_selectionControllerName_2215 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  GALGAS_lstring var_modelControllerName_2275 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  GALGAS_lstring var_propertyName_2336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GALGAS_selectionControllerDeclarationAST::class_func_new (constinArgument_inCurrentEntity, var_selectionControllerName_2215, var_modelControllerName_2275, var_propertyName_2336, var_selectionEntityName_2158  COMMA_SOURCE_FILE ("selection-controller.ggs", 49)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 49)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i48_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i48_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i49_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::class_func_new (GALGAS_lbool::class_func_new (GALGAS_bool (true), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56)), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::class_func_new (GALGAS_lbool::class_func_new (GALGAS_bool (false), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59)), inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2284 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::class_func_new (var_integerValue_2284, GALGAS_bool (false)  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 62)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    GALGAS_luint var_integerValue_2421 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::class_func_new (var_integerValue_2421, GALGAS_bool (true)  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 66)) ;
  } break ;
  case 5: {
    GALGAS_ldouble var_doubleValue_2548 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::class_func_new (var_doubleValue_2548  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 69)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_2670 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::class_func_new (var_stringValue_2670  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 72)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_stringValue_2784 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::class_func_new (var_stringValue_2784  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 75)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    GALGAS_lstring var_name_2917 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
    outArgument_outDefaultValue = GALGAS_prefsAsDefaultValue::class_func_new (var_name_2917  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 80)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i49_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i49_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i50_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  GALGAS_lstring var_xcodeProjectString_420 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_420.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_420.readProperty_location (), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.ggs", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_420.readProperty_location (), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.ggs", 18)) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_420 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i50_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i50_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i51_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_1329 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      GALGAS_lstring var_outletName_1377 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
      {
      GALGAS_mainXibLineDescriptorList temp_1 = GALGAS_mainXibLineDescriptorList::class_func_emptyList (SOURCE_FILE ("main-xib.ggs", 39)) ;
      temp_1.addAssign_operation (GALGAS_mainXibElement::class_func_outlet (var_outletType_1329, var_outletName_1377  COMMA_SOURCE_FILE ("main-xib.ggs", 39))  COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
      ioArgument_ioElementList.setter_append (temp_1, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
      }
    } break ;
    case 2: {
      GALGAS_lstring var_s_1530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
      {
      GALGAS_mainXibLineDescriptorList temp_2 = GALGAS_mainXibLineDescriptorList::class_func_emptyList (SOURCE_FILE ("main-xib.ggs", 42)) ;
      temp_2.addAssign_operation (GALGAS_mainXibElement::class_func_text (var_s_1530  COMMA_SOURCE_FILE ("main-xib.ggs", 42))  COMMA_SOURCE_FILE ("main-xib.ggs", 42)) ;
      ioArgument_ioElementList.setter_append (temp_2, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 42)) ;
      }
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      GALGAS_mainXibLineDescriptorList var_lineDescription_1662 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1662, inCompiler) ;
      {
      ioArgument_ioElementList.setter_append (var_lineDescription_1662, inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 46)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_90 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i51_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      nt_main_5F_xib_5F_line_parse (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_90 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i51_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 41)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      nt_main_5F_xib_5F_line_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_90 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 50)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::class_func_emptyList (SOURCE_FILE ("main-xib.ggs", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_2083 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      GALGAS_lstring var_outletName_2131 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
      {
      outArgument_outLineDescription.setter_append (GALGAS_mainXibElement::class_func_outlet (var_outletType_2083, var_outletName_2131  COMMA_SOURCE_FILE ("main-xib.ggs", 66)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 65)) ;
      }
    } break ;
    case 2: {
      GALGAS_lstring var_s_2307 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
      {
      outArgument_outLineDescription.setter_append (GALGAS_mainXibElement::class_func_text (var_s_2307  COMMA_SOURCE_FILE ("main-xib.ggs", 70)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 70)) ;
      }
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_92 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_parse (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_92 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i52_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 63)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 69)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_92 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 73)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList (),
mProperty_mViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::GALGAS_prefDeclaration (const GALGAS_outletDeclarationList & inOperand0,
                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                const GALGAS_lstringlist & inOperand2,
                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                const GALGAS_stringset & inOperand4,
                                                const GALGAS_mainXibDescriptorList & inOperand5,
                                                const GALGAS_astViewDeclarationList & inOperand6) :
mProperty_mOutletDeclarationList (inOperand0),
mProperty_mSimpleStoredAttributeList (inOperand1),
mProperty_mActionDeclarationList (inOperand2),
mProperty_mExternSwiftFunctionList (inOperand3),
mProperty_mSignatureList (inOperand4),
mProperty_mMainXibDescriptorList (inOperand5),
mProperty_mViewDeclarationList (inOperand6) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::class_func_new (Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_outletDeclarationList in_mOutletDeclarationList = GALGAS_outletDeclarationList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 6)) ;
  const GALGAS_simpleStoredPropertyList in_mSimpleStoredAttributeList = GALGAS_simpleStoredPropertyList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 7)) ;
  const GALGAS_lstringlist in_mActionDeclarationList = GALGAS_lstringlist::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 8)) ;
  const GALGAS_externSwiftFunctionList in_mExternSwiftFunctionList = GALGAS_externSwiftFunctionList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 9)) ;
  const GALGAS_stringset in_mSignatureList = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("preferences.ggs", 10)) ;
  const GALGAS_mainXibDescriptorList in_mMainXibDescriptorList = GALGAS_mainXibDescriptorList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 11)) ;
  const GALGAS_astViewDeclarationList in_mViewDeclarationList = GALGAS_astViewDeclarationList::class_func_emptyList (SOURCE_FILE ("preferences.ggs", 12)) ;
  GALGAS_prefDeclaration result ;
  if (in_mOutletDeclarationList.isValid () && in_mSimpleStoredAttributeList.isValid () && in_mActionDeclarationList.isValid () && in_mExternSwiftFunctionList.isValid () && in_mSignatureList.isValid () && in_mMainXibDescriptorList.isValid () && in_mViewDeclarationList.isValid ()) {
    result = GALGAS_prefDeclaration (in_mOutletDeclarationList, in_mSimpleStoredAttributeList, in_mActionDeclarationList, in_mExternSwiftFunctionList, in_mSignatureList, in_mMainXibDescriptorList, in_mViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

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
    result = mProperty_mExternSwiftFunctionList.objectCompare (inOperand.mProperty_mExternSwiftFunctionList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSignatureList.objectCompare (inOperand.mProperty_mSignatureList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mMainXibDescriptorList.objectCompare (inOperand.mProperty_mMainXibDescriptorList) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mViewDeclarationList.objectCompare (inOperand.mProperty_mViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mViewDeclarationList.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mViewDeclarationList.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_prefDeclaration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @prefDeclaration:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSimpleStoredAttributeList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @prefDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  const GALGAS_prefDeclaration * p = (const GALGAS_prefDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (void) :
mProperty_mClassMap (),
mProperty_mOutletClassMap (),
mProperty_mBindingSpecificationMap (),
mProperty_mAutolayoutViewClassMap (),
mProperty_mAutoLayoutBindingSpecificationMap (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext::GALGAS_semanticContext (const GALGAS_classMap & inOperand0,
                                                const GALGAS_outletClassMap & inOperand1,
                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                const GALGAS_autolayoutViewClassMap & inOperand3,
                                                const GALGAS_autoLayoutBindingSpecificationMap & inOperand4,
                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand5,
                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                const GALGAS_enumerationFunctionListAST & inOperand7) :
mProperty_mClassMap (inOperand0),
mProperty_mOutletClassMap (inOperand1),
mProperty_mBindingSpecificationMap (inOperand2),
mProperty_mAutolayoutViewClassMap (inOperand3),
mProperty_mAutoLayoutBindingSpecificationMap (inOperand4),
mProperty_mAutoLayoutVStackFunctionMap (inOperand5),
mProperty_mAutoLayoutHStackFunctionMap (inOperand6),
mProperty_mEnumerationFunctionListAST (inOperand7) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::class_func_new (Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_classMap in_mClassMap = GALGAS_classMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 6)) ;
  const GALGAS_outletClassMap in_mOutletClassMap = GALGAS_outletClassMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 7)) ;
  const GALGAS_bindingSpecificationMap in_mBindingSpecificationMap = GALGAS_bindingSpecificationMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 8)) ;
  const GALGAS_autolayoutViewClassMap in_mAutolayoutViewClassMap = GALGAS_autolayoutViewClassMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 9)) ;
  const GALGAS_autoLayoutBindingSpecificationMap in_mAutoLayoutBindingSpecificationMap = GALGAS_autoLayoutBindingSpecificationMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 10)) ;
  const GALGAS_astAutoLayoutViewFunctionMap in_mAutoLayoutVStackFunctionMap = GALGAS_astAutoLayoutViewFunctionMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 11)) ;
  const GALGAS_astAutoLayoutViewFunctionMap in_mAutoLayoutHStackFunctionMap = GALGAS_astAutoLayoutViewFunctionMap::class_func_emptyMap (SOURCE_FILE ("program.ggs", 12)) ;
  const GALGAS_enumerationFunctionListAST in_mEnumerationFunctionListAST = GALGAS_enumerationFunctionListAST::class_func_emptyList (SOURCE_FILE ("program.ggs", 13)) ;
  GALGAS_semanticContext result ;
  if (in_mClassMap.isValid () && in_mOutletClassMap.isValid () && in_mBindingSpecificationMap.isValid () && in_mAutolayoutViewClassMap.isValid () && in_mAutoLayoutBindingSpecificationMap.isValid () && in_mAutoLayoutVStackFunctionMap.isValid () && in_mAutoLayoutHStackFunctionMap.isValid () && in_mEnumerationFunctionListAST.isValid ()) {
    result = GALGAS_semanticContext (in_mClassMap, in_mOutletClassMap, in_mBindingSpecificationMap, in_mAutolayoutViewClassMap, in_mAutoLayoutBindingSpecificationMap, in_mAutoLayoutVStackFunctionMap, in_mAutoLayoutHStackFunctionMap, in_mEnumerationFunctionListAST) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_semanticContext::objectCompare (const GALGAS_semanticContext & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mClassMap.objectCompare (inOperand.mProperty_mClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletClassMap.objectCompare (inOperand.mProperty_mOutletClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBindingSpecificationMap.objectCompare (inOperand.mProperty_mBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutolayoutViewClassMap.objectCompare (inOperand.mProperty_mAutolayoutViewClassMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutBindingSpecificationMap.objectCompare (inOperand.mProperty_mAutoLayoutBindingSpecificationMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutVStackFunctionMap.objectCompare (inOperand.mProperty_mAutoLayoutVStackFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAutoLayoutHStackFunctionMap.objectCompare (inOperand.mProperty_mAutoLayoutHStackFunctionMap) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mEnumerationFunctionListAST.objectCompare (inOperand.mProperty_mEnumerationFunctionListAST) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mAutolayoutViewClassMap.isValid () && mProperty_mAutoLayoutBindingSpecificationMap.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::drop (void) {
  mProperty_mClassMap.drop () ;
  mProperty_mOutletClassMap.drop () ;
  mProperty_mBindingSpecificationMap.drop () ;
  mProperty_mAutolayoutViewClassMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationMap.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("<struct @semanticContext:") ;
  if (! isValid ()) {
    ioString.addString (" not built") ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAutolayoutViewClassMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAutoLayoutBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.addString (", ") ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString.addString (">") ;
}

//--------------------------------------------------------------------------------------------------
//
//     @semanticContext generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------



typeComparisonResult GALGAS_abstractDeclarationAST::objectCompare (const GALGAS_abstractDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

void GALGAS_abstractDeclarationAST::setter_setMClassName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractDeclarationAST::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//--------------------------------------------------------------------------------------------------
//
//     @abstractDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                            Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
  if (nullptr != inObject) {
    result = inObject->getter_nodeKey (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_firstAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_secondAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                             GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                             Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_thirdAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_fourthAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @transientClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_transientClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsClass.printNonNullClassInstanceProperties ("mIsClass") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_transientClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_transientClassDeclarationAST * p = (const cPtr_transientClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsClass.objectCompare (p->mProperty_mIsClass) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_transientClassDeclarationAST::objectCompare (const GALGAS_transientClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                         const GALGAS_bool & inAttribute_mIsClass
                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_transientClassDeclarationAST::setter_setMIsClass (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    p->mProperty_mIsClass = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientClassDeclarationAST::readProperty_mIsClass (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    return p->mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @transientClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (String & ioString,
                                                     const int32_t inIndentation) const {
  ioString.addString ("[@transientClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @transientClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                                                    & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  const GALGAS_transientClassDeclarationAST * p = (const GALGAS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_enumerationDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mEnumConstantNameList.printNonNullClassInstanceProperties ("mEnumConstantNameList") ;
    mProperty_mCaseIterable.printNonNullClassInstanceProperties ("mCaseIterable") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_enumerationDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumerationDeclarationAST * p = (const cPtr_enumerationDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantNameList.objectCompare (p->mProperty_mEnumConstantNameList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseIterable.objectCompare (p->mProperty_mCaseIterable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumerationDeclarationAST::objectCompare (const GALGAS_enumerationDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                   const GALGAS_lstringlist & inAttribute_mEnumConstantNameList,
                                                                                   const GALGAS_bool & inAttribute_mCaseIterable
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid () && inAttribute_mCaseIterable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList, inAttribute_mCaseIterable COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::readProperty_mEnumConstantNameList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumConstantNameList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_enumerationDeclarationAST::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList,
                                                                const GALGAS_bool & in_mCaseIterable
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList),
mProperty_mCaseIterable (in_mCaseIterable) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("[@enumerationDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList, mProperty_mCaseIterable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumerationDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @enumForGeneration reference class
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

typeComparisonResult cPtr_enumForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_enumForGeneration * p = (const cPtr_enumForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_enumForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEnumName.objectCompare (p->mProperty_mEnumName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumConstantList.objectCompare (p->mProperty_mEnumConstantList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnumFuncMap.objectCompare (p->mProperty_mEnumFuncMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCaseIterable.objectCompare (p->mProperty_mCaseIterable) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_enumForGeneration::objectCompare (const GALGAS_enumForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::class_func_new (const GALGAS_string & inAttribute_mEnumName,
                                                                   const GALGAS_lstringlist & inAttribute_mEnumConstantList,
                                                                   const GALGAS_enumFuncMap & inAttribute_mEnumFuncMap,
                                                                   const GALGAS_bool & inAttribute_mCaseIterable
                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid () && inAttribute_mEnumFuncMap.isValid () && inAttribute_mCaseIterable.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList, inAttribute_mEnumFuncMap, inAttribute_mCaseIterable COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumForGeneration::readProperty_mEnumName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumForGeneration::readProperty_mEnumConstantList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumConstantList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumForGeneration::readProperty_mEnumFuncMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_enumFuncMap () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumFuncMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_enumForGeneration::readProperty_mCaseIterable (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mCaseIterable ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @enumForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList,
                                                const GALGAS_enumFuncMap & in_mEnumFuncMap,
                                                const GALGAS_bool & in_mCaseIterable
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList),
mProperty_mEnumFuncMap (in_mEnumFuncMap),
mProperty_mCaseIterable (in_mCaseIterable) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.addString ("[@enumForGeneration:") ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEnumFuncMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCaseIterable.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList, mProperty_mEnumFuncMap, mProperty_mCaseIterable COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @enumForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::extractObject (const GALGAS_object & inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  const GALGAS_enumForGeneration * p = (const GALGAS_enumForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumForGeneration_2D_weak::objectCompare (const GALGAS_enumForGeneration_2D_weak & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    cPtr_weakReference_proxy * myPtr = mProxyPtr ;
    const size_t myObjectPtr = size_t (myPtr) ;
    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;
    const size_t operandObjectPtr = size_t (operandPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak::GALGAS_enumForGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak & GALGAS_enumForGeneration_2D_weak::operator = (const GALGAS_enumForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak::GALGAS_enumForGeneration_2D_weak (const GALGAS_enumForGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak GALGAS_enumForGeneration_2D_weak::class_func_nil (LOCATION_ARGS) {
  GALGAS_enumForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration_2D_weak::bang_enumForGeneration_2D_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumForGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumForGeneration) ;
      result = GALGAS_enumForGeneration ((cPtr_enumForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//     @enumForGeneration-weak generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ("enumForGeneration-weak",
                                                                                 & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak GALGAS_enumForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration_2D_weak result ;
  const GALGAS_enumForGeneration_2D_weak * p = (const GALGAS_enumForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_enumForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @atomicClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_atomicClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_atomicClassDeclarationAST * p = (const cPtr_atomicClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mKind.objectCompare (p->mProperty_mKind) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_atomicClassDeclarationAST::objectCompare (const GALGAS_atomicClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                   const GALGAS_typeKind & inAttribute_mKind
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_atomicClassDeclarationAST::setter_setMKind (GALGAS_typeKind inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("[@atomicClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @atomicClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  const GALGAS_atomicClassDeclarationAST * p = (const GALGAS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_entityDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mIsAbstract.printNonNullClassInstanceProperties ("mIsAbstract") ;
    mProperty_mSuperEntityName.printNonNullClassInstanceProperties ("mSuperEntityName") ;
    mProperty_mHandlingOpposite.printNonNullClassInstanceProperties ("mHandlingOpposite") ;
    mProperty_mSimpleStoredPropertyList.printNonNullClassInstanceProperties ("mSimpleStoredPropertyList") ;
    mProperty_mSignatureList.printNonNullClassInstanceProperties ("mSignatureList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mObsoleteEntityNames.printNonNullClassInstanceProperties ("mObsoleteEntityNames") ;
    mProperty_mIsGraphicEntity.printNonNullClassInstanceProperties ("mIsGraphicEntity") ;
    mProperty_mExternSwiftDelegateList.printNonNullClassInstanceProperties ("mExternSwiftDelegateList") ;
    mProperty_mGraphicOptionArray.printNonNullClassInstanceProperties ("mGraphicOptionArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_entityDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityDeclarationAST * p = (const cPtr_entityDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlingOpposite.objectCompare (p->mProperty_mHandlingOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSimpleStoredPropertyList.objectCompare (p->mProperty_mSimpleStoredPropertyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureList.objectCompare (p->mProperty_mSignatureList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mObsoleteEntityNames.objectCompare (p->mProperty_mObsoleteEntityNames) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphicOptionArray.objectCompare (p->mProperty_mGraphicOptionArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_entityDeclarationAST::objectCompare (const GALGAS_entityDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                         const GALGAS_bool & inAttribute_mIsAbstract,
                                                                         const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                         const GALGAS_bool & inAttribute_mHandlingOpposite,
                                                                         const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredPropertyList,
                                                                         const GALGAS_stringset & inAttribute_mSignatureList,
                                                                         const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                         const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                         const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                         const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                         const GALGAS_lstringlist & inAttribute_mGraphicOptionArray
                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mHandlingOpposite.isValid () && inAttribute_mSimpleStoredPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mGraphicOptionArray.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mSuperEntityName, inAttribute_mHandlingOpposite, inAttribute_mSimpleStoredPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity, inAttribute_mExternSwiftDelegateList, inAttribute_mGraphicOptionArray COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_entityDeclarationAST::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::readProperty_mSimpleStoredPropertyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_simpleStoredPropertyList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSimpleStoredPropertyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityDeclarationAST::readProperty_mSignatureList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSignatureList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mObsoleteEntityNames (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mObsoleteEntityNames ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityDeclarationAST::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mGraphicOptionArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mGraphicOptionArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_lstring & in_mSuperEntityName,
                                                      const GALGAS_bool & in_mHandlingOpposite,
                                                      const GALGAS_simpleStoredPropertyList & in_mSimpleStoredPropertyList,
                                                      const GALGAS_stringset & in_mSignatureList,
                                                      const GALGAS_lstringlist & in_mActionDeclarationList,
                                                      const GALGAS_lstringlist & in_mObsoleteEntityNames,
                                                      const GALGAS_bool & in_mIsGraphicEntity,
                                                      const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                      const GALGAS_lstringlist & in_mGraphicOptionArray
                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mHandlingOpposite (in_mHandlingOpposite),
mProperty_mSimpleStoredPropertyList (in_mSimpleStoredPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mGraphicOptionArray (in_mGraphicOptionArray) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.addString ("[@entityDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSimpleStoredPropertyList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGraphicOptionArray.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mSimpleStoredPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList, mProperty_mGraphicOptionArray COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @entityDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  const GALGAS_entityDeclarationAST * p = (const GALGAS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
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

typeComparisonResult cPtr_entityForGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_entityForGeneration * p = (const cPtr_entityForGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_entityForGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mEntityName.objectCompare (p->mProperty_mEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperEntityName.objectCompare (p->mProperty_mSuperEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlingOpposite.objectCompare (p->mProperty_mHandlingOpposite) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mPropertyGenerationList.objectCompare (p->mProperty_mPropertyGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSignatureSet.objectCompare (p->mProperty_mSignatureSet) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsGraphicEntity.objectCompare (p->mProperty_mIsGraphicEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mIsAbstract.objectCompare (p->mProperty_mIsAbstract) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOverridenTransients.objectCompare (p->mProperty_mOverridenTransients) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mExternSwiftDelegateList.objectCompare (p->mProperty_mExternSwiftDelegateList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasSubEntity.objectCompare (p->mProperty_mHasSubEntity) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCanCopyAndPaste_5F_option.objectCompare (p->mProperty_mCanCopyAndPaste_5F_option) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCannotBeDeleted_5F_option.objectCompare (p->mProperty_mCannotBeDeleted_5F_option) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_entityForGeneration::objectCompare (const GALGAS_entityForGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::class_func_new (const GALGAS_string & inAttribute_mEntityName,
                                                                       const GALGAS_string & inAttribute_mSuperEntityName,
                                                                       const GALGAS_bool & inAttribute_mHandlingOpposite,
                                                                       const GALGAS_propertyGenerationList & inAttribute_mPropertyGenerationList,
                                                                       const GALGAS_stringset & inAttribute_mSignatureSet,
                                                                       const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                       const GALGAS_bool & inAttribute_mIsAbstract,
                                                                       const GALGAS_stringset & inAttribute_mOverridenTransients,
                                                                       const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                       const GALGAS_bool & inAttribute_mHasSubEntity,
                                                                       const GALGAS_bool & inAttribute_mCanCopyAndPaste_5F_option,
                                                                       const GALGAS_bool & inAttribute_mCannotBeDeleted_5F_option
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mHandlingOpposite.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mOverridenTransients.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mHasSubEntity.isValid () && inAttribute_mCanCopyAndPaste_5F_option.isValid () && inAttribute_mCannotBeDeleted_5F_option.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mHandlingOpposite, inAttribute_mPropertyGenerationList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mIsAbstract, inAttribute_mOverridenTransients, inAttribute_mExternSwiftDelegateList, inAttribute_mHasSubEntity, inAttribute_mCanCopyAndPaste_5F_option, inAttribute_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHandlingOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHandlingOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
                                                    const GALGAS_bool & in_mHandlingOpposite,
                                                    const GALGAS_propertyGenerationList & in_mPropertyGenerationList,
                                                    const GALGAS_stringset & in_mSignatureSet,
                                                    const GALGAS_bool & in_mIsGraphicEntity,
                                                    const GALGAS_bool & in_mIsAbstract,
                                                    const GALGAS_stringset & in_mOverridenTransients,
                                                    const GALGAS_externSwiftDelegateList & in_mExternSwiftDelegateList,
                                                    const GALGAS_bool & in_mHasSubEntity,
                                                    const GALGAS_bool & in_mCanCopyAndPaste_5F_option,
                                                    const GALGAS_bool & in_mCannotBeDeleted_5F_option
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEntityName (in_mEntityName),
mProperty_mSuperEntityName (in_mSuperEntityName),
mProperty_mHandlingOpposite (in_mHandlingOpposite),
mProperty_mPropertyGenerationList (in_mPropertyGenerationList),
mProperty_mSignatureSet (in_mSignatureSet),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mIsAbstract (in_mIsAbstract),
mProperty_mOverridenTransients (in_mOverridenTransients),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mHasSubEntity (in_mHasSubEntity),
mProperty_mCanCopyAndPaste_5F_option (in_mCanCopyAndPaste_5F_option),
mProperty_mCannotBeDeleted_5F_option (in_mCannotBeDeleted_5F_option) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("[@entityForGeneration:") ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlingOpposite.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mHandlingOpposite, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @entityForGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                                                           & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mOutletDeclarationList.printNonNullClassInstanceProperties ("mOutletDeclarationList") ;
    mProperty_mActionDeclarationList.printNonNullClassInstanceProperties ("mActionDeclarationList") ;
    mProperty_mArrayControllerBindingListAST.printNonNullClassInstanceProperties ("mArrayControllerBindingListAST") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerList.printNonNullClassInstanceProperties ("mOutletLinkerList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentDeclarationAST * p = (const cPtr_autoLayoutDocumentDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletDeclarationList.objectCompare (p->mProperty_mOutletDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mActionDeclarationList.objectCompare (p->mProperty_mActionDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mArrayControllerBindingListAST.objectCompare (p->mProperty_mArrayControllerBindingListAST) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletLinkerList.objectCompare (p->mProperty_mOutletLinkerList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentDeclarationAST::objectCompare (const GALGAS_autoLayoutDocumentDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                 const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                 const GALGAS_lstring & inAttribute_mMainViewName,
                                                                                                 const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                                 const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                                 const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST,
                                                                                                 const GALGAS_astViewDeclarationList & inAttribute_mViewDeclarationList,
                                                                                                 const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                 const GALGAS_astAutoLayoutOutletLinkerList & inAttribute_mOutletLinkerList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST, inAttribute_mViewDeclarationList, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_arrayControllerBindingListAST () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mMainViewName,
                                                                              const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                              const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_astAutoLayoutOutletLinkerList & in_mOutletLinkerList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mOutletDeclarationList (in_mOutletDeclarationList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mArrayControllerBindingListAST (in_mArrayControllerBindingListAST),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerList (in_mOutletLinkerList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@autoLayoutDocumentDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletLinkerList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                                                        & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  const GALGAS_autoLayoutDocumentDeclarationAST * p = (const GALGAS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDocumentFileGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractFileGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mDocumentName.printNonNullClassInstanceProperties ("mDocumentName") ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mMainViewName.printNonNullClassInstanceProperties ("mMainViewName") ;
    mProperty_mDocumentPropertyGenearionList.printNonNullClassInstanceProperties ("mDocumentPropertyGenearionList") ;
    mProperty_mOutletMap.printNonNullClassInstanceProperties ("mOutletMap") ;
    mProperty_mAutoLayoutOutletMap.printNonNullClassInstanceProperties ("mAutoLayoutOutletMap") ;
    mProperty_mTargetActionList.printNonNullClassInstanceProperties ("mTargetActionList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_multipleBindingGenerationList.printNonNullClassInstanceProperties ("multipleBindingGenerationList") ;
    mProperty_mTableViewBindingGenerationList.printNonNullClassInstanceProperties ("mTableViewBindingGenerationList") ;
    mProperty_mEBViewBindingGenerationList.printNonNullClassInstanceProperties ("mEBViewBindingGenerationList") ;
    mProperty_mViewDeclarationList.printNonNullClassInstanceProperties ("mViewDeclarationList") ;
    mProperty_mImplicitViewFunctionGenerationList.printNonNullClassInstanceProperties ("mImplicitViewFunctionGenerationList") ;
    mProperty_mConfiguratorMap.printNonNullClassInstanceProperties ("mConfiguratorMap") ;
    mProperty_mCustomSuperClassName.printNonNullClassInstanceProperties ("mCustomSuperClassName") ;
    mProperty_mOutletLinkerGenerationList.printNonNullClassInstanceProperties ("mOutletLinkerGenerationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutDocumentFileGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutDocumentFileGeneration * p = (const cPtr_autoLayoutDocumentFileGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mDocumentName.objectCompare (p->mProperty_mDocumentName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMainViewName.objectCompare (p->mProperty_mMainViewName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDocumentPropertyGenearionList.objectCompare (p->mProperty_mDocumentPropertyGenearionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletMap.objectCompare (p->mProperty_mOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutOutletMap.objectCompare (p->mProperty_mAutoLayoutOutletMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTargetActionList.objectCompare (p->mProperty_mTargetActionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_multipleBindingGenerationList.objectCompare (p->mProperty_multipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGenerationList.objectCompare (p->mProperty_mTableViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewBindingGenerationList.objectCompare (p->mProperty_mEBViewBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mViewDeclarationList.objectCompare (p->mProperty_mViewDeclarationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mImplicitViewFunctionGenerationList.objectCompare (p->mProperty_mImplicitViewFunctionGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorMap.objectCompare (p->mProperty_mConfiguratorMap) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletLinkerGenerationList.objectCompare (p->mProperty_mOutletLinkerGenerationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutDocumentFileGeneration::objectCompare (const GALGAS_autoLayoutDocumentFileGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::class_func_new (const GALGAS_string & inAttribute_mDocumentName,
                                                                                                 const GALGAS_string & inAttribute_mRootEntityName,
                                                                                                 const GALGAS_string & inAttribute_mMainViewName,
                                                                                                 const GALGAS_propertyGenerationList & inAttribute_mDocumentPropertyGenearionList,
                                                                                                 const GALGAS_decoratedOutletMap & inAttribute_mOutletMap,
                                                                                                 const GALGAS_autoLayoutOutletMap & inAttribute_mAutoLayoutOutletMap,
                                                                                                 const GALGAS_actionBindingListForGeneration & inAttribute_mTargetActionList,
                                                                                                 const GALGAS_regularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                 const GALGAS_multipleBindingGenerationList & inAttribute_multipleBindingGenerationList,
                                                                                                 const GALGAS_tableViewBindingGenerationList & inAttribute_mTableViewBindingGenerationList,
                                                                                                 const GALGAS_ebViewGraphicControllerBindingGenerationList & inAttribute_mEBViewBindingGenerationList,
                                                                                                 const GALGAS_viewGenerationList & inAttribute_mViewDeclarationList,
                                                                                                 const GALGAS_implicitViewFunctionGenerationList & inAttribute_mImplicitViewFunctionGenerationList,
                                                                                                 const GALGAS_autoLayoutConfiguratorMap & inAttribute_mConfiguratorMap,
                                                                                                 const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                 const GALGAS_autoLayoutOutletLinkerGenerationList & inAttribute_mOutletLinkerGenerationList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mAutoLayoutOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mImplicitViewFunctionGenerationList.isValid () && inAttribute_mConfiguratorMap.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mAutoLayoutOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mViewDeclarationList, inAttribute_mImplicitViewFunctionGenerationList, inAttribute_mConfiguratorMap, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentFileGeneration::cPtr_autoLayoutDocumentFileGeneration (const GALGAS_string & in_mDocumentName,
                                                                              const GALGAS_string & in_mRootEntityName,
                                                                              const GALGAS_string & in_mMainViewName,
                                                                              const GALGAS_propertyGenerationList & in_mDocumentPropertyGenearionList,
                                                                              const GALGAS_decoratedOutletMap & in_mOutletMap,
                                                                              const GALGAS_autoLayoutOutletMap & in_mAutoLayoutOutletMap,
                                                                              const GALGAS_actionBindingListForGeneration & in_mTargetActionList,
                                                                              const GALGAS_regularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                              const GALGAS_multipleBindingGenerationList & in_multipleBindingGenerationList,
                                                                              const GALGAS_tableViewBindingGenerationList & in_mTableViewBindingGenerationList,
                                                                              const GALGAS_ebViewGraphicControllerBindingGenerationList & in_mEBViewBindingGenerationList,
                                                                              const GALGAS_viewGenerationList & in_mViewDeclarationList,
                                                                              const GALGAS_implicitViewFunctionGenerationList & in_mImplicitViewFunctionGenerationList,
                                                                              const GALGAS_autoLayoutConfiguratorMap & in_mConfiguratorMap,
                                                                              const GALGAS_string & in_mCustomSuperClassName,
                                                                              const GALGAS_autoLayoutOutletLinkerGenerationList & in_mOutletLinkerGenerationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mDocumentName (in_mDocumentName),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mMainViewName (in_mMainViewName),
mProperty_mDocumentPropertyGenearionList (in_mDocumentPropertyGenearionList),
mProperty_mOutletMap (in_mOutletMap),
mProperty_mAutoLayoutOutletMap (in_mAutoLayoutOutletMap),
mProperty_mTargetActionList (in_mTargetActionList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_multipleBindingGenerationList (in_multipleBindingGenerationList),
mProperty_mTableViewBindingGenerationList (in_mTableViewBindingGenerationList),
mProperty_mEBViewBindingGenerationList (in_mEBViewBindingGenerationList),
mProperty_mViewDeclarationList (in_mViewDeclarationList),
mProperty_mImplicitViewFunctionGenerationList (in_mImplicitViewFunctionGenerationList),
mProperty_mConfiguratorMap (in_mConfiguratorMap),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerGenerationList (in_mOutletLinkerGenerationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@autoLayoutDocumentFileGeneration:") ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletLinkerGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutDocumentFileGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  const GALGAS_autoLayoutDocumentFileGeneration * p = (const GALGAS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_prefsDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mDeclaration.printNonNullClassInstanceProperties ("mDeclaration") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_prefsDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_prefsDeclarationAST * p = (const cPtr_prefsDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDeclaration.objectCompare (p->mProperty_mDeclaration) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_prefsDeclarationAST::objectCompare (const GALGAS_prefsDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                       const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.addString ("[@prefsDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @prefsDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                                                           & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  const GALGAS_prefsDeclarationAST * p = (const GALGAS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//'@entityStrongReferenceGraph' graph
//
//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph::GALGAS_entityStrongReferenceGraph (void) :
AC_GALGAS_graph () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::class_func_emptyGraph (LOCATION_ARGS) {
  GALGAS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::setter_addNode (GALGAS_lstring inKey,
                                                        GALGAS_string inArgument_0,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  GALGAS_stringlist::makeAttributesFromObjects (attributes, inArgument_0 COMMA_THERE) ;
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;
}


//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_topologicalSort (GALGAS_stringlist & outSortedList,
                                                                GALGAS_lstringlist & outSortedKeyList,
                                                                GALGAS_stringlist & outUnsortedList,
                                                                GALGAS_lstringlist & outUnsortedKeyList,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GALGAS_stringlist & outSortedList,
                                                                          GALGAS_lstringlist & outSortedKeyList,
                                                                          GALGAS_stringlist & outUnsortedList,
                                                                          GALGAS_lstringlist & outUnsortedKeyList,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElementArray sortedList ;
  capCollectionElementArray unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GALGAS_stringlist (sortedList) ;
  outUnsortedList = GALGAS_stringlist (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GALGAS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_circularities (GALGAS_stringlist & outInfoList,
                                                              GALGAS_lstringlist & outKeyList
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GALGAS_stringlist & outInfoList,
                                                                     GALGAS_lstringlist & outKeyList
                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GALGAS_stringlist & outInfoList,
                                                                       GALGAS_lstringlist & outKeyList
                                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElementArray infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GALGAS_stringlist (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GALGAS_lstringlist & inStartKeyList,
                                                                                               const GALGAS_stringset & inKeysToExclude,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GALGAS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_stringlist GALGAS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GALGAS_lstringlist & inStartKeyList,
                                                                                  const GALGAS_stringset & inNodesToExclude,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GALGAS_lstringlist result ;
  GALGAS_entityStrongReferenceGraph resultingGraph ;
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
//
//     @entityStrongReferenceGraph generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityStrongReferenceGraph::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityStrongReferenceGraph (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_entityStrongReferenceGraph GALGAS_entityStrongReferenceGraph::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_entityStrongReferenceGraph result ;
  const GALGAS_entityStrongReferenceGraph * p = (const GALGAS_entityStrongReferenceGraph *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_entityStrongReferenceGraph *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityStrongReferenceGraph", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutViewClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mAutoLayoutViewFunctionMap.printNonNullClassInstanceProperties ("mAutoLayoutViewFunctionMap") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutViewClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutViewClassDeclarationAST * p = (const cPtr_autoLayoutViewClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewFunctionMap.objectCompare (p->mProperty_mAutoLayoutViewFunctionMap) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutViewClassDeclarationAST::objectCompare (const GALGAS_autoLayoutViewClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST::GALGAS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                   const GALGAS_bool & inAttribute_mUserDefined,
                                                                                                   const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                                   const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                                   const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                                   const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                                   const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                                   const GALGAS_bool & inAttribute_mHasHidden,
                                                                                                   const GALGAS_autoLayoutClassParameterList & inAttribute_mParameterList,
                                                                                                   const GALGAS_astAutoLayoutViewFunctionMap & inAttribute_mAutoLayoutViewFunctionMap
                                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mAutoLayoutViewFunctionMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutViewClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden, inAttribute_mParameterList, inAttribute_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMParameterList (GALGAS_autoLayoutClassParameterList inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mParameterList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewClassDeclarationAST::setter_setMAutoLayoutViewFunctionMap (GALGAS_astAutoLayoutViewFunctionMap inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    p->mProperty_mAutoLayoutViewFunctionMap = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutClassParameterList GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutClassParameterList () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionMap GALGAS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                                const GALGAS_bool & in_mUserDefined,
                                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                                const GALGAS_bool & in_mHasRunAction,
                                                                                const GALGAS_bool & in_mHasEnabled,
                                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GALGAS_bool & in_mHasHidden,
                                                                                const GALGAS_autoLayoutClassParameterList & in_mParameterList,
                                                                                const GALGAS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden),
mProperty_mParameterList (in_mParameterList),
mProperty_mAutoLayoutViewFunctionMap (in_mAutoLayoutViewFunctionMap) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.addString ("[@autoLayoutViewClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutViewClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutViewClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewClassDeclarationAST GALGAS_autoLayoutViewClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewClassDeclarationAST result ;
  const GALGAS_autoLayoutViewClassDeclarationAST * p = (const GALGAS_autoLayoutViewClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutViewClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedHorizontalViewDeclaration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedHorizontalViewDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedHorizontalViewDeclaration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedHorizontalViewDeclaration * p = (const cPtr_astComputedHorizontalViewDeclaration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedHorizontalViewDeclaration::objectCompare (const GALGAS_astComputedHorizontalViewDeclaration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (void) :
GALGAS_astAbstractViewDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration::GALGAS_astComputedHorizontalViewDeclaration (const cPtr_astComputedHorizontalViewDeclaration * inSourcePtr) :
GALGAS_astAbstractViewDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedHorizontalViewDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::class_func_new (const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                                         const GALGAS_astViewInstructionList & inAttribute_mInstructionList,
                                                                                                         const GALGAS_astNewStackViewDeclarationList & inAttribute_mNewStackViewDeclarationList
                                                                                                         COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  if (inAttribute_mFunctionCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedHorizontalViewDeclaration (inAttribute_mFunctionCallList, inAttribute_mInstructionList, inAttribute_mNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astViewInstructionList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_astComputedHorizontalViewDeclaration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astComputedHorizontalViewDeclaration * p = (cPtr_astComputedHorizontalViewDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedHorizontalViewDeclaration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedHorizontalViewDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedHorizontalViewDeclaration::cPtr_astComputedHorizontalViewDeclaration (const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                      const GALGAS_astViewInstructionList & in_mInstructionList,
                                                                                      const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                                      COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewDeclaration (THERE),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mNewStackViewDeclarationList (in_mNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedHorizontalViewDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

void cPtr_astComputedHorizontalViewDeclaration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.addString ("[@astComputedHorizontalViewDeclaration:") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedHorizontalViewDeclaration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedHorizontalViewDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astComputedHorizontalViewDeclaration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ("astComputedHorizontalViewDeclaration",
                                                                                            & kTypeDescriptor_GALGAS_astAbstractViewDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedHorizontalViewDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedHorizontalViewDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedHorizontalViewDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedHorizontalViewDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedHorizontalViewDeclaration GALGAS_astComputedHorizontalViewDeclaration::extractObject (const GALGAS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_astComputedHorizontalViewDeclaration result ;
  const GALGAS_astComputedHorizontalViewDeclaration * p = (const GALGAS_astComputedHorizontalViewDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedHorizontalViewDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedHorizontalViewDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astLocalViewInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astLocalViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astLocalViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astLocalViewInstruction * p = (const cPtr_astLocalViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mLocalView.objectCompare (p->mProperty_mLocalView) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astLocalViewInstruction::objectCompare (const GALGAS_astLocalViewInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction::GALGAS_astLocalViewInstruction (const cPtr_astLocalViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astLocalViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::class_func_new (const GALGAS_lstring & inAttribute_mLocalView
                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  if (inAttribute_mLocalView.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astLocalViewInstruction (inAttribute_mLocalView COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astLocalViewInstruction::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astLocalViewInstruction) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astLocalViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astLocalViewInstruction::cPtr_astLocalViewInstruction (const GALGAS_lstring & in_mLocalView
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mLocalView (in_mLocalView) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astLocalViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

void cPtr_astLocalViewInstruction::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.addString ("[@astLocalViewInstruction:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astLocalViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astLocalViewInstruction (mProperty_mLocalView COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astLocalViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astLocalViewInstruction ("astLocalViewInstruction",
                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astLocalViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astLocalViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astLocalViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astLocalViewInstruction GALGAS_astLocalViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astLocalViewInstruction result ;
  const GALGAS_astLocalViewInstruction * p = (const GALGAS_astLocalViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astLocalViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astComputedViewInstruction reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astComputedViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mTableValueBinding.printNonNullClassInstanceProperties ("mTableValueBinding") ;
    mProperty_mRunActionDescriptor.printNonNullClassInstanceProperties ("mRunActionDescriptor") ;
    mProperty_mEnabledBindingDescriptor.printNonNullClassInstanceProperties ("mEnabledBindingDescriptor") ;
    mProperty_mHiddenBindingDescriptor.printNonNullClassInstanceProperties ("mHiddenBindingDescriptor") ;
    mProperty_mGraphicController.printNonNullClassInstanceProperties ("mGraphicController") ;
    mProperty_mRegularBindingList.printNonNullClassInstanceProperties ("mRegularBindingList") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_astComputedViewInstruction::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_astComputedViewInstruction * p = (const cPtr_astComputedViewInstruction *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableValueBinding.objectCompare (p->mProperty_mTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRunActionDescriptor.objectCompare (p->mProperty_mRunActionDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEnabledBindingDescriptor.objectCompare (p->mProperty_mEnabledBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHiddenBindingDescriptor.objectCompare (p->mProperty_mHiddenBindingDescriptor) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGraphicController.objectCompare (p->mProperty_mGraphicController) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingList.objectCompare (p->mProperty_mRegularBindingList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletIsArray.objectCompare (p->mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_astComputedViewInstruction::objectCompare (const GALGAS_astComputedViewInstruction & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (void) :
GALGAS_astAbstractViewInstructionDeclaration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction::GALGAS_astComputedViewInstruction (const cPtr_astComputedViewInstruction * inSourcePtr) :
GALGAS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astComputedViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::class_func_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                     const GALGAS_astAutoLayoutViewInstructionParameterList & inAttribute_mParameterList,
                                                                                     const GALGAS_astAutoLayoutViewFunctionCallList & inAttribute_mFunctionCallList,
                                                                                     const GALGAS_tableValueBinding & inAttribute_mTableValueBinding,
                                                                                     const GALGAS_runActionDescriptor & inAttribute_mRunActionDescriptor,
                                                                                     const GALGAS_multipleBindingDescriptor & inAttribute_mEnabledBindingDescriptor,
                                                                                     const GALGAS_multipleBindingDescriptor & inAttribute_mHiddenBindingDescriptor,
                                                                                     const GALGAS_graphicController & inAttribute_mGraphicController,
                                                                                     const GALGAS_regularBindingList & inAttribute_mRegularBindingList,
                                                                                     const GALGAS_lstring & inAttribute_mConfiguratorName,
                                                                                     const GALGAS_lstring & inAttribute_mOutletName,
                                                                                     const GALGAS_bool & inAttribute_mOutletIsArray
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mTableValueBinding.isValid () && inAttribute_mRunActionDescriptor.isValid () && inAttribute_mEnabledBindingDescriptor.isValid () && inAttribute_mHiddenBindingDescriptor.isValid () && inAttribute_mGraphicController.isValid () && inAttribute_mRegularBindingList.isValid () && inAttribute_mConfiguratorName.isValid () && inAttribute_mOutletName.isValid () && inAttribute_mOutletIsArray.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_astComputedViewInstruction (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mTableValueBinding, inAttribute_mRunActionDescriptor, inAttribute_mEnabledBindingDescriptor, inAttribute_mHiddenBindingDescriptor, inAttribute_mGraphicController, inAttribute_mRegularBindingList, inAttribute_mConfiguratorName, inAttribute_mOutletName, inAttribute_mOutletIsArray COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewInstructionParameterList GALGAS_astComputedViewInstruction::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewInstructionParameterList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutViewFunctionCallList GALGAS_astComputedViewInstruction::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_tableValueBinding GALGAS_astComputedViewInstruction::readProperty_mTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_tableValueBinding () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_runActionDescriptor GALGAS_astComputedViewInstruction::readProperty_mRunActionDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_runActionDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRunActionDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mEnabledBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mEnabledBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_multipleBindingDescriptor GALGAS_astComputedViewInstruction::readProperty_mHiddenBindingDescriptor (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_multipleBindingDescriptor () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mHiddenBindingDescriptor ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_graphicController GALGAS_astComputedViewInstruction::readProperty_mGraphicController (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_graphicController () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mGraphicController ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_regularBindingList GALGAS_astComputedViewInstruction::readProperty_mRegularBindingList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_regularBindingList () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mRegularBindingList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_astComputedViewInstruction::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_astComputedViewInstruction::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astComputedViewInstruction) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astComputedViewInstruction class
//--------------------------------------------------------------------------------------------------

cPtr_astComputedViewInstruction::cPtr_astComputedViewInstruction (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                  const GALGAS_astAutoLayoutViewInstructionParameterList & in_mParameterList,
                                                                  const GALGAS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                  const GALGAS_tableValueBinding & in_mTableValueBinding,
                                                                  const GALGAS_runActionDescriptor & in_mRunActionDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mEnabledBindingDescriptor,
                                                                  const GALGAS_multipleBindingDescriptor & in_mHiddenBindingDescriptor,
                                                                  const GALGAS_graphicController & in_mGraphicController,
                                                                  const GALGAS_regularBindingList & in_mRegularBindingList,
                                                                  const GALGAS_lstring & in_mConfiguratorName,
                                                                  const GALGAS_lstring & in_mOutletName,
                                                                  const GALGAS_bool & in_mOutletIsArray
                                                                  COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mTableValueBinding (in_mTableValueBinding),
mProperty_mRunActionDescriptor (in_mRunActionDescriptor),
mProperty_mEnabledBindingDescriptor (in_mEnabledBindingDescriptor),
mProperty_mHiddenBindingDescriptor (in_mHiddenBindingDescriptor),
mProperty_mGraphicController (in_mGraphicController),
mProperty_mRegularBindingList (in_mRegularBindingList),
mProperty_mConfiguratorName (in_mConfiguratorName),
mProperty_mOutletName (in_mOutletName),
mProperty_mOutletIsArray (in_mOutletIsArray) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_astComputedViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

void cPtr_astComputedViewInstruction::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("[@astComputedViewInstruction:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRunActionDescriptor.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEnabledBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHiddenBindingDescriptor.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGraphicController.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegularBindingList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astComputedViewInstruction::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astComputedViewInstruction (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mTableValueBinding, mProperty_mRunActionDescriptor, mProperty_mEnabledBindingDescriptor, mProperty_mHiddenBindingDescriptor, mProperty_mGraphicController, mProperty_mRegularBindingList, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @astComputedViewInstruction generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astComputedViewInstruction ("astComputedViewInstruction",
                                                                                  & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astComputedViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astComputedViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astComputedViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_astComputedViewInstruction GALGAS_astComputedViewInstruction::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_astComputedViewInstruction result ;
  const GALGAS_astComputedViewInstruction * p = (const GALGAS_astComputedViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_astComputedViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedHorizontalViewGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedHorizontalViewGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedHorizontalViewGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedHorizontalViewGeneration * p = (const cPtr_computedHorizontalViewGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedHorizontalViewGeneration::objectCompare (const GALGAS_computedHorizontalViewGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (void) :
GALGAS_abstractViewGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration::GALGAS_computedHorizontalViewGeneration (const cPtr_computedHorizontalViewGeneration * inSourcePtr) :
GALGAS_abstractViewGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedHorizontalViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::class_func_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                                 const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList,
                                                                                                 const GALGAS_astNewStackViewDeclarationList & inAttribute_mNewStackViewDeclarationList
                                                                                                 COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedHorizontalViewGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList, inAttribute_mNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_computedHorizontalViewGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_computedHorizontalViewGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_computedHorizontalViewGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedHorizontalViewGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedHorizontalViewGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedHorizontalViewGeneration::cPtr_computedHorizontalViewGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                              const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                              const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mNewStackViewDeclarationList (in_mNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedHorizontalViewGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

void cPtr_computedHorizontalViewGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.addString ("[@computedHorizontalViewGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedHorizontalViewGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedHorizontalViewGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedHorizontalViewGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ("computedHorizontalViewGeneration",
                                                                                        & kTypeDescriptor_GALGAS_abstractViewGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedHorizontalViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedHorizontalViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedHorizontalViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedHorizontalViewGeneration GALGAS_computedHorizontalViewGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_computedHorizontalViewGeneration result ;
  const GALGAS_computedHorizontalViewGeneration * p = (const GALGAS_computedHorizontalViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedHorizontalViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @hStackViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_hStackViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mFuncCallList.printNonNullClassInstanceProperties ("mFuncCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_hStackViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_hStackViewInstructionGeneration * p = (const cPtr_hStackViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mFuncCallList.objectCompare (p->mProperty_mFuncCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mInstructionList.objectCompare (p->mProperty_mInstructionList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mNewStackViewDeclarationList.objectCompare (p->mProperty_mNewStackViewDeclarationList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_hStackViewInstructionGeneration::objectCompare (const GALGAS_hStackViewInstructionGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration::GALGAS_hStackViewInstructionGeneration (const cPtr_hStackViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_hStackViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::class_func_new (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFuncCallList,
                                                                                               const GALGAS_autoLayoutViewInstructionGenerationList & inAttribute_mInstructionList,
                                                                                               const GALGAS_autoLayoutMultipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                               const GALGAS_astNewStackViewDeclarationList & inAttribute_mNewStackViewDeclarationList
                                                                                               COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  if (inAttribute_mFuncCallList.isValid () && inAttribute_mInstructionList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mNewStackViewDeclarationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_hStackViewInstructionGeneration (inAttribute_mFuncCallList, inAttribute_mInstructionList, inAttribute_mMultipleBindingGenerationList, inAttribute_mNewStackViewDeclarationList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_hStackViewInstructionGeneration::readProperty_mFuncCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mFuncCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_hStackViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_astNewStackViewDeclarationList GALGAS_hStackViewInstructionGeneration::readProperty_mNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_hStackViewInstructionGeneration) ;
    return p->mProperty_mNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @hStackViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_hStackViewInstructionGeneration::cPtr_hStackViewInstructionGeneration (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFuncCallList,
                                                                            const GALGAS_autoLayoutViewInstructionGenerationList & in_mInstructionList,
                                                                            const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                            const GALGAS_astNewStackViewDeclarationList & in_mNewStackViewDeclarationList
                                                                            COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mFuncCallList (in_mFuncCallList),
mProperty_mInstructionList (in_mInstructionList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mNewStackViewDeclarationList (in_mNewStackViewDeclarationList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_hStackViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

void cPtr_hStackViewInstructionGeneration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.addString ("[@hStackViewInstructionGeneration:") ;
  mProperty_mFuncCallList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_hStackViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_hStackViewInstructionGeneration (mProperty_mFuncCallList, mProperty_mInstructionList, mProperty_mMultipleBindingGenerationList, mProperty_mNewStackViewDeclarationList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @hStackViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ("hStackViewInstructionGeneration",
                                                                                       & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_hStackViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_hStackViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_hStackViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_hStackViewInstructionGeneration GALGAS_hStackViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_hStackViewInstructionGeneration result ;
  const GALGAS_hStackViewInstructionGeneration * p = (const GALGAS_hStackViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_hStackViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutComputedViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutComputedViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mAutoLayoutViewClassName.printNonNullClassInstanceProperties ("mAutoLayoutViewClassName") ;
    mProperty_mParameterList.printNonNullClassInstanceProperties ("mParameterList") ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mRegularBindingsGenerationList.printNonNullClassInstanceProperties ("mRegularBindingsGenerationList") ;
    mProperty_mMultipleBindingGenerationList.printNonNullClassInstanceProperties ("mMultipleBindingGenerationList") ;
    mProperty_mRunBindingGeneration.printNonNullClassInstanceProperties ("mRunBindingGeneration") ;
    mProperty_mTableViewBindingGeneration.printNonNullClassInstanceProperties ("mTableViewBindingGeneration") ;
    mProperty_mEBViewGraphicControllerBindingGeneration.printNonNullClassInstanceProperties ("mEBViewGraphicControllerBindingGeneration") ;
    mProperty_mConfiguratorName.printNonNullClassInstanceProperties ("mConfiguratorName") ;
    mProperty_mOutletName.printNonNullClassInstanceProperties ("mOutletName") ;
    mProperty_mOutletIsArray.printNonNullClassInstanceProperties ("mOutletIsArray") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_autoLayoutComputedViewInstructionGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_autoLayoutComputedViewInstructionGeneration * p = (const cPtr_autoLayoutComputedViewInstructionGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mAutoLayoutViewClassName.objectCompare (p->mProperty_mAutoLayoutViewClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mParameterList.objectCompare (p->mProperty_mParameterList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mFunctionCallList.objectCompare (p->mProperty_mFunctionCallList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRegularBindingsGenerationList.objectCompare (p->mProperty_mRegularBindingsGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mMultipleBindingGenerationList.objectCompare (p->mProperty_mMultipleBindingGenerationList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRunBindingGeneration.objectCompare (p->mProperty_mRunBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mTableViewBindingGeneration.objectCompare (p->mProperty_mTableViewBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mEBViewGraphicControllerBindingGeneration.objectCompare (p->mProperty_mEBViewGraphicControllerBindingGeneration) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mConfiguratorName.objectCompare (p->mProperty_mConfiguratorName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletName.objectCompare (p->mProperty_mOutletName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletIsArray.objectCompare (p->mProperty_mOutletIsArray) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_autoLayoutComputedViewInstructionGeneration::objectCompare (const GALGAS_autoLayoutComputedViewInstructionGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (void) :
GALGAS_abstractViewInstructionGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration::GALGAS_autoLayoutComputedViewInstructionGeneration (const cPtr_autoLayoutComputedViewInstructionGeneration * inSourcePtr) :
GALGAS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutComputedViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::class_func_new (const GALGAS_lstring & inAttribute_mAutoLayoutViewClassName,
                                                                                                                       const GALGAS_autoLayoutViewInstructionGenerationParameterList & inAttribute_mParameterList,
                                                                                                                       const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & inAttribute_mFunctionCallList,
                                                                                                                       const GALGAS_autoLayoutRegularBindingsGenerationList & inAttribute_mRegularBindingsGenerationList,
                                                                                                                       const GALGAS_autoLayoutMultipleBindingGenerationList & inAttribute_mMultipleBindingGenerationList,
                                                                                                                       const GALGAS_autolayoutRunBindingForGeneration & inAttribute_mRunBindingGeneration,
                                                                                                                       const GALGAS_string & inAttribute_mTableViewBindingGeneration,
                                                                                                                       const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & inAttribute_mEBViewGraphicControllerBindingGeneration,
                                                                                                                       const GALGAS_string & inAttribute_mConfiguratorName,
                                                                                                                       const GALGAS_string & inAttribute_mOutletName,
                                                                                                                       const GALGAS_bool & inAttribute_mOutletIsArray
                                                                                                                       COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  if (inAttribute_mAutoLayoutViewClassName.isValid () && inAttribute_mParameterList.isValid () && inAttribute_mFunctionCallList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_mMultipleBindingGenerationList.isValid () && inAttribute_mRunBindingGeneration.isValid () && inAttribute_mTableViewBindingGeneration.isValid () && inAttribute_mEBViewGraphicControllerBindingGeneration.isValid () && inAttribute_mConfiguratorName.isValid () && inAttribute_mOutletName.isValid () && inAttribute_mOutletIsArray.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutComputedViewInstructionGeneration (inAttribute_mAutoLayoutViewClassName, inAttribute_mParameterList, inAttribute_mFunctionCallList, inAttribute_mRegularBindingsGenerationList, inAttribute_mMultipleBindingGenerationList, inAttribute_mRunBindingGeneration, inAttribute_mTableViewBindingGeneration, inAttribute_mEBViewGraphicControllerBindingGeneration, inAttribute_mConfiguratorName, inAttribute_mOutletName, inAttribute_mOutletIsArray COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mAutoLayoutViewClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mAutoLayoutViewClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationParameterList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewInstructionGenerationFuncCallList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutRegularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mMultipleBindingGenerationList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutMultipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mMultipleBindingGenerationList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autolayoutRunBindingForGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mRunBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autolayoutRunBindingForGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mRunBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mTableViewBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mTableViewBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewGraphicControllerBindingGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mEBViewGraphicControllerBindingGeneration (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_autoLayoutViewGraphicControllerBindingGeneration () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mEBViewGraphicControllerBindingGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mConfiguratorName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mConfiguratorName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_autoLayoutComputedViewInstructionGeneration::readProperty_mOutletIsArray (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_autoLayoutComputedViewInstructionGeneration * p = (cPtr_autoLayoutComputedViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutComputedViewInstructionGeneration) ;
    return p->mProperty_mOutletIsArray ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutComputedViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutComputedViewInstructionGeneration::cPtr_autoLayoutComputedViewInstructionGeneration (const GALGAS_lstring & in_mAutoLayoutViewClassName,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationParameterList & in_mParameterList,
                                                                                                    const GALGAS_autoLayoutViewInstructionGenerationFuncCallList & in_mFunctionCallList,
                                                                                                    const GALGAS_autoLayoutRegularBindingsGenerationList & in_mRegularBindingsGenerationList,
                                                                                                    const GALGAS_autoLayoutMultipleBindingGenerationList & in_mMultipleBindingGenerationList,
                                                                                                    const GALGAS_autolayoutRunBindingForGeneration & in_mRunBindingGeneration,
                                                                                                    const GALGAS_string & in_mTableViewBindingGeneration,
                                                                                                    const GALGAS_autoLayoutViewGraphicControllerBindingGeneration & in_mEBViewGraphicControllerBindingGeneration,
                                                                                                    const GALGAS_string & in_mConfiguratorName,
                                                                                                    const GALGAS_string & in_mOutletName,
                                                                                                    const GALGAS_bool & in_mOutletIsArray
                                                                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (THERE),
mProperty_mAutoLayoutViewClassName (in_mAutoLayoutViewClassName),
mProperty_mParameterList (in_mParameterList),
mProperty_mFunctionCallList (in_mFunctionCallList),
mProperty_mRegularBindingsGenerationList (in_mRegularBindingsGenerationList),
mProperty_mMultipleBindingGenerationList (in_mMultipleBindingGenerationList),
mProperty_mRunBindingGeneration (in_mRunBindingGeneration),
mProperty_mTableViewBindingGeneration (in_mTableViewBindingGeneration),
mProperty_mEBViewGraphicControllerBindingGeneration (in_mEBViewGraphicControllerBindingGeneration),
mProperty_mConfiguratorName (in_mConfiguratorName),
mProperty_mOutletName (in_mOutletName),
mProperty_mOutletIsArray (in_mOutletIsArray) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutComputedViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

void cPtr_autoLayoutComputedViewInstructionGeneration::description (String & ioString,
                                                                    const int32_t inIndentation) const {
  ioString.addString ("[@autoLayoutComputedViewInstructionGeneration:") ;
  mProperty_mAutoLayoutViewClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mMultipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRunBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mTableViewBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mEBViewGraphicControllerBindingGeneration.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mConfiguratorName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mOutletIsArray.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutComputedViewInstructionGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutComputedViewInstructionGeneration (mProperty_mAutoLayoutViewClassName, mProperty_mParameterList, mProperty_mFunctionCallList, mProperty_mRegularBindingsGenerationList, mProperty_mMultipleBindingGenerationList, mProperty_mRunBindingGeneration, mProperty_mTableViewBindingGeneration, mProperty_mEBViewGraphicControllerBindingGeneration, mProperty_mConfiguratorName, mProperty_mOutletName, mProperty_mOutletIsArray COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @autoLayoutComputedViewInstructionGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ("autoLayoutComputedViewInstructionGeneration",
                                                                                                   & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutComputedViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutComputedViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutComputedViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutComputedViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_autoLayoutComputedViewInstructionGeneration GALGAS_autoLayoutComputedViewInstructionGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutComputedViewInstructionGeneration result ;
  const GALGAS_autoLayoutComputedViewInstructionGeneration * p = (const GALGAS_autoLayoutComputedViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_autoLayoutComputedViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutComputedViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @outletClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_outletClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mUserDefined.printNonNullClassInstanceProperties ("mUserDefined") ;
    mProperty_mSuperClassName.printNonNullClassInstanceProperties ("mSuperClassName") ;
    mProperty_mHasRunAction.printNonNullClassInstanceProperties ("mHasRunAction") ;
    mProperty_mHasEnabled.printNonNullClassInstanceProperties ("mHasEnabled") ;
    mProperty_mHandlesTableValueBinding.printNonNullClassInstanceProperties ("mHandlesTableValueBinding") ;
    mProperty_mHandlesGraphicControllerBinding.printNonNullClassInstanceProperties ("mHandlesGraphicControllerBinding") ;
    mProperty_mHasHidden.printNonNullClassInstanceProperties ("mHasHidden") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_outletClassDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_outletClassDeclarationAST * p = (const cPtr_outletClassDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mUserDefined.objectCompare (p->mProperty_mUserDefined) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mSuperClassName.objectCompare (p->mProperty_mSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasRunAction.objectCompare (p->mProperty_mHasRunAction) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasEnabled.objectCompare (p->mProperty_mHasEnabled) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesTableValueBinding.objectCompare (p->mProperty_mHandlesTableValueBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHandlesGraphicControllerBinding.objectCompare (p->mProperty_mHandlesGraphicControllerBinding) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mHasHidden.objectCompare (p->mProperty_mHasHidden) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_outletClassDeclarationAST::objectCompare (const GALGAS_outletClassDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST::GALGAS_outletClassDeclarationAST (const cPtr_outletClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_outletClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                   const GALGAS_bool & inAttribute_mUserDefined,
                                                                                   const GALGAS_lstring & inAttribute_mSuperClassName,
                                                                                   const GALGAS_bool & inAttribute_mHasRunAction,
                                                                                   const GALGAS_bool & inAttribute_mHasEnabled,
                                                                                   const GALGAS_bool & inAttribute_mHandlesTableValueBinding,
                                                                                   const GALGAS_bool & inAttribute_mHandlesGraphicControllerBinding,
                                                                                   const GALGAS_bool & inAttribute_mHasHidden
                                                                                   COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mUserDefined.isValid () && inAttribute_mSuperClassName.isValid () && inAttribute_mHasRunAction.isValid () && inAttribute_mHasEnabled.isValid () && inAttribute_mHandlesTableValueBinding.isValid () && inAttribute_mHandlesGraphicControllerBinding.isValid () && inAttribute_mHasHidden.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_outletClassDeclarationAST (inAttribute_mClassName, inAttribute_mUserDefined, inAttribute_mSuperClassName, inAttribute_mHasRunAction, inAttribute_mHasEnabled, inAttribute_mHandlesTableValueBinding, inAttribute_mHandlesGraphicControllerBinding, inAttribute_mHasHidden COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMUserDefined (GALGAS_bool inValue
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mUserDefined = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMSuperClassName (GALGAS_lstring inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mSuperClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasRunAction (GALGAS_bool inValue
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasRunAction = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasEnabled (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasEnabled = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesTableValueBinding (GALGAS_bool inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesTableValueBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHandlesGraphicControllerBinding (GALGAS_bool inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHandlesGraphicControllerBinding = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_outletClassDeclarationAST::setter_setMHasHidden (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    p->mProperty_mHasHidden = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_outletClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_outletClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_outletClassDeclarationAST * p = (cPtr_outletClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_outletClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @outletClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_outletClassDeclarationAST::cPtr_outletClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_bool & in_mUserDefined,
                                                                const GALGAS_lstring & in_mSuperClassName,
                                                                const GALGAS_bool & in_mHasRunAction,
                                                                const GALGAS_bool & in_mHasEnabled,
                                                                const GALGAS_bool & in_mHandlesTableValueBinding,
                                                                const GALGAS_bool & in_mHandlesGraphicControllerBinding,
                                                                const GALGAS_bool & in_mHasHidden
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mUserDefined (in_mUserDefined),
mProperty_mSuperClassName (in_mSuperClassName),
mProperty_mHasRunAction (in_mHasRunAction),
mProperty_mHasEnabled (in_mHasEnabled),
mProperty_mHandlesTableValueBinding (in_mHandlesTableValueBinding),
mProperty_mHandlesGraphicControllerBinding (in_mHandlesGraphicControllerBinding),
mProperty_mHasHidden (in_mHasHidden) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_outletClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

void cPtr_outletClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.addString ("[@outletClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_outletClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_outletClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @outletClassDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletClassDeclarationAST ("outletClassDeclarationAST",
                                                                                 & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletClassDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_outletClassDeclarationAST GALGAS_outletClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_outletClassDeclarationAST result ;
  const GALGAS_outletClassDeclarationAST * p = (const GALGAS_outletClassDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_outletClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("outletClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mRootEntityName.printNonNullClassInstanceProperties ("mRootEntityName") ;
    mProperty_mComputedPropertyTypeName.printNonNullClassInstanceProperties ("mComputedPropertyTypeName") ;
    mProperty_mComputedPropertyName.printNonNullClassInstanceProperties ("mComputedPropertyName") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyDeclarationAST::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyDeclarationAST * p = (const cPtr_computedPropertyDeclarationAST *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mRootEntityName.objectCompare (p->mProperty_mRootEntityName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyTypeName.objectCompare (p->mProperty_mComputedPropertyTypeName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mComputedPropertyName.objectCompare (p->mProperty_mComputedPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedPropertyDeclarationAST::objectCompare (const GALGAS_computedPropertyDeclarationAST & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST::GALGAS_computedPropertyDeclarationAST (const cPtr_computedPropertyDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::class_func_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                             const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                             const GALGAS_lstring & inAttribute_mComputedPropertyTypeName,
                                                                                             const GALGAS_lstring & inAttribute_mComputedPropertyName,
                                                                                             const GALGAS_observablePropertyList & inAttribute_mDependencyList
                                                                                             COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mComputedPropertyTypeName.isValid () && inAttribute_mComputedPropertyName.isValid () && inAttribute_mDependencyList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mComputedPropertyTypeName, inAttribute_mComputedPropertyName, inAttribute_mDependencyList COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyTypeName (GALGAS_lstring inValue
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyTypeName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMComputedPropertyName (GALGAS_lstring inValue
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mComputedPropertyName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyDeclarationAST::setter_setMDependencyList (GALGAS_observablePropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mRootEntityName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyTypeName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_computedPropertyDeclarationAST::readProperty_mComputedPropertyName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mComputedPropertyName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList GALGAS_computedPropertyDeclarationAST::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_observablePropertyList () ;
  }else{
    cPtr_computedPropertyDeclarationAST * p = (cPtr_computedPropertyDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyDeclarationAST) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyDeclarationAST::cPtr_computedPropertyDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                          const GALGAS_lstring & in_mRootEntityName,
                                                                          const GALGAS_lstring & in_mComputedPropertyTypeName,
                                                                          const GALGAS_lstring & in_mComputedPropertyName,
                                                                          const GALGAS_observablePropertyList & in_mDependencyList
                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mRootEntityName (in_mRootEntityName),
mProperty_mComputedPropertyTypeName (in_mComputedPropertyTypeName),
mProperty_mComputedPropertyName (in_mComputedPropertyName),
mProperty_mDependencyList (in_mDependencyList) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

void cPtr_computedPropertyDeclarationAST::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.addString ("[@computedPropertyDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mComputedPropertyTypeName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mComputedPropertyName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mComputedPropertyTypeName, mProperty_mComputedPropertyName, mProperty_mDependencyList COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyDeclarationAST generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ("computedPropertyDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyDeclarationAST (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyDeclarationAST GALGAS_computedPropertyDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyDeclarationAST result ;
  const GALGAS_computedPropertyDeclarationAST * p = (const GALGAS_computedPropertyDeclarationAST *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedPropertyDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @computedPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_computedPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mType.printNonNullClassInstanceProperties ("mType") ;
    mProperty_mDependencyList.printNonNullClassInstanceProperties ("mDependencyList") ;
    mProperty_mGenerate.printNonNullClassInstanceProperties ("mGenerate") ;
  }
#endif

//--------------------------------------------------------------------------------------------------

typeComparisonResult cPtr_computedPropertyGeneration::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {
  typeComparisonResult result = kOperandEqual ;
  const cPtr_computedPropertyGeneration * p = (const cPtr_computedPropertyGeneration *) inOperandPtr ;
  macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
  if (kOperandEqual == result) {
    result = mProperty_mPropertyName.objectCompare (p->mProperty_mPropertyName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mClassName.objectCompare (p->mProperty_mClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mType.objectCompare (p->mProperty_mType) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mDependencyList.objectCompare (p->mProperty_mDependencyList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mGenerate.objectCompare (p->mProperty_mGenerate) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------


typeComparisonResult GALGAS_computedPropertyGeneration::objectCompare (const GALGAS_computedPropertyGeneration & inOperand) const {
  typeComparisonResult result = kOperandNotValid ;
  if (isValid () && inOperand.isValid ()) {
    const size_t myObjectPtr = size_t (mObjectPtr) ;
    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;
    if (myObjectPtr < operandObjectPtr) {
      result = kFirstOperandLowerThanSecond ;
    }else if (myObjectPtr > operandObjectPtr) {
      result = kFirstOperandGreaterThanSecond ;
    }else{
      result = kOperandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (void) :
GALGAS_propertyGeneration () {
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration::GALGAS_computedPropertyGeneration (const cPtr_computedPropertyGeneration * inSourcePtr) :
GALGAS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_computedPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::class_func_new (const GALGAS_string & inAttribute_mPropertyName,
                                                                                     const GALGAS_string & inAttribute_mClassName,
                                                                                     const GALGAS_typeKind & inAttribute_mType,
                                                                                     const GALGAS_transientDependencyListForGeneration & inAttribute_mDependencyList,
                                                                                     const GALGAS_bool & inAttribute_mGenerate
                                                                                     COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  if (inAttribute_mPropertyName.isValid () && inAttribute_mClassName.isValid () && inAttribute_mType.isValid () && inAttribute_mDependencyList.isValid () && inAttribute_mGenerate.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_computedPropertyGeneration (inAttribute_mPropertyName, inAttribute_mClassName, inAttribute_mType, inAttribute_mDependencyList, inAttribute_mGenerate COMMA_THERE)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMClassName (GALGAS_string inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mClassName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMType (GALGAS_typeKind inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mType = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMDependencyList (GALGAS_transientDependencyListForGeneration inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mDependencyList = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

void GALGAS_computedPropertyGeneration::setter_setMGenerate (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (nullptr != mObjectPtr) {
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    p->mProperty_mGenerate = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_computedPropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_computedPropertyGeneration::readProperty_mType (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mType ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration GALGAS_computedPropertyGeneration::readProperty_mDependencyList (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_transientDependencyListForGeneration () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mDependencyList ;
  }
}

//--------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_computedPropertyGeneration::readProperty_mGenerate (void) const {
  if (nullptr == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_computedPropertyGeneration * p = (cPtr_computedPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_computedPropertyGeneration) ;
    return p->mProperty_mGenerate ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @computedPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_computedPropertyGeneration::cPtr_computedPropertyGeneration (const GALGAS_string & in_mPropertyName,
                                                                  const GALGAS_string & in_mClassName,
                                                                  const GALGAS_typeKind & in_mType,
                                                                  const GALGAS_transientDependencyListForGeneration & in_mDependencyList,
                                                                  const GALGAS_bool & in_mGenerate
                                                                  COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName COMMA_THERE),
mProperty_mClassName (in_mClassName),
mProperty_mType (in_mType),
mProperty_mDependencyList (in_mDependencyList),
mProperty_mGenerate (in_mGenerate) {
}

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_computedPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

void cPtr_computedPropertyGeneration::description (String & ioString,
                                                   const int32_t inIndentation) const {
  ioString.addString ("[@computedPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mType.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mDependencyList.description (ioString, inIndentation+1) ;
  ioString.addString (", ") ;
  mProperty_mGenerate.description (ioString, inIndentation+1) ;
  ioString.addString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_computedPropertyGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_computedPropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mType, mProperty_mDependencyList, mProperty_mGenerate COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------
//
//     @computedPropertyGeneration generic code implementation
//
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_computedPropertyGeneration ("computedPropertyGeneration",
                                                                                  & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_computedPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_computedPropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_computedPropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GALGAS_computedPropertyGeneration GALGAS_computedPropertyGeneration::extractObject (const GALGAS_object & inObject,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_computedPropertyGeneration result ;
  const GALGAS_computedPropertyGeneration * p = (const GALGAS_computedPropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GALGAS_computedPropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedPropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

