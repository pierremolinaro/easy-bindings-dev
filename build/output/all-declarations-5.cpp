#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Extension Getter '@mainXibDescriptorList generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string extensionGetter_generateCode (const GALGAS_mainXibDescriptorList & inObject,
                                            C_Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_mainXibDescriptorList temp_1 = inObject ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.getter_length (SOURCE_FILE ("main-xib.ggs", 88)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 88)).getter_uint (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GALGAS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_length (SOURCE_FILE ("main-xib.ggs", 89)).getter_string (SOURCE_FILE ("main-xib.ggs", 89)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 89)).add_operation (GALGAS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 89)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 90)) ;
      GALGAS_bigint var_idx_3091 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 91)) ;
      GALGAS_bigint var_columnMax_3113 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 92)) ;
      const GALGAS_mainXibDescriptorList temp_3 = inObject ;
      cEnumerator_mainXibDescriptorList enumerator_3132 (temp_3, kENUMERATION_UP) ;
      while (enumerator_3132.hasCurrentObject ()) {
        GALGAS_bigint var_column_3161 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 94)) ;
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 95)) ;
        cEnumerator_mainXibLineDescriptorList enumerator_3231 (enumerator_3132.current_mLine (HERE), kENUMERATION_UP) ;
        while (enumerator_3231.hasCurrentObject ()) {
          switch (enumerator_3231.current_mElement (HERE).enumValue ()) {
          case GALGAS_mainXibElement::kNotBuilt:
            break ;
          case GALGAS_mainXibElement::kEnum_text:
            {
              const cEnumAssociatedValues_mainXibElement_text * extractPtr_3992 = (const cEnumAssociatedValues_mainXibElement_text *) (enumerator_3231.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_3289_t = extractPtr_3992->mAssociatedValue0 ;
              var_idx_3091.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 99)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 99)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Text ").add_operation (extractedValue_3289_t.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 100)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //  createTextFieldForText (").add_operation (extractedValue_3289_t.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GALGAS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 101)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    let tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GALGAS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (var_column_3161.getter_string (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 102)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (GALGAS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (extractedValue_3289_t.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 103)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)).add_operation (GALGAS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 104)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)).add_operation (GALGAS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 105)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)).add_operation (GALGAS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 106)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (tf").add_operation (var_idx_3091.getter_string (SOURCE_FILE ("main-xib.ggs", 107)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 107)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 107)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 107)) ;
            }
            break ;
          case GALGAS_mainXibElement::kEnum_outlet:
            {
              const cEnumAssociatedValues_mainXibElement_outlet * extractPtr_4463 = (const cEnumAssociatedValues_mainXibElement_outlet *) (enumerator_3231.current_mElement (HERE).unsafePointer ()) ;
              const GALGAS_lstring extractedValue_4024_outletType = extractPtr_4463->mAssociatedValue0 ;
              const GALGAS_lstring extractedValue_4035_outletName = extractPtr_4463->mAssociatedValue1 ;
              result_outResult.plusAssign_operation(GALGAS_string ("  //--- Outlet ").add_operation (extractedValue_4035_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 109)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_4035_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (extractedValue_4024_outletType.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GALGAS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (var_column_3161.getter_string (SOURCE_FILE ("main-xib.ggs", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GALGAS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 110)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    ").add_operation (extractedValue_4035_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (GALGAS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (extractedValue_4035_outletName.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 111)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 111)) ;
              result_outResult.plusAssign_operation(GALGAS_string ("    view.addSubview (").add_operation (extractedValue_4035_outletName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 112)).add_operation (GALGAS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 112)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 112)) ;
            }
            break ;
          }
          var_column_3161.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 114)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 114)) ;
          enumerator_3231.gotoNextObject () ;
        }
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsStrictSup, var_column_3161.objectCompare (var_columnMax_3113)).boolEnum () ;
          if (kBoolTrue == test_4) {
            var_columnMax_3113 = var_column_3161 ;
          }
        }
        result_outResult.plusAssign_operation(GALGAS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 119)) ;
        enumerator_3132.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GALGAS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 121)) ;
      const GALGAS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_3113.getter_string (SOURCE_FILE ("main-xib.ggs", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 122)).add_operation (GALGAS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 122)).add_operation (temp_5.getter_length (SOURCE_FILE ("main-xib.ggs", 122)).getter_string (SOURCE_FILE ("main-xib.ggs", 122)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 122)).add_operation (GALGAS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 122)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 122)) ;
      result_outResult.plusAssign_operation(GALGAS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 123)) ;
    }
  }
//---
  return result_outResult ;
}




//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (void) :
mProperty_mIndex (),
mProperty_mAssociatedString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::~ GALGAS_enumFunAssociationSortedList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element::GALGAS_enumFunAssociationSortedList_2D_element (const GALGAS_uint & inOperand0,
                                                                                                const GALGAS_string & inOperand1) :
