#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-5.h"

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
      result_result = extractedValue_4313_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 145)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_4380__0 ;
      GGS_propertyAccessibility extractedValue_4383_accessibility_1 ;
      GGS_bool extractedValue_4399__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_4399__3 ;
      temp_0.getAssociatedValuesFor_toMany (extractedValue_4380__0, extractedValue_4383_accessibility_1, extractedValue_4399__2, extractedValue_4399__3) ;
      result_result = extractedValue_4383_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 146)) ;
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
      result_result = extractedValue_4456_accessibility_1.getter_isTransient (SOURCE_FILE ("unified-type.ggs", 147)) ;
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
      result_result = extensionGetter_isComparable (extractedValue_4790_type_0, inCompiler COMMA_SOURCE_FILE ("unified-type.ggs", 157)) ;
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
      result_result = extractedValue_5543_type_0.getter_isEnumType (SOURCE_FILE ("unified-type.ggs", 181)) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind ("classKind",
                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind::staticTypeDescriptor (void) const {
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
//
//Extension getter '@propertyGeneration prefKeyDefinitionCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_prefKeyDefinitionCode (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_prefKeyDefinitionCode (const cPtr_propertyGeneration * inObject,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_prefKeyDefinitionCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration declarationInSelectionControllerCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_declarationInSelectionControllerCode (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_declarationInSelectionControllerCode (const cPtr_propertyGeneration * inObject,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_declarationInSelectionControllerCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration bindPropertyInSelectionController'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_bindPropertyInSelectionController (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_bindPropertyInSelectionController (const cPtr_propertyGeneration * inObject,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_bindPropertyInSelectionController (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_propertyDeclarationCode (const cPtr_propertyGeneration * inObject,
                                                        const GGS_bool in_inPreferences,
                                                        const GGS_bool in_inGenerationDirectAccess,
                                                        const GGS_stringset in_inOverriddenTransients,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_propertyDeclarationCode (in_inPreferences, in_inGenerationDirectAccess, in_inOverriddenTransients, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_configurationCode (const cPtr_propertyGeneration * inObject,
                                                  const GGS_bool in_inPreferences,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_configurationCode (in_inPreferences, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@propertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_initCode (const cPtr_propertyGeneration * inObject,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_initCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration setupRelationshipFromDictionaryCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_setupRelationshipFromDictionaryCode (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_setupRelationshipFromDictionaryCode (const cPtr_propertyGeneration * inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_setupRelationshipFromDictionaryCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration objectAccessibilityCodeForSaveOperation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_objectAccessibilityCodeForSaveOperation (Compiler */* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_objectAccessibilityCodeForSaveOperation (const cPtr_propertyGeneration * inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_objectAccessibilityCodeForSaveOperation (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration populateExplorerWindowCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_populateExplorerWindowCode (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_populateExplorerWindowCode (const cPtr_propertyGeneration * inObject,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_populateExplorerWindowCode (inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Extension getter '@propertyGeneration resetToManyRelationships'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_propertyGeneration::getter_resetToManyRelationships (Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_resetToManyRelationships (const cPtr_propertyGeneration * inObject,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_resetToManyRelationships (inCompiler COMMA_THERE) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility ("propertyAccessibility",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessibility::staticTypeDescriptor (void) const {
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
//
//Class for element of '@transientExternTypeList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_transientExternTypeList : public cCollectionElement {
  public: GGS_transientExternTypeList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                      const GGS_bool & in_mIsClass
                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_string & in_mTypeName,
                                                                                        const GGS_bool & in_mIsClass
                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mTypeName, in_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_transientExternTypeList::cCollectionElement_transientExternTypeList (const GGS_transientExternTypeList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTypeName, inElement.mProperty_mIsClass) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_transientExternTypeList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_transientExternTypeList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_transientExternTypeList (mObject.mProperty_mTypeName, mObject.mProperty_mIsClass COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_transientExternTypeList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTypeName" ":") ;
  mObject.mProperty_mTypeName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mIsClass" ":") ;
  mObject.mProperty_mIsClass.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList::GGS_transientExternTypeList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_transientExternTypeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_transientExternTypeList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::enterElement (const GGS_transientExternTypeList_2E_element & inValue,
                                                Compiler * /* inCompiler */
                                                COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                   const GGS_bool & inOperand1
                                                                                   COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  if (inOperand0.isValid () && inOperand1.isValid ()) {
    result = GGS_transientExternTypeList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_transientExternTypeList::makeAttributesFromObjects (attributes, inOperand0, inOperand1 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                             const GGS_string & in_mTypeName,
                                                             const GGS_bool & in_mIsClass
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = nullptr ;
  macroMyNew (p, cCollectionElement_transientExternTypeList (in_mTypeName,
                                                             in_mIsClass COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::addAssign_operation (const GGS_string & inOperand0,
                                                       const GGS_bool & inOperand1
                                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_append (const GGS_string inOperand0,
                                                 const GGS_bool inOperand1,
                                                 Compiler * /* inCompiler */
                                                 COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_insertAtIndex (const GGS_string inOperand0,
                                                        const GGS_bool inOperand1,
                                                        const GGS_uint inInsertionIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_transientExternTypeList (inOperand0, inOperand1 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_removeAtIndex (GGS_string & outOperand0,
                                                        GGS_bool & outOperand1,
                                                        const GGS_uint inRemoveIndex,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
      outOperand0 = p->mObject.mProperty_mTypeName ;
      outOperand1 = p->mObject.mProperty_mIsClass ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popFirst (GGS_string & outOperand0,
                                                   GGS_bool & outOperand1,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_popLast (GGS_string & outOperand0,
                                                  GGS_bool & outOperand1,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_first (GGS_string & outOperand0,
                                                GGS_bool & outOperand1,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::method_last (GGS_string & outOperand0,
                                               GGS_bool & outOperand1,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    outOperand0 = p->mObject.mProperty_mTypeName ;
    outOperand1 = p->mObject.mProperty_mIsClass ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::add_operation (const GGS_transientExternTypeList & inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_transientExternTypeList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListWithRange (const GGS_range & inRange,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS_transientExternTypeList result = GGS_transientExternTypeList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::plusAssign_operation (const GGS_transientExternTypeList inOperand,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMTypeNameAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTypeName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_transientExternTypeList::getter_mTypeNameAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mTypeName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientExternTypeList::setter_setMIsClassAtIndex (GGS_bool inOperand,
                                                             GGS_uint inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mIsClass = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_transientExternTypeList::getter_mIsClassAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_transientExternTypeList * p = (cCollectionElement_transientExternTypeList *) attributes.ptr () ;
  GGS_bool result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
    result = p->mObject.mProperty_mIsClass ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @transientExternTypeList
//--------------------------------------------------------------------------------------------------

DownEnumerator_transientExternTypeList::DownEnumerator_transientExternTypeList (const GGS_transientExternTypeList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element DownEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool DownEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @transientExternTypeList
//--------------------------------------------------------------------------------------------------

UpEnumerator_transientExternTypeList::UpEnumerator_transientExternTypeList (const GGS_transientExternTypeList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList_2E_element UpEnumerator_transientExternTypeList::current (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_transientExternTypeList::current_mTypeName (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mTypeName ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool UpEnumerator_transientExternTypeList::current_mIsClass (LOCATION_ARGS) const {
  const cCollectionElement_transientExternTypeList * p = (const cCollectionElement_transientExternTypeList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_transientExternTypeList) ;
  return p->mObject.mProperty_mIsClass ;
}




//--------------------------------------------------------------------------------------------------
//     @transientExternTypeList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientExternTypeList ("transientExternTypeList",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientExternTypeList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_transientExternTypeList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_transientExternTypeList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_transientExternTypeList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_transientExternTypeList GGS_transientExternTypeList::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_transientExternTypeList result ;
  const GGS_transientExternTypeList * p = (const GGS_transientExternTypeList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_transientExternTypeList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("transientExternTypeList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@abstractFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateCode (cPtr_abstractFileGeneration * inObject,
                                       const GGS_string constin_inOutputDirectory,
                                       const GGS_generationStruct constin_inGenerationStruct,
                                       GGS_stringset & io_ioGeneratedFileSet,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
//--- Drop output arguments
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_abstractFileGeneration) ;
    inObject->method_generateCode (constin_inOutputDirectory, constin_inGenerationStruct, io_ioGeneratedFileSet, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Class for element of '@fileGenerationList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_fileGenerationList : public cCollectionElement {
  public: GGS_fileGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                 COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_abstractFileGeneration & in_mFileGeneration
                                                                              COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_fileGenerationList::cCollectionElement_fileGenerationList (const GGS_fileGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileGeneration) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_fileGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_fileGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_fileGenerationList (mObject.mProperty_mFileGeneration COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_fileGenerationList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileGeneration" ":") ;
  mObject.mProperty_mFileGeneration.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList::GGS_fileGenerationList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_fileGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_fileGenerationList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::enterElement (const GGS_fileGenerationList_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::class_func_listWithValue (const GGS_abstractFileGeneration & inOperand0
                                                                         COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  if (inOperand0.isValid ()) {
    result = GGS_fileGenerationList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_fileGenerationList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                        const GGS_abstractFileGeneration & in_mFileGeneration
                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_fileGenerationList (in_mFileGeneration COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::addAssign_operation (const GGS_abstractFileGeneration & inOperand0
                                                  COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_append (const GGS_abstractFileGeneration inOperand0,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_insertAtIndex (const GGS_abstractFileGeneration inOperand0,
                                                   const GGS_uint inInsertionIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_fileGenerationList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_removeAtIndex (GGS_abstractFileGeneration & outOperand0,
                                                   const GGS_uint inRemoveIndex,
                                                   Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
      outOperand0 = p->mObject.mProperty_mFileGeneration ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popFirst (GGS_abstractFileGeneration & outOperand0,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_popLast (GGS_abstractFileGeneration & outOperand0,
                                             Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_first (GGS_abstractFileGeneration & outOperand0,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::method_last (GGS_abstractFileGeneration & outOperand0,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    outOperand0 = p->mObject.mProperty_mFileGeneration ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::add_operation (const GGS_fileGenerationList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_fileGenerationList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_fileGenerationList result = GGS_fileGenerationList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::plusAssign_operation (const GGS_fileGenerationList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_fileGenerationList::setter_setMFileGenerationAtIndex (GGS_abstractFileGeneration inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileGeneration = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration GGS_fileGenerationList::getter_mFileGenerationAtIndex (const GGS_uint & inIndex,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_fileGenerationList * p = (cCollectionElement_fileGenerationList *) attributes.ptr () ;
  GGS_abstractFileGeneration result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
    result = p->mObject.mProperty_mFileGeneration ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @fileGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_fileGenerationList::DownEnumerator_fileGenerationList (const GGS_fileGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element DownEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration DownEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @fileGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_fileGenerationList::UpEnumerator_fileGenerationList (const GGS_fileGenerationList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList_2E_element UpEnumerator_fileGenerationList::current (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_abstractFileGeneration UpEnumerator_fileGenerationList::current_mFileGeneration (LOCATION_ARGS) const {
  const cCollectionElement_fileGenerationList * p = (const cCollectionElement_fileGenerationList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_fileGenerationList) ;
  return p->mObject.mProperty_mFileGeneration ;
}




//--------------------------------------------------------------------------------------------------
//     @fileGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_fileGenerationList ("fileGenerationList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_fileGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_fileGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_fileGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_fileGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_fileGenerationList GGS_fileGenerationList::extractObject (const GGS_object & inObject,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_fileGenerationList result ;
  const GGS_fileGenerationList * p = (const GGS_fileGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_fileGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("fileGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (void) :
mProperty_mValidationStubRoutineListForGeneration (),
mProperty_mFileGenerationList (),
mProperty_mEntityListForGeneration (),
mProperty_mGenerateEBManagedXibDocumentSwift (),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (),
mProperty_mNeededOutletClasses (),
mProperty_mMainXibDescriptorList (),
mProperty_mToOneClassImplementations (),
mProperty_mToManyClassImplementations (),
mProperty_mSelectionControllerListForGeneration (),
mProperty_mPropertyClassList (),
mProperty_mTransientPropertyTypeList (),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ () {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_generationStruct & inSource) :
mProperty_mValidationStubRoutineListForGeneration (inSource.mProperty_mValidationStubRoutineListForGeneration),
mProperty_mFileGenerationList (inSource.mProperty_mFileGenerationList),
mProperty_mEntityListForGeneration (inSource.mProperty_mEntityListForGeneration),
mProperty_mGenerateEBManagedXibDocumentSwift (inSource.mProperty_mGenerateEBManagedXibDocumentSwift),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift),
mProperty_mNeededOutletClasses (inSource.mProperty_mNeededOutletClasses),
mProperty_mMainXibDescriptorList (inSource.mProperty_mMainXibDescriptorList),
mProperty_mToOneClassImplementations (inSource.mProperty_mToOneClassImplementations),
mProperty_mToManyClassImplementations (inSource.mProperty_mToManyClassImplementations),
mProperty_mSelectionControllerListForGeneration (inSource.mProperty_mSelectionControllerListForGeneration),
mProperty_mPropertyClassList (inSource.mProperty_mPropertyClassList),
mProperty_mTransientPropertyTypeList (inSource.mProperty_mTransientPropertyTypeList),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct & GGS_generationStruct::operator = (const GGS_generationStruct & inSource) {
  mProperty_mValidationStubRoutineListForGeneration = inSource.mProperty_mValidationStubRoutineListForGeneration ;
  mProperty_mFileGenerationList = inSource.mProperty_mFileGenerationList ;
  mProperty_mEntityListForGeneration = inSource.mProperty_mEntityListForGeneration ;
  mProperty_mGenerateEBManagedXibDocumentSwift = inSource.mProperty_mGenerateEBManagedXibDocumentSwift ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = inSource.mProperty_mGenerateEBManagedAutoLayoutDocumentSwift ;
  mProperty_mNeededOutletClasses = inSource.mProperty_mNeededOutletClasses ;
  mProperty_mMainXibDescriptorList = inSource.mProperty_mMainXibDescriptorList ;
  mProperty_mToOneClassImplementations = inSource.mProperty_mToOneClassImplementations ;
  mProperty_mToManyClassImplementations = inSource.mProperty_mToManyClassImplementations ;
  mProperty_mSelectionControllerListForGeneration = inSource.mProperty_mSelectionControllerListForGeneration ;
  mProperty_mPropertyClassList = inSource.mProperty_mPropertyClassList ;
  mProperty_mTransientPropertyTypeList = inSource.mProperty_mTransientPropertyTypeList ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_TransientArrayOf_5F_ ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = inSource.mProperty_mGenerateClass_5F_StoredArrayOf_5F_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::init (Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::setInitializedProperties (Compiler * inCompiler) {
GGS_validationStubRoutineListForGeneration temp_0 = GGS_validationStubRoutineListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 31)) ;
  mProperty_mValidationStubRoutineListForGeneration = temp_0 ;
GGS_fileGenerationList temp_1 = GGS_fileGenerationList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 32)) ;
  mProperty_mFileGenerationList = temp_1 ;
GGS_entityListForGeneratingEBManagedObjectContext temp_2 = GGS_entityListForGeneratingEBManagedObjectContext::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 33)) ;
  mProperty_mEntityListForGeneration = temp_2 ;
  mProperty_mGenerateEBManagedXibDocumentSwift = GGS_bool (false) ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift = GGS_bool (false) ;
GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 36)) ;
  mProperty_mNeededOutletClasses = temp_3 ;
GGS_mainXibDescriptorList temp_4 = GGS_mainXibDescriptorList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 37)) ;
  mProperty_mMainXibDescriptorList = temp_4 ;
GGS_stringset temp_5 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 39)) ;
  mProperty_mToOneClassImplementations = temp_5 ;
GGS_stringset temp_6 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 40)) ;
  mProperty_mToManyClassImplementations = temp_6 ;
GGS_selectionControllerForGeneration temp_7 = GGS_selectionControllerForGeneration::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 42)) ;
  mProperty_mSelectionControllerListForGeneration = temp_7 ;
GGS_stringlist temp_8 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 43)) ;
  mProperty_mPropertyClassList = temp_8 ;
GGS_transientExternTypeList temp_9 = GGS_transientExternTypeList::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 44)) ;
  mProperty_mTransientPropertyTypeList = temp_9 ;
GGS_stringset temp_10 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 46)) ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ = temp_10 ;
GGS_stringset temp_11 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 47)) ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ = temp_11 ;
GGS_stringset temp_12 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 48)) ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ = temp_12 ;
GGS_stringset temp_13 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 49)) ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_ = temp_13 ;
GGS_stringset temp_14 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 50)) ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_ = temp_14 ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct::GGS_generationStruct (const GGS_validationStubRoutineListForGeneration & inOperand0,
                                            const GGS_fileGenerationList & inOperand1,
                                            const GGS_entityListForGeneratingEBManagedObjectContext & inOperand2,
                                            const GGS_bool & inOperand3,
                                            const GGS_bool & inOperand4,
                                            const GGS_stringset & inOperand5,
                                            const GGS_mainXibDescriptorList & inOperand6,
                                            const GGS_stringset & inOperand7,
                                            const GGS_stringset & inOperand8,
                                            const GGS_selectionControllerForGeneration & inOperand9,
                                            const GGS_stringlist & inOperand10,
                                            const GGS_transientExternTypeList & inOperand11,
                                            const GGS_stringset & inOperand12,
                                            const GGS_stringset & inOperand13,
                                            const GGS_stringset & inOperand14,
                                            const GGS_stringset & inOperand15,
                                            const GGS_stringset & inOperand16) :
mProperty_mValidationStubRoutineListForGeneration (inOperand0),
mProperty_mFileGenerationList (inOperand1),
mProperty_mEntityListForGeneration (inOperand2),
mProperty_mGenerateEBManagedXibDocumentSwift (inOperand3),
mProperty_mGenerateEBManagedAutoLayoutDocumentSwift (inOperand4),
mProperty_mNeededOutletClasses (inOperand5),
mProperty_mMainXibDescriptorList (inOperand6),
mProperty_mToOneClassImplementations (inOperand7),
mProperty_mToManyClassImplementations (inOperand8),
mProperty_mSelectionControllerListForGeneration (inOperand9),
mProperty_mPropertyClassList (inOperand10),
mProperty_mTransientPropertyTypeList (inOperand11),
mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_ (inOperand12),
mProperty_mGenerateClass_5F_ProxyArrayOf_5F_ (inOperand13),
mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_ (inOperand14),
mProperty_mGenerateClass_5F_TransientArrayOf_5F_ (inOperand15),
mProperty_mGenerateClass_5F_StoredArrayOf_5F_ (inOperand16) {
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::class_func_new (Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_generationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_generationStruct::isValid (void) const {
  return mProperty_mValidationStubRoutineListForGeneration.isValid () && mProperty_mFileGenerationList.isValid () && mProperty_mEntityListForGeneration.isValid () && mProperty_mGenerateEBManagedXibDocumentSwift.isValid () && mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.isValid () && mProperty_mNeededOutletClasses.isValid () && mProperty_mMainXibDescriptorList.isValid () && mProperty_mToOneClassImplementations.isValid () && mProperty_mToManyClassImplementations.isValid () && mProperty_mSelectionControllerListForGeneration.isValid () && mProperty_mPropertyClassList.isValid () && mProperty_mTransientPropertyTypeList.isValid () && mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.isValid () && mProperty_mGenerateClass_5F_TransientArrayOf_5F_.isValid () && mProperty_mGenerateClass_5F_StoredArrayOf_5F_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::drop (void) {
  mProperty_mValidationStubRoutineListForGeneration.drop () ;
  mProperty_mFileGenerationList.drop () ;
  mProperty_mEntityListForGeneration.drop () ;
  mProperty_mGenerateEBManagedXibDocumentSwift.drop () ;
  mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.drop () ;
  mProperty_mNeededOutletClasses.drop () ;
  mProperty_mMainXibDescriptorList.drop () ;
  mProperty_mToOneClassImplementations.drop () ;
  mProperty_mToManyClassImplementations.drop () ;
  mProperty_mSelectionControllerListForGeneration.drop () ;
  mProperty_mPropertyClassList.drop () ;
  mProperty_mTransientPropertyTypeList.drop () ;
  mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_TransientArrayOf_5F_.drop () ;
  mProperty_mGenerateClass_5F_StoredArrayOf_5F_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_generationStruct::description (String & ioString,
                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @generationStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValidationStubRoutineListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mFileGenerationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEntityListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedXibDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateEBManagedAutoLayoutDocumentSwift.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mNeededOutletClasses.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mMainXibDescriptorList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToOneClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mToManyClassImplementations.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mSelectionControllerListForGeneration.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPropertyClassList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mTransientPropertyTypeList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_PreferencesArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_ProxyArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_TransientArrayOf_5F_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGenerateClass_5F_StoredArrayOf_5F_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @generationStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_generationStruct ("generationStruct",
                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_generationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_generationStruct ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_generationStruct::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_generationStruct (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_generationStruct GGS_generationStruct::extractObject (const GGS_object & inObject,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  GGS_generationStruct result ;
  const GGS_generationStruct * p = (const GGS_generationStruct *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_generationStruct *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("generationStruct", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Class for element of '@XCodeGroupList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeGroupList : public cCollectionElement {
  public: GGS_XCodeGroupList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                             const GGS_string & in_mGroupName,
                                             const GGS_string & in_mGroupPath,
                                             const GGS_stringlist & in_mChildrenRefs
                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_string & in_mGroupReference,
                                                                      const GGS_string & in_mGroupName,
                                                                      const GGS_string & in_mGroupPath,
                                                                      const GGS_stringlist & in_mChildrenRefs
                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mGroupReference, in_mGroupName, in_mGroupPath, in_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeGroupList::cCollectionElement_XCodeGroupList (const GGS_XCodeGroupList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mGroupReference, inElement.mProperty_mGroupName, inElement.mProperty_mGroupPath, inElement.mProperty_mChildrenRefs) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeGroupList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeGroupList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeGroupList (mObject.mProperty_mGroupReference, mObject.mProperty_mGroupName, mObject.mProperty_mGroupPath, mObject.mProperty_mChildrenRefs COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeGroupList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupReference" ":") ;
  mObject.mProperty_mGroupReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupName" ":") ;
  mObject.mProperty_mGroupName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mGroupPath" ":") ;
  mObject.mProperty_mGroupPath.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mChildrenRefs" ":") ;
  mObject.mProperty_mChildrenRefs.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList::GGS_XCodeGroupList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeGroupList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::enterElement (const GGS_XCodeGroupList_2E_element & inValue,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                 const GGS_string & inOperand1,
                                                                 const GGS_string & inOperand2,
                                                                 const GGS_stringlist & inOperand3
                                                                 COMMA_LOCATION_ARGS) {
  GGS_XCodeGroupList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid ()) {
    result = GGS_XCodeGroupList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeGroupList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                    const GGS_string & in_mGroupReference,
                                                    const GGS_string & in_mGroupName,
                                                    const GGS_string & in_mGroupPath,
                                                    const GGS_stringlist & in_mChildrenRefs
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeGroupList (in_mGroupReference,
                                                    in_mGroupName,
                                                    in_mGroupPath,
                                                    in_mChildrenRefs COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::addAssign_operation (const GGS_string & inOperand0,
                                              const GGS_string & inOperand1,
                                              const GGS_string & inOperand2,
                                              const GGS_stringlist & inOperand3
                                              COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_append (const GGS_string inOperand0,
                                        const GGS_string inOperand1,
                                        const GGS_string inOperand2,
                                        const GGS_stringlist inOperand3,
                                        Compiler * /* inCompiler */
                                        COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeGroupList (inOperand0, inOperand1, inOperand2, inOperand3 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  outOperand3.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
      outOperand0 = p->mObject.mProperty_mGroupReference ;
      outOperand1 = p->mObject.mProperty_mGroupName ;
      outOperand2 = p->mObject.mProperty_mGroupPath ;
      outOperand3 = p->mObject.mProperty_mChildrenRefs ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popFirst (GGS_string & outOperand0,
                                          GGS_string & outOperand1,
                                          GGS_string & outOperand2,
                                          GGS_stringlist & outOperand3,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_popLast (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         GGS_stringlist & outOperand3,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_first (GGS_string & outOperand0,
                                       GGS_string & outOperand1,
                                       GGS_string & outOperand2,
                                       GGS_stringlist & outOperand3,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::method_last (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      GGS_stringlist & outOperand3,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
    outOperand3.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    outOperand0 = p->mObject.mProperty_mGroupReference ;
    outOperand1 = p->mObject.mProperty_mGroupName ;
    outOperand2 = p->mObject.mProperty_mGroupPath ;
    outOperand3 = p->mObject.mProperty_mChildrenRefs ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::add_operation (const GGS_XCodeGroupList & inOperand,
                                                      Compiler * /* inCompiler */
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeGroupList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListWithRange (const GGS_range & inRange,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList GGS_XCodeGroupList::getter_subListToIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_XCodeGroupList result = GGS_XCodeGroupList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::plusAssign_operation (const GGS_XCodeGroupList inOperand,
                                               Compiler * /* inCompiler */
                                               COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupReferenceAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupReferenceAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupNameAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupNameAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMGroupPathAtIndex (GGS_string inOperand,
                                                      GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mGroupPath = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeGroupList::getter_mGroupPathAtIndex (const GGS_uint & inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mGroupPath ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeGroupList::setter_setMChildrenRefsAtIndex (GGS_stringlist inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mChildrenRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeGroupList::getter_mChildrenRefsAtIndex (const GGS_uint & inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeGroupList * p = (cCollectionElement_XCodeGroupList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
    result = p->mObject.mProperty_mChildrenRefs ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeGroupList::DownEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element DownEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeGroupList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeGroupList::UpEnumerator_XCodeGroupList (const GGS_XCodeGroupList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeGroupList_2E_element UpEnumerator_XCodeGroupList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeGroupList::current_mGroupPath (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mGroupPath ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeGroupList::current_mChildrenRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeGroupList * p = (const cCollectionElement_XCodeGroupList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeGroupList) ;
  return p->mObject.mProperty_mChildrenRefs ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeGroupList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeGroupList ("XCodeGroupList",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeGroupList::staticTypeDescriptor (void) const {
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
//
//Class for element of '@XCodeToolTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeToolTargetList : public cCollectionElement {
  public: GGS_XCodeToolTargetList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeToolTargetList (const GGS_string & in_mTargetRef,
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
  public: cCollectionElement_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GGS_string & in_mTargetRef,
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
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeToolTargetList::cCollectionElement_XCodeToolTargetList (const GGS_XCodeToolTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeToolTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeToolTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeToolTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeToolTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList::GGS_XCodeToolTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::enterElement (const GGS_XCodeToolTargetList_2E_element & inValue,
                                            Compiler * /* inCompiler */
                                            COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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
  GGS_XCodeToolTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid ()) {
    result = GGS_XCodeToolTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeToolTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  cCollectionElement_XCodeToolTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeToolTargetList (in_mTargetRef,
                                                         in_mTargetName,
                                                         in_mProductFileReference,
                                                         in_mProductFileName,
                                                         in_mBuildPhaseRefList,
                                                         in_mBuildPhaseRef,
                                                         in_mBuildConfigurationListRef,
                                                         in_mBuildConfigurationSettingList,
                                                         in_mBuildConfigurationRef,
                                                         in_mFrameworksFileRefList,
                                                         in_mFrameworkBuildPhaseRef COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::addAssign_operation (const GGS_string & inOperand0,
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
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
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
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeToolTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
      outOperand0 = p->mObject.mProperty_mTargetRef ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mProductFileReference ;
      outOperand3 = p->mObject.mProperty_mProductFileName ;
      outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
      outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    }
  }else{
    drop () ;    
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
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
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
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
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
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
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
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::add_operation (const GGS_XCodeToolTargetList & inOperand,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList GGS_XCodeToolTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeToolTargetList result = GGS_XCodeToolTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::plusAssign_operation (const GGS_XCodeToolTargetList inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                            GGS_uint inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                   GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                           GGS_uint inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                               GGS_uint inIndex,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeToolTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeToolTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                        GGS_uint inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeToolTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeToolTargetList * p = (cCollectionElement_XCodeToolTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeToolTargetList::DownEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element DownEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeToolTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeToolTargetList::UpEnumerator_XCodeToolTargetList (const GGS_XCodeToolTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeToolTargetList_2E_element UpEnumerator_XCodeToolTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeToolTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeToolTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeToolTargetList * p = (const cCollectionElement_XCodeToolTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeToolTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeToolTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeToolTargetList ("XCodeToolTargetList",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeToolTargetList::staticTypeDescriptor (void) const {
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
//
//Class for element of '@XCodeAppTargetList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_XCodeAppTargetList : public cCollectionElement {
  public: GGS_XCodeAppTargetList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
  public: cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_string & in_mTargetRef,
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
cCollectionElement (THERE),
mObject (in_mTargetRef, in_mTargetName, in_mProductFileReference, in_mProductFileName, in_mBuildPhaseRefList, in_mBuildPhaseRef, in_mBuildConfigurationListRef, in_mBuildConfigurationSettingList, in_mBuildConfigurationRef, in_mFrameworksFileRefList, in_mFrameworkBuildPhaseRef, in_mDependentTargets, in_mResourceBuildRef, in_mResourceFileBuildRefs, in_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_XCodeAppTargetList::cCollectionElement_XCodeAppTargetList (const GGS_XCodeAppTargetList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mTargetRef, inElement.mProperty_mTargetName, inElement.mProperty_mProductFileReference, inElement.mProperty_mProductFileName, inElement.mProperty_mBuildPhaseRefList, inElement.mProperty_mBuildPhaseRef, inElement.mProperty_mBuildConfigurationListRef, inElement.mProperty_mBuildConfigurationSettingList, inElement.mProperty_mBuildConfigurationRef, inElement.mProperty_mFrameworksFileRefList, inElement.mProperty_mFrameworkBuildPhaseRef, inElement.mProperty_mDependentTargets, inElement.mProperty_mResourceBuildRef, inElement.mProperty_mResourceFileBuildRefs, inElement.mProperty_mInfoPListFile) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_XCodeAppTargetList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_XCodeAppTargetList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_XCodeAppTargetList (mObject.mProperty_mTargetRef, mObject.mProperty_mTargetName, mObject.mProperty_mProductFileReference, mObject.mProperty_mProductFileName, mObject.mProperty_mBuildPhaseRefList, mObject.mProperty_mBuildPhaseRef, mObject.mProperty_mBuildConfigurationListRef, mObject.mProperty_mBuildConfigurationSettingList, mObject.mProperty_mBuildConfigurationRef, mObject.mProperty_mFrameworksFileRefList, mObject.mProperty_mFrameworkBuildPhaseRef, mObject.mProperty_mDependentTargets, mObject.mProperty_mResourceBuildRef, mObject.mProperty_mResourceFileBuildRefs, mObject.mProperty_mInfoPListFile COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_XCodeAppTargetList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetRef" ":") ;
  mObject.mProperty_mTargetRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mTargetName" ":") ;
  mObject.mProperty_mTargetName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileReference" ":") ;
  mObject.mProperty_mProductFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mProductFileName" ":") ;
  mObject.mProperty_mProductFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRefList" ":") ;
  mObject.mProperty_mBuildPhaseRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildPhaseRef" ":") ;
  mObject.mProperty_mBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationListRef" ":") ;
  mObject.mProperty_mBuildConfigurationListRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationSettingList" ":") ;
  mObject.mProperty_mBuildConfigurationSettingList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildConfigurationRef" ":") ;
  mObject.mProperty_mBuildConfigurationRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworksFileRefList" ":") ;
  mObject.mProperty_mFrameworksFileRefList.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFrameworkBuildPhaseRef" ":") ;
  mObject.mProperty_mFrameworkBuildPhaseRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mDependentTargets" ":") ;
  mObject.mProperty_mDependentTargets.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceBuildRef" ":") ;
  mObject.mProperty_mResourceBuildRef.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mResourceFileBuildRefs" ":") ;
  mObject.mProperty_mResourceFileBuildRefs.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mInfoPListFile" ":") ;
  mObject.mProperty_mInfoPListFile.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList::GGS_XCodeAppTargetList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::enterElement (const GGS_XCodeAppTargetList_2E_element & inValue,
                                           Compiler * /* inCompiler */
                                           COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
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
  GGS_XCodeAppTargetList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid () && inOperand3.isValid () && inOperand4.isValid () && inOperand5.isValid () && inOperand6.isValid () && inOperand7.isValid () && inOperand8.isValid () && inOperand9.isValid () && inOperand10.isValid () && inOperand11.isValid () && inOperand12.isValid () && inOperand13.isValid () && inOperand14.isValid ()) {
    result = GGS_XCodeAppTargetList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_XCodeAppTargetList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::makeAttributesFromObjects (capCollectionElement & outAttributes,
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
  cCollectionElement_XCodeAppTargetList * p = nullptr ;
  macroMyNew (p, cCollectionElement_XCodeAppTargetList (in_mTargetRef,
                                                        in_mTargetName,
                                                        in_mProductFileReference,
                                                        in_mProductFileName,
                                                        in_mBuildPhaseRefList,
                                                        in_mBuildPhaseRef,
                                                        in_mBuildConfigurationListRef,
                                                        in_mBuildConfigurationSettingList,
                                                        in_mBuildConfigurationRef,
                                                        in_mFrameworksFileRefList,
                                                        in_mFrameworkBuildPhaseRef,
                                                        in_mDependentTargets,
                                                        in_mResourceBuildRef,
                                                        in_mResourceFileBuildRefs,
                                                        in_mInfoPListFile COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::addAssign_operation (const GGS_string & inOperand0,
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
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
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
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
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
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_XCodeAppTargetList (inOperand0, inOperand1, inOperand2, inOperand3, inOperand4, inOperand5, inOperand6, inOperand7, inOperand8, inOperand9, inOperand10, inOperand11, inOperand12, inOperand13, inOperand14 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
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
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
      outOperand0 = p->mObject.mProperty_mTargetRef ;
      outOperand1 = p->mObject.mProperty_mTargetName ;
      outOperand2 = p->mObject.mProperty_mProductFileReference ;
      outOperand3 = p->mObject.mProperty_mProductFileName ;
      outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
      outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
      outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
      outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
      outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
      outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
      outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
      outOperand11 = p->mObject.mProperty_mDependentTargets ;
      outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
      outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
      outOperand14 = p->mObject.mProperty_mInfoPListFile ;
    }
  }else{
    drop () ;    
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
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
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
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
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
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
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
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  if (nullptr == p) {
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
  }else{
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    outOperand0 = p->mObject.mProperty_mTargetRef ;
    outOperand1 = p->mObject.mProperty_mTargetName ;
    outOperand2 = p->mObject.mProperty_mProductFileReference ;
    outOperand3 = p->mObject.mProperty_mProductFileName ;
    outOperand4 = p->mObject.mProperty_mBuildPhaseRefList ;
    outOperand5 = p->mObject.mProperty_mBuildPhaseRef ;
    outOperand6 = p->mObject.mProperty_mBuildConfigurationListRef ;
    outOperand7 = p->mObject.mProperty_mBuildConfigurationSettingList ;
    outOperand8 = p->mObject.mProperty_mBuildConfigurationRef ;
    outOperand9 = p->mObject.mProperty_mFrameworksFileRefList ;
    outOperand10 = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
    outOperand11 = p->mObject.mProperty_mDependentTargets ;
    outOperand12 = p->mObject.mProperty_mResourceBuildRef ;
    outOperand13 = p->mObject.mProperty_mResourceFileBuildRefs ;
    outOperand14 = p->mObject.mProperty_mInfoPListFile ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::add_operation (const GGS_XCodeAppTargetList & inOperand,
                                                              Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListWithRange (const GGS_range & inRange,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList GGS_XCodeAppTargetList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_XCodeAppTargetList result = GGS_XCodeAppTargetList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::plusAssign_operation (const GGS_XCodeAppTargetList inOperand,
                                                   Compiler * /* inCompiler */
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetRefAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mTargetRefAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMTargetNameAtIndex (GGS_string inOperand,
                                                           GGS_uint inIndex,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mTargetName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mTargetNameAtIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mTargetName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileReferenceAtIndex (GGS_string inOperand,
                                                                     GGS_uint inIndex,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mProductFileReferenceAtIndex (const GGS_uint & inIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMProductFileNameAtIndex (GGS_string inOperand,
                                                                GGS_uint inIndex,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mProductFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mProductFileNameAtIndex (const GGS_uint & inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mProductFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefListAtIndex (GGS_stringlist inOperand,
                                                                  GGS_uint inIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildPhaseRefListAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildPhaseRefAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationListRefAtIndex (GGS_string inOperand,
                                                                          GGS_uint inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationListRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationListRefAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationListRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationSettingListAtIndex (GGS_stringlist inOperand,
                                                                              GGS_uint inIndex,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationSettingList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mBuildConfigurationSettingListAtIndex (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationSettingList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMBuildConfigurationRefAtIndex (GGS_string inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildConfigurationRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mBuildConfigurationRefAtIndex (const GGS_uint & inIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mBuildConfigurationRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworksFileRefListAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworksFileRefList = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mFrameworksFileRefListAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworksFileRefList ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMFrameworkBuildPhaseRefAtIndex (GGS_string inOperand,
                                                                       GGS_uint inIndex,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFrameworkBuildPhaseRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mFrameworkBuildPhaseRefAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mFrameworkBuildPhaseRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMDependentTargetsAtIndex (GGS__32_stringlist inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mDependentTargets = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_XCodeAppTargetList::getter_mDependentTargetsAtIndex (const GGS_uint & inIndex,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS__32_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mDependentTargets ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceBuildRefAtIndex (GGS_string inOperand,
                                                                 GGS_uint inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceBuildRef = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mResourceBuildRefAtIndex (const GGS_uint & inIndex,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceBuildRef ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMResourceFileBuildRefsAtIndex (GGS_stringlist inOperand,
                                                                      GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mResourceFileBuildRefs = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist GGS_XCodeAppTargetList::getter_mResourceFileBuildRefsAtIndex (const GGS_uint & inIndex,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_stringlist result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mResourceFileBuildRefs ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_XCodeAppTargetList::setter_setMInfoPListFileAtIndex (GGS_string inOperand,
                                                              GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mInfoPListFile = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_XCodeAppTargetList::getter_mInfoPListFileAtIndex (const GGS_uint & inIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_XCodeAppTargetList * p = (cCollectionElement_XCodeAppTargetList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
    result = p->mObject.mProperty_mInfoPListFile ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

DownEnumerator_XCodeAppTargetList::DownEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element DownEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist DownEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist DownEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @XCodeAppTargetList
//--------------------------------------------------------------------------------------------------

UpEnumerator_XCodeAppTargetList::UpEnumerator_XCodeAppTargetList (const GGS_XCodeAppTargetList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_XCodeAppTargetList_2E_element UpEnumerator_XCodeAppTargetList::current (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mTargetName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mTargetName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileReference (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mProductFileName (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mProductFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationListRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationListRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationSettingList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationSettingList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mBuildConfigurationRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mBuildConfigurationRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mFrameworksFileRefList (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworksFileRefList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mFrameworkBuildPhaseRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mFrameworkBuildPhaseRef ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist UpEnumerator_XCodeAppTargetList::current_mDependentTargets (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mDependentTargets ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mResourceBuildRef (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceBuildRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_stringlist UpEnumerator_XCodeAppTargetList::current_mResourceFileBuildRefs (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mResourceFileBuildRefs ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_XCodeAppTargetList::current_mInfoPListFile (LOCATION_ARGS) const {
  const cCollectionElement_XCodeAppTargetList * p = (const cCollectionElement_XCodeAppTargetList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_XCodeAppTargetList) ;
  return p->mObject.mProperty_mInfoPListFile ;
}




//--------------------------------------------------------------------------------------------------
//     @XCodeAppTargetList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_XCodeAppTargetList ("XCodeAppTargetList",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_XCodeAppTargetList::staticTypeDescriptor (void) const {
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
//
//Class for element of '@BuildFileList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_BuildFileList : public cCollectionElement {
  public: GGS_BuildFileList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                            const GGS_string & in_mFileName,
                                            const GGS_string & in_mBuildReference
                                            COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_string & in_mFileReference,
                                                                    const GGS_string & in_mFileName,
                                                                    const GGS_string & in_mBuildReference
                                                                    COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFileReference, in_mFileName, in_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_BuildFileList::cCollectionElement_BuildFileList (const GGS_BuildFileList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFileReference, inElement.mProperty_mFileName, inElement.mProperty_mBuildReference) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_BuildFileList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_BuildFileList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_BuildFileList (mObject.mProperty_mFileReference, mObject.mProperty_mFileName, mObject.mProperty_mBuildReference COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_BuildFileList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileReference" ":") ;
  mObject.mProperty_mFileReference.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mFileName" ":") ;
  mObject.mProperty_mFileName.description (ioString, inIndentation) ;
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mBuildReference" ":") ;
  mObject.mProperty_mBuildReference.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList::GGS_BuildFileList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_BuildFileList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::enterElement (const GGS_BuildFileList_2E_element & inValue,
                                      Compiler * /* inCompiler */
                                      COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::class_func_listWithValue (const GGS_string & inOperand0,
                                                               const GGS_string & inOperand1,
                                                               const GGS_string & inOperand2
                                                               COMMA_LOCATION_ARGS) {
  GGS_BuildFileList result ;
  if (inOperand0.isValid () && inOperand1.isValid () && inOperand2.isValid ()) {
    result = GGS_BuildFileList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_BuildFileList::makeAttributesFromObjects (attributes, inOperand0, inOperand1, inOperand2 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                   const GGS_string & in_mFileReference,
                                                   const GGS_string & in_mFileName,
                                                   const GGS_string & in_mBuildReference
                                                   COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = nullptr ;
  macroMyNew (p, cCollectionElement_BuildFileList (in_mFileReference,
                                                   in_mFileName,
                                                   in_mBuildReference COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::addAssign_operation (const GGS_string & inOperand0,
                                             const GGS_string & inOperand1,
                                             const GGS_string & inOperand2
                                             COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_append (const GGS_string inOperand0,
                                       const GGS_string inOperand1,
                                       const GGS_string inOperand2,
                                       Compiler * /* inCompiler */
                                       COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_insertAtIndex (const GGS_string inOperand0,
                                              const GGS_string inOperand1,
                                              const GGS_string inOperand2,
                                              const GGS_uint inInsertionIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_BuildFileList (inOperand0, inOperand1, inOperand2 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_removeAtIndex (GGS_string & outOperand0,
                                              GGS_string & outOperand1,
                                              GGS_string & outOperand2,
                                              const GGS_uint inRemoveIndex,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  outOperand1.drop () ;
  outOperand2.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
      outOperand0 = p->mObject.mProperty_mFileReference ;
      outOperand1 = p->mObject.mProperty_mFileName ;
      outOperand2 = p->mObject.mProperty_mBuildReference ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popFirst (GGS_string & outOperand0,
                                         GGS_string & outOperand1,
                                         GGS_string & outOperand2,
                                         Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_popLast (GGS_string & outOperand0,
                                        GGS_string & outOperand1,
                                        GGS_string & outOperand2,
                                        Compiler * inCompiler
                                        COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_first (GGS_string & outOperand0,
                                      GGS_string & outOperand1,
                                      GGS_string & outOperand2,
                                      Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::method_last (GGS_string & outOperand0,
                                     GGS_string & outOperand1,
                                     GGS_string & outOperand2,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
    outOperand1.drop () ;
    outOperand2.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    outOperand0 = p->mObject.mProperty_mFileReference ;
    outOperand1 = p->mObject.mProperty_mFileName ;
    outOperand2 = p->mObject.mProperty_mBuildReference ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::add_operation (const GGS_BuildFileList & inOperand,
                                                    Compiler * /* inCompiler */
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_BuildFileList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListWithRange (const GGS_range & inRange,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList GGS_BuildFileList::getter_subListToIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  GGS_BuildFileList result = GGS_BuildFileList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::plusAssign_operation (const GGS_BuildFileList inOperand,
                                              Compiler * /* inCompiler */
                                              COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileReferenceAtIndex (GGS_string inOperand,
                                                         GGS_uint inIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mFileReferenceAtIndex (const GGS_uint & inIndex,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileReference ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMFileNameAtIndex (GGS_string inOperand,
                                                    GGS_uint inIndex,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mFileName = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mFileNameAtIndex (const GGS_uint & inIndex,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mFileName ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_BuildFileList::setter_setMBuildReferenceAtIndex (GGS_string inOperand,
                                                          GGS_uint inIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mBuildReference = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_BuildFileList::getter_mBuildReferenceAtIndex (const GGS_uint & inIndex,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_BuildFileList * p = (cCollectionElement_BuildFileList *) attributes.ptr () ;
  GGS_string result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
    result = p->mObject.mProperty_mBuildReference ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

DownEnumerator_BuildFileList::DownEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element DownEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @BuildFileList
//--------------------------------------------------------------------------------------------------

UpEnumerator_BuildFileList::UpEnumerator_BuildFileList (const GGS_BuildFileList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_BuildFileList_2E_element UpEnumerator_BuildFileList::current (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileReference ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mFileName (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mFileName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_BuildFileList::current_mBuildReference (LOCATION_ARGS) const {
  const cCollectionElement_BuildFileList * p = (const cCollectionElement_BuildFileList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_BuildFileList) ;
  return p->mObject.mProperty_mBuildReference ;
}




//--------------------------------------------------------------------------------------------------
//     @BuildFileList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_BuildFileList ("BuildFileList",
                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_BuildFileList::staticTypeDescriptor (void) const {
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
//
//Class for element of '@mainXibLineDescriptorList' list
//
//--------------------------------------------------------------------------------------------------

class cCollectionElement_mainXibLineDescriptorList : public cCollectionElement {
  public: GGS_mainXibLineDescriptorList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                        COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method for comparing elements

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;

//--- Description
  public: virtual void description (String & ioString, const int32_t inIndentation) const ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibElement & in_mElement
                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mElement) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_mainXibLineDescriptorList::cCollectionElement_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mElement) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_mainXibLineDescriptorList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_mainXibLineDescriptorList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_mainXibLineDescriptorList (mObject.mProperty_mElement COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cCollectionElement_mainXibLineDescriptorList::description (String & ioString, const int32_t inIndentation) const {
  ioString.appendNewLine () ;
  ioString.appendStringMultiple ("| ", inIndentation) ;
  ioString.appendCString ("mElement" ":") ;
  mObject.mProperty_mElement.description (ioString, inIndentation) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (void) :
AC_GALGAS_list () {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList::GGS_mainXibLineDescriptorList (const capCollectionElementArray & inSharedArray) :
AC_GALGAS_list (inSharedArray) {
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::class_func_emptyList (UNUSED_LOCATION_ARGS) {
  return GGS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  return GGS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::enterElement (const GGS_mainXibLineDescriptorList_2E_element & inValue,
                                                  Compiler * /* inCompiler */
                                                  COMMA_LOCATION_ARGS) {
  cCollectionElement * p = nullptr ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inValue COMMA_THERE)) ;
  capCollectionElement attributes ;
  attributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
  appendObject (attributes) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::class_func_listWithValue (const GGS_mainXibElement & inOperand0
                                                                                       COMMA_LOCATION_ARGS) {
  GGS_mainXibLineDescriptorList result ;
  if (inOperand0.isValid ()) {
    result = GGS_mainXibLineDescriptorList (capCollectionElementArray ()) ;
    capCollectionElement attributes ;
    GGS_mainXibLineDescriptorList::makeAttributesFromObjects (attributes, inOperand0 COMMA_THERE) ;
    result.appendObject (attributes) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                               const GGS_mainXibElement & in_mElement
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = nullptr ;
  macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (in_mElement COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::addAssign_operation (const GGS_mainXibElement & inOperand0
                                                         COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_append (const GGS_mainXibElement inOperand0,
                                                   Compiler * /* inCompiler */
                                                   COMMA_LOCATION_ARGS) {
  if (isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    appendObject (attributes) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_insertAtIndex (const GGS_mainXibElement inOperand0,
                                                          const GGS_uint inInsertionIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    cCollectionElement * p = nullptr ;
    macroMyNew (p, cCollectionElement_mainXibLineDescriptorList (inOperand0 COMMA_THERE)) ;
    capCollectionElement attributes ;
    attributes.setPointer (p) ;
    macroDetachSharedObject (p) ;
    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_removeAtIndex (GGS_mainXibElement & outOperand0,
                                                          const GGS_uint inRemoveIndex,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  outOperand0.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    capCollectionElement attributes ;
    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;
    cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
    if (nullptr == p) {
      drop () ;
    }else{
      macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
      outOperand0 = p->mObject.mProperty_mElement ;
    }
  }else{
    drop () ;    
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_popFirst (GGS_mainXibElement & outOperand0,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeFirstObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_popLast (GGS_mainXibElement & outOperand0,
                                                    Compiler * inCompiler
                                                    COMMA_LOCATION_ARGS) {
  capCollectionElement attributes ;
  removeLastObject (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::method_first (GGS_mainXibElement & outOperand0,
                                                  Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readFirst (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::method_last (GGS_mainXibElement & outOperand0,
                                                 Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes ;
  readLast (attributes, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  if (nullptr == p) {
    outOperand0.drop () ;
  }else{
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    outOperand0 = p->mObject.mProperty_mElement ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::add_operation (const GGS_mainXibLineDescriptorList & inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.appendList (inOperand) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListWithRange (const GGS_range & inRange,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result = GGS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result = GGS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList GGS_mainXibLineDescriptorList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_mainXibLineDescriptorList result = GGS_mainXibLineDescriptorList::class_func_emptyList (THERE) ;
  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::plusAssign_operation (const GGS_mainXibLineDescriptorList inOperand,
                                                          Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  appendList (inOperand) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_mainXibLineDescriptorList::setter_setMElementAtIndex (GGS_mainXibElement inOperand,
                                                               GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    macroUniqueSharedObject (p) ;
    p->mObject.mProperty_mElement = inOperand ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibElement GGS_mainXibLineDescriptorList::getter_mElementAtIndex (const GGS_uint & inIndex,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) const {
  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;
  cCollectionElement_mainXibLineDescriptorList * p = (cCollectionElement_mainXibLineDescriptorList *) attributes.ptr () ;
  GGS_mainXibElement result ;
  if (nullptr != p) {
    macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
    result = p->mObject.mProperty_mElement ;
  }
  return result ;
}



//--------------------------------------------------------------------------------------------------
// Down Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

DownEnumerator_mainXibLineDescriptorList::DownEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Down) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element DownEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement DownEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @mainXibLineDescriptorList
//--------------------------------------------------------------------------------------------------

UpEnumerator_mainXibLineDescriptorList::UpEnumerator_mainXibLineDescriptorList (const GGS_mainXibLineDescriptorList & inEnumeratedObject) :
cGenericAbstractEnumerator (EnumerationOrder::Up) {
  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_mainXibLineDescriptorList_2E_element UpEnumerator_mainXibLineDescriptorList::current (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject ;
}


//--------------------------------------------------------------------------------------------------

GGS_mainXibElement UpEnumerator_mainXibLineDescriptorList::current_mElement (LOCATION_ARGS) const {
  const cCollectionElement_mainXibLineDescriptorList * p = (const cCollectionElement_mainXibLineDescriptorList *) currentObjectPtr (THERE) ;
  macroValidSharedObject (p, cCollectionElement_mainXibLineDescriptorList) ;
  return p->mObject.mProperty_mElement ;
}




//--------------------------------------------------------------------------------------------------
//     @mainXibLineDescriptorList generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibLineDescriptorList ("mainXibLineDescriptorList",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibLineDescriptorList::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_mainXibElement ("mainXibElement",
                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_mainXibElement::staticTypeDescriptor (void) const {
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
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.getter_count (SOURCE_FILE ("main-xib.ggs", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_mainXibDescriptorList temp_2 = inObject ;
      result_outResult = GGS_string ("    var y = OUTLET_HEIGHT * 1.5 * ").add_operation (temp_2.getter_count (SOURCE_FILE ("main-xib.ggs", 88)).getter_string (SOURCE_FILE ("main-xib.ggs", 88)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)).add_operation (GGS_string (".0\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 88)) ;
      result_outResult.plusAssign_operation(GGS_string ("    let view = NSView (frame:NSRect (x:0.0, y:0.0, width:10.0, height:10.0))\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 89)) ;
      GGS_bigint var_idx_2876 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 90)) ;
      GGS_bigint var_columnMax_2892 = GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 91)) ;
      const GGS_mainXibDescriptorList temp_3 = inObject ;
      UpEnumerator_mainXibDescriptorList enumerator_2915 (temp_3) ;
      while (enumerator_2915.hasCurrentObject ()) {
        GGS_bigint var_column_2943 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 93)) ;
        result_outResult.plusAssign_operation(GGS_string ("    y -= OUTLET_HEIGHT\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 94)) ;
        UpEnumerator_mainXibLineDescriptorList enumerator_3011 (enumerator_2915.current_mLine (HERE)) ;
        while (enumerator_3011.hasCurrentObject ()) {
          switch (enumerator_3011.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            {
              GGS_lstring extractedValue_3076_t_0 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_text (extractedValue_3076_t_0) ;
              var_idx_2876.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 98)) ;
              result_outResult.plusAssign_operation(GGS_string ("  //--- Text ").add_operation (extractedValue_3076_t_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 99)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 99)) ;
              result_outResult.plusAssign_operation(GGS_string ("  //  createTextFieldForText (").add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 100)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)).add_operation (GGS_string (", y:&y, col:0, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 100)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 100)) ;
              result_outResult.plusAssign_operation(GGS_string ("    let tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GGS_string (" = NSTextField (frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.ggs", 101)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 101)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 101)) ;
              result_outResult.plusAssign_operation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GGS_string (".stringValue = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (extractedValue_3076_t_0.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 102)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 102)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 102)) ;
              result_outResult.plusAssign_operation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 103)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)).add_operation (GGS_string (".isEditable = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 103)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 103)) ;
              result_outResult.plusAssign_operation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 104)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)).add_operation (GGS_string (".drawsBackground = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 104)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 104)) ;
              result_outResult.plusAssign_operation(GGS_string ("    tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 105)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)).add_operation (GGS_string (".isBordered = false\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 105)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 105)) ;
              result_outResult.plusAssign_operation(GGS_string ("    view.addSubview (tf").add_operation (var_idx_2876.getter_string (SOURCE_FILE ("main-xib.ggs", 106)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 106)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 106)) ;
            }
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_3804_outletType_0 ;
              GGS_lstring extractedValue_3816_outletName_1 ;
              enumerator_3011.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_3804_outletType_0, extractedValue_3816_outletName_1) ;
              result_outResult.plusAssign_operation(GGS_string ("  //--- Outlet ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 108)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 108)) ;
              result_outResult.plusAssign_operation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string (" = "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (extractedValue_3804_outletType_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string ("(frame:NSRect (x:10.0 + OUTLET_WIDTH * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (var_column_2943.getter_string (SOURCE_FILE ("main-xib.ggs", 109)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)).add_operation (GGS_string (".0, y:y, width:OUTLET_WIDTH, height:OUTLET_HEIGHT))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 109)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 109)) ;
              result_outResult.plusAssign_operation(GGS_string ("    ").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GGS_string ("\?.setAccessibilityIdentifier ("), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (extractedValue_3816_outletName_1.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("main-xib.ggs", 110)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 110)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 110)) ;
              result_outResult.plusAssign_operation(GGS_string ("    view.addSubview (").add_operation (extractedValue_3816_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)).add_operation (GGS_string ("!)\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 111)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 111)) ;
            }
            break ;
          }
          var_column_2943.plusAssign_operation(GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 113)) ;
          enumerator_3011.gotoNextObject () ;
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::greaterThan, var_column_2943.objectCompare (var_columnMax_2892)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            var_columnMax_2892 = var_column_2943 ;
          }
        }
        result_outResult.plusAssign_operation(GGS_string ("    y -= OUTLET_HEIGHT / 2.0\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 118)) ;
        enumerator_2915.gotoNextObject () ;
      }
      result_outResult.plusAssign_operation(GGS_string ("  //--- Set pref window content view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 120)) ;
      const GGS_mainXibDescriptorList temp_5 = inObject ;
      result_outResult.plusAssign_operation(GGS_string ("    window\?.setContentSize (NSSize (width:20.0 + OUTLET_WIDTH * ").add_operation (var_columnMax_2892.getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GGS_string (".0, height:OUTLET_HEIGHT * (1.5 * "), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (temp_5.getter_count (SOURCE_FILE ("main-xib.ggs", 121)).getter_string (SOURCE_FILE ("main-xib.ggs", 121)), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)).add_operation (GGS_string (".0 + 0.5)))\n"), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 121)), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 121)) ;
      result_outResult.plusAssign_operation(GGS_string ("    window\?.contentView = view\n"), inCompiler  COMMA_SOURCE_FILE ("main-xib.ggs", 122)) ;
    }
  }
//---
  return result_outResult ;
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

GGS_enumFunAssociationSortedList_2E_element GGS_enumFunAssociationSortedList_2E_element::class_func_new (const GGS_uint & in_mIndex,
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_enumFunAssociationSortedList_2E_element ("enumFunAssociationSortedList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_enumFunAssociationSortedList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_entityListForGeneratingEBManagedObjectContext_2E_element ("entityListForGeneratingEBManagedObjectContext.element",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_entityListForGeneratingEBManagedObjectContext_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutOutletLinkerGenerationList_2E_element ("autoLayoutOutletLinkerGenerationList.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutOutletLinkerGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding ("optionalHiddenBinding.binding",
                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionalHiddenBinding_2E_binding::staticTypeDescriptor (void) const {
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
//
//Optional @optionalHiddenBinding_2E_binding_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_optionalHiddenBinding_2E_binding_3F_ ("optionalHiddenBinding.binding?",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_optionalHiddenBinding_2E_binding_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string ("astAutoLayoutViewInstructionParameterValue.string",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string::staticTypeDescriptor (void) const {
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
//
//Optional @astAutoLayoutViewInstructionParameterValue_2E_string_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ ("astAutoLayoutViewInstructionParameterValue.string?",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem ("astAutoLayoutViewInstructionParameterValue.menuItem",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem::staticTypeDescriptor (void) const {
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
//
//Optional @astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ ("astAutoLayoutViewInstructionParameterValue.menuItem?",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc ("astAutoLayoutViewInstructionParameterValue.viewFunc",
                                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc::staticTypeDescriptor (void) const {
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
//
//Optional @astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ ("astAutoLayoutViewInstructionParameterValue.viewFunc?",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_astViewInstructionList_2E_element ("astViewInstructionList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_astViewInstructionList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_implicitViewFunctionGenerationList_2E_element ("implicitViewFunctionGenerationList.element",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_implicitViewFunctionGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_viewGenerationList_2E_element ("viewGenerationList.element",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_viewGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList_2E_element ("autoLayoutRegularBindingsGenerationList.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutRegularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList_2E_element ("autoLayoutMultipleBindingGenerationList.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutMultipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run ("autolayoutRunBindingForGeneration.run",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autolayoutRunBindingForGeneration_2E_run::staticTypeDescriptor (void) const {
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
//
//Optional @autolayoutRunBindingForGeneration_2E_run_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration_2E_run_3F_ ("autolayoutRunBindingForGeneration.run?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autolayoutRunBindingForGeneration_2E_run_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding ("autoLayoutViewGraphicControllerBindingGeneration.binding",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding::staticTypeDescriptor (void) const {
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
//
//Optional @autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ ("autoLayoutViewGraphicControllerBindingGeneration.binding?",
                                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled ("autolayoutEnabledBindingForGeneration.enabled",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled::staticTypeDescriptor (void) const {
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
//
//Optional @autolayoutEnabledBindingForGeneration_2E_enabled_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ ("autolayoutEnabledBindingForGeneration.enabled?",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList_2E_element ("autoLayoutViewInstructionGenerationParameterList.element",
                                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewInstructionGenerationParameterList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList_2E_element ("autoLayoutViewInstructionGenerationFuncCallList.element",
                                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element::staticTypeDescriptor (void) const {
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

GGS_autoLayoutViewInstructionGenerationList_2E_element GGS_autoLayoutViewInstructionGenerationList_2E_element::class_func_new (const GGS_abstractViewInstructionGeneration & in_mInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mInstruction = in_mInstruction ;
  return result ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList_2E_element ("autoLayoutViewInstructionGenerationList.element",
                                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutViewInstructionGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModelList_2E_element ("outletBindingSpecificationModelList.element",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingSpecificationModelList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_outletBindingModelList_2E_element ("outletBindingModelList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_outletBindingModelList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_tableViewBindingGenerationList_2E_element ("tableViewBindingGenerationList.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_tableViewBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_ebViewGraphicControllerBindingGenerationList_2E_element ("ebViewGraphicControllerBindingGenerationList.element",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_ebViewGraphicControllerBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_boundObjectList_2E_element ("boundObjectList.element",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_boundObjectList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_regularBindingsGenerationList_2E_element ("regularBindingsGenerationList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_regularBindingsGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_actionBindingListForGeneration_2E_element ("actionBindingListForGeneration.element",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_actionBindingListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty ("observablePropertyAST.selfWithoutProperty",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfWithoutProperty::staticTypeDescriptor (void) const {
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
//
//Optional @observablePropertyAST_2E_selfWithoutProperty_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_selfWithoutProperty_3F_ ("observablePropertyAST.selfWithoutProperty?",
                                                                                                        nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_selfWithoutProperty_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty ("observablePropertyAST.signatureProperty",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_signatureProperty::staticTypeDescriptor (void) const {
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
//
//Optional @observablePropertyAST_2E_signatureProperty_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_signatureProperty_3F_ ("observablePropertyAST.signatureProperty?",
                                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_signatureProperty_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty ("observablePropertyAST.versionProperty",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_versionProperty::staticTypeDescriptor (void) const {
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
//
//Optional @observablePropertyAST_2E_versionProperty_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionProperty_3F_ ("observablePropertyAST.versionProperty?",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_versionProperty_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty ("observablePropertyAST.versionShouldChangeProperty",
                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_versionShouldChangeProperty::staticTypeDescriptor (void) const {
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
//
//Optional @observablePropertyAST_2E_versionShouldChangeProperty_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyAST_2E_versionShouldChangeProperty_3F_ ("observablePropertyAST.versionShouldChangeProperty?",
                                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyAST_2E_versionShouldChangeProperty_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_observablePropertyList_2E_element ("observablePropertyList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_observablePropertyList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientPropertyGenerationList_2E_element ("transientPropertyGenerationList.element",
                                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
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
mProperty_mDefaultValueAsString () {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_transientDependencyListForGeneration_2E_element & inSource) :
mProperty_mDependency (inSource.mProperty_mDependency),
mProperty_mFunctionArgumentName (inSource.mProperty_mFunctionArgumentName),
mProperty_mFunctionArgumentTypeString (inSource.mProperty_mFunctionArgumentTypeString),
mProperty_mDefaultValueAsString (inSource.mProperty_mDefaultValueAsString) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element & GGS_transientDependencyListForGeneration_2E_element::operator = (const GGS_transientDependencyListForGeneration_2E_element & inSource) {
  mProperty_mDependency = inSource.mProperty_mDependency ;
  mProperty_mFunctionArgumentName = inSource.mProperty_mFunctionArgumentName ;
  mProperty_mFunctionArgumentTypeString = inSource.mProperty_mFunctionArgumentTypeString ;
  mProperty_mDefaultValueAsString = inSource.mProperty_mDefaultValueAsString ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::init_21__21__21__21_ (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                               const GGS_string & in_mFunctionArgumentName,
                                                                                                                               const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                               const GGS_string & in_mDefaultValueAsString,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDependency = in_mDependency ;
  result.mProperty_mFunctionArgumentName = in_mFunctionArgumentName ;
  result.mProperty_mFunctionArgumentTypeString = in_mFunctionArgumentTypeString ;
  result.mProperty_mDefaultValueAsString = in_mDefaultValueAsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element::GGS_transientDependencyListForGeneration_2E_element (const GGS_observablePropertyAST & inOperand0,
                                                                                                          const GGS_string & inOperand1,
                                                                                                          const GGS_string & inOperand2,
                                                                                                          const GGS_string & inOperand3) :
mProperty_mDependency (inOperand0),
mProperty_mFunctionArgumentName (inOperand1),
mProperty_mFunctionArgumentTypeString (inOperand2),
mProperty_mDefaultValueAsString (inOperand3) {
}

//--------------------------------------------------------------------------------------------------

GGS_transientDependencyListForGeneration_2E_element GGS_transientDependencyListForGeneration_2E_element::class_func_new (const GGS_observablePropertyAST & in_mDependency,
                                                                                                                         const GGS_string & in_mFunctionArgumentName,
                                                                                                                         const GGS_string & in_mFunctionArgumentTypeString,
                                                                                                                         const GGS_string & in_mDefaultValueAsString,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_transientDependencyListForGeneration_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mDependency = in_mDependency ;
  result.mProperty_mFunctionArgumentName = in_mFunctionArgumentName ;
  result.mProperty_mFunctionArgumentTypeString = in_mFunctionArgumentTypeString ;
  result.mProperty_mDefaultValueAsString = in_mDefaultValueAsString ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_transientDependencyListForGeneration_2E_element::isValid (void) const {
  return mProperty_mDependency.isValid () && mProperty_mFunctionArgumentName.isValid () && mProperty_mFunctionArgumentTypeString.isValid () && mProperty_mDefaultValueAsString.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_transientDependencyListForGeneration_2E_element::drop (void) {
  mProperty_mDependency.drop () ;
  mProperty_mFunctionArgumentName.drop () ;
  mProperty_mFunctionArgumentTypeString.drop () ;
  mProperty_mDefaultValueAsString.drop () ;
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
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @transientDependencyListForGeneration.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_transientDependencyListForGeneration_2E_element ("transientDependencyListForGeneration.element",
                                                                                                       nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_transientDependencyListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyProxyGenerationList_2E_element ("toManyProxyGenerationList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicProxyGenerationList_2E_element ("atomicProxyGenerationList.element",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicProxyGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_atomicPropertyGenerationList_2E_element ("atomicPropertyGenerationList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_atomicPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite ("toManyRelationshipOptionGeneration.hasOpposite",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite::staticTypeDescriptor (void) const {
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
//
//Optional @toManyRelationshipOptionGeneration_2E_hasOpposite_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_ ("toManyRelationshipOptionGeneration.hasOpposite?",
                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionGeneration_2E_hasOpposite_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance ("toManyRelationshipOptionGeneration.hasDependance",
                                                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionGeneration_2E_hasDependance::staticTypeDescriptor (void) const {
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
//
//Optional @toManyRelationshipOptionGeneration_2E_hasDependance_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_ ("toManyRelationshipOptionGeneration.hasDependance?",
                                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyRelationshipOptionGeneration_2E_hasDependance_3F_::staticTypeDescriptor (void) const {
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

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (void) :
mProperty_mProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGenerationList_2E_element & inSource) :
mProperty_mProperty (inSource.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element & GGS_toManyPropertyGenerationList_2E_element::operator = (const GGS_toManyPropertyGenerationList_2E_element & inSource) {
  mProperty_mProperty = inSource.mProperty_mProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element GGS_toManyPropertyGenerationList_2E_element::init_21_ (const GGS_toManyPropertyGeneration & in_mProperty,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element::GGS_toManyPropertyGenerationList_2E_element (const GGS_toManyPropertyGeneration & inOperand0) :
mProperty_mProperty (inOperand0) {
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element GGS_toManyPropertyGenerationList_2E_element::class_func_new (const GGS_toManyPropertyGeneration & in_mProperty,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList_2E_element result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mProperty = in_mProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_toManyPropertyGenerationList_2E_element::isValid (void) const {
  return mProperty_mProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::drop (void) {
  mProperty_mProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_toManyPropertyGenerationList_2E_element::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @toManyPropertyGenerationList.element:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @toManyPropertyGenerationList.element generic code implementation
//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ("toManyPropertyGenerationList.element",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_toManyPropertyGenerationList_2E_element::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toManyPropertyGenerationList_2E_element ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toManyPropertyGenerationList_2E_element::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toManyPropertyGenerationList_2E_element (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toManyPropertyGenerationList_2E_element GGS_toManyPropertyGenerationList_2E_element::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_toManyPropertyGenerationList_2E_element result ;
  const GGS_toManyPropertyGenerationList_2E_element * p = (const GGS_toManyPropertyGenerationList_2E_element *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toManyPropertyGenerationList_2E_element *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toManyPropertyGenerationList.element", p->dynamicTypeDescriptor () COMMA_THERE) ;
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_validationStubRoutineListForGeneration_2E_element ("validationStubRoutineListForGeneration.element",
                                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_validationStubRoutineListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding ("multipleBindingDescriptor.binding",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_multipleBindingDescriptor_2E_binding::staticTypeDescriptor (void) const {
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
//
//Optional @multipleBindingDescriptor_2E_binding_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor_2E_binding_3F_ ("multipleBindingDescriptor.binding?",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_multipleBindingDescriptor_2E_binding_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_multipleBindingGenerationList_2E_element ("multipleBindingGenerationList.element",
                                                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_multipleBindingGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element ("autoLayoutTableViewControllerBoundColumnListForGeneration.element",
                                                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerBoundColumnListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element ("autoLayoutTableViewControllerSortedColumnListForGeneration.element",
                                                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_autoLayoutTableViewControllerSortedColumnListForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_selectionControllerForGeneration_2E_element ("selectionControllerForGeneration.element",
                                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_selectionControllerForGeneration_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKindList_2E_element ("typeKindList.element",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKindList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_atomic ("classKind.atomic",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_atomic::staticTypeDescriptor (void) const {
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
//
//Optional @classKind_2E_atomic_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_atomic_3F_ ("classKind.atomic?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_atomic_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_entity ("classKind.entity",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_entity::staticTypeDescriptor (void) const {
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
//
//Optional @classKind_2E_entity_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_classKind_2E_entity_3F_ ("classKind.entity?",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_classKind_2E_entity_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyGenerationList_2E_element ("propertyGenerationList.element",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyGenerationList_2E_element::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient ("propertyAccessibility.transient",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessibility_2E_transient::staticTypeDescriptor (void) const {
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
//
//Optional @propertyAccessibility_2E_transient_3F_
//
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_propertyAccessibility_2E_transient_3F_ ("propertyAccessibility.transient?",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_propertyAccessibility_2E_transient_3F_::staticTypeDescriptor (void) const {
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

const C_galgas_type_descriptor kTypeDescriptor_GALGAS_typeKind_2E_enumType ("typeKind.enumType",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const C_galgas_type_descriptor * GGS_typeKind_2E_enumType::staticTypeDescriptor (void) const {
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