mProperty_mIndex (inOperand0),
mProperty_mAssociatedString (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_enumFunAssociationSortedList_2D_element (GALGAS_uint::constructor_default (HERE),
                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::constructor_new (const GALGAS_uint & inOperand0,
                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_enumFunAssociationSortedList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_enumFunAssociationSortedList_2D_element::objectCompare (const GALGAS_enumFunAssociationSortedList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mIndex.objectCompare (inOperand.mProperty_mIndex) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mAssociatedString.objectCompare (inOperand.mProperty_mAssociatedString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_enumFunAssociationSortedList_2D_element::isValid (void) const {
  return mProperty_mIndex.isValid () && mProperty_mAssociatedString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::drop (void) {
  mProperty_mIndex.drop () ;
  mProperty_mAssociatedString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumFunAssociationSortedList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @enumFunAssociationSortedList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mIndex.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAssociatedString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumFunAssociationSortedList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ("enumFunAssociationSortedList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumFunAssociationSortedList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumFunAssociationSortedList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumFunAssociationSortedList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFunAssociationSortedList_2D_element GALGAS_enumFunAssociationSortedList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_enumFunAssociationSortedList_2D_element result ;
  const GALGAS_enumFunAssociationSortedList_2D_element * p = (const GALGAS_enumFunAssociationSortedList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumFunAssociationSortedList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumFunAssociationSortedList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) :
mProperty_mEntityName (),
mProperty_mObsoleteEntityNames () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::~ GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                  const GALGAS_lstringlist & inOperand1) :
mProperty_mEntityName (inOperand0),
mProperty_mObsoleteEntityNames (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (GALGAS_string::constructor_default (HERE),
                                                                          GALGAS_lstringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                  const GALGAS_lstringlist & inOperand1 
                                                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::isValid (void) const {
  return mProperty_mEntityName.isValid () && mProperty_mObsoleteEntityNames.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::drop (void) {
  mProperty_mEntityName.drop () ;
  mProperty_mObsoleteEntityNames.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@entityListForGeneratingEBManagedObjectContext-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ("entityListForGeneratingEBManagedObjectContext-element",
                                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityListForGeneratingEBManagedObjectContext_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::GALGAS_astAutoLayoutToolbarItemList_2D_element (void) :
mProperty_mItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::~ GALGAS_astAutoLayoutToolbarItemList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element::GALGAS_astAutoLayoutToolbarItemList_2D_element (const GALGAS_astAutoLayoutToolbarItem & inOperand0) :
mProperty_mItem (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element GALGAS_astAutoLayoutToolbarItemList_2D_element::constructor_new (const GALGAS_astAutoLayoutToolbarItem & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astAutoLayoutToolbarItemList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astAutoLayoutToolbarItemList_2D_element::objectCompare (const GALGAS_astAutoLayoutToolbarItemList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mItem.objectCompare (inOperand.mProperty_mItem) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astAutoLayoutToolbarItemList_2D_element::isValid (void) const {
  return mProperty_mItem.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList_2D_element::drop (void) {
  mProperty_mItem.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astAutoLayoutToolbarItemList_2D_element::description (C_String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString << "<struct @astAutoLayoutToolbarItemList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astAutoLayoutToolbarItemList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList_2D_element ("astAutoLayoutToolbarItemList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astAutoLayoutToolbarItemList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutToolbarItemList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astAutoLayoutToolbarItemList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astAutoLayoutToolbarItemList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList_2D_element GALGAS_astAutoLayoutToolbarItemList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                              C_Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_astAutoLayoutToolbarItemList_2D_element result ;
  const GALGAS_astAutoLayoutToolbarItemList_2D_element * p = (const GALGAS_astAutoLayoutToolbarItemList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astAutoLayoutToolbarItemList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutToolbarItemList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) :
mProperty_mLinkerName (),
mProperty_mOutletNameAndTypeNameList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::~ GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                const GALGAS__32_stringlist & inOperand1) :
mProperty_mLinkerName (inOperand0),
mProperty_mOutletNameAndTypeNameList (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                 GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS__32_stringlist & inOperand1 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLinkerName.objectCompare (inOperand.mProperty_mLinkerName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mOutletNameAndTypeNameList.objectCompare (inOperand.mProperty_mOutletNameAndTypeNameList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::isValid (void) const {
  return mProperty_mLinkerName.isValid () && mProperty_mOutletNameAndTypeNameList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::drop (void) {
  mProperty_mLinkerName.drop () ;
  mProperty_mOutletNameAndTypeNameList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::description (C_String & ioString,
                                                                          const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutOutletLinkerGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mLinkerName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletNameAndTypeNameList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutOutletLinkerGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ("autoLayoutOutletLinkerGenerationList-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutOutletLinkerGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList_2D_element GALGAS_autoLayoutOutletLinkerGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                              C_Compiler * inCompiler
                                                                                                                              COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutOutletLinkerGenerationList_2D_element result ;
  const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element * p = (const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutOutletLinkerGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutOutletLinkerGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) :
mProperty_mItem () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::~ GALGAS_autoLayoutToolbarItemGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element::GALGAS_autoLayoutToolbarItemGenerationList_2D_element (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0) :
mProperty_mItem (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element GALGAS_autoLayoutToolbarItemGenerationList_2D_element::constructor_new (const GALGAS_autoLayoutToolbarItemGeneration & inOperand0 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutToolbarItemGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutToolbarItemGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mItem.objectCompare (inOperand.mProperty_mItem) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutToolbarItemGenerationList_2D_element::isValid (void) const {
  return mProperty_mItem.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::drop (void) {
  mProperty_mItem.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutToolbarItemGenerationList_2D_element::description (C_String & ioString,
                                                                         const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutToolbarItemGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mItem.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutToolbarItemGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList_2D_element ("autoLayoutToolbarItemGenerationList-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutToolbarItemGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutToolbarItemGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutToolbarItemGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutToolbarItemGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList_2D_element GALGAS_autoLayoutToolbarItemGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                            C_Compiler * inCompiler
                                                                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutToolbarItemGenerationList_2D_element result ;
  const GALGAS_autoLayoutToolbarItemGenerationList_2D_element * p = (const GALGAS_autoLayoutToolbarItemGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutToolbarItemGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutToolbarItemGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::~ GALGAS_astViewInstructionList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element::GALGAS_astViewInstructionList_2D_element (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::constructor_new (const GALGAS_astAbstractViewInstructionDeclaration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_astViewInstructionList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_astViewInstructionList_2D_element::objectCompare (const GALGAS_astViewInstructionList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_astViewInstructionList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_astViewInstructionList_2D_element::description (C_String & ioString,
                                                            const int32_t inIndentation) const {
  ioString << "<struct @astViewInstructionList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@astViewInstructionList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ("astViewInstructionList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_astViewInstructionList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astViewInstructionList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_astViewInstructionList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_astViewInstructionList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewInstructionList_2D_element GALGAS_astViewInstructionList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_astViewInstructionList_2D_element result ;
  const GALGAS_astViewInstructionList_2D_element * p = (const GALGAS_astViewInstructionList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_astViewInstructionList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astViewInstructionList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::~ GALGAS_implicitViewFunctionGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element::GALGAS_implicitViewFunctionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::constructor_new (const GALGAS_abstractViewInstructionGeneration & inOperand0 
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_implicitViewFunctionGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_implicitViewFunctionGenerationList_2D_element::objectCompare (const GALGAS_implicitViewFunctionGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_implicitViewFunctionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_implicitViewFunctionGenerationList_2D_element::description (C_String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString << "<struct @implicitViewFunctionGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@implicitViewFunctionGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ("implicitViewFunctionGenerationList-element",
                                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_implicitViewFunctionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_implicitViewFunctionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_implicitViewFunctionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList_2D_element GALGAS_implicitViewFunctionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                          C_Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_implicitViewFunctionGenerationList_2D_element result ;
  const GALGAS_implicitViewFunctionGenerationList_2D_element * p = (const GALGAS_implicitViewFunctionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_implicitViewFunctionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("implicitViewFunctionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (void) :
mProperty_mViewName (),
mProperty_mView () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::~ GALGAS_viewGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element::GALGAS_viewGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                            const GALGAS_abstractViewGeneration & inOperand1) :
mProperty_mViewName (inOperand0),
mProperty_mView (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                            const GALGAS_abstractViewGeneration & inOperand1 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_viewGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_viewGenerationList_2D_element::objectCompare (const GALGAS_viewGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mViewName.objectCompare (inOperand.mProperty_mViewName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mView.objectCompare (inOperand.mProperty_mView) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_viewGenerationList_2D_element::isValid (void) const {
  return mProperty_mViewName.isValid () && mProperty_mView.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::drop (void) {
  mProperty_mViewName.drop () ;
  mProperty_mView.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_viewGenerationList_2D_element::description (C_String & ioString,
                                                        const int32_t inIndentation) const {
  ioString << "<struct @viewGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mViewName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mView.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@viewGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_viewGenerationList_2D_element ("viewGenerationList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_viewGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_viewGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_viewGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_viewGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList_2D_element GALGAS_viewGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_viewGenerationList_2D_element result ;
  const GALGAS_viewGenerationList_2D_element * p = (const GALGAS_viewGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_viewGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("viewGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::~ GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_boundObjectList & inOperand1,
                                                                                                                      const GALGAS_string & inOperand2) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectList (inOperand1),
mProperty_mBindingOptionsString (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                    GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                                    GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_boundObjectList & inOperand1,
                                                                                                                                      const GALGAS_string & inOperand2 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutRegularBindingsGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingOptionsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutRegularBindingsGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ("autoLayoutRegularBindingsGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutRegularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutRegularBindingsGenerationList_2D_element GALGAS_autoLayoutRegularBindingsGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutRegularBindingsGenerationList_2D_element result ;
  const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element * p = (const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutRegularBindingsGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) :
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::~ GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1) :
mProperty_mBindingName (inOperand0),
mProperty_mBoundObjectExpression (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mBindingName.objectCompare (inOperand.mProperty_mBindingName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mBoundObjectExpression.objectCompare (inOperand.mProperty_mBoundObjectExpression) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutMultipleBindingGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mBindingName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBoundObjectExpression.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutMultipleBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ("autoLayoutMultipleBindingGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutMultipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutMultipleBindingGenerationList_2D_element GALGAS_autoLayoutMultipleBindingGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutMultipleBindingGenerationList_2D_element result ;
  const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element * p = (const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutMultipleBindingGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) :
mProperty_mParameterName (),
mProperty_mParameterValue () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                        const GALGAS_string & inOperand1) :
mProperty_mParameterName (inOperand0),
mProperty_mParameterValue (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                             GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                        const GALGAS_string & inOperand1 
                                                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mParameterName.objectCompare (inOperand.mProperty_mParameterName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameterValue.objectCompare (inOperand.mProperty_mParameterValue) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::isValid (void) const {
  return mProperty_mParameterName.isValid () && mProperty_mParameterValue.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::drop (void) {
  mProperty_mParameterName.drop () ;
  mProperty_mParameterValue.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::description (C_String & ioString,
                                                                                      const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationParameterList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mParameterName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameterValue.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationParameterList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ("autoLayoutViewInstructionGenerationParameterList-element",
                                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                      C_Compiler * inCompiler
                                                                                                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationParameterList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) :
mProperty_mFunctionName (),
mProperty_mParameters () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                      const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1) :
mProperty_mFunctionName (inOperand0),
mProperty_mParameters (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                            GALGAS_autoLayoutViewInstructionGenerationParameterList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                      const GALGAS_autoLayoutViewInstructionGenerationParameterList & inOperand1 
                                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFunctionName.objectCompare (inOperand.mProperty_mFunctionName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mParameters.objectCompare (inOperand.mProperty_mParameters) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::isValid (void) const {
  return mProperty_mFunctionName.isValid () && mProperty_mParameters.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::drop (void) {
  mProperty_mFunctionName.drop () ;
  mProperty_mParameters.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::description (C_String & ioString,
                                                                                     const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationFuncCallList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mFunctionName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mParameters.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationFuncCallList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ("autoLayoutViewInstructionGenerationFuncCallList-element",
                                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) :
mProperty_mInstruction () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::~ GALGAS_autoLayoutViewInstructionGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element::GALGAS_autoLayoutViewInstructionGenerationList_2D_element (const GALGAS_abstractViewInstructionGeneration & inOperand0) :
mProperty_mInstruction (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::constructor_new (const GALGAS_abstractViewInstructionGeneration & inOperand0 
                                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_autoLayoutViewInstructionGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutViewInstructionGenerationList_2D_element::objectCompare (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mInstruction.objectCompare (inOperand.mProperty_mInstruction) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutViewInstructionGenerationList_2D_element::isValid (void) const {
  return mProperty_mInstruction.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::drop (void) {
  mProperty_mInstruction.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutViewInstructionGenerationList_2D_element::description (C_String & ioString,
                                                                             const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutViewInstructionGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mInstruction.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutViewInstructionGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ("autoLayoutViewInstructionGenerationList-element",
                                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutViewInstructionGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutViewInstructionGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutViewInstructionGenerationList_2D_element GALGAS_autoLayoutViewInstructionGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                    C_Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutViewInstructionGenerationList_2D_element result ;
  const GALGAS_autoLayoutViewInstructionGenerationList_2D_element * p = (const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutViewInstructionGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::~ GALGAS_outletBindingSpecificationModelList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element::GALGAS_outletBindingSpecificationModelList_2D_element (const GALGAS_typeKind & inOperand0,
                                                                                                              const GALGAS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingSpecificationModelList_2D_element GALGAS_outletBindingSpecificationModelList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0,
                                                                                                                              const GALGAS_bool & inOperand1 
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingSpecificationModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingSpecificationModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingSpecificationModelList_2D_element::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingSpecificationModelList_2D_element::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingSpecificationModelList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ("outletBindingSpecificationModelList-element",
                                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingSpecificationModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingSpecificationModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingSpecificationModelList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (void) :
mProperty_mKind (),
mProperty_mErrorLocation () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::~ GALGAS_outletBindingModelList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element::GALGAS_outletBindingModelList_2D_element (const GALGAS_propertyKind & inOperand0,
                                                                                    const GALGAS_location & inOperand1) :
mProperty_mKind (inOperand0),
mProperty_mErrorLocation (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletBindingModelList_2D_element GALGAS_outletBindingModelList_2D_element::constructor_new (const GALGAS_propertyKind & inOperand0,
                                                                                                    const GALGAS_location & inOperand1 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_outletBindingModelList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_outletBindingModelList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_outletBindingModelList_2D_element::isValid (void) const {
  return mProperty_mKind.isValid () && mProperty_mErrorLocation.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_outletBindingModelList_2D_element::drop (void) {
  mProperty_mKind.drop () ;
  mProperty_mErrorLocation.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@outletBindingModelList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ("outletBindingModelList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_outletBindingModelList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingModelList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_outletBindingModelList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_outletBindingModelList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (void) :
mProperty_mTableValueBindingOutletName (),
mProperty_mTableValueBindingControllerName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::~ GALGAS_tableViewBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element::GALGAS_tableViewBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1) :
mProperty_mTableValueBindingOutletName (inOperand0),
mProperty_mTableValueBindingControllerName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_tableViewBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList_2D_element GALGAS_tableViewBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1 
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_tableViewBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_tableViewBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_tableViewBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mTableValueBindingOutletName.isValid () && mProperty_mTableValueBindingControllerName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_tableViewBindingGenerationList_2D_element::drop (void) {
  mProperty_mTableValueBindingOutletName.drop () ;
  mProperty_mTableValueBindingControllerName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@tableViewBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ("tableViewBindingGenerationList-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_tableViewBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_tableViewBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_tableViewBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) :
mProperty_mEBViewOutletName (),
mProperty_mArrayControllerControllerName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::~ GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1) :
mProperty_mEBViewOutletName (inOperand0),
mProperty_mArrayControllerControllerName (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                                         GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                const GALGAS_string & inOperand1 
                                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mEBViewOutletName.isValid () && mProperty_mArrayControllerControllerName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::drop (void) {
  mProperty_mEBViewOutletName.drop () ;
  mProperty_mArrayControllerControllerName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@ebViewGraphicControllerBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ("ebViewGraphicControllerBindingGenerationList-element",
                                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_ebViewGraphicControllerBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (void) :
mProperty_mBoundObjectString (),
mProperty_mKind () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::~ GALGAS_boundObjectList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element::GALGAS_boundObjectList_2D_element (const GALGAS_string & inOperand0,
                                                                      const GALGAS_propertyKind & inOperand1) :
mProperty_mBoundObjectString (inOperand0),
mProperty_mKind (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_boundObjectList_2D_element GALGAS_boundObjectList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_propertyKind & inOperand1 
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_boundObjectList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_boundObjectList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_boundObjectList_2D_element::isValid (void) const {
  return mProperty_mBoundObjectString.isValid () && mProperty_mKind.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_boundObjectList_2D_element::drop (void) {
  mProperty_mBoundObjectString.drop () ;
  mProperty_mKind.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@boundObjectList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_boundObjectList_2D_element ("boundObjectList-element",
                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_boundObjectList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_boundObjectList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_boundObjectList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_boundObjectList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectList (),
mProperty_mBindingOptionsString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::~ GALGAS_regularBindingsGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element::GALGAS_regularBindingsGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_boundObjectList & inOperand2,
                                                                                                  const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectList (inOperand2),
mProperty_mBindingOptionsString (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList_2D_element GALGAS_regularBindingsGenerationList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_regularBindingsGenerationList_2D_element (GALGAS_string::constructor_default (HERE),
                                                          GALGAS_string::constructor_default (HERE),
                                                          GALGAS_boundObjectList::constructor_emptyList (HERE),
                                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_regularBindingsGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectList.isValid () && mProperty_mBindingOptionsString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_regularBindingsGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectList.drop () ;
  mProperty_mBindingOptionsString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@regularBindingsGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ("regularBindingsGenerationList-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_regularBindingsGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_regularBindingsGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_regularBindingsGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_regularBindingsGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (void) :
mProperty_mOutletName (),
mProperty_mTargetName (),
mProperty_mActionName (),
mProperty_mTargetTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::~ GALGAS_actionBindingListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element::GALGAS_actionBindingListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                    const GALGAS_string & inOperand1,
                                                                                                    const GALGAS_string & inOperand2,
                                                                                                    const GALGAS_string & inOperand3) :
mProperty_mOutletName (inOperand0),
mProperty_mTargetName (inOperand1),
mProperty_mActionName (inOperand2),
mProperty_mTargetTypeName (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration_2D_element GALGAS_actionBindingListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_actionBindingListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE),
                                                           GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_actionBindingListForGeneration_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mTargetName.isValid () && mProperty_mActionName.isValid () && mProperty_mTargetTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_actionBindingListForGeneration_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mTargetName.drop () ;
  mProperty_mActionName.drop () ;
  mProperty_mTargetTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@actionBindingListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ("actionBindingListForGeneration-element",
                                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_actionBindingListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_actionBindingListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_actionBindingListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_actionBindingListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (void) :
mProperty_mObservableProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::~ GALGAS_observablePropertyList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element::GALGAS_observablePropertyList_2D_element (const GALGAS_observablePropertyAST & inOperand0) :
mProperty_mObservableProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_observablePropertyList_2D_element GALGAS_observablePropertyList_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_observablePropertyList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_observablePropertyList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_observablePropertyList_2D_element::objectCompare (const GALGAS_observablePropertyList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mObservableProperty.objectCompare (inOperand.mProperty_mObservableProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_observablePropertyList_2D_element::isValid (void) const {
  return mProperty_mObservableProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_observablePropertyList_2D_element::drop (void) {
  mProperty_mObservableProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@observablePropertyList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_observablePropertyList_2D_element ("observablePropertyList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_observablePropertyList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_observablePropertyList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_observablePropertyList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_observablePropertyList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::~ GALGAS_transientPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element::GALGAS_transientPropertyGenerationList_2D_element (const GALGAS_transientPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::constructor_new (const GALGAS_transientPropertyGeneration & inOperand0 
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_transientPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_transientPropertyGenerationList_2D_element::objectCompare (const GALGAS_transientPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientPropertyGenerationList_2D_element::description (C_String & ioString,
                                                                     const int32_t inIndentation) const {
  ioString << "<struct @transientPropertyGenerationList-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ("transientPropertyGenerationList-element",
                                                                   NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientPropertyGenerationList_2D_element GALGAS_transientPropertyGenerationList_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_transientPropertyGenerationList_2D_element result ;
  const GALGAS_transientPropertyGenerationList_2D_element * p = (const GALGAS_transientPropertyGenerationList_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientPropertyGenerationList_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientPropertyGenerationList-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (void) :
mProperty_mDependency (),
mProperty_mFunctionArgumentName (),
mProperty_mFunctionArgumentTypeString (),
mProperty_mDefaultValueAsString () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::~ GALGAS_transientDependencyListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element::GALGAS_transientDependencyListForGeneration_2D_element (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                const GALGAS_string & inOperand2,
                                                                                                                const GALGAS_string & inOperand3) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2),
mProperty_mDefaultValueAsString (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientDependencyListForGeneration_2D_element GALGAS_transientDependencyListForGeneration_2D_element::constructor_new (const GALGAS_observablePropertyAST & inOperand0,
                                                                                                                                const GALGAS_string & inOperand1,
                                                                                                                                const GALGAS_string & inOperand2,
                                                                                                                                const GALGAS_string & inOperand3 
                                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientDependencyListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GALGAS_transientDependencyListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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
  if (result == kOperandEqual) {
    result = mProperty_mDefaultValueAsString.objectCompare (inOperand.mProperty_mDefaultValueAsString) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientDependencyListForGeneration_2D_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () && mProperty_mDefaultValueAsString.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientDependencyListForGeneration_2D_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
  mProperty_mDefaultValueAsString.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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
    ioString << ", " ;
    mProperty_mDefaultValueAsString.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@transientDependencyListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ("transientDependencyListForGeneration-element",
                                                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientDependencyListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientDependencyListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientDependencyListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::~ GALGAS_toManyProxyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element::GALGAS_toManyProxyGenerationList_2D_element (const GALGAS_toManyProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyProxyGenerationList_2D_element GALGAS_toManyProxyGenerationList_2D_element::constructor_new (const GALGAS_toManyProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyProxyGenerationList_2D_element::objectCompare (const GALGAS_toManyProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyProxyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ("toManyProxyGenerationList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyProxyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::~ GALGAS_atomicProxyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element::GALGAS_atomicProxyGenerationList_2D_element (const GALGAS_atomicProxyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicProxyGenerationList_2D_element GALGAS_atomicProxyGenerationList_2D_element::constructor_new (const GALGAS_atomicProxyGeneration & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicProxyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicProxyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicProxyGenerationList_2D_element::objectCompare (const GALGAS_atomicProxyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_atomicProxyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicProxyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicProxyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ("atomicProxyGenerationList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicProxyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicProxyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicProxyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicProxyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::~ GALGAS_atomicPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element::GALGAS_atomicPropertyGenerationList_2D_element (const GALGAS_atomicPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicPropertyGenerationList_2D_element GALGAS_atomicPropertyGenerationList_2D_element::constructor_new (const GALGAS_atomicPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_atomicPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_atomicPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_atomicPropertyGenerationList_2D_element::objectCompare (const GALGAS_atomicPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_atomicPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@atomicPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ("atomicPropertyGenerationList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::~ GALGAS_toManyPropertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element::GALGAS_toManyPropertyGenerationList_2D_element (const GALGAS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_toManyPropertyGenerationList_2D_element GALGAS_toManyPropertyGenerationList_2D_element::constructor_new (const GALGAS_toManyPropertyGeneration & inOperand0 
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_toManyPropertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_toManyPropertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_toManyPropertyGenerationList_2D_element::objectCompare (const GALGAS_toManyPropertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_toManyPropertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_toManyPropertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@toManyPropertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ("toManyPropertyGenerationList-element",
                                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_toManyPropertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_toManyPropertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_toManyPropertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (void) :
mProperty_mObjectTypeName (),
mProperty_mModelName (),
mProperty_mModelTypeName () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::~ GALGAS_validationStubRoutineListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element::GALGAS_validationStubRoutineListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                    const GALGAS_string & inOperand1,
                                                                                                                    const GALGAS_string & inOperand2) :
mProperty_mObjectTypeName (inOperand0),
mProperty_mModelName (inOperand1),
mProperty_mModelTypeName (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_validationStubRoutineListForGeneration_2D_element GALGAS_validationStubRoutineListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_validationStubRoutineListForGeneration_2D_element (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_validationStubRoutineListForGeneration_2D_element::isValid (void) const {
  return mProperty_mObjectTypeName.isValid () && mProperty_mModelName.isValid () && mProperty_mModelTypeName.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_validationStubRoutineListForGeneration_2D_element::drop (void) {
  mProperty_mObjectTypeName.drop () ;
  mProperty_mModelName.drop () ;
  mProperty_mModelTypeName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@validationStubRoutineListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ("validationStubRoutineListForGeneration-element",
                                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_validationStubRoutineListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_validationStubRoutineListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_validationStubRoutineListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (void) :
mProperty_mOutletName (),
mProperty_mBindingName (),
mProperty_mBoundObjectExpression () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::~ GALGAS_multipleBindingGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList_2D_element::GALGAS_multipleBindingGenerationList_2D_element (const GALGAS_string & inOperand0,
                                                                                                  const GALGAS_string & inOperand1,
                                                                                                  const GALGAS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand2) :
mProperty_mOutletName (inOperand0),
mProperty_mBindingName (inOperand1),
mProperty_mBoundObjectExpression (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_multipleBindingGenerationList_2D_element::isValid (void) const {
  return mProperty_mOutletName.isValid () && mProperty_mBindingName.isValid () && mProperty_mBoundObjectExpression.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_multipleBindingGenerationList_2D_element::drop (void) {
  mProperty_mOutletName.drop () ;
  mProperty_mBindingName.drop () ;
  mProperty_mBoundObjectExpression.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@multipleBindingGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ("multipleBindingGenerationList-element",
                                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_multipleBindingGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_multipleBindingGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_multipleBindingGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) :
mProperty_mEditable (),
mProperty_mSortPropertyName (),
mProperty_mDisplayedPropertyName (),
mProperty_mColumnObjectTypeName (),
mProperty_mRunAction (),
mProperty_mActualParameterList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::~ GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (const GALGAS_bool & inOperand0,
                                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                                          const GALGAS_string & inOperand3,
                                                                                                                                                          const GALGAS_string & inOperand4,
                                                                                                                                                          const GALGAS__32_stringlist & inOperand5) :
mProperty_mEditable (inOperand0),
mProperty_mSortPropertyName (inOperand1),
mProperty_mDisplayedPropertyName (inOperand2),
mProperty_mColumnObjectTypeName (inOperand3),
mProperty_mRunAction (inOperand4),
mProperty_mActualParameterList (inOperand5) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (GALGAS_bool::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS_string::constructor_default (HERE),
                                                                                      GALGAS__32_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::constructor_new (const GALGAS_bool & inOperand0,
                                                                                                                                                                          const GALGAS_string & inOperand1,
                                                                                                                                                                          const GALGAS_string & inOperand2,
                                                                                                                                                                          const GALGAS_string & inOperand3,
                                                                                                                                                                          const GALGAS_string & inOperand4,
                                                                                                                                                                          const GALGAS__32_stringlist & inOperand5 
                                                                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::objectCompare (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mEditable.objectCompare (inOperand.mProperty_mEditable) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mSortPropertyName.objectCompare (inOperand.mProperty_mSortPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mDisplayedPropertyName.objectCompare (inOperand.mProperty_mDisplayedPropertyName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mColumnObjectTypeName.objectCompare (inOperand.mProperty_mColumnObjectTypeName) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mRunAction.objectCompare (inOperand.mProperty_mRunAction) ;
  }
  if (result == kOperandEqual) {
    result = mProperty_mActualParameterList.objectCompare (inOperand.mProperty_mActualParameterList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mEditable.isValid () && mProperty_mSortPropertyName.isValid () && mProperty_mDisplayedPropertyName.isValid () && mProperty_mColumnObjectTypeName.isValid () && mProperty_mRunAction.isValid () && mProperty_mActualParameterList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::drop (void) {
  mProperty_mEditable.drop () ;
  mProperty_mSortPropertyName.drop () ;
  mProperty_mDisplayedPropertyName.drop () ;
  mProperty_mColumnObjectTypeName.drop () ;
  mProperty_mRunAction.drop () ;
  mProperty_mActualParameterList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                               const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutTableViewControllerBoundColumnListForGeneration-element:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mEditable.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSortPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mDisplayedPropertyName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mColumnObjectTypeName.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mRunAction.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mActualParameterList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerBoundColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element ("autoLayoutTableViewControllerBoundColumnListForGeneration-element",
                                                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                        C_Compiler * inCompiler
                                                                                                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element result ;
  const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element * p = (const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerBoundColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) :
mProperty_mColumnName (),
mProperty_mSortPropertyKind (),
mProperty_mObservablePropertyForSorting () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::~ GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (const GALGAS_string & inOperand0,
                                                                                                                                                            const GALGAS_propertyKind & inOperand1,
                                                                                                                                                            const GALGAS_string & inOperand2) :
mProperty_mColumnName (inOperand0),
mProperty_mSortPropertyKind (inOperand1),
mProperty_mObservablePropertyForSorting (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                                                                                            const GALGAS_propertyKind & inOperand1,
                                                                                                                                                                            const GALGAS_string & inOperand2 
                                                                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (inOperand0, inOperand1, inOperand2) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::objectCompare (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element & inOperand) const {
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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::isValid (void) const {
  return mProperty_mColumnName.isValid () && mProperty_mSortPropertyKind.isValid () && mProperty_mObservablePropertyForSorting.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::drop (void) {
  mProperty_mColumnName.drop () ;
  mProperty_mSortPropertyKind.drop () ;
  mProperty_mObservablePropertyForSorting.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::description (C_String & ioString,
                                                                                                const int32_t inIndentation) const {
  ioString << "<struct @autoLayoutTableViewControllerSortedColumnListForGeneration-element:" ;
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

//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutTableViewControllerSortedColumnListForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element ("autoLayoutTableViewControllerSortedColumnListForGeneration-element",
                                                                                              NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element::extractObject (const GALGAS_object & inObject,
                                                                                                                                                                          C_Compiler * inCompiler
                                                                                                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element result ;
  const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element * p = (const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2D_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutTableViewControllerSortedColumnListForGeneration-element", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_selectionControllerForGeneration_2D_element::~ GALGAS_selectionControllerForGeneration_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_selectionControllerForGeneration_2D_element::isValid (void) const {
  return mProperty_mOwnerName.isValid () && mProperty_mSelectionControllerName.isValid () && mProperty_mBoundControllerName.isValid () && mProperty_mBoundControllerPropertyName.isValid () && mProperty_mBaseTypeName.isValid () && mProperty_mSelectionTypeName.isValid () && mProperty_mSelectionObservablePropertyMap.isValid () && mProperty_mPropertyGenerationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@selectionControllerForGeneration-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ("selectionControllerForGeneration-element",
                                                                    NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_selectionControllerForGeneration_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_selectionControllerForGeneration_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_selectionControllerForGeneration_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_selectionControllerForGeneration_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (void) :
mProperty_mType () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::~ GALGAS_typeKindList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element::GALGAS_typeKindList_2D_element (const GALGAS_typeKind & inOperand0) :
mProperty_mType (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKindList_2D_element GALGAS_typeKindList_2D_element::constructor_new (const GALGAS_typeKind & inOperand0 
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_typeKindList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_typeKindList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_typeKindList_2D_element::objectCompare (const GALGAS_typeKindList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mType.objectCompare (inOperand.mProperty_mType) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_typeKindList_2D_element::isValid (void) const {
  return mProperty_mType.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_typeKindList_2D_element::drop (void) {
  mProperty_mType.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@typeKindList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_typeKindList_2D_element ("typeKindList-element",
                                                NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_typeKindList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_typeKindList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_typeKindList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_typeKindList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (void) :
mProperty_mProperty () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::~ GALGAS_propertyGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element::GALGAS_propertyGenerationList_2D_element (const GALGAS_propertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList_2D_element GALGAS_propertyGenerationList_2D_element::constructor_new (const GALGAS_propertyGeneration & inOperand0 
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_propertyGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_propertyGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_propertyGenerationList_2D_element::objectCompare (const GALGAS_propertyGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mProperty.objectCompare (inOperand.mProperty_mProperty) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_propertyGenerationList_2D_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_propertyGenerationList_2D_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@propertyGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ("propertyGenerationList-element",
                                                          NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_propertyGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_propertyGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_propertyGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_propertyGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (void) :
mProperty_mTypeName (),
mProperty_mIsClass () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::~ GALGAS_transientExternTypeList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element::GALGAS_transientExternTypeList_2D_element (const GALGAS_string & inOperand0,
                                                                                      const GALGAS_bool & inOperand1) :
mProperty_mTypeName (inOperand0),
mProperty_mIsClass (inOperand1) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_transientExternTypeList_2D_element (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_bool::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientExternTypeList_2D_element GALGAS_transientExternTypeList_2D_element::constructor_new (const GALGAS_string & inOperand0,
                                                                                                      const GALGAS_bool & inOperand1 
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_transientExternTypeList_2D_element result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GALGAS_transientExternTypeList_2D_element (inOperand0, inOperand1) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_transientExternTypeList_2D_element::isValid (void) const {
  return mProperty_mTypeName.isValid () && mProperty_mIsClass.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientExternTypeList_2D_element::drop (void) {
  mProperty_mTypeName.drop () ;
  mProperty_mIsClass.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@transientExternTypeList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ("transientExternTypeList-element",
                                                           NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientExternTypeList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientExternTypeList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientExternTypeList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (void) :
mProperty_mFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::~ GALGAS_fileGenerationList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element::GALGAS_fileGenerationList_2D_element (const GALGAS_abstractFileGeneration & inOperand0) :
mProperty_mFileGeneration (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_fileGenerationList_2D_element GALGAS_fileGenerationList_2D_element::constructor_new (const GALGAS_abstractFileGeneration & inOperand0 
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_fileGenerationList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_fileGenerationList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_fileGenerationList_2D_element::objectCompare (const GALGAS_fileGenerationList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mFileGeneration.objectCompare (inOperand.mProperty_mFileGeneration) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_fileGenerationList_2D_element::isValid (void) const {
  return mProperty_mFileGeneration.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_fileGenerationList_2D_element::drop (void) {
  mProperty_mFileGeneration.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@fileGenerationList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_fileGenerationList_2D_element ("fileGenerationList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_fileGenerationList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_fileGenerationList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_fileGenerationList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (void) :
mProperty_mGroupReference (),
mProperty_mGroupName (),
mProperty_mGroupPath (),
mProperty_mChildrenRefs () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::~ GALGAS_XCodeGroupList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element::GALGAS_XCodeGroupList_2D_element (const GALGAS_string & inOperand0,
                                                                    const GALGAS_string & inOperand1,
                                                                    const GALGAS_string & inOperand2,
                                                                    const GALGAS_stringlist & inOperand3) :
mProperty_mGroupReference (inOperand0),
mProperty_mGroupName (inOperand1),
mProperty_mGroupPath (inOperand2),
mProperty_mChildrenRefs (inOperand3) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeGroupList_2D_element GALGAS_XCodeGroupList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_XCodeGroupList_2D_element (GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_string::constructor_default (HERE),
                                           GALGAS_stringlist::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeGroupList_2D_element::isValid (void) const {
  return mProperty_mGroupReference.isValid () && mProperty_mGroupName.isValid () && mProperty_mGroupPath.isValid () && mProperty_mChildrenRefs.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_XCodeGroupList_2D_element::drop (void) {
  mProperty_mGroupReference.drop () ;
  mProperty_mGroupName.drop () ;
  mProperty_mGroupPath.drop () ;
  mProperty_mChildrenRefs.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeGroupList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ("XCodeGroupList-element",
                                                  NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeGroupList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeGroupList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeGroupList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeGroupList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeToolTargetList_2D_element::~ GALGAS_XCodeToolTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeToolTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeToolTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ("XCodeToolTargetList-element",
                                                       NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeToolTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeToolTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeToolTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeToolTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_XCodeAppTargetList_2D_element::~ GALGAS_XCodeAppTargetList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_XCodeAppTargetList_2D_element::isValid (void) const {
  return mProperty_mTargetRef.isValid () && mProperty_mTargetName.isValid () && mProperty_mProductFileReference.isValid () && mProperty_mProductFileName.isValid () && mProperty_mBuildPhaseRefList.isValid () && mProperty_mBuildPhaseRef.isValid () && mProperty_mBuildConfigurationListRef.isValid () && mProperty_mBuildConfigurationSettingList.isValid () && mProperty_mBuildConfigurationRef.isValid () && mProperty_mFrameworksFileRefList.isValid () && mProperty_mFrameworkBuildPhaseRef.isValid () && mProperty_mDependentTargets.isValid () && mProperty_mResourceBuildRef.isValid () && mProperty_mResourceFileBuildRefs.isValid () && mProperty_mInfoPListFile.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@XCodeAppTargetList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ("XCodeAppTargetList-element",
                                                      NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_XCodeAppTargetList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_XCodeAppTargetList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_XCodeAppTargetList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_XCodeAppTargetList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (void) :
mProperty_mFileReference (),
mProperty_mFileName (),
mProperty_mBuildReference () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::~ GALGAS_BuildFileList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element::GALGAS_BuildFileList_2D_element (const GALGAS_string & inOperand0,
                                                                  const GALGAS_string & inOperand1,
                                                                  const GALGAS_string & inOperand2) :
mProperty_mFileReference (inOperand0),
mProperty_mFileName (inOperand1),
mProperty_mBuildReference (inOperand2) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_BuildFileList_2D_element GALGAS_BuildFileList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_BuildFileList_2D_element (GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE),
                                          GALGAS_string::constructor_default (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_BuildFileList_2D_element::isValid (void) const {
  return mProperty_mFileReference.isValid () && mProperty_mFileName.isValid () && mProperty_mBuildReference.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_BuildFileList_2D_element::drop (void) {
  mProperty_mFileReference.drop () ;
  mProperty_mFileName.drop () ;
  mProperty_mBuildReference.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@BuildFileList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_BuildFileList_2D_element ("BuildFileList-element",
                                                 NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_BuildFileList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_BuildFileList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_BuildFileList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_BuildFileList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (void) :
mProperty_mLine () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::~ GALGAS_mainXibDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element::GALGAS_mainXibDescriptorList_2D_element (const GALGAS_mainXibLineDescriptorList & inOperand0) :
mProperty_mLine (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_mainXibDescriptorList_2D_element (GALGAS_mainXibLineDescriptorList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibDescriptorList_2D_element GALGAS_mainXibDescriptorList_2D_element::constructor_new (const GALGAS_mainXibLineDescriptorList & inOperand0 
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibDescriptorList_2D_element::objectCompare (const GALGAS_mainXibDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mLine.objectCompare (inOperand.mProperty_mLine) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibDescriptorList_2D_element::isValid (void) const {
  return mProperty_mLine.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibDescriptorList_2D_element::drop (void) {
  mProperty_mLine.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibDescriptorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ("mainXibDescriptorList-element",
                                                         NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (void) :
mProperty_mElement () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::~ GALGAS_mainXibLineDescriptorList_2D_element (void) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element::GALGAS_mainXibLineDescriptorList_2D_element (const GALGAS_mainXibElement & inOperand0) :
mProperty_mElement (inOperand0) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_mainXibLineDescriptorList_2D_element GALGAS_mainXibLineDescriptorList_2D_element::constructor_new (const GALGAS_mainXibElement & inOperand0 
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_mainXibLineDescriptorList_2D_element result ;
  if (inOperand0.isValid ()) {
    result = GALGAS_mainXibLineDescriptorList_2D_element (inOperand0) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

typeComparisonResult GALGAS_mainXibLineDescriptorList_2D_element::objectCompare (const GALGAS_mainXibLineDescriptorList_2D_element & inOperand) const {
   typeComparisonResult result = kOperandEqual ;
  if (result == kOperandEqual) {
    result = mProperty_mElement.objectCompare (inOperand.mProperty_mElement) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_mainXibLineDescriptorList_2D_element::isValid (void) const {
  return mProperty_mElement.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_mainXibLineDescriptorList_2D_element::drop (void) {
  mProperty_mElement.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------
//
//@mainXibLineDescriptorList-element type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ("mainXibLineDescriptorList-element",
                                                             NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_mainXibLineDescriptorList_2D_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_mainXibLineDescriptorList_2D_element ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_mainXibLineDescriptorList_2D_element::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_mainXibLineDescriptorList_2D_element (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                      GALGAS_location & outArgument_outEndOfFile,
                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outEndOfFile.drop () ; // Release 'out' argument
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
      GALGAS_lstring var_filePath_1913 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)) ;
      GALGAS_lstring var_sourceFile_1945 = GALGAS_lstring::constructor_new (var_filePath_1913.readProperty_string ().getter_absolutePathFromPath (GALGAS_string::constructor_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 46)).getter_stringByDeletingLastPathComponent (SOURCE_FILE ("grammar-syntax.ggs", 46)) COMMA_SOURCE_FILE ("grammar-syntax.ggs", 46)), var_filePath_1913.readProperty_location ()  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 45)) ;
      GALGAS_location joker_2172 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_1945, ioArgument_ioDeclarationAST, joker_2172  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 49)) ;
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
  outArgument_outEndOfFile = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.ggs", 75)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_start_5F_symbol_i0_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_0 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_include COMMA_SOURCE_FILE ("grammar-syntax.ggs", 42)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.ggs", 43)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.ggs", 44)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GALGAS_externSwiftDelegateList & ioArgument_ioExternSwiftDelegateList,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  GALGAS_lstring var_externDelegateName_918 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  ioArgument_ioExternSwiftDelegateList.addAssign_operation (var_externDelegateName_918  COMMA_SOURCE_FILE ("extern-delegate.ggs", 23)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.ggs", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.ggs", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.ggs", 22)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_ (GALGAS_externSwiftFunctionList & ioArgument_ioExternSwiftFunctionList,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  GALGAS_lstring var_externFunctionName_944 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  GALGAS_lstring var_callerName_1058 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 26)) ;
  ioArgument_ioExternSwiftFunctionList.addAssign_operation (var_externFunctionName_944, var_callerName_1058  COMMA_SOURCE_FILE ("extern-swift-func.ggs", 27)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i2_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.ggs", 21)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 22)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.ggs", 24)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.ggs", 25)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.ggs", 26)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  GALGAS_bool var_isClass_1409 ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
    var_isClass_1409 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
    var_isClass_1409 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_propertyTypeName_1556 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientClassDeclarationAST::constructor_new (var_propertyTypeName_1556, var_isClass_1409  COMMA_SOURCE_FILE ("transient-property-class.ggs", 42))  COMMA_SOURCE_FILE ("transient-property-class.ggs", 42)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_class_5F_declaration_i3_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property-class.ggs", 30)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("transient-property-class.ggs", 31)) ;
  switch (select_easyBindings_5F_syntax_1 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("transient-property-class.ggs", 34)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_struct COMMA_SOURCE_FILE ("transient-property-class.ggs", 37)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property-class.ggs", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property-class.ggs", 41)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 38)) ;
  GALGAS_lstring var_enumName_1670 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  GALGAS_lstringlist var_enumConstants_1714 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.ggs", 41)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_constantName_1777 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 43)) ;
    var_enumConstants_1714.addAssign_operation (var_constantName_1777  COMMA_SOURCE_FILE ("enumeration.ggs", 44)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 48)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_enumerationDeclarationAST::constructor_new (var_enumName_1670, var_enumConstants_1714  COMMA_SOURCE_FILE ("enumeration.ggs", 49))  COMMA_SOURCE_FILE ("enumeration.ggs", 49)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i4_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 39)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 43)) ;
    switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.ggs", 46)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 48)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 56)) ;
  GALGAS_lstring var_enumName_2230 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 58)) ;
  GALGAS_lstring var_funcName_2284 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 60)) ;
  GALGAS__32_lstringlist var_associationList_2331 = GALGAS__32_lstringlist::constructor_emptyList (SOURCE_FILE ("enumeration.ggs", 61)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_constantName_2404 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 65)) ;
      GALGAS_lstring var_associatedString_2470 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
      var_associationList_2331.addAssign_operation (var_constantName_2404, var_associatedString_2470  COMMA_SOURCE_FILE ("enumeration.ggs", 68)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.addAssign_operation (var_enumName_2230, var_funcName_2284, var_associationList_2331  COMMA_SOURCE_FILE ("enumeration.ggs", 71)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_function_5F_declaration_i5_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("enumeration.ggs", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.ggs", 56)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.ggs", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.ggs", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.ggs", 60)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.ggs", 64)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.ggs", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.ggs", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.ggs", 67)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.ggs", 70)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                            C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isAbstract_1840 ;
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
    var_isAbstract_1840 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 45)) ;
    var_isAbstract_1840 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_graphicEntity_1960 ;
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
    var_graphicEntity_1960 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 52)) ;
    var_graphicEntity_1960 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 55)) ;
  GALGAS_lstring var_entityName_2113 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 56)) ;
  GALGAS_lstringlist var_obsoleteEntityNames_2155 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.ggs", 57)) ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_obsoleteName_2250 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 62)) ;
      var_obsoleteEntityNames_2155.addAssign_operation (var_obsoleteName_2250  COMMA_SOURCE_FILE ("entity.ggs", 63)) ;
      switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 67)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superEntityName_2381 ;
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
    var_superEntityName_2381 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 71)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
    var_superEntityName_2381 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 76)) ;
  GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2560 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 77)) ;
  GALGAS_stringset var_signatureList_2598 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("entity.ggs", 78)) ;
  GALGAS_lstringlist var_actionDeclarationList_2646 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.ggs", 79)) ;
  GALGAS_externSwiftDelegateList var_externSwiftDelegateList_2708 = GALGAS_externSwiftDelegateList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 80)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2782 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("entity.ggs", 81)) ;
  GALGAS_lstringlist var_graphicOptionArray_2827 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("entity.ggs", 82)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_2113, var_simpleStoredPropertyList_2560, var_signatureList_2598, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_2113, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 87)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_2113, var_signatureList_2598, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_2113, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2646, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_2113, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.ggs", 95)), var_arrayControllerBindingListAST_2782, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2708, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 99)) ;
      GALGAS_lstring var_graphicOption_3523 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 100)) ;
      var_graphicOptionArray_2827.addAssign_operation (var_graphicOption_3523  COMMA_SOURCE_FILE ("entity.ggs", 101)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 102)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_graphicEntity_1960.operator_not (SOURCE_FILE ("entity.ggs", 103)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (var_graphicOption_3523.readProperty_location (), GALGAS_string ("only a graphic entity accepts a graphic option"), fixItArray3  COMMA_SOURCE_FILE ("entity.ggs", 104)) ;
        }
      }
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_entityDeclarationAST::constructor_new (var_entityName_2113, var_isAbstract_1840, var_superEntityName_2381, var_simpleStoredPropertyList_2560, var_signatureList_2598, var_actionDeclarationList_2646, var_obsoleteEntityNames_2155, var_graphicEntity_1960, var_externSwiftDelegateList_2708, var_graphicOptionArray_2827  COMMA_SOURCE_FILE ("entity.ggs", 108))  COMMA_SOURCE_FILE ("entity.ggs", 108)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    GALGAS_bool test_5 = var_isAbstract_1840 ;
    if (kBoolTrue == test_5.boolEnum ()) {
      test_5 = var_graphicEntity_1960 ;
    }
    test_4 = test_5.boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_2113, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 123)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 124)), GALGAS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 125)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 126)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.ggs", 121))  COMMA_SOURCE_FILE ("entity.ggs", 121)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_entityName_2113, GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 131)), GALGAS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 132)), GALGAS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.ggs", 133)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("entity.ggs", 134)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("entity.ggs", 129))  COMMA_SOURCE_FILE ("entity.ggs", 129)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_entity_5F_declaration_i6_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_4 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.ggs", 45)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 52)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.ggs", 55)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 56)) ;
  switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.ggs", 60)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 62)) ;
      switch (select_easyBindings_5F_syntax_7 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("entity.ggs", 65)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("entity.ggs", 67)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.ggs", 73)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.ggs", 74)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.ggs", 76)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_9 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.ggs", 99)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.ggs", 100)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.ggs", 102)) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("entity.ggs", 107)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  GALGAS_lstring var_documentName_2922 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  GALGAS_string var_customSuperClassName_2960 ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
    var_customSuperClassName_2960 = GALGAS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
    GALGAS_lstring var_name_3050 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 73)) ;
    var_customSuperClassName_2960 = var_name_3050.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 76)) ;
  GALGAS_lstring var_rootEntityName_3158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 78)) ;
  GALGAS_lstring var_mainViewName_3220 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 80)) ;
  GALGAS_outletDeclarationList var_outletDeclarationList_3282 = GALGAS_outletDeclarationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 81)) ;
  GALGAS_lstringlist var_actionDeclarationList_3330 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 82)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_3404 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 83)) ;
  GALGAS_astViewDeclarationList var_viewDeclarationList_3461 = GALGAS_astViewDeclarationList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 84)) ;
  GALGAS_astAutoLayoutToolbarItemList var_autoLayoutToolbarItemList_3530 = GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 85)) ;
  GALGAS_astAutoLayoutOutletLinkerList var_autoLayoutOutletLinkerList_3601 = GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 86)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_3461, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_3330, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2922, var_rootEntityName_3158, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_3282, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2922, var_rootEntityName_3158, var_arrayControllerBindingListAST_3404, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
      switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("document-auto-layout.ggs", 101)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 102)) ;
        var_autoLayoutToolbarItemList_3530.addAssign_operation (GALGAS_astAutoLayoutToolbarItem::constructor_space (SOURCE_FILE ("document-auto-layout.ggs", 103))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 103)) ;
      } break ;
      case 2: {
        GALGAS_lstring var_title_4185 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("document-auto-layout.ggs", 105)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 106)) ;
        GALGAS_astComputedViewInstruction var_instruction_4252 ;
        nt_computed_5F_view_5F_instruction_ (var_instruction_4252, inCompiler) ;
        var_autoLayoutToolbarItemList_3530.addAssign_operation (GALGAS_astAutoLayoutToolbarItem::constructor_view (var_title_4185, var_instruction_4252  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 108))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 108)) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 111)) ;
      GALGAS_lstring var_linkerName_4410 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 113)) ;
      GALGAS_lstringlist var_outletNameList_4459 = GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 114)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        GALGAS_lstring var_outletName_4515 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 116)) ;
        var_outletNameList_4459.addAssign_operation (var_outletName_4515  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 117)) ;
        switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 119)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 121)) ;
      var_autoLayoutOutletLinkerList_3601.addAssign_operation (var_linkerName_4410, var_outletNameList_4459  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 122)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 124)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (var_documentName_2922, var_rootEntityName_3158, var_mainViewName_3220, var_outletDeclarationList_3282, var_actionDeclarationList_3330, var_arrayControllerBindingListAST_3404, var_viewDeclarationList_3461, var_autoLayoutToolbarItemList_3530, var_customSuperClassName_2960, var_autoLayoutOutletLinkerList_3601  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 125))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 125)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (var_documentName_2922, var_rootEntityName_3158, GALGAS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 140)), GALGAS_string ("documentFileName").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.ggs", 141)), GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("document-auto-layout.ggs", 142)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 137))  COMMA_SOURCE_FILE ("document-auto-layout.ggs", 137)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_document_5F_declaration_i7_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autoLayoutDocument COMMA_SOURCE_FILE ("document-auto-layout.ggs", 66)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 67)) ;
  switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 72)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.ggs", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 77)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.ggs", 78)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 80)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_11 (inCompiler)) {
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
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toolbarItem COMMA_SOURCE_FILE ("document-auto-layout.ggs", 99)) ;
      switch (select_easyBindings_5F_syntax_12 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("document-auto-layout.ggs", 101)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 102)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("document-auto-layout.ggs", 105)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 106)) ;
        nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
      } break ;
      default:
        break ;
      }
    } break ;
    case 8: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.ggs", 111)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 112)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 113)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.ggs", 116)) ;
        switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 119)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 121)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.ggs", 124)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  GALGAS_lstring var_prefs_2105 = GALGAS_lstring::constructor_new (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.ggs", 49)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 49))  COMMA_SOURCE_FILE ("preferences.ggs", 49)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  GALGAS_stringset var_signatureList_2190 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.ggs", 51)) ;
  GALGAS_arrayControllerBindingListAST var_arrayControllerBindingListAST_2264 = GALGAS_arrayControllerBindingListAST::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 52)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      GALGAS_astViewDeclarationList var_viewDeclarationList_2344 = GALGAS_astViewDeclarationList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 55)) ;
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2344, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mViewDeclarationList.plusAssign_operation(var_viewDeclarationList_2344, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 57)) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 4: {
      GALGAS_simpleStoredPropertyList var_simpleStoredPropertyList_2649 = GALGAS_simpleStoredPropertyList::constructor_emptyList (SOURCE_FILE ("preferences.ggs", 61)) ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_2105, var_simpleStoredPropertyList_2649, var_signatureList_2190, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssign_operation(var_simpleStoredPropertyList_2649, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 67)) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_ (var_prefs_2105, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 71)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 8: {
      GALGAS_stringset joker_3202 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("preferences.ggs", 75)) ;
      nt_toMany_5F_relationship_ (var_prefs_2105, joker_3202, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_ (var_prefs_2105, GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.ggs", 77)), var_arrayControllerBindingListAST_2264, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssign_operation(var_signatureList_2190, inCompiler  COMMA_SOURCE_FILE ("preferences.ggs", 79)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i8_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.ggs", 48)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.ggs", 50)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
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
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("preferences.ggs", 80)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  GALGAS_lstring var_entityName_549 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  ioArgument_ioDeclarationAST.mProperty_mGraphvizList.addAssign_operation (var_entityName_549  COMMA_SOURCE_FILE ("graphviz.ggs", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_graphviz_5F_declaration_i9_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphviz COMMA_SOURCE_FILE ("graphviz.ggs", 10)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("graphviz.ggs", 11)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("graphviz.ggs", 13)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  GALGAS_lstring var_functionName_3366 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3440 ;
  GALGAS_lstring var_mangledName_3457 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3366, var_parameterList_3440, var_mangledName_3457, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3457, var_parameterList_3440, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 89)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i10_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 84)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 86)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 88)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  GALGAS_lstring var_functionName_3831 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_3905 ;
  GALGAS_lstring var_mangledName_3922 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3831, var_parameterList_3905, var_mangledName_3922, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3922, var_parameterList_3905, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 100)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i11_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 95)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 96)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 97)) ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 99)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_4263 ;
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
    var_userDefined_4263 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_4263 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  GALGAS_lstring var_outletClassName_4432 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  GALGAS_autoLayoutClassParameterList var_parameterList_4485 ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
    var_parameterList_4485 = GALGAS_autoLayoutClassParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-class.ggs", 118)) ;
  } break ;
  case 2: {
    GALGAS_lstring joker_4601 ; // Joker input parameter
    nt_autolayout_5F_formal_5F_parameter_5F_list_ (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.ggs", 120)), var_parameterList_4485, joker_4601, inCompiler) ;
    joker_4601.drop () ; // Release temporary input variables (joker in source)
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_superClassName_4643 ;
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
    var_superClassName_4643 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    var_superClassName_4643 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_4776 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_4809 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_4841 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_4887 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_4941 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
      var_handlesTableViewBinding_4887 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
      var_hasRunAction_4776 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
      var_hasEnabled_4809 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
      var_hasHidden_4841 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
      var_handlesGraphicControllerBinding_4941 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_5328 = GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (SOURCE_FILE ("auto-layout-view-class.ggs", 151)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      GALGAS_lstring var_functionName_5413 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
      GALGAS_autoLayoutClassParameterList var_parameterList_5489 ;
      GALGAS_lstring var_mangledName_5506 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_5413, var_parameterList_5489, var_mangledName_5506, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_5328.setter_insertKey (var_mangledName_5506, var_parameterList_5489, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 158)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4432, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_autoLayoutViewClassDeclarationAST::constructor_new (var_outletClassName_4432, var_userDefined_4263, var_superClassName_4643, var_hasRunAction_4776, var_hasEnabled_4809, var_handlesTableViewBinding_4887, var_handlesGraphicControllerBinding_4941, var_hasHidden_4841, var_parameterList_4485, var_astAutoLayoutViewFunctionMap_5328  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 163))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 163)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_class_5F_declaration_i12_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_15 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 108)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 113)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 114)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 115)) ;
  switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    nt_autolayout_5F_formal_5F_parameter_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_17 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 126)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 127)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_18 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 136)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 139)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 142)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 145)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 148)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 152)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_19 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 155)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 156)) ;
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
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 162)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_ (const GALGAS_lstring constinArgument_inFunctionName,
                                                                                                                 GALGAS_autoLayoutClassParameterList & outArgument_ioParameterList,
                                                                                                                 GALGAS_lstring & outArgument_outMangledName,
                                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  outArgument_ioParameterList = GALGAS_autoLayoutClassParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-class.ggs", 182)) ;
  GALGAS_string var_mangledName_6477 = constinArgument_inFunctionName.readProperty_string ().add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 183)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 184)) ;
  switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_6587 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 188)) ;
      var_mangledName_6477.plusAssign_operation(var_parameterName_6587.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 189)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)) ;
      switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 192)) ;
        outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeView (SOURCE_FILE ("auto-layout-view-class.ggs", 193))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 193)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 195)) ;
        outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_menuItem (SOURCE_FILE ("auto-layout-view-class.ggs", 196))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 196)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 198)) ;
        outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_entity (SOURCE_FILE ("auto-layout-view-class.ggs", 199))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 199)) ;
      } break ;
      case 4: {
        GALGAS_lstring var_parameterTypeName_6965 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 201)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, var_parameterTypeName_6965.readProperty_string ().objectCompare (GALGAS_string ("String"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeString (SOURCE_FILE ("auto-layout-view-class.ggs", 203))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 203)) ;
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (kIsEqual, var_parameterTypeName_6965.readProperty_string ().objectCompare (GALGAS_string ("StringArray"))).boolEnum () ;
            if (kBoolTrue == test_2) {
              outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeStringArray (SOURCE_FILE ("auto-layout-view-class.ggs", 205))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 205)) ;
            }
          }
          if (kBoolFalse == test_2) {
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = GALGAS_bool (kIsEqual, var_parameterTypeName_6965.readProperty_string ().objectCompare (GALGAS_string ("Int"))).boolEnum () ;
              if (kBoolTrue == test_3) {
                outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view-class.ggs", 207))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 207)) ;
              }
            }
            if (kBoolFalse == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = GALGAS_bool (kIsEqual, var_parameterTypeName_6965.readProperty_string ().objectCompare (GALGAS_string ("Bool"))).boolEnum () ;
                if (kBoolTrue == test_4) {
                  outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view-class.ggs", 209))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 209)) ;
                }
              }
              if (kBoolFalse == test_4) {
                outArgument_ioParameterList.addAssign_operation (var_parameterName_6587, GALGAS_autoLayoutClassParameterType::constructor_typeEnum (var_parameterTypeName_6965  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 211))  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 211)) ;
              }
            }
          }
        }
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 215)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 218)) ;
  var_mangledName_6477.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 219)) ;
  outArgument_outMangledName = GALGAS_lstring::constructor_new (var_mangledName_6477, constinArgument_inFunctionName.readProperty_location ()  COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 220)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_autolayout_5F_formal_5F_parameter_5F_list_i13_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 184)) ;
  switch (select_easyBindings_5F_syntax_20 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 188)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 190)) ;
      switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 192)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 195)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 198)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 201)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_21 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 215)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-class.ggs", 218)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                                          GALGAS_autoLayoutViewClassBindingSpecificationList & ioArgument_ioBindingList,
                                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_lstring var_bindingName_1187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1279 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 23)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1341 ;
    switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
      var_modelShouldBeWritableProperty_1341 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
      var_modelShouldBeWritableProperty_1341 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_1536 ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      var_modelTypeName_1536 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
      var_modelTypeName_1536 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 38))  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 38)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1279.addAssign_operation (var_modelTypeName_1536, var_modelShouldBeWritableProperty_1341  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 40)) ;
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_1846 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 44)) ;
  switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_1939 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      GALGAS_lstring var_optionType_1999 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      var_bindingOptionList_1846.addAssign_operation (var_optionName_1939, var_optionType_1999  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 52)) ;
      switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioBindingList.addAssign_operation (constinArgument_inClassName, var_bindingName_1187, var_outletClassBindingSpecificationModelList_1279, var_bindingOptionList_1846  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 58)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_view_5F_binding_5F_specification_i14_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 22)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_24 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 27)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 30)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 37)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_23 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 42)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 47)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 49)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 50)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 54)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.ggs", 56)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 164)) ;
  GALGAS_lstring var_viewName_7336 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 166)) ;
  switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 168)) ;
    GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_7429 ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_7429, inCompiler) ;
    ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_7336, GALGAS_astHorizontalStackViewDeclaration::constructor_new (var_functionCallList_7429  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 170))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 170)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 172)) ;
    GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_7611 ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_7611, inCompiler) ;
    ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_7336, GALGAS_astVerticalStackViewDeclaration::constructor_new (var_functionCallList_7611  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 174))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 174)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 176)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i15_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 164)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 165)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 166)) ;
  switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 168)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 172)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 176)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 182)) ;
  GALGAS_lstring var_viewName_7989 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 183)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 184)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_8060 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_8060, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 186)) ;
  GALGAS_astViewInstructionList var_instructionList_8093 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 187)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (false), var_instructionList_8093, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 189)) ;
  ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_7989, GALGAS_astComputedVerticalViewDeclaration::constructor_new (var_functionCallList_8060, var_instructionList_8093  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 192))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 190)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i16_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 182)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 183)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 184)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 186)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 189)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_ (GALGAS_astAutoLayoutViewFunctionCallList & outArgument_outFunctionCallList,
                                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  outArgument_outFunctionCallList = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 198)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_functionName_8639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 201)) ;
      GALGAS_astAutoLayoutViewInstructionParameterList var_actualParameterList_8702 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (var_actualParameterList_8702, inCompiler) ;
      outArgument_outFunctionCallList.addAssign_operation (var_functionName_8639, var_actualParameterList_8702  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 203)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i17_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 201)) ;
      nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i18_ (GALGAS_astViewDeclarationList & ioArgument_ioViewDeclarationList,
                                                                                                    C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 210)) ;
  GALGAS_lstring var_viewName_9040 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 212)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_9110 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_9110, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 214)) ;
  GALGAS_astViewInstructionList var_instructionList_9143 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 215)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), var_instructionList_9143, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 217)) ;
  ioArgument_ioViewDeclarationList.addAssign_operation (var_viewName_9040, GALGAS_astComputedHorizontalViewDeclaration::constructor_new (var_functionCallList_9110, var_instructionList_9143  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 220))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 218)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i18_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 210)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 211)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 212)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 214)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 217)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i19_ (GALGAS_bool inArgument_inHorizontal,
                                                                                                   GALGAS_astViewInstructionList & ioArgument_ioInstructionList,
                                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 228)) ;
      ioArgument_ioInstructionList.addAssign_operation (GALGAS_astSeparatorInstructionDeclaration::constructor_new (inArgument_inHorizontal  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 229))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 229)) ;
    } break ;
    case 3: {
      GALGAS_astAbstractViewInstructionDeclaration var_instruction_9806 ;
      nt_view_5F_instruction_ (var_instruction_9806, inCompiler) ;
      ioArgument_ioInstructionList.addAssign_operation (var_instruction_9806  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 233)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i19_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 228)) ;
    } break ;
    case 3: {
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i20_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 240)) ;
  outArgument_outInstruction = GALGAS_astSpaceViewInstruction::constructor_new (SOURCE_FILE ("auto-layout-view.ggs", 241)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i20_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.ggs", 240)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i21_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 247)) ;
  GALGAS_lstring var_localViewName_10395 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 248)) ;
  outArgument_outInstruction = GALGAS_astLocalViewInstruction::constructor_new (var_localViewName_10395  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 249)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i21_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.ggs", 247)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 248)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i22_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_astComputedViewInstruction var_instruction_10727 ;
  nt_computed_5F_view_5F_instruction_ (var_instruction_10727, inCompiler) ;
  outArgument_outInstruction = var_instruction_10727 ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i22_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_computed_5F_view_5F_instruction_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i23_ (GALGAS_astComputedViewInstruction & outArgument_outInstruction,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GALGAS_lstring var_viewClassName_11012 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 262)) ;
  GALGAS_astAutoLayoutViewInstructionParameterList var_instanciationParameterList_11091 ;
  switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
  case 1: {
    var_instanciationParameterList_11091 = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 265)) ;
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_ (var_instanciationParameterList_11091, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GALGAS_lstring var_configuratorName_11254 ;
  GALGAS_lstring var_outletName_11282 ;
  switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
  case 1: {
    var_outletName_11282 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 272)) ;
    var_configuratorName_11254 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 273)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 275)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      var_outletName_11282 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 277)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 279)) ;
      var_outletName_11282 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 1: {
      var_configuratorName_11254 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 283)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 285)) ;
      var_configuratorName_11254 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 286)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 288)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_tableValueBinding var_tableValueBinding_11697 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_11746 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_11806 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_11865 ;
  GALGAS_graphicController var_graphicController_11910 ;
  GALGAS_regularBindingList var_regularBindingList_11957 ;
  GALGAS_astAutoLayoutViewFunctionCallList var_autoLayoutViewFunctionCallList_12031 ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    var_tableValueBinding_11697 = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("auto-layout-view.ggs", 298)) ;
    var_runActionDescriptor_11746 = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("auto-layout-view.ggs", 299)) ;
    var_enabledBindingDescriptor_11806 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 300)) ;
    var_hiddenBindingDescriptor_11865 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 301)) ;
    var_graphicController_11910 = GALGAS_graphicController::constructor_none (SOURCE_FILE ("auto-layout-view.ggs", 302)) ;
    var_regularBindingList_11957 = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 303)) ;
    var_autoLayoutViewFunctionCallList_12031 = GALGAS_astAutoLayoutViewFunctionCallList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 304)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 306)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_autoLayoutViewFunctionCallList_12031, inCompiler) ;
    nt_outlet_5F_binding_ (var_tableValueBinding_11697, var_runActionDescriptor_11746, var_enabledBindingDescriptor_11806, var_hiddenBindingDescriptor_11865, var_graphicController_11910, var_regularBindingList_11957, inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 314)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GALGAS_astComputedViewInstruction::constructor_new (var_viewClassName_11012, var_instanciationParameterList_11091, var_autoLayoutViewFunctionCallList_12031, var_tableValueBinding_11697, var_runActionDescriptor_11746, var_enabledBindingDescriptor_11806, var_hiddenBindingDescriptor_11865, var_graphicController_11910, var_regularBindingList_11957, var_configuratorName_11254, var_outletName_11282  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 316)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i23_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 262)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 275)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.ggs", 279)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 280)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.ggs", 285)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 286)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 288)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 306)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
    nt_outlet_5F_binding_parse (inCompiler) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 314)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i24_ (GALGAS_astAutoLayoutViewInstructionParameterList & outArgument_outParameterList,
                                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  outArgument_outParameterList = GALGAS_astAutoLayoutViewInstructionParameterList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 334)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 335)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_parameterName_13390 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 340)) ;
      switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
      case 1: {
        GALGAS_astAbstractViewInstructionDeclaration var_instruction_13504 ;
        nt_view_5F_instruction_ (var_instruction_13504, inCompiler) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeView (SOURCE_FILE ("auto-layout-view.ggs", 343)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_viewFunc (var_instruction_13504  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 343))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 343)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 345)) ;
        GALGAS_lstring var_entityName_13670 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 346)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_entity (SOURCE_FILE ("auto-layout-view.ggs", 347)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_entity (var_entityName_13670  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 347))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 347)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 349)) ;
        GALGAS_lstring var_menuItemTitle_13838 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 350)) ;
        GALGAS_runActionDescriptor var_runActionDescriptor_13894 ;
        switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
        case 1: {
          var_runActionDescriptor_13894 = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("auto-layout-view.ggs", 353)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 355)) ;
          GALGAS_lstring var_runTargetName_14025 ;
          switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
          case 1: {
            var_runTargetName_14025 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 358))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 358)) ;
          } break ;
          case 2: {
            var_runTargetName_14025 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 360)) ;
            inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 361)) ;
          } break ;
          default:
            break ;
          }
          GALGAS_lstring var_runActionName_14255 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 363)) ;
          var_runActionDescriptor_13894 = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_14025, var_runActionName_14255  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 364)) ;
        } break ;
        default:
          break ;
        }
        GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_14424 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 366)) ;
        switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
        case 1: {
          var_enabledBindingDescriptor_14424 = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 368)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 370)) ;
          GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_14655 ;
          nt_booleanMultipleBindingExpression_ (var_bindingExpression_14655, inCompiler) ;
          var_enabledBindingDescriptor_14424 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_14655  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 372)) ;
        } break ;
        default:
          break ;
        }
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_menuItem (SOURCE_FILE ("auto-layout-view.ggs", 376)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_menuItem (var_menuItemTitle_13838.readProperty_string (), var_runActionDescriptor_13894, var_enabledBindingDescriptor_14424  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 377))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 374)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
        GALGAS_lstring var_viewName_15006 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 380)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeView (SOURCE_FILE ("auto-layout-view.ggs", 381)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("self.").add_operation (var_viewName_15006.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 381))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 381))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 381)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 383)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 384)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 384))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 384)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 386)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeBool (SOURCE_FILE ("auto-layout-view.ggs", 387)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 387)) ;
      } break ;
      case 7: {
        GALGAS_luint var_uint_33__32__15378 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 389)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 390)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (var_uint_33__32__15378.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 390))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 390))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 390)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 392)) ;
        GALGAS_luint var_uint_33__32__15540 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 393)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeInt (SOURCE_FILE ("auto-layout-view.ggs", 394)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string ("-").add_operation (var_uint_33__32__15540.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.ggs", 394)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 394))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 394))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 394)) ;
      } break ;
      case 9: {
        GALGAS_lstring var_literalString_15700 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 396)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeString (SOURCE_FILE ("auto-layout-view.ggs", 397)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (var_literalString_15700.readProperty_string ().getter_cStringRepresentation (SOURCE_FILE ("auto-layout-view.ggs", 397))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 397))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 397)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 399)) ;
        GALGAS_lstring var_enumConstantName_15894 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 400)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeEnum (var_enumConstantName_15894  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 401)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_string (GALGAS_string (".").add_operation (var_enumConstantName_15894.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 401))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 401))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 401)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 403)) ;
        GALGAS_lstring var_enumTypeName_16089 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 405)) ;
        GALGAS_lstring var_enumFuncName_16146 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 406)) ;
        outArgument_outParameterList.addAssign_operation (var_parameterName_13390, GALGAS_autoLayoutClassParameterType::constructor_typeStringArray (SOURCE_FILE ("auto-layout-view.ggs", 409)), GALGAS_astAutoLayoutViewInstructionParameterValue::constructor_enumFunc (var_enumTypeName_16089, var_enumFuncName_16146  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 409))  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 407)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 412)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 415)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i24_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 335)) ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 339)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 340)) ;
      switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_parse (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.ggs", 345)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 346)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.ggs", 349)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 350)) ;
        switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.ggs", 355)) ;
          switch (select_easyBindings_5F_syntax_40 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.ggs", 360)) ;
            inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 361)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 363)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.ggs", 370)) ;
          nt_booleanMultipleBindingExpression_parse (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.ggs", 379)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 380)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.ggs", 383)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.ggs", 386)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 389)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 392)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.ggs", 393)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.ggs", 396)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 399)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 400)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.ggs", 403)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 404)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 405)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 406)) ;
      } break ;
      default:
        break ;
      }
      switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 412)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 415)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i25_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackViewRef COMMA_SOURCE_FILE ("auto-layout-view.ggs", 421)) ;
  GALGAS_lstring var_stackViewName_16637 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 422)) ;
  outArgument_outInstruction = GALGAS_astStackViewReferenceInstructionDeclaration::constructor_new (var_stackViewName_16637  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 423)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i25_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_stackViewRef COMMA_SOURCE_FILE ("auto-layout-view.ggs", 421)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.ggs", 422)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i26_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 429)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_17009 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_17009, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_17063 ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_17063 = GALGAS_optionalHiddenBinding::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 433)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_17247 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_17247, inCompiler) ;
    var_optionalHiddenBinding_17063 = GALGAS_optionalHiddenBinding::constructor_binding (var_bindingExpression_17247  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 437)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 439)) ;
  GALGAS_astViewInstructionList var_instructionList_17356 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 440)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (false), var_instructionList_17356, inCompiler) ;
  outArgument_outInstruction = GALGAS_astVStackViewInstructionDeclaration::constructor_new (var_functionCallList_17009, var_instructionList_17356, var_optionalHiddenBinding_17063  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 442)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 443)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i26_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 429)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_42 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 435)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 439)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 443)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i27_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_17866 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_17866, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_17920 ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_17920 = GALGAS_optionalHiddenBinding::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 453)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_18104 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_18104, inCompiler) ;
    var_optionalHiddenBinding_17920 = GALGAS_optionalHiddenBinding::constructor_binding (var_bindingExpression_18104  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 457)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 459)) ;
  GALGAS_astViewInstructionList var_instructionList_18213 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 460)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), var_instructionList_18213, inCompiler) ;
  outArgument_outInstruction = GALGAS_astHStackViewInstructionDeclaration::constructor_new (var_functionCallList_17866, var_instructionList_18213, var_optionalHiddenBinding_17920  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 462)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 463)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i27_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.ggs", 449)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 455)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 459)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 463)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i28_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hSplit COMMA_SOURCE_FILE ("auto-layout-view.ggs", 469)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_18722 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_18722, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_18776 ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_18776 = GALGAS_optionalHiddenBinding::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 473)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 475)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_18960 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_18960, inCompiler) ;
    var_optionalHiddenBinding_18776 = GALGAS_optionalHiddenBinding::constructor_binding (var_bindingExpression_18960  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 477)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 479)) ;
  GALGAS_astViewInstructionList var_instructionList_19069 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 480)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), var_instructionList_19069, inCompiler) ;
  outArgument_outInstruction = GALGAS_astHSplitViewInstructionDeclaration::constructor_new (var_functionCallList_18722, var_instructionList_19069, var_optionalHiddenBinding_18776  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 482)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 483)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i28_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hSplit COMMA_SOURCE_FILE ("auto-layout-view.ggs", 469)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 475)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 479)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 483)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i29_ (GALGAS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vSplit COMMA_SOURCE_FILE ("auto-layout-view.ggs", 489)) ;
  GALGAS_astAutoLayoutViewFunctionCallList var_functionCallList_19578 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_functionCallList_19578, inCompiler) ;
  GALGAS_optionalHiddenBinding var_optionalHiddenBinding_19632 ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_19632 = GALGAS_optionalHiddenBinding::constructor_noBinding (SOURCE_FILE ("auto-layout-view.ggs", 493)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 495)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_19816 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_19816, inCompiler) ;
    var_optionalHiddenBinding_19632 = GALGAS_optionalHiddenBinding::constructor_binding (var_bindingExpression_19816  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 497)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 499)) ;
  GALGAS_astViewInstructionList var_instructionList_19925 = GALGAS_astViewInstructionList::constructor_emptyList (SOURCE_FILE ("auto-layout-view.ggs", 500)) ;
  nt_view_5F_instruction_5F_list_ (GALGAS_bool (true), var_instructionList_19925, inCompiler) ;
  outArgument_outInstruction = GALGAS_astVSplitViewInstructionDeclaration::constructor_new (var_functionCallList_19578, var_instructionList_19925, var_optionalHiddenBinding_19632  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 502)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 503)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i29_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_vSplit COMMA_SOURCE_FILE ("auto-layout-view.ggs", 489)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.ggs", 495)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 499)) ;
  nt_view_5F_instruction_5F_list_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.ggs", 503)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i30_ (GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_userDefined_1706 ;
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
    var_userDefined_1706 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_1706 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  GALGAS_lstring var_outletClassName_1871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  GALGAS_lstring var_superClassName_1904 ;
  switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
  case 1: {
    var_superClassName_1904 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-class.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    var_superClassName_1904 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  GALGAS_bool var_hasRunAction_2037 = GALGAS_bool (false) ;
  GALGAS_bool var_hasEnabled_2070 = GALGAS_bool (false) ;
  GALGAS_bool var_hasHidden_2102 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesTableViewBinding_2148 = GALGAS_bool (false) ;
  GALGAS_bool var_handlesGraphicControllerBinding_2202 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
      var_handlesTableViewBinding_2148 = GALGAS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
      var_hasRunAction_2037 = GALGAS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
      var_hasEnabled_2070 = GALGAS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
      var_hasHidden_2102 = GALGAS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
      var_handlesGraphicControllerBinding_2202 = GALGAS_bool (true) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_outletClassDeclarationAST::constructor_new (var_outletClassName_1871, var_userDefined_1706, var_superClassName_1904, var_hasRunAction_2037, var_hasEnabled_2070, var_handlesTableViewBinding_2148, var_handlesGraphicControllerBinding_2202, var_hasHidden_2102  COMMA_SOURCE_FILE ("outlet-class.ggs", 79))  COMMA_SOURCE_FILE ("outlet-class.ggs", 79)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_class_5F_declaration_i30_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_46 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("outlet-class.ggs", 41)) ;
  } break ;
  case 2: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-class.ggs", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("outlet-class.ggs", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 48)) ;
  switch (select_easyBindings_5F_syntax_47 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-class.ggs", 53)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-class.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-class.ggs", 63)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-class.ggs", 66)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-class.ggs", 69)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-class.ggs", 72)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-class.ggs", 75)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-class.ggs", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i31_ (GALGAS_outletClassBindingSpecificationList & ioArgument_ioControllerTemplateList,
                                                                                                          C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  GALGAS_lstring var_outletClassName_1609 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  GALGAS_lstring var_bindingName_1655 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  GALGAS_outletClassBindingSpecificationModelList var_outletClassBindingSpecificationModelList_1755 = GALGAS_outletClassBindingSpecificationModelList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 40)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_bool var_modelShouldBeWritableProperty_1817 ;
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
      var_modelShouldBeWritableProperty_1817 = GALGAS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
      var_modelShouldBeWritableProperty_1817 = GALGAS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GALGAS_lstring var_modelTypeName_2012 ;
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      var_modelTypeName_2012 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
      var_modelTypeName_2012 = GALGAS_lstring::constructor_new (GALGAS_string ("enum"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 55))  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 55)) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1755.addAssign_operation (var_modelTypeName_2012, var_modelShouldBeWritableProperty_1817  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 57)) ;
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_controllerBindingOptionList var_bindingOptionList_2322 = GALGAS_controllerBindingOptionList::constructor_emptyList (SOURCE_FILE ("outlet-binding-specification.ggs", 61)) ;
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GALGAS_lstring var_optionName_2415 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      GALGAS_lstring var_optionType_2475 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      var_bindingOptionList_2322.addAssign_operation (var_optionName_2415, var_optionType_2475  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 69)) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  ioArgument_ioControllerTemplateList.addAssign_operation (var_outletClassName_1609, var_bindingName_1655, var_outletClassBindingSpecificationModelList_1755, var_bindingOptionList_2322  COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i31_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 36)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 37)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 38)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 39)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 44)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 47)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_51 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 54)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 59)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 64)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 67)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 68)) ;
      switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 71)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 73)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-binding-specification.ggs", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i32_ (GALGAS_outletDeclarationList & ioArgument_ioOutletDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  GALGAS_lstring var_outletTypeName_1934 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  GALGAS_lstring var_outletName_1969 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  GALGAS_tableValueBinding var_tableValueBinding_2034 ;
  GALGAS_runActionDescriptor var_runActionDescriptor_2101 ;
  GALGAS_multipleBindingDescriptor var_enabledBindingDescriptor_2179 ;
  GALGAS_multipleBindingDescriptor var_hiddenBindingDescriptor_2256 ;
  GALGAS_graphicController var_graphicController_2319 ;
  GALGAS_regularBindingList var_regularBindingList_2384 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_2034, var_runActionDescriptor_2101, var_enabledBindingDescriptor_2179, var_hiddenBindingDescriptor_2256, var_graphicController_2319, var_regularBindingList_2384, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  ioArgument_ioOutletDeclarationList.addAssign_operation (var_outletTypeName_1934, var_outletName_1969, var_tableValueBinding_2034, var_runActionDescriptor_2101, var_enabledBindingDescriptor_2179, var_hiddenBindingDescriptor_2256, var_regularBindingList_2384, var_graphicController_2319  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 56)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i32_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.ggs", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 47)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 48)) ;
  nt_outlet_5F_binding_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 55)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i33_ (GALGAS_tableValueBinding & outArgument_tableValueBinding,
                                                                                         GALGAS_runActionDescriptor & outArgument_runActionDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_enabledBindingDescriptor,
                                                                                         GALGAS_multipleBindingDescriptor & outArgument_hiddenBindingDescriptor,
                                                                                         GALGAS_graphicController & outArgument_graphicController,
                                                                                         GALGAS_regularBindingList & outArgument_regularBindingList,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_tableValueBinding.drop () ; // Release 'out' argument
  outArgument_runActionDescriptor.drop () ; // Release 'out' argument
  outArgument_enabledBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_hiddenBindingDescriptor.drop () ; // Release 'out' argument
  outArgument_graphicController.drop () ; // Release 'out' argument
  outArgument_regularBindingList.drop () ; // Release 'out' argument
  outArgument_tableValueBinding = GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 76)) ;
  outArgument_runActionDescriptor = GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.ggs", 77)) ;
  outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 78)) ;
  outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 79)) ;
  outArgument_graphicController = GALGAS_graphicController::constructor_none (SOURCE_FILE ("outlet-declaration.ggs", 80)) ;
  outArgument_regularBindingList = GALGAS_regularBindingList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 81)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 84)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsNotEqual, outArgument_tableValueBinding.objectCompare (GALGAS_tableValueBinding::constructor_noTableValueBinding (SOURCE_FILE ("outlet-declaration.ggs", 85)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 86)), GALGAS_string ("duplicated $tableValue binding"), fixItArray2  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 86)) ;
        }
      }
      GALGAS_lstring var_controllerName_3716 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 88)) ;
      outArgument_tableValueBinding = GALGAS_tableValueBinding::constructor_tableValueBinding (var_controllerName_3716  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 89)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 91)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, outArgument_runActionDescriptor.objectCompare (GALGAS_runActionDescriptor::constructor_noAction (SOURCE_FILE ("outlet-declaration.ggs", 92)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 93)), GALGAS_string ("duplicated $run binding"), fixItArray4  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 93)) ;
        }
      }
      GALGAS_lstring var_runTargetName_3956 ;
      switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
      case 1: {
        var_runTargetName_3956 = GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 97))  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 97)) ;
      } break ;
      case 2: {
        var_runTargetName_3956 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 99)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
      } break ;
      default:
        break ;
      }
      GALGAS_lstring var_runActionName_4144 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 102)) ;
      outArgument_runActionDescriptor = GALGAS_runActionDescriptor::constructor_action (var_runTargetName_3956, var_runActionName_4144  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 103)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 106)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsNotEqual, outArgument_enabledBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 107)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 108)), GALGAS_string ("duplicated $enabled binding"), fixItArray6  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 108)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4493 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4493, inCompiler) ;
      outArgument_enabledBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4493  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 111)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 114)) ;
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsNotEqual, outArgument_hiddenBindingDescriptor.objectCompare (GALGAS_multipleBindingDescriptor::constructor_noBinding (SOURCE_FILE ("outlet-declaration.ggs", 115)))).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 116)), GALGAS_string ("duplicated $hidden binding"), fixItArray8  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 116)) ;
        }
      }
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4830 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4830, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_4830  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 119)) ;
    } break ;
    case 6: {
      GALGAS_lstring var_bindingName_4984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 122)) ;
      GALGAS_observablePropertyList var_observablePropertyList_5042 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("outlet-declaration.ggs", 123)) ;
      bool repeatFlag_9 = true ;
      while (repeatFlag_9) {
        GALGAS_observablePropertyAST var_observableProperty_5138 ;
        nt_observable_5F_property_ (var_observableProperty_5138, inCompiler) ;
        var_observablePropertyList_5042.addAssign_operation (var_observableProperty_5138  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 126)) ;
        switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 128)) ;
        } break ;
        default:
          repeatFlag_9 = false ;
          break ;
        }
      }
      GALGAS_bindingOptionList var_bindingOptions_5276 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5276, inCompiler) ;
      outArgument_regularBindingList.addAssign_operation (var_bindingName_4984, var_observablePropertyList_5042, var_bindingOptions_5276  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 131)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 137)) ;
      GALGAS_lstring var_graphicControllerName_5512 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 138)) ;
      GALGAS_lstring var_propertyName_5545 ;
      switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
      case 1: {
        var_propertyName_5545 = GALGAS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.ggs", 141)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
        var_propertyName_5545 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 144)) ;
      } break ;
      default:
        break ;
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.ggs", 146)).boolEnum () ;
        if (kBoolTrue == test_10) {
          outArgument_graphicController = GALGAS_graphicController::constructor_defined (var_graphicControllerName_5512, var_propertyName_5545  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 147)) ;
        }
      }
      if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5512.readProperty_location (), GALGAS_string ("binding already defined"), fixItArray11  COMMA_SOURCE_FILE ("outlet-declaration.ggs", 149)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_i33_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_54 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("outlet-declaration.ggs", 84)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 88)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("outlet-declaration.ggs", 91)) ;
      switch (select_easyBindings_5F_syntax_55 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 99)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 100)) ;
      } break ;
      default:
        break ;
      }
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 102)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("outlet-declaration.ggs", 106)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("outlet-declaration.ggs", 114)) ;
      nt_booleanMultipleBindingExpression_parse (inCompiler) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 122)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        nt_observable_5F_property_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_56 (inCompiler)) {
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 128)) ;
        } break ;
        default:
          repeatFlag_1 = false ;
          break ;
        }
      }
      nt_binding_5F_option_5F_list_parse (inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.ggs", 137)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.ggs", 138)) ;
      switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.ggs", 143)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.ggs", 144)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i34_ (GALGAS_observablePropertyAST & outArgument_outObservablePropertyAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outObservablePropertyAST.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    GALGAS_lstring var_propertyName_2427 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootProperty (var_propertyName_2427  COMMA_SOURCE_FILE ("observable-property.ggs", 49)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
      case 1: {
        GALGAS_lstring var_optionName_2595 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyWithOption (var_propertyName_2427, var_optionName_2595  COMMA_SOURCE_FILE ("observable-property.ggs", 54)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        GALGAS_lstring var_observablePropertyName_2802 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyRelationship (var_propertyName_2427, var_observablePropertyName_2802  COMMA_SOURCE_FILE ("observable-property.ggs", 59)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_rootPropertyNone (var_propertyName_2427  COMMA_SOURCE_FILE ("observable-property.ggs", 64)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfWithoutProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 70))  COMMA_SOURCE_FILE ("observable-property.ggs", 70)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      GALGAS_lstring var_propertyName_3272 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfProperty (var_propertyName_3272  COMMA_SOURCE_FILE ("observable-property.ggs", 75)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          GALGAS_lstring var_elementPropertyName_3497 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyArray (var_propertyName_3272, var_elementPropertyName_3497  COMMA_SOURCE_FILE ("observable-property.ggs", 82)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          GALGAS_lstring var_elementPropertyName_3766 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyObject (var_propertyName_3272, var_elementPropertyName_3766  COMMA_SOURCE_FILE ("observable-property.ggs", 90)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyNone (var_propertyName_3272  COMMA_SOURCE_FILE ("observable-property.ggs", 96)) ;
        } break ;
        case 4: {
          GALGAS_lstring var_optionName_4111 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
          outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfPropertyWithOption (var_propertyName_3272, var_optionName_4111  COMMA_SOURCE_FILE ("observable-property.ggs", 99)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    GALGAS_lstring var_propertyName_4332 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsProperty (var_propertyName_4332  COMMA_SOURCE_FILE ("observable-property.ggs", 108)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      GALGAS_lstring var_optionName_4486 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_prefsPropertyWithOption (var_propertyName_4332, var_optionName_4486  COMMA_SOURCE_FILE ("observable-property.ggs", 112)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GALGAS_lstring var_controllerName_4660 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      GALGAS_lstring var_propertyName_4750 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerOneProperty (var_controllerName_4660, var_propertyName_4750  COMMA_SOURCE_FILE ("observable-property.ggs", 121)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_propertyName_4922 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerProperty (var_controllerName_4660, var_propertyName_4922  COMMA_SOURCE_FILE ("observable-property.ggs", 125)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        GALGAS_lstring var_secondaryPropertyName_5135 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerSecondaryProperty (var_controllerName_4660, var_propertyName_4922, var_secondaryPropertyName_5135  COMMA_SOURCE_FILE ("observable-property.ggs", 129)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        GALGAS_lstring var_secondaryPropertyName_5465 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
        outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_selfControllerAllProperties (var_controllerName_4660, var_propertyName_4922, var_secondaryPropertyName_5465  COMMA_SOURCE_FILE ("observable-property.ggs", 139)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_signatureProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 148))  COMMA_SOURCE_FILE ("observable-property.ggs", 148)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 151))  COMMA_SOURCE_FILE ("observable-property.ggs", 151)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
    outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_versionShouldChangeProperty (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.ggs", 154))  COMMA_SOURCE_FILE ("observable-property.ggs", 154)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    GALGAS_lstring var_superEntityName_6083 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    GALGAS_lstring var_propertyName_6132 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_superProperty (var_superEntityName_6083, var_propertyName_6132  COMMA_SOURCE_FILE ("observable-property.ggs", 162)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
      GALGAS_abstractDefaultValue var_defaultValue_6383 ;
      nt_explicit_5F_value_ (var_defaultValue_6383, inCompiler) ;
      outArgument_outObservablePropertyAST = GALGAS_observablePropertyAST::constructor_superPropertyWithDefaultValue (var_superEntityName_6083, var_propertyName_6132, var_defaultValue_6383  COMMA_SOURCE_FILE ("observable-property.ggs", 169)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_observable_5F_property_i34_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.ggs", 45)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 46)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 47)) ;
    switch (select_easyBindings_5F_syntax_59 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 51)) ;
      switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 53)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 56)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 57)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 58)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 63)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.ggs", 68)) ;
    switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 72)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 73)) ;
      switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 77)) ;
        switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 79)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 80)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 81)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 87)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 88)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 89)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.ggs", 95)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 98)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.ggs", 104)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 105)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 106)) ;
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 110)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 111)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.ggs", 115)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 116)) ;
    switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.ggs", 118)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 119)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 120)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 123)) ;
      switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 127)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 128)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 135)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.ggs", 136)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 137)) ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 138)) ;
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
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.ggs", 147)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.ggs", 150)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.ggs", 153)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.ggs", 156)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 157)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.ggs", 158)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.ggs", 159)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.ggs", 160)) ;
    switch (select_easyBindings_5F_syntax_67 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.ggs", 167)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i35_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 120)) ;
  GALGAS_lstring var_transientTypeName_6243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 121)) ;
  GALGAS_lstring var_transientName_6290 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 123)) ;
  GALGAS_observablePropertyList var_dependanceList_6356 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("computed-property.ggs", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_6451 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6451, inCompiler) ;
    var_dependanceList_6356.addAssign_operation (var_observablePropertyAST_6451  COMMA_SOURCE_FILE ("computed-property.ggs", 127)) ;
    switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 131)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_computedPropertyDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6243, var_transientName_6290, var_dependanceList_6356  COMMA_SOURCE_FILE ("computed-property.ggs", 132))  COMMA_SOURCE_FILE ("computed-property.ggs", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i35_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_computed COMMA_SOURCE_FILE ("computed-property.ggs", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.ggs", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.ggs", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.ggs", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.ggs", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.ggs", 131)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i36_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 91)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 92)) ;
  GALGAS_lstring var_transientTypeName_5437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 93)) ;
  GALGAS_lstring var_transientName_5484 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5437, var_transientName_5484, GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 101)), GALGAS_bool (false)  COMMA_SOURCE_FILE ("transient-property.ggs", 96))  COMMA_SOURCE_FILE ("transient-property.ggs", 96)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i36_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("transient-property.ggs", 91)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 92)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 93)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 94)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 95)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i37_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_bool var_isOverriding_6018 ;
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
    var_isOverriding_6018 = GALGAS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 117)) ;
    var_isOverriding_6018 = GALGAS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 120)) ;
  GALGAS_lstring var_transientTypeName_6171 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 121)) ;
  GALGAS_lstring var_transientName_6218 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  GALGAS_observablePropertyList var_dependanceList_6284 = GALGAS_observablePropertyList::constructor_emptyList (SOURCE_FILE ("transient-property.ggs", 124)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_observablePropertyAST var_observablePropertyAST_6379 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6379, inCompiler) ;
    var_dependanceList_6284.addAssign_operation (var_observablePropertyAST_6379  COMMA_SOURCE_FILE ("transient-property.ggs", 127)) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 131)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_transientDeclarationAST::constructor_new (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6171, var_transientName_6218, var_dependanceList_6284, var_isOverriding_6018  COMMA_SOURCE_FILE ("transient-property.ggs", 132))  COMMA_SOURCE_FILE ("transient-property.ggs", 132)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_transient_5F_declaration_i37_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.ggs", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.ggs", 120)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.ggs", 121)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.ggs", 122)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.ggs", 123)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    nt_observable_5F_property_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.ggs", 129)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.ggs", 131)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i38_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  GALGAS_proxyKind var_proxyKind_2125 ;
  switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
    var_proxyKind_2125 = GALGAS_proxyKind::constructor_propertyProxy (SOURCE_FILE ("proxy.ggs", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
    var_proxyKind_2125 = GALGAS_proxyKind::constructor_toManyProxy (SOURCE_FILE ("proxy.ggs", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  GALGAS_lstring var_proxyTypeName_2305 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  GALGAS_lstring var_proxyName_2348 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  GALGAS_lstring var_toOnePropertyName_2407 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  GALGAS_lstring var_propertyName_2461 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_proxyDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_proxyKind_2125, var_proxyTypeName_2305, var_proxyName_2348, var_toOnePropertyName_2407, var_propertyName_2461  COMMA_SOURCE_FILE ("proxy.ggs", 65))  COMMA_SOURCE_FILE ("proxy.ggs", 65)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i38_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.ggs", 51)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.ggs", 54)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.ggs", 57)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.ggs", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 59)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.ggs", 60)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.ggs", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.ggs", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.ggs", 64)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i39_ (const GALGAS_lstring constinArgument_inClassName,
                                                                                                       GALGAS_simpleStoredPropertyList & ioArgument_ioAttributeList,
                                                                                                       GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                                       GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 51)) ;
  GALGAS_bool var_usedForSignature_2301 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2408 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 56)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2408.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_usedForSignature_2301 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("@signature")) ;
        appendFixItActions (fixItArray2, kFixItReplace, GALGAS_string ("@validation")) ;
        inCompiler->emitSemanticError (var_attributeName_2408.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray2  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 68)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_attributeTypeName_2997 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 71)) ;
  GALGAS_lstring var_attributeName_3044 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 72)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_usedForSignature_2301.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioSignatureList.addAssign_operation (var_attributeName_3044.readProperty_string ()  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 74)) ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 76)) ;
  GALGAS_abstractDefaultValue var_defaultValue_3205 ;
  nt_explicit_5F_value_ (var_defaultValue_3205, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 78)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_atomicPropertyDeclarationAST::constructor_new (constinArgument_inClassName, var_attributeTypeName_2997, var_attributeName_3044, var_defaultValue_3205  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 79))  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 79)) ;
  ioArgument_ioAttributeList.addAssign_operation (var_attributeTypeName_2997, var_attributeName_3044, var_defaultValue_3205  COMMA_SOURCE_FILE ("simple-stored-property.ggs", 85)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_simple_5F_stored_5F_declaration_i39_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.ggs", 51)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.ggs", 56)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 71)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.ggs", 72)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.ggs", 76)) ;
  nt_explicit_5F_value_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.ggs", 78)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i40_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                             GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 44)) ;
  GALGAS_bool var_usedForSignature_2137 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2205 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 48)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2205.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2137.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2205.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 51)) ;
            }
          }
          var_usedForSignature_2137 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        appendFixItActions (fixItArray4, kFixItReplace, GALGAS_string ("@signature")) ;
        inCompiler->emitSemanticError (var_attributeName_2205.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray4  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 55)) ;
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_2568 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 58)) ;
  GALGAS_lstring var_relationshipName_2618 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 59)) ;
  GALGAS_toOneOppositeRelationship var_opposite_2663 ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_opposite_2663 = GALGAS_toOneOppositeRelationship::constructor_none (SOURCE_FILE ("to-one-relationship.ggs", 62)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 64)) ;
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
      GALGAS_lstring var_inverseRelationshipName_2800 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 67)) ;
      var_opposite_2663 = GALGAS_toOneOppositeRelationship::constructor_oppositeIsToOne (var_inverseRelationshipName_2800  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 68)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 70)) ;
      GALGAS_lstring var_inverseRelationshipName_2967 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
      var_opposite_2663 = GALGAS_toOneOppositeRelationship::constructor_oppositeIsToMany (var_inverseRelationshipName_2967  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 72)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 75)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toOneRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_2568, var_relationshipName_2618, var_opposite_2663, var_usedForSignature_2137  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 76))  COMMA_SOURCE_FILE ("to-one-relationship.ggs", 76)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toOne_5F_relationship_i40_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 44)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-one-relationship.ggs", 48)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 58)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 59)) ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-one-relationship.ggs", 64)) ;
    switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-one-relationship.ggs", 66)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 67)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-one-relationship.ggs", 70)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-one-relationship.ggs", 71)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-one-relationship.ggs", 75)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i41_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                              GALGAS_stringset & ioArgument_ioSignatureList,
                                                                                              GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                              C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 56)) ;
  GALGAS_bool var_usedForSignature_2502 = GALGAS_bool (false) ;
  GALGAS_bool var_customStore_2536 = GALGAS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
    case 2: {
      GALGAS_lstring var_attributeName_2604 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 61)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, var_attributeName_2604.readProperty_string ().objectCompare (GALGAS_string ("signature"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_usedForSignature_2502.boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <C_FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2604.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 64)) ;
            }
          }
          var_usedForSignature_2502 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (kIsEqual, var_attributeName_2604.readProperty_string ().objectCompare (GALGAS_string ("customStore"))).boolEnum () ;
          if (kBoolTrue == test_4) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = var_customStore_2536.boolEnum () ;
              if (kBoolTrue == test_5) {
                TC_Array <C_FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (C_FixItDescription (kFixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2604.readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 69)) ;
              }
            }
            var_customStore_2536 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_4) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@signature")) ;
          appendFixItActions (fixItArray7, kFixItReplace, GALGAS_string ("@customStore")) ;
          inCompiler->emitSemanticError (var_attributeName_2604.readProperty_location (), GALGAS_string ("unknow attribute"), fixItArray7  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 73)) ;
        }
      }
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  GALGAS_lstring var_destinationEntityName_3175 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 76)) ;
  GALGAS_lstring var_relationshipName_3216 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 77)) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_usedForSignature_2502.boolEnum () ;
    if (kBoolTrue == test_8) {
      ioArgument_ioSignatureList.addAssign_operation (var_relationshipName_3216.readProperty_string ()  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 79)) ;
    }
  }
  GALGAS_toManyRelationshipOptionAST var_toManyRelationshipOption_3366 ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 84)) ;
    GALGAS_lstring var_inserseRelationshipName_3456 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 85)) ;
    var_toManyRelationshipOption_3366 = GALGAS_toManyRelationshipOptionAST::constructor_hasOpposite (var_inserseRelationshipName_3456  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 86)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 88)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 90)) ;
    GALGAS_lstring var_masterPropertyName_3638 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 91)) ;
    var_toManyRelationshipOption_3366 = GALGAS_toManyRelationshipOptionAST::constructor_hasDependance (var_masterPropertyName_3638  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 92)) ;
  } break ;
  case 3: {
    var_toManyRelationshipOption_3366 = GALGAS_toManyRelationshipOptionAST::constructor_none (SOURCE_FILE ("to-many-relationship.ggs", 94)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_toManyRelationshipAST::constructor_new (constinArgument_inCurrentEntity, var_destinationEntityName_3175, var_relationshipName_3216, var_toManyRelationshipOption_3366, var_customStore_2536, var_usedForSignature_2502  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 97))  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 97)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_toMany_5F_relationship_i41_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("to-many-relationship.ggs", 56)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_76 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("to-many-relationship.ggs", 61)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 76)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 77)) ;
  switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_inverse COMMA_SOURCE_FILE ("to-many-relationship.ggs", 83)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_toOne COMMA_SOURCE_FILE ("to-many-relationship.ggs", 84)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 85)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("to-many-relationship.ggs", 88)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("to-many-relationship.ggs", 89)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 90)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("to-many-relationship.ggs", 91)) ;
  } break ;
  case 3: {
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("to-many-relationship.ggs", 96)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i42_ (GALGAS_lstringlist & ioArgument_ioActionDeclarationList,
                                                                                             C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  GALGAS_lstring var_actionName_894 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  ioArgument_ioActionDeclarationList.addAssign_operation (var_actionName_894  COMMA_SOURCE_FILE ("run-action.ggs", 22)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i42_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.ggs", 19)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.ggs", 20)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.ggs", 21)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i43_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingComparison_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_3857 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3857, inCompiler) ;
      outArgument_outBinding = GALGAS_andBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_3857  COMMA_SOURCE_FILE ("multiple-binding.ggs", 89)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingExpression_i43_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingComparison_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_78 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__26_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 87)) ;
      nt_booleanMultipleBindingComparison_parse (inCompiler) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i44_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingTerm_ (outArgument_outBinding, inCompiler) ;
  switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4317 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4317, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greater (SOURCE_FILE ("multiple-binding.ggs", 101)), var_rightBinding_4317  COMMA_SOURCE_FILE ("multiple-binding.ggs", 101)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4491 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4491, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_greaterOrEqual (SOURCE_FILE ("multiple-binding.ggs", 105)), var_rightBinding_4491  COMMA_SOURCE_FILE ("multiple-binding.ggs", 105)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4672 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4672, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lowerOrEqual (SOURCE_FILE ("multiple-binding.ggs", 109)), var_rightBinding_4672  COMMA_SOURCE_FILE ("multiple-binding.ggs", 109)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4850 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4850, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_lower (SOURCE_FILE ("multiple-binding.ggs", 113)), var_rightBinding_4850  COMMA_SOURCE_FILE ("multiple-binding.ggs", 113)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_5022 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_5022, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_equal (SOURCE_FILE ("multiple-binding.ggs", 117)), var_rightBinding_5022  COMMA_SOURCE_FILE ("multiple-binding.ggs", 117)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_5194 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_5194, inCompiler) ;
    outArgument_outBinding = GALGAS_comparisonMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, GALGAS_multipleBindingComparisonAST::constructor_notEqual (SOURCE_FILE ("multiple-binding.ggs", 121)), var_rightBinding_5194  COMMA_SOURCE_FILE ("multiple-binding.ggs", 121)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingComparison_i44_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 99)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 103)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 107)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 111)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 115)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 119)) ;
    nt_booleanMultipleBindingTerm_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i45_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                  C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  nt_booleanMultipleBindingOperand_ (outArgument_outBinding, inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5718 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5718, inCompiler) ;
      outArgument_outBinding = GALGAS_orBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5718  COMMA_SOURCE_FILE ("multiple-binding.ggs", 135)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
      GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_5922 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5922, inCompiler) ;
      outArgument_outBinding = GALGAS_xorBooleanMultipleBindingExpressionAST::constructor_new (outArgument_outBinding, var_binding_5922  COMMA_SOURCE_FILE ("multiple-binding.ggs", 139)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingTerm_i45_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7C_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 133)) ;
      nt_booleanMultipleBindingOperand_parse (inCompiler) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 137)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_observablePropertyAST var_observablePropertyAST_6333 ;
  nt_observable_5F_property_ (var_observablePropertyAST_6333, inCompiler) ;
  outArgument_outBinding = GALGAS_observablePropertyInMultipleBindingExpressionAST::constructor_new (var_observablePropertyAST_6333  COMMA_SOURCE_FILE ("multiple-binding.ggs", 149)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i46_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  nt_observable_5F_property_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  GALGAS_abstractBooleanMultipleBindingExpressionAST var_binding_6772 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6772, inCompiler) ;
  outArgument_outBinding = GALGAS_negateBooleanMultipleBindingExpressionAST::constructor_new (var_binding_6772  COMMA_SOURCE_FILE ("multiple-binding.ggs", 159)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i47_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__21_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 157)) ;
  nt_booleanMultipleBindingOperand_parse (inCompiler) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_ (outArgument_outBinding, inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i48_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 167)) ;
  nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("multiple-binding.ggs", 169)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i49_ (GALGAS_abstractBooleanMultipleBindingExpressionAST & outArgument_outBinding,
                                                                                                     C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBinding.drop () ; // Release 'out' argument
  GALGAS_luint var_value_7426 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  outArgument_outBinding = GALGAS_literalIntMultipleBindingExpressionAST::constructor_new (var_value_7426  COMMA_SOURCE_FILE ("multiple-binding.ggs", 178)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i49_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.ggs", 177)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i50_ (GALGAS_bindingOptionList & outArgument_outBindingOptions,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  outArgument_outBindingOptions = GALGAS_bindingOptionList::constructor_emptyList (SOURCE_FILE ("regular-binding.ggs", 20)) ;
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      GALGAS_lstring var_optionName_1033 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      GALGAS_abstractDefaultValue var_optionValue_1111 ;
      nt_explicit_5F_value_ (var_optionValue_1111, inCompiler) ;
      outArgument_outBindingOptions.addAssign_operation (var_optionName_1033, var_optionValue_1111  COMMA_SOURCE_FILE ("regular-binding.ggs", 28)) ;
      switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i50_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_81 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.ggs", 23)) ;
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.ggs", 25)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.ggs", 26)) ;
      nt_explicit_5F_value_parse (inCompiler) ;
      switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
      case 2: {
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("regular-binding.ggs", 30)) ;
      } break ;
      default:
        repeatFlag_0 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("regular-binding.ggs", 32)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i51_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  GALGAS_lstring var_controllerName_2871 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  GALGAS_arrayControllerBoundModelAST var_model_2929 ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_83 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
    var_model_2929 = GALGAS_arrayControllerBoundModelAST::constructor_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.ggs", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
    var_model_2929 = GALGAS_arrayControllerBoundModelAST::constructor_selfToManyRelationship (SOURCE_FILE ("array-controller.ggs", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  GALGAS_lstring var_relationshipName_3154 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    GALGAS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3323 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3323, inCompiler) ;
    GALGAS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3371 = GALGAS_multipleBindingDescriptor::constructor_binding (var_bindingExpression_3323  COMMA_SOURCE_FILE ("array-controller.ggs", 80)) ;
    ioArgument_ioArrayControllerBindingListAST.addAssign_operation (var_controllerName_2871, var_hiddenSelectionViewBindingDescriptor_3371  COMMA_SOURCE_FILE ("array-controller.ggs", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 85)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_arrayControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_2871, var_model_2929, var_relationshipName_3154  COMMA_SOURCE_FILE ("array-controller.ggs", 86))  COMMA_SOURCE_FILE ("array-controller.ggs", 86)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i51_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.ggs", 61)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.ggs", 62)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.ggs", 65)) ;
  switch (select_easyBindings_5F_syntax_83 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.ggs", 67)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.ggs", 70)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.ggs", 73)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.ggs", 74)) ;
  switch (select_easyBindings_5F_syntax_84 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.ggs", 78)) ;
    nt_booleanMultipleBindingExpression_parse (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.ggs", 85)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i52_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring constinArgument_inRootEntity,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  GALGAS_lstring var_controllerName_3158 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  GALGAS_autoLayoutTableViewControllerAttributListAST var_arrayControllerAttributListAST_3244 = GALGAS_autoLayoutTableViewControllerAttributListAST::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 65)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    GALGAS_lstring var_attributeName_3316 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    GALGAS_abstractDefaultValue var_attributeValue_3393 ;
    nt_explicit_5F_value_ (var_attributeValue_3393, inCompiler) ;
    var_arrayControllerAttributListAST_3244.addAssign_operation (var_attributeName_3316, var_attributeValue_3393  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 71)) ;
    switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  GALGAS_bool var_isRoot_3535 ;
  switch (select_easyBindings_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
    var_isRoot_3535 = GALGAS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
    var_isRoot_3535 = GALGAS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  GALGAS_lstring var_relationshipName_3685 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  GALGAS_autoLayoutTableViewControllerBoundColumnListAST var_arrayControllerBoundColumnListAST_3777 = GALGAS_autoLayoutTableViewControllerBoundColumnListAST::constructor_emptyList (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 87)) ;
  switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
      case 2: {
        GALGAS_bool var_editableColumn_3878 ;
        switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
          var_editableColumn_3878 = GALGAS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
          var_editableColumn_3878 = GALGAS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GALGAS_lstring var_propertyName_4067 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        GALGAS_astAutoLayoutViewInstructionParameterList var_columnParameterListAST_4134 ;
        nt_view_5F_actual_5F_parameter_5F_list_ (var_columnParameterListAST_4134, inCompiler) ;
        GALGAS_lstring var_sortPropertyName_4173 ;
        switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4173 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 106)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 108)) ;
          var_sortPropertyName_4173 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
        } break ;
        default:
          break ;
        }
        var_arrayControllerBoundColumnListAST_3777.addAssign_operation (var_editableColumn_3878, var_propertyName_4067, var_columnParameterListAST_4134, var_sortPropertyName_4173  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 111)) ;
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 117)) ;
  } break ;
  default:
    break ;
  }
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_autoLayoutTableViewControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_controllerName_3158, var_isRoot_3535, constinArgument_inRootEntity, var_relationshipName_3685, var_arrayControllerBoundColumnListAST_3777, var_arrayControllerAttributListAST_3244  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 119))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 119)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i52_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 63)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 64)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 66)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 68)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 69)) ;
    nt_explicit_5F_value_parse (inCompiler) ;
    switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 73)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 75)) ;
  switch (select_easyBindings_5F_syntax_86 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 85)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 86)) ;
  switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 91)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
      case 2: {
        switch (select_easyBindings_5F_syntax_89 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 96)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 99)) ;
        } break ;
        default:
          break ;
        }
        inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 102)) ;
        nt_view_5F_actual_5F_parameter_5F_list_parse (inCompiler) ;
        switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 108)) ;
          inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 109)) ;
        } break ;
        default:
          break ;
        }
      } break ;
      default:
        repeatFlag_1 = false ;
        break ;
      }
    }
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 117)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i53_ (const GALGAS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GALGAS_lstring /* constinArgument_inRootEntity */,
                                                                                                 GALGAS_arrayControllerBindingListAST & /* ioArgument_ioArrayControllerBindingListAST */,
                                                                                                 GALGAS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 40)) ;
  GALGAS_lstring var_selectionEntityName_2126 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  GALGAS_lstring var_selectionControllerName_2187 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  GALGAS_lstring var_modelControllerName_2243 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  GALGAS_lstring var_propertyName_2297 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.addAssign_operation (GALGAS_selectionControllerDeclarationAST::constructor_new (constinArgument_inCurrentEntity, var_selectionControllerName_2187, var_modelControllerName_2243, var_propertyName_2297, var_selectionEntityName_2126  COMMA_SOURCE_FILE ("selection-controller.ggs", 48))  COMMA_SOURCE_FILE ("selection-controller.ggs", 48)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i53_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.ggs", 40)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 41)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 42)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.ggs", 43)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.ggs", 44)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.ggs", 45)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.ggs", 46)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.ggs", 47)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i54_ (GALGAS_abstractDefaultValue & outArgument_outDefaultValue,
                                                                                         C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outDefaultValue.drop () ; // Release 'out' argument
  switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (true), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 56)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
    outArgument_outDefaultValue = GALGAS_boolAsDefaultValue::constructor_new (GALGAS_lbool::constructor_new (GALGAS_bool (false), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59))  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 59)) ;
  } break ;
  case 3: {
    GALGAS_luint var_integerValue_2307 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2307, GALGAS_bool (false)  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 62)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    GALGAS_luint var_integerValue_2449 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
    outArgument_outDefaultValue = GALGAS_integerAsDefaultValue::constructor_new (var_integerValue_2449, GALGAS_bool (true)  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 66)) ;
  } break ;
  case 5: {
    GALGAS_ldouble var_doubleValue_2580 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
    outArgument_outDefaultValue = GALGAS_doubleAsDefaultValue::constructor_new (var_doubleValue_2580  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 69)) ;
  } break ;
  case 6: {
    GALGAS_lstring var_stringValue_2706 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
    outArgument_outDefaultValue = GALGAS_stringAsDefaultValue::constructor_new (var_stringValue_2706  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 72)) ;
  } break ;
  case 7: {
    GALGAS_lstring var_stringValue_2825 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
    outArgument_outDefaultValue = GALGAS_identifierAsDefaultValue::constructor_new (var_stringValue_2825  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 75)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    GALGAS_lstring var_name_2956 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
    outArgument_outDefaultValue = GALGAS_prefsAsDefaultValue::constructor_new (var_name_2956  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 80)) ;
  } break ;
  default:
    break ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_explicit_5F_value_i54_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("explicit-default-value.ggs", 55)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("explicit-default-value.ggs", 58)) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 61)) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 64)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.ggs", 65)) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.ggs", 68)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.ggs", 71)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 74)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.ggs", 77)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.ggs", 78)) ;
    inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.ggs", 79)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i55_ (GALGAS_lstring & ioArgument_ioXcodeProjectString,
                                                                                        C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  GALGAS_lstring var_xcodeProjectString_437 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_xcodeProjectString_437.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_xcodeProjectString_437.readProperty_location (), GALGAS_string ("string should not be empty"), fixItArray1  COMMA_SOURCE_FILE ("xcode-project.ggs", 16)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, ioArgument_ioXcodeProjectString.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (var_xcodeProjectString_437.readProperty_location (), GALGAS_string ("Xcode project already defined"), fixItArray3  COMMA_SOURCE_FILE ("xcode-project.ggs", 18)) ;
      }
    }
    if (kBoolFalse == test_2) {
      ioArgument_ioXcodeProjectString = var_xcodeProjectString_437 ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_xcode_5F_project_i55_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_xcodeproject COMMA_SOURCE_FILE ("xcode-project.ggs", 12)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("xcode-project.ggs", 13)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("xcode-project.ggs", 14)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i56_ (GALGAS_mainXibDescriptorList & ioArgument_ioElementList,
                                                                                   C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_1338 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      GALGAS_lstring var_outletName_1386 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
      GALGAS_mainXibLineDescriptorList temp_1 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 40)) ;
      temp_1.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_1338, var_outletName_1386  COMMA_SOURCE_FILE ("main-xib.ggs", 40))  COMMA_SOURCE_FILE ("main-xib.ggs", 40)) ;
      ioArgument_ioElementList.addAssign_operation (temp_1  COMMA_SOURCE_FILE ("main-xib.ggs", 39)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_1543 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 43)) ;
      GALGAS_mainXibLineDescriptorList temp_2 = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 44)) ;
      temp_2.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_1543  COMMA_SOURCE_FILE ("main-xib.ggs", 44))  COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
      ioArgument_ioElementList.addAssign_operation (temp_2  COMMA_SOURCE_FILE ("main-xib.ggs", 44)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 46)) ;
      GALGAS_mainXibLineDescriptorList var_lineDescription_1683 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1683, inCompiler) ;
      ioArgument_ioElementList.addAssign_operation (var_lineDescription_1683  COMMA_SOURCE_FILE ("main-xib.ggs", 48)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 54)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i56_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.ggs", 33)) ;
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 34)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_93 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 37)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 38)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 43)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.ggs", 46)) ;
      nt_main_5F_xib_5F_line_parse (inCompiler) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 49)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 52)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.ggs", 54)) ;
  inCompiler->resetTemplateString () ;
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i57_ (GALGAS_mainXibLineDescriptorList & outArgument_outLineDescription,
                                                                                           C_Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  outArgument_outLineDescription = GALGAS_mainXibLineDescriptorList::constructor_emptyList (SOURCE_FILE ("main-xib.ggs", 62)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_95 (inCompiler)) {
    case 1: {
      GALGAS_lstring var_outletType_2092 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 65)) ;
      GALGAS_lstring var_outletName_2140 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 66)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_outlet (var_outletType_2092, var_outletName_2140  COMMA_SOURCE_FILE ("main-xib.ggs", 68))  COMMA_SOURCE_FILE ("main-xib.ggs", 67)) ;
    } break ;
    case 2: {
      GALGAS_lstring var_s_2289 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 70)) ;
      outArgument_outLineDescription.addAssign_operation (GALGAS_mainXibElement::constructor_text (var_s_2289  COMMA_SOURCE_FILE ("main-xib.ggs", 71))  COMMA_SOURCE_FILE ("main-xib.ggs", 71)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i57_parse (C_Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_95 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.ggs", 65)) ;
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.ggs", 66)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.ggs", 70)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_94 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (C_Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.ggs", 74)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->resetTemplateString () ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::GALGAS_prefDeclaration (void) :
mProperty_mOutletDeclarationList (),
mProperty_mSimpleStoredAttributeList (),
mProperty_mActionDeclarationList (),
mProperty_mExternSwiftFunctionList (),
mProperty_mSignatureList (),
mProperty_mMainXibDescriptorList (),
mProperty_mViewDeclarationList () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration::~ GALGAS_prefDeclaration (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_prefDeclaration (GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                 GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                 GALGAS_lstringlist::constructor_emptyList (HERE),
                                 GALGAS_externSwiftFunctionList::constructor_emptyList (HERE),
                                 GALGAS_stringset::constructor_emptySet (HERE),
                                 GALGAS_mainXibDescriptorList::constructor_emptyList (HERE),
                                 GALGAS_astViewDeclarationList::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefDeclaration::constructor_new (const GALGAS_outletDeclarationList & inOperand0,
                                                                const GALGAS_simpleStoredPropertyList & inOperand1,
                                                                const GALGAS_lstringlist & inOperand2,
                                                                const GALGAS_externSwiftFunctionList & inOperand3,
                                                                const GALGAS_stringset & inOperand4,
                                                                const GALGAS_mainXibDescriptorList & inOperand5,
                                                                const GALGAS_astViewDeclarationList & inOperand6 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_prefDeclaration result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid ()) {
    result = GALGAS_prefDeclaration (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_prefDeclaration::isValid (void) const {
  return mProperty_mOutletDeclarationList.isValid () && mProperty_mSimpleStoredAttributeList.isValid () && mProperty_mActionDeclarationList.isValid () && mProperty_mExternSwiftFunctionList.isValid () && mProperty_mSignatureList.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mViewDeclarationList.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefDeclaration::drop (void) {
  mProperty_mOutletDeclarationList.drop () ;
  mProperty_mSimpleStoredAttributeList.drop () ;
  mProperty_mActionDeclarationList.drop () ;
  mProperty_mExternSwiftFunctionList.drop () ;
  mProperty_mSignatureList.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mViewDeclarationList.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

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
    mProperty_mExternSwiftFunctionList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mSignatureList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@prefDeclaration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefDeclaration ("prefDeclaration",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefDeclaration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefDeclaration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext::~ GALGAS_semanticContext (void) {
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_default (UNUSED_LOCATION_ARGS) {
  return GALGAS_semanticContext (GALGAS_classMap::constructor_emptyMap (HERE),
                                 GALGAS_outletClassMap::constructor_emptyMap (HERE),
                                 GALGAS_bindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_autolayoutViewClassMap::constructor_emptyMap (HERE),
                                 GALGAS_autoLayoutBindingSpecificationMap::constructor_emptyMap (HERE),
                                 GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                 GALGAS_astAutoLayoutViewFunctionMap::constructor_emptyMap (HERE),
                                 GALGAS_enumerationFunctionListAST::constructor_emptyList (HERE)) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::constructor_new (const GALGAS_classMap & inOperand0,
                                                                const GALGAS_outletClassMap & inOperand1,
                                                                const GALGAS_bindingSpecificationMap & inOperand2,
                                                                const GALGAS_autolayoutViewClassMap & inOperand3,
                                                                const GALGAS_autoLayoutBindingSpecificationMap & inOperand4,
                                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand5,
                                                                const GALGAS_astAutoLayoutViewFunctionMap & inOperand6,
                                                                const GALGAS_enumerationFunctionListAST & inOperand7 
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid ()) {
    result = GALGAS_semanticContext (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

bool GALGAS_semanticContext::isValid (void) const {
  return mProperty_mClassMap.isValid () && mProperty_mOutletClassMap.isValid () && mProperty_mBindingSpecificationMap.isValid () && mProperty_mAutolayoutViewClassMap.isValid () && mProperty_mAutoLayoutBindingSpecificationMap.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_semanticContext::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "<struct @semanticContext:" ;
  if (! isValid ()) {
    ioString << " not built" ;
  }else{
    mProperty_mClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mOutletClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutolayoutViewClassMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutBindingSpecificationMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString << ", " ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString << ">" ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@semanticContext type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_semanticContext ("semanticContext",
                                        NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_semanticContext::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_semanticContext ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_semanticContext::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_semanticContext (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_semanticContext GALGAS_semanticContext::extractObject (const GALGAS_object & inObject,
                                                              C_Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GALGAS_semanticContext result ;
  const GALGAS_semanticContext * p = (const GALGAS_semanticContext *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_semanticContext *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("semanticContext", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @abstractDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------



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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (void) :
AC_GALGAS_reference_class () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST::GALGAS_abstractDeclarationAST (const cPtr_abstractDeclarationAST * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

void GALGAS_abstractDeclarationAST::setter_setMClassName (GALGAS_lstring inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    p->mProperty_mClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_abstractDeclarationAST::readProperty_mClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_abstractDeclarationAST * p = (cPtr_abstractDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_abstractDeclarationAST) ;
    return p->mProperty_mClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @abstractDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_abstractDeclarationAST::cPtr_abstractDeclarationAST (const GALGAS_lstring & in_mClassName
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (THERE),
mProperty_mClassName (in_mClassName) {
}


//----------------------------------------------------------------------------------------------------------------------
//
//@abstractDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_abstractDeclarationAST ("abstractDeclarationAST",
                                               NULL) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_abstractDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_abstractDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_abstractDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_abstractDeclarationAST GALGAS_abstractDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  GALGAS_abstractDeclarationAST result ;
  const GALGAS_abstractDeclarationAST * p = (const GALGAS_abstractDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_abstractDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST enterInPrecedenceGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_enterInPrecedenceGraph (cPtr_abstractDeclarationAST * inObject,
                                                 GALGAS_declarationPrecedenceGraph & io_ioGraph,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_enterInPrecedenceGraph (io_ioGraph, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractDeclarationAST nodeKey'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring callExtensionGetter_nodeKey (const cPtr_abstractDeclarationAST * inObject,
                                            C_Compiler * inCompiler
                                            COMMA_LOCATION_ARGS) {
  GALGAS_lstring result ;
  if (nullptr != inObject) {
    result = inObject->getter_nodeKey (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractDeclarationAST firstAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_firstAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_firstAnalysisPhase (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST secondAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_secondAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_secondAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_secondAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST thirdAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_thirdAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                             GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                             C_Compiler * /* inCompiler */
                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_thirdAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                             GALGAS_semanticContext & io_ioSemanticContext,
                                             GALGAS_generationStruct & io_ioGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_thirdAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Extension method '@abstractDeclarationAST fourthAnalysisPhase'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_abstractDeclarationAST::method_fourthAnalysisPhase (GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                              GALGAS_generationStruct & /* ioArgument_ioGeneration */,
                                                              C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

void callExtensionMethod_fourthAnalysisPhase (cPtr_abstractDeclarationAST * inObject,
                                              GALGAS_semanticContext & io_ioSemanticContext,
                                              GALGAS_generationStruct & io_ioGeneration,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractDeclarationAST) ;
    inObject->method_fourthAnalysisPhase  (io_ioSemanticContext, io_ioGeneration, inCompiler COMMA_THERE) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
// @transientClassDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_transientClassDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                               GALGAS_bool::constructor_default (HERE)
                                                               COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST::GALGAS_transientClassDeclarationAST (const cPtr_transientClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_transientClassDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                          const GALGAS_bool & inAttribute_mIsClass
                                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsClass.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_transientClassDeclarationAST (inAttribute_mClassName, inAttribute_mIsClass COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_transientClassDeclarationAST::setter_setMIsClass (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    p->mProperty_mIsClass = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_transientClassDeclarationAST::readProperty_mIsClass (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_transientClassDeclarationAST * p = (cPtr_transientClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_transientClassDeclarationAST) ;
    return p->mProperty_mIsClass ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @transientClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_transientClassDeclarationAST::cPtr_transientClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                      const GALGAS_bool & in_mIsClass
                                                                      COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mIsClass (in_mIsClass) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_transientClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

void cPtr_transientClassDeclarationAST::description (C_String & ioString,
                                                     const int32_t inIndentation) const {
  ioString << "[@transientClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsClass.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_transientClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_transientClassDeclarationAST (mProperty_mClassName, mProperty_mIsClass COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@transientClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_transientClassDeclarationAST ("transientClassDeclarationAST",
                                                     & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_transientClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_transientClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_transientClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_transientClassDeclarationAST GALGAS_transientClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_transientClassDeclarationAST result ;
  const GALGAS_transientClassDeclarationAST * p = (const GALGAS_transientClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_transientClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumerationDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumerationDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                            GALGAS_lstringlist::constructor_emptyList (HERE)
                                                            COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST::GALGAS_enumerationDeclarationAST (const cPtr_enumerationDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumerationDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantNameList
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mEnumConstantNameList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumerationDeclarationAST (inAttribute_mClassName, inAttribute_mEnumConstantNameList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumerationDeclarationAST::setter_setMEnumConstantNameList (GALGAS_lstringlist inValue
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    p->mProperty_mEnumConstantNameList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumerationDeclarationAST::readProperty_mEnumConstantNameList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_enumerationDeclarationAST * p = (cPtr_enumerationDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumerationDeclarationAST) ;
    return p->mProperty_mEnumConstantNameList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumerationDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumerationDeclarationAST::cPtr_enumerationDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_lstringlist & in_mEnumConstantNameList
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mEnumConstantNameList (in_mEnumConstantNameList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumerationDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

void cPtr_enumerationDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@enumerationDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantNameList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumerationDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumerationDeclarationAST (mProperty_mClassName, mProperty_mEnumConstantNameList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumerationDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumerationDeclarationAST ("enumerationDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumerationDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumerationDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumerationDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumerationDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumerationDeclarationAST GALGAS_enumerationDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumerationDeclarationAST result ;
  const GALGAS_enumerationDeclarationAST * p = (const GALGAS_enumerationDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumerationDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumerationDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @enumForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_enumForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                    GALGAS_lstringlist::constructor_emptyList (HERE),
                                                    GALGAS_enumFuncMap::constructor_emptyMap (HERE)
                                                    COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration::GALGAS_enumForGeneration (const cPtr_enumForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_enumForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::constructor_new (const GALGAS_string & inAttribute_mEnumName,
                                                                    const GALGAS_lstringlist & inAttribute_mEnumConstantList,
                                                                    const GALGAS_enumFuncMap & inAttribute_mEnumFuncMap
                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  if (inAttribute_mEnumName.isValid () && inAttribute_mEnumConstantList.isValid () && inAttribute_mEnumFuncMap.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_enumForGeneration (inAttribute_mEnumName, inAttribute_mEnumConstantList, inAttribute_mEnumFuncMap COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumName (GALGAS_string inValue
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumConstantList (GALGAS_lstringlist inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumConstantList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_enumForGeneration::setter_setMEnumFuncMap (GALGAS_enumFuncMap inValue
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    p->mProperty_mEnumFuncMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_enumForGeneration::readProperty_mEnumName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_enumForGeneration::readProperty_mEnumConstantList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumConstantList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumFuncMap GALGAS_enumForGeneration::readProperty_mEnumFuncMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_enumFuncMap () ;
  }else{
    cPtr_enumForGeneration * p = (cPtr_enumForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_enumForGeneration) ;
    return p->mProperty_mEnumFuncMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @enumForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_enumForGeneration::cPtr_enumForGeneration (const GALGAS_string & in_mEnumName,
                                                const GALGAS_lstringlist & in_mEnumConstantList,
                                                const GALGAS_enumFuncMap & in_mEnumFuncMap
                                                COMMA_LOCATION_ARGS) :
cPtr_abstractFileGeneration (THERE),
mProperty_mEnumName (in_mEnumName),
mProperty_mEnumConstantList (in_mEnumConstantList),
mProperty_mEnumFuncMap (in_mEnumFuncMap) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_enumForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

void cPtr_enumForGeneration::description (C_String & ioString,
                                          const int32_t inIndentation) const {
  ioString << "[@enumForGeneration:" ;
  mProperty_mEnumName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumConstantList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEnumFuncMap.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_enumForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_enumForGeneration (mProperty_mEnumName, mProperty_mEnumConstantList, mProperty_mEnumFuncMap COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@enumForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration ("enumForGeneration",
                                          & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration::extractObject (const GALGAS_object & inObject,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration result ;
  const GALGAS_enumForGeneration * p = (const GALGAS_enumForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak::GALGAS_enumForGeneration_2D_weak (void) :
GALGAS_abstractFileGeneration_2D_weak () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak & GALGAS_enumForGeneration_2D_weak::operator = (const GALGAS_enumForGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = NULL ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != NULL) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak::GALGAS_enumForGeneration_2D_weak (const GALGAS_enumForGeneration & inSource) :
GALGAS_abstractFileGeneration_2D_weak (inSource) {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak GALGAS_enumForGeneration_2D_weak::constructor_nil (LOCATION_ARGS) {
  GALGAS_enumForGeneration_2D_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration GALGAS_enumForGeneration_2D_weak::bang_enumForGeneration_2D_weak (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GALGAS_enumForGeneration result ;
  if (mProxyPtr != NULL) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == NULL) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_enumForGeneration) ;
      result = GALGAS_enumForGeneration ((cPtr_enumForGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//@enumForGeneration-weak type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ("enumForGeneration-weak",
                                                  & kTypeDescriptor_GALGAS_abstractFileGeneration_2D_weak) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_enumForGeneration_2D_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_enumForGeneration_2D_weak ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_enumForGeneration_2D_weak::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_enumForGeneration_2D_weak (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_enumForGeneration_2D_weak GALGAS_enumForGeneration_2D_weak::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_enumForGeneration_2D_weak result ;
  const GALGAS_enumForGeneration_2D_weak * p = (const GALGAS_enumForGeneration_2D_weak *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_enumForGeneration_2D_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("enumForGeneration-weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @atomicClassDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST::GALGAS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                    const GALGAS_typeKind & inAttribute_mKind
                                                                                    COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mKind.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_atomicClassDeclarationAST (inAttribute_mClassName, inAttribute_mKind COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_atomicClassDeclarationAST::setter_setMKind (GALGAS_typeKind inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_typeKind GALGAS_atomicClassDeclarationAST::readProperty_mKind (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_typeKind () ;
  }else{
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    return p->mProperty_mKind ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                const GALGAS_typeKind & in_mKind
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mKind (in_mKind) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (C_String & ioString,
                                                  const int32_t inIndentation) const {
  ioString << "[@atomicClassDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_atomicClassDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@atomicClassDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                  & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_atomicClassDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_atomicClassDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_atomicClassDeclarationAST GALGAS_atomicClassDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_atomicClassDeclarationAST result ;
  const GALGAS_atomicClassDeclarationAST * p = (const GALGAS_atomicClassDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_atomicClassDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("atomicClassDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @entityDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_lstring::constructor_default (HERE),
                                                       GALGAS_simpleStoredPropertyList::constructor_emptyList (HERE),
                                                       GALGAS_stringset::constructor_emptySet (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE),
                                                       GALGAS_bool::constructor_default (HERE),
                                                       GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                       GALGAS_lstringlist::constructor_emptyList (HERE)
                                                       COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST::GALGAS_entityDeclarationAST (const cPtr_entityDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                          const GALGAS_bool & inAttribute_mIsAbstract,
                                                                          const GALGAS_lstring & inAttribute_mSuperEntityName,
                                                                          const GALGAS_simpleStoredPropertyList & inAttribute_mSimpleStoredPropertyList,
                                                                          const GALGAS_stringset & inAttribute_mSignatureList,
                                                                          const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                          const GALGAS_lstringlist & inAttribute_mObsoleteEntityNames,
                                                                          const GALGAS_bool & inAttribute_mIsGraphicEntity,
                                                                          const GALGAS_externSwiftDelegateList & inAttribute_mExternSwiftDelegateList,
                                                                          const GALGAS_lstringlist & inAttribute_mGraphicOptionArray
                                                                          COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mSimpleStoredPropertyList.isValid () && inAttribute_mSignatureList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mObsoleteEntityNames.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mGraphicOptionArray.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityDeclarationAST (inAttribute_mClassName, inAttribute_mIsAbstract, inAttribute_mSuperEntityName, inAttribute_mSimpleStoredPropertyList, inAttribute_mSignatureList, inAttribute_mActionDeclarationList, inAttribute_mObsoleteEntityNames, inAttribute_mIsGraphicEntity, inAttribute_mExternSwiftDelegateList, inAttribute_mGraphicOptionArray COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMIsAbstract (GALGAS_bool inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSuperEntityName (GALGAS_lstring inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSuperEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSimpleStoredPropertyList (GALGAS_simpleStoredPropertyList inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSimpleStoredPropertyList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMSignatureList (GALGAS_stringset inValue
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mSignatureList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMObsoleteEntityNames (GALGAS_lstringlist inValue
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mObsoleteEntityNames = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mIsGraphicEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mExternSwiftDelegateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityDeclarationAST::setter_setMGraphicOptionArray (GALGAS_lstringlist inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    p->mProperty_mGraphicOptionArray = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_entityDeclarationAST::readProperty_mSuperEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_simpleStoredPropertyList GALGAS_entityDeclarationAST::readProperty_mSimpleStoredPropertyList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_simpleStoredPropertyList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSimpleStoredPropertyList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityDeclarationAST::readProperty_mSignatureList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mSignatureList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mObsoleteEntityNames (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mObsoleteEntityNames ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityDeclarationAST::readProperty_mIsGraphicEntity (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityDeclarationAST::readProperty_mExternSwiftDelegateList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_entityDeclarationAST::readProperty_mGraphicOptionArray (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_entityDeclarationAST * p = (cPtr_entityDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityDeclarationAST) ;
    return p->mProperty_mGraphicOptionArray ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @entityDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_entityDeclarationAST::cPtr_entityDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                      const GALGAS_bool & in_mIsAbstract,
                                                      const GALGAS_lstring & in_mSuperEntityName,
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
mProperty_mSimpleStoredPropertyList (in_mSimpleStoredPropertyList),
mProperty_mSignatureList (in_mSignatureList),
mProperty_mActionDeclarationList (in_mActionDeclarationList),
mProperty_mObsoleteEntityNames (in_mObsoleteEntityNames),
mProperty_mIsGraphicEntity (in_mIsGraphicEntity),
mProperty_mExternSwiftDelegateList (in_mExternSwiftDelegateList),
mProperty_mGraphicOptionArray (in_mGraphicOptionArray) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

void cPtr_entityDeclarationAST::description (C_String & ioString,
                                             const int32_t inIndentation) const {
  ioString << "[@entityDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSimpleStoredPropertyList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mObsoleteEntityNames.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mGraphicOptionArray.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityDeclarationAST (mProperty_mClassName, mProperty_mIsAbstract, mProperty_mSuperEntityName, mProperty_mSimpleStoredPropertyList, mProperty_mSignatureList, mProperty_mActionDeclarationList, mProperty_mObsoleteEntityNames, mProperty_mIsGraphicEntity, mProperty_mExternSwiftDelegateList, mProperty_mGraphicOptionArray COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@entityDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityDeclarationAST ("entityDeclarationAST",
                                             & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityDeclarationAST GALGAS_entityDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_entityDeclarationAST result ;
  const GALGAS_entityDeclarationAST * p = (const GALGAS_entityDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @entityForGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_entityForGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                      GALGAS_string::constructor_default (HERE),
                                                      GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_stringset::constructor_emptySet (HERE),
                                                      GALGAS_externSwiftDelegateList::constructor_emptyList (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE),
                                                      GALGAS_bool::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration::GALGAS_entityForGeneration (const cPtr_entityForGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_entityForGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::constructor_new (const GALGAS_string & inAttribute_mEntityName,
                                                                        const GALGAS_string & inAttribute_mSuperEntityName,
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
  if (inAttribute_mEntityName.isValid () && inAttribute_mSuperEntityName.isValid () && inAttribute_mPropertyGenerationList.isValid () && inAttribute_mSignatureSet.isValid () && inAttribute_mIsGraphicEntity.isValid () && inAttribute_mIsAbstract.isValid () && inAttribute_mOverridenTransients.isValid () && inAttribute_mExternSwiftDelegateList.isValid () && inAttribute_mHasSubEntity.isValid () && inAttribute_mCanCopyAndPaste_5F_option.isValid () && inAttribute_mCannotBeDeleted_5F_option.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_entityForGeneration (inAttribute_mEntityName, inAttribute_mSuperEntityName, inAttribute_mPropertyGenerationList, inAttribute_mSignatureSet, inAttribute_mIsGraphicEntity, inAttribute_mIsAbstract, inAttribute_mOverridenTransients, inAttribute_mExternSwiftDelegateList, inAttribute_mHasSubEntity, inAttribute_mCanCopyAndPaste_5F_option, inAttribute_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMEntityName (GALGAS_string inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSuperEntityName (GALGAS_string inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSuperEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMPropertyGenerationList (GALGAS_propertyGenerationList inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mPropertyGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMSignatureSet (GALGAS_stringset inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mSignatureSet = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsGraphicEntity (GALGAS_bool inValue
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsGraphicEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMIsAbstract (GALGAS_bool inValue
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mIsAbstract = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMOverridenTransients (GALGAS_stringset inValue
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mOverridenTransients = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMExternSwiftDelegateList (GALGAS_externSwiftDelegateList inValue
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mExternSwiftDelegateList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMHasSubEntity (GALGAS_bool inValue
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mHasSubEntity = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMCanCopyAndPaste_5F_option (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mCanCopyAndPaste_5F_option = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_entityForGeneration::setter_setMCannotBeDeleted_5F_option (GALGAS_bool inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    p->mProperty_mCannotBeDeleted_5F_option = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_entityForGeneration::readProperty_mSuperEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSuperEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_entityForGeneration::readProperty_mPropertyGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mPropertyGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mSignatureSet (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mSignatureSet ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsGraphicEntity (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsGraphicEntity ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mIsAbstract (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mIsAbstract ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset GALGAS_entityForGeneration::readProperty_mOverridenTransients (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_stringset () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mOverridenTransients ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_externSwiftDelegateList GALGAS_entityForGeneration::readProperty_mExternSwiftDelegateList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_externSwiftDelegateList () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mExternSwiftDelegateList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mHasSubEntity (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mHasSubEntity ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCanCopyAndPaste_5F_option (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCanCopyAndPaste_5F_option ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool GALGAS_entityForGeneration::readProperty_mCannotBeDeleted_5F_option (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_bool () ;
  }else{
    cPtr_entityForGeneration * p = (cPtr_entityForGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_entityForGeneration) ;
    return p->mProperty_mCannotBeDeleted_5F_option ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @entityForGeneration class
//----------------------------------------------------------------------------------------------------------------------

cPtr_entityForGeneration::cPtr_entityForGeneration (const GALGAS_string & in_mEntityName,
                                                    const GALGAS_string & in_mSuperEntityName,
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

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_entityForGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

void cPtr_entityForGeneration::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@entityForGeneration:" ;
  mProperty_mEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSuperEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mPropertyGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mSignatureSet.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsGraphicEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mIsAbstract.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOverridenTransients.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mExternSwiftDelegateList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mHasSubEntity.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCanCopyAndPaste_5F_option.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCannotBeDeleted_5F_option.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_entityForGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_entityForGeneration (mProperty_mEntityName, mProperty_mSuperEntityName, mProperty_mPropertyGenerationList, mProperty_mSignatureSet, mProperty_mIsGraphicEntity, mProperty_mIsAbstract, mProperty_mOverridenTransients, mProperty_mExternSwiftDelegateList, mProperty_mHasSubEntity, mProperty_mCanCopyAndPaste_5F_option, mProperty_mCannotBeDeleted_5F_option COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@entityForGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_entityForGeneration ("entityForGeneration",
                                            & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_entityForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityForGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_entityForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_entityForGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_entityForGeneration GALGAS_entityForGeneration::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_entityForGeneration result ;
  const GALGAS_entityForGeneration * p = (const GALGAS_entityForGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_entityForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("entityForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutDocumentDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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
    result = mProperty_mAutoLayoutToolbarItemList.objectCompare (p->mProperty_mAutoLayoutToolbarItemList) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mCustomSuperClassName.objectCompare (p->mProperty_mCustomSuperClassName) ;
  }
  if (kOperandEqual == result) {
    result = mProperty_mOutletLinkerList.objectCompare (p->mProperty_mOutletLinkerList) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_lstring::constructor_default (HERE),
                                                                   GALGAS_outletDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_lstringlist::constructor_emptyList (HERE),
                                                                   GALGAS_arrayControllerBindingListAST::constructor_emptyList (HERE),
                                                                   GALGAS_astViewDeclarationList::constructor_emptyList (HERE),
                                                                   GALGAS_astAutoLayoutToolbarItemList::constructor_emptyList (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_astAutoLayoutOutletLinkerList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST::GALGAS_autoLayoutDocumentDeclarationAST (const cPtr_autoLayoutDocumentDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                                                  const GALGAS_lstring & inAttribute_mRootEntityName,
                                                                                                  const GALGAS_lstring & inAttribute_mMainViewName,
                                                                                                  const GALGAS_outletDeclarationList & inAttribute_mOutletDeclarationList,
                                                                                                  const GALGAS_lstringlist & inAttribute_mActionDeclarationList,
                                                                                                  const GALGAS_arrayControllerBindingListAST & inAttribute_mArrayControllerBindingListAST,
                                                                                                  const GALGAS_astViewDeclarationList & inAttribute_mViewDeclarationList,
                                                                                                  const GALGAS_astAutoLayoutToolbarItemList & inAttribute_mAutoLayoutToolbarItemList,
                                                                                                  const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                  const GALGAS_astAutoLayoutOutletLinkerList & inAttribute_mOutletLinkerList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mOutletDeclarationList.isValid () && inAttribute_mActionDeclarationList.isValid () && inAttribute_mArrayControllerBindingListAST.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemList.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentDeclarationAST (inAttribute_mClassName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mOutletDeclarationList, inAttribute_mActionDeclarationList, inAttribute_mArrayControllerBindingListAST, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemList, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMRootEntityName (GALGAS_lstring inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMMainViewName (GALGAS_lstring inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMOutletDeclarationList (GALGAS_outletDeclarationList inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mOutletDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMActionDeclarationList (GALGAS_lstringlist inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mActionDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMArrayControllerBindingListAST (GALGAS_arrayControllerBindingListAST inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mArrayControllerBindingListAST = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMViewDeclarationList (GALGAS_astViewDeclarationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMAutoLayoutToolbarItemList (GALGAS_astAutoLayoutToolbarItemList inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mAutoLayoutToolbarItemList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMCustomSuperClassName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mCustomSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentDeclarationAST::setter_setMOutletLinkerList (GALGAS_astAutoLayoutOutletLinkerList inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    p->mProperty_mOutletLinkerList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstring GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mMainViewName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstring () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mMainViewName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_outletDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_outletDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_lstringlist GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mActionDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_lstringlist () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mActionDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_arrayControllerBindingListAST GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mArrayControllerBindingListAST (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_arrayControllerBindingListAST () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mArrayControllerBindingListAST ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astViewDeclarationList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mViewDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astViewDeclarationList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutToolbarItemList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mAutoLayoutToolbarItemList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutToolbarItemList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mAutoLayoutToolbarItemList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mCustomSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_astAutoLayoutOutletLinkerList GALGAS_autoLayoutDocumentDeclarationAST::readProperty_mOutletLinkerList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_astAutoLayoutOutletLinkerList () ;
  }else{
    cPtr_autoLayoutDocumentDeclarationAST * p = (cPtr_autoLayoutDocumentDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentDeclarationAST) ;
    return p->mProperty_mOutletLinkerList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_autoLayoutDocumentDeclarationAST::cPtr_autoLayoutDocumentDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                                              const GALGAS_lstring & in_mRootEntityName,
                                                                              const GALGAS_lstring & in_mMainViewName,
                                                                              const GALGAS_outletDeclarationList & in_mOutletDeclarationList,
                                                                              const GALGAS_lstringlist & in_mActionDeclarationList,
                                                                              const GALGAS_arrayControllerBindingListAST & in_mArrayControllerBindingListAST,
                                                                              const GALGAS_astViewDeclarationList & in_mViewDeclarationList,
                                                                              const GALGAS_astAutoLayoutToolbarItemList & in_mAutoLayoutToolbarItemList,
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
mProperty_mAutoLayoutToolbarItemList (in_mAutoLayoutToolbarItemList),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerList (in_mOutletLinkerList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

void cPtr_autoLayoutDocumentDeclarationAST::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mActionDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mArrayControllerBindingListAST.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletLinkerList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentDeclarationAST (mProperty_mClassName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mOutletDeclarationList, mProperty_mActionDeclarationList, mProperty_mArrayControllerBindingListAST, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemList, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ("autoLayoutDocumentDeclarationAST",
                                                         & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentDeclarationAST GALGAS_autoLayoutDocumentDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentDeclarationAST result ;
  const GALGAS_autoLayoutDocumentDeclarationAST * p = (const GALGAS_autoLayoutDocumentDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @autoLayoutDocumentFileGeneration reference class
//----------------------------------------------------------------------------------------------------------------------

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
    result = mProperty_mAutoLayoutToolbarItemGenerationList.objectCompare (p->mProperty_mAutoLayoutToolbarItemGenerationList) ;
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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (void) :
GALGAS_abstractFileGeneration () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_default (LOCATION_ARGS) {
  return GALGAS_autoLayoutDocumentFileGeneration::constructor_new (GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_propertyGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_decoratedOutletMap::constructor_emptyMap (HERE),
                                                                   GALGAS_autoLayoutOutletMap::constructor_emptyMap (HERE),
                                                                   GALGAS_actionBindingListForGeneration::constructor_emptyList (HERE),
                                                                   GALGAS_regularBindingsGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_multipleBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_tableViewBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_ebViewGraphicControllerBindingGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_viewGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutToolbarItemGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_implicitViewFunctionGenerationList::constructor_emptyList (HERE),
                                                                   GALGAS_autoLayoutConfiguratorMap::constructor_emptyMap (HERE),
                                                                   GALGAS_string::constructor_default (HERE),
                                                                   GALGAS_autoLayoutOutletLinkerGenerationList::constructor_emptyList (HERE)
                                                                   COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration::GALGAS_autoLayoutDocumentFileGeneration (const cPtr_autoLayoutDocumentFileGeneration * inSourcePtr) :
GALGAS_abstractFileGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDocumentFileGeneration) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::constructor_new (const GALGAS_string & inAttribute_mDocumentName,
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
                                                                                                  const GALGAS_autoLayoutToolbarItemGenerationList & inAttribute_mAutoLayoutToolbarItemGenerationList,
                                                                                                  const GALGAS_implicitViewFunctionGenerationList & inAttribute_mImplicitViewFunctionGenerationList,
                                                                                                  const GALGAS_autoLayoutConfiguratorMap & inAttribute_mConfiguratorMap,
                                                                                                  const GALGAS_string & inAttribute_mCustomSuperClassName,
                                                                                                  const GALGAS_autoLayoutOutletLinkerGenerationList & inAttribute_mOutletLinkerGenerationList
                                                                                                  COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  if (inAttribute_mDocumentName.isValid () && inAttribute_mRootEntityName.isValid () && inAttribute_mMainViewName.isValid () && inAttribute_mDocumentPropertyGenearionList.isValid () && inAttribute_mOutletMap.isValid () && inAttribute_mAutoLayoutOutletMap.isValid () && inAttribute_mTargetActionList.isValid () && inAttribute_mRegularBindingsGenerationList.isValid () && inAttribute_multipleBindingGenerationList.isValid () && inAttribute_mTableViewBindingGenerationList.isValid () && inAttribute_mEBViewBindingGenerationList.isValid () && inAttribute_mViewDeclarationList.isValid () && inAttribute_mAutoLayoutToolbarItemGenerationList.isValid () && inAttribute_mImplicitViewFunctionGenerationList.isValid () && inAttribute_mConfiguratorMap.isValid () && inAttribute_mCustomSuperClassName.isValid () && inAttribute_mOutletLinkerGenerationList.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_autoLayoutDocumentFileGeneration (inAttribute_mDocumentName, inAttribute_mRootEntityName, inAttribute_mMainViewName, inAttribute_mDocumentPropertyGenearionList, inAttribute_mOutletMap, inAttribute_mAutoLayoutOutletMap, inAttribute_mTargetActionList, inAttribute_mRegularBindingsGenerationList, inAttribute_multipleBindingGenerationList, inAttribute_mTableViewBindingGenerationList, inAttribute_mEBViewBindingGenerationList, inAttribute_mViewDeclarationList, inAttribute_mAutoLayoutToolbarItemGenerationList, inAttribute_mImplicitViewFunctionGenerationList, inAttribute_mConfiguratorMap, inAttribute_mCustomSuperClassName, inAttribute_mOutletLinkerGenerationList COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRootEntityName (GALGAS_string inValue
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRootEntityName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMMainViewName (GALGAS_string inValue
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mMainViewName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMDocumentPropertyGenearionList (GALGAS_propertyGenerationList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mDocumentPropertyGenearionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMOutletMap (GALGAS_decoratedOutletMap inValue
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutOutletMap (GALGAS_autoLayoutOutletMap inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mAutoLayoutOutletMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTargetActionList (GALGAS_actionBindingListForGeneration inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTargetActionList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMRegularBindingsGenerationList (GALGAS_regularBindingsGenerationList inValue
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mRegularBindingsGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMultipleBindingGenerationList (GALGAS_multipleBindingGenerationList inValue
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_multipleBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMTableViewBindingGenerationList (GALGAS_tableViewBindingGenerationList inValue
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mTableViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMEBViewBindingGenerationList (GALGAS_ebViewGraphicControllerBindingGenerationList inValue
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mEBViewBindingGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMViewDeclarationList (GALGAS_viewGenerationList inValue
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mViewDeclarationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMAutoLayoutToolbarItemGenerationList (GALGAS_autoLayoutToolbarItemGenerationList inValue
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mAutoLayoutToolbarItemGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMImplicitViewFunctionGenerationList (GALGAS_implicitViewFunctionGenerationList inValue
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mImplicitViewFunctionGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMConfiguratorMap (GALGAS_autoLayoutConfiguratorMap inValue
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mConfiguratorMap = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMCustomSuperClassName (GALGAS_string inValue
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mCustomSuperClassName = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_autoLayoutDocumentFileGeneration::setter_setMOutletLinkerGenerationList (GALGAS_autoLayoutOutletLinkerGenerationList inValue
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    p->mProperty_mOutletLinkerGenerationList = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRootEntityName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRootEntityName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mMainViewName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mMainViewName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_propertyGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mDocumentPropertyGenearionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_propertyGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mDocumentPropertyGenearionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_decoratedOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_decoratedOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutOutletMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutOutletMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutOutletMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_actionBindingListForGeneration GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTargetActionList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_actionBindingListForGeneration () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTargetActionList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_regularBindingsGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mRegularBindingsGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_regularBindingsGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mRegularBindingsGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_multipleBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_multipleBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_multipleBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_multipleBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_tableViewBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mTableViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_tableViewBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mTableViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_ebViewGraphicControllerBindingGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mEBViewBindingGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_ebViewGraphicControllerBindingGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mEBViewBindingGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_viewGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mViewDeclarationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_viewGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mViewDeclarationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutToolbarItemGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mAutoLayoutToolbarItemGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutToolbarItemGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mAutoLayoutToolbarItemGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_implicitViewFunctionGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mImplicitViewFunctionGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_implicitViewFunctionGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mImplicitViewFunctionGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutConfiguratorMap GALGAS_autoLayoutDocumentFileGeneration::readProperty_mConfiguratorMap (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutConfiguratorMap () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mConfiguratorMap ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string GALGAS_autoLayoutDocumentFileGeneration::readProperty_mCustomSuperClassName (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_string () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mCustomSuperClassName ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutOutletLinkerGenerationList GALGAS_autoLayoutDocumentFileGeneration::readProperty_mOutletLinkerGenerationList (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_autoLayoutOutletLinkerGenerationList () ;
  }else{
    cPtr_autoLayoutDocumentFileGeneration * p = (cPtr_autoLayoutDocumentFileGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDocumentFileGeneration) ;
    return p->mProperty_mOutletLinkerGenerationList ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDocumentFileGeneration class
//----------------------------------------------------------------------------------------------------------------------

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
                                                                              const GALGAS_autoLayoutToolbarItemGenerationList & in_mAutoLayoutToolbarItemGenerationList,
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
mProperty_mAutoLayoutToolbarItemGenerationList (in_mAutoLayoutToolbarItemGenerationList),
mProperty_mImplicitViewFunctionGenerationList (in_mImplicitViewFunctionGenerationList),
mProperty_mConfiguratorMap (in_mConfiguratorMap),
mProperty_mCustomSuperClassName (in_mCustomSuperClassName),
mProperty_mOutletLinkerGenerationList (in_mOutletLinkerGenerationList) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_autoLayoutDocumentFileGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

void cPtr_autoLayoutDocumentFileGeneration::description (C_String & ioString,
                                                         const int32_t inIndentation) const {
  ioString << "[@autoLayoutDocumentFileGeneration:" ;
  mProperty_mDocumentName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRootEntityName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mMainViewName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDocumentPropertyGenearionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutOutletMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTargetActionList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mRegularBindingsGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_multipleBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mTableViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mEBViewBindingGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mAutoLayoutToolbarItemGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mImplicitViewFunctionGenerationList.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mConfiguratorMap.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mCustomSuperClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mOutletLinkerGenerationList.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDocumentFileGeneration::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_autoLayoutDocumentFileGeneration (mProperty_mDocumentName, mProperty_mRootEntityName, mProperty_mMainViewName, mProperty_mDocumentPropertyGenearionList, mProperty_mOutletMap, mProperty_mAutoLayoutOutletMap, mProperty_mTargetActionList, mProperty_mRegularBindingsGenerationList, mProperty_multipleBindingGenerationList, mProperty_mTableViewBindingGenerationList, mProperty_mEBViewBindingGenerationList, mProperty_mViewDeclarationList, mProperty_mAutoLayoutToolbarItemGenerationList, mProperty_mImplicitViewFunctionGenerationList, mProperty_mConfiguratorMap, mProperty_mCustomSuperClassName, mProperty_mOutletLinkerGenerationList COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@autoLayoutDocumentFileGeneration type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ("autoLayoutDocumentFileGeneration",
                                                         & kTypeDescriptor_GALGAS_abstractFileGeneration) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_autoLayoutDocumentFileGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDocumentFileGeneration ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_autoLayoutDocumentFileGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_autoLayoutDocumentFileGeneration (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_autoLayoutDocumentFileGeneration GALGAS_autoLayoutDocumentFileGeneration::extractObject (const GALGAS_object & inObject,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GALGAS_autoLayoutDocumentFileGeneration result ;
  const GALGAS_autoLayoutDocumentFileGeneration * p = (const GALGAS_autoLayoutDocumentFileGeneration *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_autoLayoutDocumentFileGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDocumentFileGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------
// @prefsDeclarationAST reference class
//----------------------------------------------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------------------------------------------


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
      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;
    }
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (void) :
GALGAS_abstractDeclarationAST () {
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_default (LOCATION_ARGS) {
  return GALGAS_prefsDeclarationAST::constructor_new (GALGAS_lstring::constructor_default (HERE),
                                                      GALGAS_prefDeclaration::constructor_default (HERE)
                                                      COMMA_THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST::GALGAS_prefsDeclarationAST (const cPtr_prefsDeclarationAST * inSourcePtr) :
GALGAS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_prefsDeclarationAST) ;
}
//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::constructor_new (const GALGAS_lstring & inAttribute_mClassName,
                                                                        const GALGAS_prefDeclaration & inAttribute_mDeclaration
                                                                        COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  if (inAttribute_mClassName.isValid () && inAttribute_mDeclaration.isValid ()) {
    macroMyNew (result.mObjectPtr, cPtr_prefsDeclarationAST (inAttribute_mClassName, inAttribute_mDeclaration COMMA_THERE)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

void GALGAS_prefsDeclarationAST::setter_setMDeclaration (GALGAS_prefDeclaration inValue
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (NULL != mObjectPtr) {
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    p->mProperty_mDeclaration = inValue ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefDeclaration GALGAS_prefsDeclarationAST::readProperty_mDeclaration (void) const {
  if (NULL == mObjectPtr) {
    return GALGAS_prefDeclaration () ;
  }else{
    cPtr_prefsDeclarationAST * p = (cPtr_prefsDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_prefsDeclarationAST) ;
    return p->mProperty_mDeclaration ;
  }
}

//----------------------------------------------------------------------------------------------------------------------
//Pointer class for @prefsDeclarationAST class
//----------------------------------------------------------------------------------------------------------------------

cPtr_prefsDeclarationAST::cPtr_prefsDeclarationAST (const GALGAS_lstring & in_mClassName,
                                                    const GALGAS_prefDeclaration & in_mDeclaration
                                                    COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName COMMA_THERE),
mProperty_mDeclaration (in_mDeclaration) {
}

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * cPtr_prefsDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

void cPtr_prefsDeclarationAST::description (C_String & ioString,
                                            const int32_t inIndentation) const {
  ioString << "[@prefsDeclarationAST:" ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString << ", " ;
  mProperty_mDeclaration.description (ioString, inIndentation+1) ;
  ioString << "]" ;
}

//----------------------------------------------------------------------------------------------------------------------

acPtr_class * cPtr_prefsDeclarationAST::duplicate (LOCATION_ARGS) const {
  acPtr_class * ptr = NULL ;
  macroMyNew (ptr, cPtr_prefsDeclarationAST (mProperty_mClassName, mProperty_mDeclaration COMMA_THERE)) ;
  return ptr ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//@prefsDeclarationAST type
//
//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor
kTypeDescriptor_GALGAS_prefsDeclarationAST ("prefsDeclarationAST",
                                            & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//----------------------------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GALGAS_prefsDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_prefsDeclarationAST ;
}

//----------------------------------------------------------------------------------------------------------------------

AC_GALGAS_root * GALGAS_prefsDeclarationAST::clonedObject (void) const {
  AC_GALGAS_root * result = NULL ;
  if (isValid ()) {
    macroMyNew (result, GALGAS_prefsDeclarationAST (*this)) ;
  }
  return result ;
}

//----------------------------------------------------------------------------------------------------------------------

GALGAS_prefsDeclarationAST GALGAS_prefsDeclarationAST::extractObject (const GALGAS_object & inObject,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GALGAS_prefsDeclarationAST result ;
  const GALGAS_prefsDeclarationAST * p = (const GALGAS_prefsDeclarationAST *) inObject.embeddedObject () ;
  if (NULL != p) {
    if (NULL != dynamic_cast <const GALGAS_prefsDeclarationAST *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("prefsDeclarationAST", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

