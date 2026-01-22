#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-4.h"

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
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (extractedValue_7025_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 189)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_7143_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_7143_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (extractedValue_7143_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 191)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_7263_propertyName_0 ;
      GGS_lstring extractedValue_7286_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_7263_propertyName_0, extractedValue_7286_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7263_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (extractedValue_7286_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 193)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_7443_relationshipName_0 ;
      GGS_lstring extractedValue_7461__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_7443_relationshipName_0, extractedValue_7461__1) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("rootObject."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (extractedValue_7443_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 195)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_7566__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_7566__0) ;
      result_outResult = constinArgument_inSelf.add_operation (GGS_string ("objectIndex"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 197)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_7640_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_7640_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7640_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 199)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_7748_propertyName_0 ;
      GGS_lstring extractedValue_7771_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_7748_propertyName_0, extractedValue_7771_optionName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7748_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (extractedValue_7771_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 201)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_7905_propertyName_0 ;
      GGS_lstring extractedValue_7935_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_7905_propertyName_0, extractedValue_7935_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_7905_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 203)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_8046_propertyName_0 ;
      GGS_lstring extractedValue_8069_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_8046_propertyName_0, extractedValue_8069_elementPropertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8046_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GGS_string ("_property."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (extractedValue_8069_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 205)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_8215_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_8215_propertyName_0) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8215_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 207)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_8310_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_8310_propertyName_0) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8310_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 209)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_8427_propertyName_0 ;
      GGS_lstring extractedValue_8450_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_8427_propertyName_0, extractedValue_8450_optionName_1) ;
      result_outResult = GGS_string ("preferences_").add_operation (extractedValue_8427_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (extractedValue_8450_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 211)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_8597_controllerName_0 ;
      GGS_lstring extractedValue_8622_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_8597_controllerName_0, extractedValue_8622_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8597_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (extractedValue_8622_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 213)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_8762_controllerName_0 ;
      GGS_lstring extractedValue_8787_propertyName_1 ;
      GGS_lstring extractedValue_8810_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_8762_controllerName_0, extractedValue_8787_propertyName_1, extractedValue_8810_secondaryPropertyName_2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8762_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8787_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (extractedValue_8810_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 215)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_8999_controllerName_0 ;
      GGS_lstring extractedValue_9024_propertyName_1 ;
      GGS_lstring extractedValue_9038__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_8999_controllerName_0, extractedValue_9024_propertyName_1, extractedValue_9038__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_8999_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (extractedValue_9024_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 217)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_9161_controllerName_0 ;
      GGS_lstring extractedValue_9186_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_9161_controllerName_0, extractedValue_9186_propertyName_1) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9161_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (extractedValue_9186_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 219)) ;
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
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9570_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 227)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_9676__0 ;
      GGS_lstring extractedValue_9688_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_9702__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_9676__0, extractedValue_9688_propertyName_1, extractedValue_9702__2) ;
      result_outResult = constinArgument_inSelf.add_operation (extractedValue_9688_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 229)) ;
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
      result_outResult = GGS_string ("root_").add_operation (extractedValue_9997_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 238)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_10087_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_10087_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10087_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 240)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_10192_propertyName_0 ;
      GGS_lstring extractedValue_10215_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_10192_propertyName_0, extractedValue_10215_optionName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10192_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)).add_operation (extractedValue_10215_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 242)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_10329_relationshipName_0 ;
      GGS_lstring extractedValue_10356_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_10329_relationshipName_0, extractedValue_10356_elementPropertyName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10329_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)).add_operation (extractedValue_10356_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 244)) ;
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
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10544_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 248)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_10639_propertyName_0 ;
      GGS_lstring extractedValue_10662_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_10639_propertyName_0, extractedValue_10662_optionName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10639_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)).add_operation (extractedValue_10662_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 250)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_10769_propertyName_0 ;
      GGS_lstring extractedValue_10792_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_10769_propertyName_0, extractedValue_10792_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10769_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)).add_operation (extractedValue_10792_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 252)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_10918_propertyName_0 ;
      GGS_lstring extractedValue_10941_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_10918_propertyName_0, extractedValue_10941_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10918_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)).add_operation (extractedValue_10941_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 254)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_11065_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_11065_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11065_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 256)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_11161_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_11161_propertyName_0) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11161_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 258)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_11258_propertyName_0 ;
      GGS_lstring extractedValue_11281_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_11258_propertyName_0, extractedValue_11281_optionName_1) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11258_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)).add_operation (extractedValue_11281_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 260)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_11394_controllerName_0 ;
      GGS_lstring extractedValue_11419_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_11394_controllerName_0, extractedValue_11419_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11394_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)).add_operation (extractedValue_11419_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 262)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_11546_controllerName_0 ;
      GGS_lstring extractedValue_11571_propertyName_1 ;
      GGS_lstring extractedValue_11594_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_11546_controllerName_0, extractedValue_11571_propertyName_1, extractedValue_11594_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11546_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11571_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)).add_operation (extractedValue_11594_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 264)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_11756_controllerName_0 ;
      GGS_lstring extractedValue_11781_propertyName_1 ;
      GGS_lstring extractedValue_11804_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_11756_controllerName_0, extractedValue_11781_propertyName_1, extractedValue_11804_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11756_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11781_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (GGS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)).add_operation (extractedValue_11804_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 266)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_11968_controllerName_0 ;
      GGS_lstring extractedValue_11993_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_11968_controllerName_0, extractedValue_11993_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11968_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (extractedValue_11993_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)).add_operation (GGS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 268)) ;
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
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12349_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)).add_operation (extractedValue_12375_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 276)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_12501_superEntityName_0 ;
      GGS_lstring extractedValue_12527_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_12541__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_12501_superEntityName_0, extractedValue_12527_propertyName_1, extractedValue_12541__2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12501_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)).add_operation (extractedValue_12527_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 278)) ;
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
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 297)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_13187__0 ;
      GGS_lstring extractedValue_13187__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_13187__0, extractedValue_13187__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 299)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_13253__0 ;
      GGS_lstring extractedValue_13253__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_13253__0, extractedValue_13253__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 301)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_13320__0 ;
      GGS_lstring extractedValue_13320__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_13320__0, extractedValue_13320__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 303)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_13384__0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_13384__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.ggs", 305)) ;
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
      GGS_typeKind var_type_17107 = GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 393)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17107, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 394))  COMMA_SOURCE_FILE ("observable-property.ggs", 394)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17107, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 395)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_17316__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_17316__0) ;
      GGS_typeKind var_type_17329 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 397)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17329, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 398))  COMMA_SOURCE_FILE ("observable-property.ggs", 398)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17329, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 399)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_17543__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_17543__0) ;
      GGS_typeKind var_type_17556 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 401)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17556, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 402))  COMMA_SOURCE_FILE ("observable-property.ggs", 402)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17556, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 403)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_17774_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_17774_propertyName_0) ;
      GGS_actionMap joker_17866_2 ; // Joker input parameter
      GGS_bool joker_17866_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17774_propertyName_0, outArgument_outKind, joker_17866_2, joker_17866_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 405)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 410)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_17985_relationshipName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_17985_relationshipName_0) ;
      GGS_propertyKind var_kind_18061 ;
      GGS_actionMap joker_18067_2 ; // Joker input parameter
      GGS_bool joker_18067_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17985_relationshipName_0, var_kind_18061, joker_18067_2, joker_18067_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 412)) ;
      switch (var_kind_18061.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18108__0 ;
          GGS_propertyAccessibility extractedValue_18108__1 ;
          var_kind_18061.getAssociatedValuesFor_property (extractedValue_18108__0, extractedValue_18108__1) ;
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.ggs", 415)) ;
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
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("an array property does not accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.ggs", 417)) ;
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
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 419)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 419))  COMMA_SOURCE_FILE ("observable-property.ggs", 419)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_18452__0 ;
          GGS_bool extractedValue_18452__1 ;
          var_kind_18061.getAssociatedValuesFor_arrayController (extractedValue_18452__0, extractedValue_18452__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.ggs", 421)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_18579__0 ;
          var_kind_18061.getAssociatedValuesFor_selectionController (extractedValue_18579__0) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_17985_relationshipName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.ggs", 423)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 425)) ;
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
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_18802_propertyName_0, var_kind_18904, joker_18916_2, joker_18916_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 427)) ;
      switch (var_kind_18904.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18962__0 ;
          GGS_propertyAccessibility extractedValue_18962__1 ;
          var_kind_18904.getAssociatedValuesFor_property (extractedValue_18962__0, extractedValue_18962__1) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.ggs", 434)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 437)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 437))  COMMA_SOURCE_FILE ("observable-property.ggs", 437)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_18825_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.ggs", 439)) ;
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
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.ggs", 442)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 445)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 445))  COMMA_SOURCE_FILE ("observable-property.ggs", 445)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, extractedValue_18825_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 447)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 447))  COMMA_SOURCE_FILE ("observable-property.ggs", 447)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_18825_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.ggs", 449)) ;
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
          inCompiler->emitSemanticError (extractedValue_18802_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.ggs", 452)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 454)) ;
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
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_20110_relationshipName_0, var_kind_20229, joker_20235_2, joker_20235_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 456)) ;
      switch (var_kind_20229.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_20276__0 ;
          GGS_propertyAccessibility extractedValue_20276__1 ;
          var_kind_20229.getAssociatedValuesFor_property (extractedValue_20276__0, extractedValue_20276__1) ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.ggs", 459)) ;
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
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_20380_typeName_0.readProperty_string (), extractedValue_20110_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE), joker_20487, var_observablePropertyMap_20496, joker_20519_2, joker_20519_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 461)) ;
          GGS_actionMap joker_20587_2 ; // Joker input parameter
          GGS_bool joker_20587_1 ; // Joker input parameter
          var_observablePropertyMap_20496.method_searchKey (extractedValue_20137_propertyName_1, outArgument_outKind, joker_20587_2, joker_20587_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 462)) ;
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
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.ggs", 464)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_20729__0 ;
          GGS_bool extractedValue_20729__1 ;
          var_kind_20229.getAssociatedValuesFor_arrayController (extractedValue_20729__0, extractedValue_20729__1) ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.ggs", 466)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_20855__0 ;
          var_kind_20229.getAssociatedValuesFor_selectionController (extractedValue_20855__0) ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_20110_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.ggs", 468)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_20229, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)).add_operation (extractedValue_20137_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 470)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_20229, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 471)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 471)).add_operation (extractedValue_20137_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 471)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_21173_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_21173_propertyName_0) ;
      GGS_actionMap joker_21270_2 ; // Joker input parameter
      GGS_bool joker_21270_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_21173_propertyName_0, outArgument_outKind, joker_21270_2, joker_21270_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 473)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_21319__0 ;
          GGS_propertyAccessibility extractedValue_21319__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_21319__0, extractedValue_21319__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 480)) ;
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
          inCompiler->emitSemanticError (extractedValue_21173_propertyName_0.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.ggs", 486)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_21768__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_21768__0) ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_21173_propertyName_0.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.ggs", 488)) ;
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
      outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 492)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 492))  COMMA_SOURCE_FILE ("observable-property.ggs", 492)) ;
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
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_22134_propertyName_0, var_kind_22241, joker_22253_2, joker_22253_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 494)) ;
      switch (var_kind_22241.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_22299__0 ;
          GGS_propertyAccessibility extractedValue_22299__1 ;
          var_kind_22241.getAssociatedValuesFor_property (extractedValue_22299__0, extractedValue_22299__1) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.ggs", 501)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 504)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 504))  COMMA_SOURCE_FILE ("observable-property.ggs", 504)) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_22157_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.ggs", 506)) ;
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
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.ggs", 509)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 512)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 512))  COMMA_SOURCE_FILE ("observable-property.ggs", 512)) ;
            }
          }
          if (GalgasBool::boolFalse == test_23) {
            GalgasBool test_24 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_24) {
              test_24 = GGS_bool (ComparisonKind::equal, extractedValue_22157_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 514)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 514))  COMMA_SOURCE_FILE ("observable-property.ggs", 514)) ;
              }
            }
            if (GalgasBool::boolFalse == test_24) {
              GenericArray <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_22157_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.ggs", 516)) ;
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
          inCompiler->emitSemanticError (extractedValue_22134_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.ggs", 519)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 521)) ;
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
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_23421_propertyName_0, var_kind_23557, joker_23569_2, joker_23569_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 523)) ;
      switch (var_kind_23557.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_23615__0 ;
          GGS_propertyAccessibility extractedValue_23615__1 ;
          var_kind_23557.getAssociatedValuesFor_property (extractedValue_23615__0, extractedValue_23615__1) ;
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.ggs", 530)) ;
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
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_23719_typeName_0, joker_23790, var_observablePropertyMap_23799, joker_23822_2, joker_23822_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 532)) ;
          GGS_actionMap joker_23921_2 ; // Joker input parameter
          GGS_bool joker_23921_1 ; // Joker input parameter
          var_observablePropertyMap_23799.method_searchKey (extractedValue_23444_elementPropertyName_1, outArgument_outKind, joker_23921_2, joker_23921_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 533)) ;
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
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.ggs", 539)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_24062__0 ;
          GGS_bool extractedValue_24062__1 ;
          var_kind_23557.getAssociatedValuesFor_arrayController (extractedValue_24062__0, extractedValue_24062__1) ;
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("an array controller accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.ggs", 541)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_24180__0 ;
          var_kind_23557.getAssociatedValuesFor_selectionController (extractedValue_24180__0) ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_23421_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.ggs", 543)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_23557, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 545)), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 545)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 545)).add_operation (extractedValue_23444_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 546)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 546)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_23557, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 547)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 547)).add_operation (extractedValue_23444_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 547)) ;
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
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_24520_propertyName_0, var_kind_24656, joker_24668_2, joker_24668_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 549)) ;
      switch (var_kind_24656.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_24714__0 ;
          GGS_propertyAccessibility extractedValue_24714__1 ;
          var_kind_24656.getAssociatedValuesFor_property (extractedValue_24714__0, extractedValue_24714__1) ;
          GenericArray <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'one'"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.ggs", 556)) ;
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
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'one'"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.ggs", 558)) ;
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
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_24928_typeName_0, joker_24999, var_observablePropertyMap_25008, joker_25031_2, joker_25031_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 560)) ;
          GGS_actionMap joker_25130_2 ; // Joker input parameter
          GGS_bool joker_25130_1 ; // Joker input parameter
          var_observablePropertyMap_25008.method_searchKey (extractedValue_24543_elementPropertyName_1, outArgument_outKind, joker_25130_2, joker_25130_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 561)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_25169__0 ;
          GGS_bool extractedValue_25169__1 ;
          var_kind_24656.getAssociatedValuesFor_arrayController (extractedValue_25169__0, extractedValue_25169__1) ;
          GenericArray <FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.ggs", 567)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_25291__0 ;
          var_kind_24656.getAssociatedValuesFor_selectionController (extractedValue_25291__0) ;
          GenericArray <FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_24520_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.ggs", 569)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 571)).add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 571)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_25509_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_25509_propertyName_0) ;
      GGS_propertyKind var_kind_25612 ;
      GGS_actionMap joker_25624_2 ; // Joker input parameter
      GGS_bool joker_25624_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_25509_propertyName_0, var_kind_25612, joker_25624_2, joker_25624_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 573)) ;
      switch (var_kind_25612.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_25670__0 ;
          GGS_propertyAccessibility extractedValue_25670__1 ;
          var_kind_25612.getAssociatedValuesFor_property (extractedValue_25670__0, extractedValue_25670__1) ;
          GenericArray <FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'none'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.ggs", 580)) ;
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
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'none'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.ggs", 582)) ;
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
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 584)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 584))  COMMA_SOURCE_FILE ("observable-property.ggs", 584)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_26013__0 ;
          GGS_bool extractedValue_26013__1 ;
          var_kind_25612.getAssociatedValuesFor_arrayController (extractedValue_26013__0, extractedValue_26013__1) ;
          GenericArray <FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.ggs", 586)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_26136__0 ;
          var_kind_25612.getAssociatedValuesFor_selectionController (extractedValue_26136__0) ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_25509_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.ggs", 588)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 590)) ;
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
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 592)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 592)), inCompiler COMMA_HERE), joker_26438, var_observablePropertyMap_26447, joker_26470_2, joker_26470_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 592)) ;
      GGS_actionMap joker_26554_2 ; // Joker input parameter
      GGS_bool joker_26554_1 ; // Joker input parameter
      var_observablePropertyMap_26447.method_searchKey (extractedValue_26346_propertyName_0, outArgument_outKind, joker_26554_2, joker_26554_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 593)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 598)) ;
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
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 600)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 600)), inCompiler COMMA_HERE), joker_26793, var_observablePropertyMap_26802, joker_26825_2, joker_26825_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 600)) ;
      GGS_propertyKind var_kind_26898 ;
      GGS_actionMap joker_26910_2 ; // Joker input parameter
      GGS_bool joker_26910_1 ; // Joker input parameter
      var_observablePropertyMap_26802.method_searchKey (extractedValue_26680_propertyName_0, var_kind_26898, joker_26910_2, joker_26910_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 601)) ;
      switch (var_kind_26898.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_26956__0 ;
          GGS_propertyAccessibility extractedValue_26956__1 ;
          var_kind_26898.getAssociatedValuesFor_property (extractedValue_26956__0, extractedValue_26956__1) ;
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.ggs", 608)) ;
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
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.ggs", 610)) ;
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
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.ggs", 612)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 615)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 615))  COMMA_SOURCE_FILE ("observable-property.ggs", 615)) ;
            }
          }
          if (GalgasBool::boolFalse == test_42) {
            GalgasBool test_43 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_43) {
              test_43 = GGS_bool (ComparisonKind::equal, extractedValue_26703_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_43) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.ggs", 617)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 617))  COMMA_SOURCE_FILE ("observable-property.ggs", 617)) ;
              }
            }
            if (GalgasBool::boolFalse == test_43) {
              GenericArray <FixItDescription> fixItArray44 ;
              inCompiler->emitSemanticError (extractedValue_26703_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray44  COMMA_SOURCE_FILE ("observable-property.ggs", 619)) ;
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
          inCompiler->emitSemanticError (extractedValue_26680_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray45  COMMA_SOURCE_FILE ("observable-property.ggs", 622)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 624)) ;
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
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_27948_controllerName_0, var_propertyKind_28075, joker_28095_2, joker_28095_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 626)) ;
      switch (var_propertyKind_28075.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_28149__0 ;
          GGS_propertyAccessibility extractedValue_28149__1 ;
          var_propertyKind_28075.getAssociatedValuesFor_property (extractedValue_28149__0, extractedValue_28149__1) ;
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.ggs", 633)) ;
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
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.ggs", 635)) ;
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
          inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.ggs", 637)) ;
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
              outArgument_outKind = GGS_propertyKind::class_func_toMany (extractedValue_28487_typeName_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 642)), extractedValue_28497_graphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("observable-property.ggs", 644))  COMMA_SOURCE_FILE ("observable-property.ggs", 640)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GenericArray <FixItDescription> fixItArray51 ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
            inCompiler->emitSemanticError (extractedValue_27973_propertyName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray51  COMMA_SOURCE_FILE ("observable-property.ggs", 647)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_29043_entityName_0 ;
          var_propertyKind_28075.getAssociatedValuesFor_selectionController (extractedValue_29043_entityName_0) ;
          GGS_propertyMap var_observablePropertyMap_29176 ;
          GGS_classKind joker_29159 ; // Joker input parameter
          GGS_actionMap joker_29207_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_29207_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_29043_entityName_0, extractedValue_27948_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_29159, var_observablePropertyMap_29176, joker_29207_2, joker_29207_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 653)) ;
          GGS_actionMap joker_29282_2 ; // Joker input parameter
          GGS_bool joker_29282_1 ; // Joker input parameter
          var_observablePropertyMap_29176.method_searchKey (extractedValue_27973_propertyName_1, outArgument_outKind, joker_29282_2, joker_29282_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 659)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 661)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_29419_controllerName_0 ;
      GGS_lstring extractedValue_29444_propertyName_1 ;
      GGS_lstring extractedValue_29467_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_29419_controllerName_0, extractedValue_29444_propertyName_1, extractedValue_29467_secondaryPropertyName_2) ;
      GGS_propertyKind joker_29547_3 ; // Joker input parameter
      GGS_actionMap joker_29547_2 ; // Joker input parameter
      GGS_bool joker_29547_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_29419_controllerName_0, joker_29547_3, joker_29547_2, joker_29547_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 663)) ;
      GalgasBool test_52 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_52) {
        GGS_bool test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29444_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
        if (GalgasBool::boolTrue == test_53.boolEnum ()) {
          test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29467_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
        }
        test_52 = test_53.boolEnum () ;
        if (GalgasBool::boolTrue == test_52) {
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 665)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 665))  COMMA_SOURCE_FILE ("observable-property.ggs", 665)) ;
        }
      }
      if (GalgasBool::boolFalse == test_52) {
        GalgasBool test_54 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_54) {
          GGS_bool test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29444_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
          if (GalgasBool::boolTrue == test_55.boolEnum ()) {
            test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29467_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
          }
          test_54 = test_55.boolEnum () ;
          if (GalgasBool::boolTrue == test_54) {
            outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 667)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 667))  COMMA_SOURCE_FILE ("observable-property.ggs", 667)) ;
          }
        }
        if (GalgasBool::boolFalse == test_54) {
          GenericArray <FixItDescription> fixItArray56 ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_29444_propertyName_1.readProperty_location (), GGS_string ("unknown option"), fixItArray56  COMMA_SOURCE_FILE ("observable-property.ggs", 669)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 671)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_30201_controllerName_0 ;
      GGS_lstring extractedValue_30226_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_30201_controllerName_0, extractedValue_30226_propertyName_1) ;
      GGS_propertyKind var_propertyKind_30316 ;
      GGS_actionMap joker_30330_2 ; // Joker input parameter
      GGS_bool joker_30330_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_30201_controllerName_0, var_propertyKind_30316, joker_30330_2, joker_30330_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 673)) ;
      GGS_string var_controllerTypeName_30351 = GGS_string::makeEmptyString () ;
      switch (var_propertyKind_30316.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_30426__0 ;
          GGS_bool extractedValue_30426__1 ;
          var_propertyKind_30316.getAssociatedValuesFor_arrayController (extractedValue_30426__0, extractedValue_30426__1) ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (extractedValue_30201_controllerName_0.readProperty_location (), GGS_string ("an array controller does not support 'one'"), fixItArray57  COMMA_SOURCE_FILE ("observable-property.ggs", 677)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_30535__0 ;
          var_propertyKind_30316.getAssociatedValuesFor_selectionController (extractedValue_30535__0) ;
          GenericArray <FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_30201_controllerName_0.readProperty_location (), GGS_string ("a selection controller does not support 'one'"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.ggs", 679)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_30637__0 ;
          GGS_propertyAccessibility extractedValue_30637__1 ;
          var_propertyKind_30316.getAssociatedValuesFor_property (extractedValue_30637__0, extractedValue_30637__1) ;
          GenericArray <FixItDescription> fixItArray59 ;
          inCompiler->emitSemanticError (extractedValue_30201_controllerName_0.readProperty_location (), GGS_string ("a property does not support 'one'"), fixItArray59  COMMA_SOURCE_FILE ("observable-property.ggs", 681)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_30725__0 ;
          GGS_propertyAccessibility extractedValue_30725__1 ;
          GGS_bool extractedValue_30725__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_30725__3 ;
          var_propertyKind_30316.getAssociatedValuesFor_toMany (extractedValue_30725__0, extractedValue_30725__1, extractedValue_30725__2, extractedValue_30725__3) ;
          GenericArray <FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (extractedValue_30201_controllerName_0.readProperty_location (), GGS_string ("a toMany relationship does not support 'one'"), fixItArray60  COMMA_SOURCE_FILE ("observable-property.ggs", 683)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_30823__0 ;
          GGS_propertyAccessibility extractedValue_30823__1 ;
          GGS_bool extractedValue_30823__2 ;
          GGS_toOneOppositeRelationship extractedValue_30823__3 ;
          GGS_bool extractedValue_30823__4 ;
          var_propertyKind_30316.getAssociatedValuesFor_toOne (extractedValue_30823__0, extractedValue_30823__1, extractedValue_30823__2, extractedValue_30823__3, extractedValue_30823__4) ;
          GenericArray <FixItDescription> fixItArray61 ;
          inCompiler->emitSemanticError (extractedValue_30201_controllerName_0.readProperty_location (), GGS_string ("a toOne relationship does not support 'one'"), fixItArray61  COMMA_SOURCE_FILE ("observable-property.ggs", 685)) ;
        }
        break ;
      }
      GGS_propertyMap var_observablePropertyMap_31030 ;
      GGS_classKind joker_31015 ; // Joker input parameter
      GGS_actionMap joker_31059_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_31059_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (var_controllerTypeName_30351, extractedValue_30201_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_31015, var_observablePropertyMap_31030, joker_31059_2, joker_31059_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 687)) ;
      GGS_actionMap joker_31129_2 ; // Joker input parameter
      GGS_bool joker_31129_1 ; // Joker input parameter
      var_observablePropertyMap_31030.method_searchKey (extractedValue_30226_propertyName_1, outArgument_outKind, joker_31129_2, joker_31129_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 693)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = var_controllerTypeName_30351.add_operation (GGS_string ("\?<<8>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 694)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_31262_controllerName_0 ;
      GGS_lstring extractedValue_31287_propertyName_1 ;
      GGS_lstring extractedValue_31310_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_31262_controllerName_0, extractedValue_31287_propertyName_1, extractedValue_31310_secondaryPropertyName_2) ;
      GGS_propertyKind var_propertyKind_31409 ;
      GGS_actionMap joker_31423_2 ; // Joker input parameter
      GGS_bool joker_31423_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_31262_controllerName_0, var_propertyKind_31409, joker_31423_2, joker_31423_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 696)) ;
      GalgasBool test_62 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_62) {
        test_62 = GGS_bool (ComparisonKind::notEqual, extractedValue_31287_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_62) {
          GenericArray <FixItDescription> fixItArray63 ;
          appendFixItActions (fixItArray63, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_31287_propertyName_1.readProperty_location (), GGS_string ("unknown property"), fixItArray63  COMMA_SOURCE_FILE ("observable-property.ggs", 698)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_62) {
        outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.ggs", 702)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.ggs", 702))  COMMA_SOURCE_FILE ("observable-property.ggs", 702)) ;
        switch (var_propertyKind_31409.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_31796__0 ;
            GGS_propertyAccessibility extractedValue_31796__1 ;
            var_propertyKind_31409.getAssociatedValuesFor_property (extractedValue_31796__0, extractedValue_31796__1) ;
            GenericArray <FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (extractedValue_31287_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray64  COMMA_SOURCE_FILE ("observable-property.ggs", 705)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_31974__0 ;
            GGS_propertyAccessibility extractedValue_31974__1 ;
            GGS_bool extractedValue_31974__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_31974__3 ;
            var_propertyKind_31409.getAssociatedValuesFor_toMany (extractedValue_31974__0, extractedValue_31974__1, extractedValue_31974__2, extractedValue_31974__3) ;
            GenericArray <FixItDescription> fixItArray65 ;
            inCompiler->emitSemanticError (extractedValue_31287_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray65  COMMA_SOURCE_FILE ("observable-property.ggs", 709)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_32157__0 ;
            GGS_propertyAccessibility extractedValue_32157__1 ;
            GGS_bool extractedValue_32157__2 ;
            GGS_toOneOppositeRelationship extractedValue_32157__3 ;
            GGS_bool extractedValue_32157__4 ;
            var_propertyKind_31409.getAssociatedValuesFor_toOne (extractedValue_32157__0, extractedValue_32157__1, extractedValue_32157__2, extractedValue_32157__3, extractedValue_32157__4) ;
            GenericArray <FixItDescription> fixItArray66 ;
            inCompiler->emitSemanticError (extractedValue_31287_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray66  COMMA_SOURCE_FILE ("observable-property.ggs", 713)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_32349_typeName_0 ;
            GGS_bool extractedValue_32359__1 ;
            var_propertyKind_31409.getAssociatedValuesFor_arrayController (extractedValue_32349_typeName_0, extractedValue_32359__1) ;
            GGS_propertyMap var_observablePropertyMap_32490 ;
            GGS_classKind joker_32471 ; // Joker input parameter
            GGS_actionMap joker_32523_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_32523_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32349_typeName_0.readProperty_string (), extractedValue_31262_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32471, var_observablePropertyMap_32490, joker_32523_2, joker_32523_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 717)) ;
            GGS_actionMap joker_32610_2 ; // Joker input parameter
            GGS_bool joker_32610_1 ; // Joker input parameter
            var_observablePropertyMap_32490.method_searchKey (extractedValue_31310_secondaryPropertyName_2, outArgument_outKind, joker_32610_2, joker_32610_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 723)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32349_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 724)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 724)).add_operation (extractedValue_31310_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 724)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 724)) ;
            outArgument_outProtocolTypeString = extractedValue_32349_typeName_0.readProperty_string ().add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 725)).add_operation (extractedValue_31310_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 725)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_32844_entityName_0 ;
            var_propertyKind_31409.getAssociatedValuesFor_selectionController (extractedValue_32844_entityName_0) ;
            GGS_propertyMap var_observablePropertyMap_32985 ;
            GGS_classKind joker_32966 ; // Joker input parameter
            GGS_actionMap joker_33018_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_33018_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32844_entityName_0, extractedValue_31262_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32966, var_observablePropertyMap_32985, joker_33018_2, joker_33018_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 727)) ;
            GGS_actionMap joker_33106_2 ; // Joker input parameter
            GGS_bool joker_33106_1 ; // Joker input parameter
            var_observablePropertyMap_32985.method_searchKey (extractedValue_31310_secondaryPropertyName_2, outArgument_outKind, joker_33106_2, joker_33106_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 733)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32844_entityName_0, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (extractedValue_31310_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 734)) ;
            outArgument_outProtocolTypeString = extractedValue_32844_entityName_0.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 735)).add_operation (extractedValue_31310_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 735)) ;
          }
          break ;
        }
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_33344__0 ;
      GGS_lstring extractedValue_33356_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_33344__0, extractedValue_33356_propertyName_1) ;
      GGS_actionMap joker_33453_2 ; // Joker input parameter
      GGS_bool joker_33453_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_33356_propertyName_1, outArgument_outKind, joker_33453_2, joker_33453_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 739)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_33502__0 ;
          GGS_propertyAccessibility extractedValue_33502__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_33502__0, extractedValue_33502__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 746)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_33602__0 ;
          GGS_propertyAccessibility extractedValue_33602__1 ;
          GGS_bool extractedValue_33602__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_33602__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_33602__0, extractedValue_33602__1, extractedValue_33602__2, extractedValue_33602__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_33693__0 ;
          GGS_propertyAccessibility extractedValue_33693__1 ;
          GGS_bool extractedValue_33693__2 ;
          GGS_toOneOppositeRelationship extractedValue_33693__3 ;
          GGS_bool extractedValue_33693__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_33693__0, extractedValue_33693__1, extractedValue_33693__2, extractedValue_33693__3, extractedValue_33693__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_33793__0 ;
          GGS_bool extractedValue_33793__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_33793__0, extractedValue_33793__1) ;
          GenericArray <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (extractedValue_33356_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray67  COMMA_SOURCE_FILE ("observable-property.ggs", 752)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_33951__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_33951__0) ;
          GenericArray <FixItDescription> fixItArray68 ;
          inCompiler->emitSemanticError (extractedValue_33356_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray68  COMMA_SOURCE_FILE ("observable-property.ggs", 754)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_34128__0 ;
      GGS_lstring extractedValue_34140_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_34154_defaultValue_2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_34128__0, extractedValue_34140_propertyName_1, extractedValue_34154_defaultValue_2) ;
      GGS_actionMap joker_34251_2 ; // Joker input parameter
      GGS_bool joker_34251_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_34140_propertyName_1, outArgument_outKind, joker_34251_2, joker_34251_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 757)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_34299_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_34313__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_34299_propertyType_0, extractedValue_34313__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 764)) ;
          GGS_propertyMap var_preferencesPropertyMap_34482 ;
          GGS_classKind joker_34473 ; // Joker input parameter
          GGS_actionMap joker_34506_2 ; // Joker input parameter
          GGS_propertyGenerationList joker_34506_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 765)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.ggs", 765)), inCompiler COMMA_HERE), joker_34473, var_preferencesPropertyMap_34482, joker_34506_2, joker_34506_1, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 765)) ;
          GGS_typeKindList temp_69 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 767)) ;
          temp_69.plusPlusAssignOperation (GGS_typeKindList_2E_element::init_21_ (extractedValue_34299_propertyType_0, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("observable-property.ggs", 767)) ;
          callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) extractedValue_34154_defaultValue_2.ptr (), temp_69, var_preferencesPropertyMap_34482, outArgument_outDefaultValue, inCompiler COMMA_SOURCE_FILE ("observable-property.ggs", 766)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_34666__0 ;
          GGS_propertyAccessibility extractedValue_34666__1 ;
          GGS_bool extractedValue_34666__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_34666__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_34666__0, extractedValue_34666__1, extractedValue_34666__2, extractedValue_34666__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_34757__0 ;
          GGS_propertyAccessibility extractedValue_34757__1 ;
          GGS_bool extractedValue_34757__2 ;
          GGS_toOneOppositeRelationship extractedValue_34757__3 ;
          GGS_bool extractedValue_34757__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_34757__0, extractedValue_34757__1, extractedValue_34757__2, extractedValue_34757__3, extractedValue_34757__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_34857__0 ;
          GGS_bool extractedValue_34857__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_34857__0, extractedValue_34857__1) ;
          GenericArray <FixItDescription> fixItArray70 ;
          inCompiler->emitSemanticError (extractedValue_34140_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray70  COMMA_SOURCE_FILE ("observable-property.ggs", 776)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_35015__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_35015__0) ;
          GenericArray <FixItDescription> fixItArray71 ;
          inCompiler->emitSemanticError (extractedValue_34140_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray71  COMMA_SOURCE_FILE ("observable-property.ggs", 778)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  }
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

GGS_toOneRelationshipAST_2E_weak::GGS_toOneRelationshipAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOneRelationshipAST_2E_weak & GGS_toOneRelationshipAST_2E_weak::operator = (const GGS_toOneRelationshipAST & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
// @toOnePropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOnePropertyGeneration::objectCompare (const GGS_toOnePropertyGeneration & inOperand) const {
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

GGS_toOnePropertyGeneration::GGS_toOnePropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration::
init_21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                  const GGS_string & in_mClassName,
                                  const GGS_propertyKind & in_mRelationshipType,
                                  const GGS_toOneOppositeRelationship & in_mOpposite,
                                  const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                  const GGS_bool & in_mUsedForSignature,
                                  const GGS_bool & in_mStrongRef,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) {
  cPtr_toOnePropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_toOnePropertyGeneration (inCompiler COMMA_THERE)) ;
  object->toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (in_mPropertyName, in_mClassName, in_mRelationshipType, in_mOpposite, in_mDestinationEntityObservablePropertyMap, in_mUsedForSignature, in_mStrongRef, inCompiler) ;
  const GGS_toOnePropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_toOnePropertyGeneration::
toOnePropertyGeneration_init_21__21__21__21__21__21__21_ (const GGS_string & in_mPropertyName,
                                                          const GGS_string & in_mClassName,
                                                          const GGS_propertyKind & in_mRelationshipType,
                                                          const GGS_toOneOppositeRelationship & in_mOpposite,
                                                          const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                          const GGS_bool & in_mUsedForSignature,
                                                          const GGS_bool & in_mStrongRef,
                                                          Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration::GGS_toOnePropertyGeneration (const cPtr_toOnePropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_toOnePropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_toOnePropertyGeneration::readProperty_mClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyKind GGS_toOnePropertyGeneration::readProperty_mRelationshipType (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyKind () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mRelationshipType ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_toOneOppositeRelationship GGS_toOnePropertyGeneration::readProperty_mOpposite (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_toOneOppositeRelationship () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mOpposite ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_propertyMap GGS_toOnePropertyGeneration::readProperty_mDestinationEntityObservablePropertyMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_propertyMap () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mDestinationEntityObservablePropertyMap ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOnePropertyGeneration::readProperty_mUsedForSignature (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mUsedForSignature ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_toOnePropertyGeneration::readProperty_mStrongRef (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_toOnePropertyGeneration * p = (cPtr_toOnePropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_toOnePropertyGeneration) ;
    return p->mProperty_mStrongRef ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @toOnePropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
}

//--------------------------------------------------------------------------------------------------

cPtr_toOnePropertyGeneration::cPtr_toOnePropertyGeneration (const GGS_string & in_mPropertyName,
                                                            const GGS_string & in_mClassName,
                                                            const GGS_propertyKind & in_mRelationshipType,
                                                            const GGS_toOneOppositeRelationship & in_mOpposite,
                                                            const GGS_propertyMap & in_mDestinationEntityObservablePropertyMap,
                                                            const GGS_bool & in_mUsedForSignature,
                                                            const GGS_bool & in_mStrongRef,
                                                            Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mClassName (),
mProperty_mRelationshipType (),
mProperty_mOpposite (),
mProperty_mDestinationEntityObservablePropertyMap (),
mProperty_mUsedForSignature (),
mProperty_mStrongRef () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mClassName = in_mClassName ;
  mProperty_mRelationshipType = in_mRelationshipType ;
  mProperty_mOpposite = in_mOpposite ;
  mProperty_mDestinationEntityObservablePropertyMap = in_mDestinationEntityObservablePropertyMap ;
  mProperty_mUsedForSignature = in_mUsedForSignature ;
  mProperty_mStrongRef = in_mStrongRef ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_toOnePropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

void cPtr_toOnePropertyGeneration::description (String & ioString,
                                                const int32_t inIndentation) const {
  ioString.appendCString ("[@toOnePropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mRelationshipType.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOpposite.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mDestinationEntityObservablePropertyMap.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUsedForSignature.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mStrongRef.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_toOnePropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_toOnePropertyGeneration (mProperty_mPropertyName, mProperty_mClassName, mProperty_mRelationshipType, mProperty_mOpposite, mProperty_mDestinationEntityObservablePropertyMap, mProperty_mUsedForSignature, mProperty_mStrongRef, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_toOnePropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mClassName.printNonNullClassInstanceProperties ("mClassName") ;
    mProperty_mRelationshipType.printNonNullClassInstanceProperties ("mRelationshipType") ;
    mProperty_mOpposite.printNonNullClassInstanceProperties ("mOpposite") ;
    mProperty_mDestinationEntityObservablePropertyMap.printNonNullClassInstanceProperties ("mDestinationEntityObservablePropertyMap") ;
    mProperty_mUsedForSignature.printNonNullClassInstanceProperties ("mUsedForSignature") ;
    mProperty_mStrongRef.printNonNullClassInstanceProperties ("mStrongRef") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @toOnePropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_toOnePropertyGeneration ("toOnePropertyGeneration",
                                                                            & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_toOnePropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_toOnePropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_toOnePropertyGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_toOnePropertyGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration GGS_toOnePropertyGeneration::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_toOnePropertyGeneration result ;
  const GGS_toOnePropertyGeneration * p = (const GGS_toOnePropertyGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_toOnePropertyGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("toOnePropertyGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_toOnePropertyGeneration_2E_weak::objectCompare (const GGS_toOnePropertyGeneration_2E_weak & inOperand) const {
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

GGS_toOnePropertyGeneration_2E_weak::GGS_toOnePropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGeneration_2E_weak & GGS_toOnePropertyGeneration_2E_weak::operator = (const GGS_toOnePropertyGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_toOnePropertyGenerationList : public cCollectionElement {
  public: GGS_toOnePropertyGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                          COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGeneration & in_mProperty
                                                                                                COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mProperty) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_toOnePropertyGenerationList::cCollectionElement_toOnePropertyGenerationList (const GGS_toOnePropertyGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mProperty) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_toOnePropertyGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_toOnePropertyGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_toOnePropertyGenerationList (mObject.mProperty_mProperty COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @toOnePropertyGenerationList
//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_toOnePropertyGenerationList::GGS_toOnePropertyGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_toOnePropertyGenerationList * p = (cCollectionElement_toOnePropertyGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_toOnePropertyGenerationList) ;
    const GGS_toOnePropertyGenerationList_2E_element element (p->mObject.mProperty_mProperty) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_toOnePropertyGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                 const GGS_toOnePropertyGeneration & in_mProperty
                                                                 COMMA_LOCATION_ARGS) {
  cCollectionElement_toOnePropertyGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_toOnePropertyGenerationList (in_mProperty COMMA_THERE)) ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

GGS_astAbstractViewDeclaration_2E_weak::GGS_astAbstractViewDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewDeclaration_2E_weak & GGS_astAbstractViewDeclaration_2E_weak::operator = (const GGS_astAbstractViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

class cCollectionElement_astAutoLayoutViewFunctionCallList : public cCollectionElement {
  public: GGS_astAutoLayoutViewFunctionCallList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astAutoLayoutViewFunctionCallList (const GGS_lstring & in_mFunctionName,
                                                                const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GGS_lstring & in_mFunctionName,
                                                                                                            const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                                                            COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astAutoLayoutViewFunctionCallList::cCollectionElement_astAutoLayoutViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameterList) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astAutoLayoutViewFunctionCallList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astAutoLayoutViewFunctionCallList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astAutoLayoutViewFunctionCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameterList COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astAutoLayoutViewFunctionCallList
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList::GGS_astAutoLayoutViewFunctionCallList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList::GGS_astAutoLayoutViewFunctionCallList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astAutoLayoutViewFunctionCallList * p = (cCollectionElement_astAutoLayoutViewFunctionCallList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astAutoLayoutViewFunctionCallList) ;
    const GGS_astAutoLayoutViewFunctionCallList_2E_element element (p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mParameterList) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewFunctionCallList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                       const GGS_lstring & in_mFunctionName,
                                                                       const GGS_astAutoLayoutViewInstructionParameterList & in_mParameterList
                                                                       COMMA_LOCATION_ARGS) {
  cCollectionElement_astAutoLayoutViewFunctionCallList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astAutoLayoutViewFunctionCallList (in_mFunctionName, in_mParameterList COMMA_THERE)) ;
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

class cCollectionElement_astViewInstructionList : public cCollectionElement {
  public: GGS_astViewInstructionList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astViewInstructionList (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                     COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astViewInstructionList (const GGS_astViewInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astViewInstructionList::cCollectionElement_astViewInstructionList (const GGS_astViewInstructionList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astViewInstructionList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astViewInstructionList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astViewInstructionList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astViewInstructionList
//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList::GGS_astViewInstructionList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList::GGS_astViewInstructionList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astViewInstructionList * p = (cCollectionElement_astViewInstructionList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astViewInstructionList) ;
    const GGS_astViewInstructionList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astViewInstructionList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                            const GGS_astAbstractViewInstructionDeclaration & in_mInstruction
                                                            COMMA_LOCATION_ARGS) {
  cCollectionElement_astViewInstructionList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astViewInstructionList (in_mInstruction COMMA_THERE)) ;
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

class cCollectionElement_astNewStackViewDeclarationList : public cCollectionElement {
  public: GGS_astNewStackViewDeclarationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_astNewStackViewDeclarationList (const GGS_lstring & in_mInstanciedStackViewName,
                                                             const GGS_lstring & in_mTypeStackViewName
                                                             COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_astNewStackViewDeclarationList::cCollectionElement_astNewStackViewDeclarationList (const GGS_lstring & in_mInstanciedStackViewName,
                                                                                                      const GGS_lstring & in_mTypeStackViewName
                                                                                                      COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstanciedStackViewName, in_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_astNewStackViewDeclarationList::cCollectionElement_astNewStackViewDeclarationList (const GGS_astNewStackViewDeclarationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstanciedStackViewName, inElement.mProperty_mTypeStackViewName) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_astNewStackViewDeclarationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_astNewStackViewDeclarationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_astNewStackViewDeclarationList (mObject.mProperty_mInstanciedStackViewName, mObject.mProperty_mTypeStackViewName COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @astNewStackViewDeclarationList
//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList::GGS_astNewStackViewDeclarationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList::GGS_astNewStackViewDeclarationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_astNewStackViewDeclarationList * p = (cCollectionElement_astNewStackViewDeclarationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_astNewStackViewDeclarationList) ;
    const GGS_astNewStackViewDeclarationList_2E_element element (p->mObject.mProperty_mInstanciedStackViewName, p->mObject.mProperty_mTypeStackViewName) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astNewStackViewDeclarationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                    const GGS_lstring & in_mInstanciedStackViewName,
                                                                    const GGS_lstring & in_mTypeStackViewName
                                                                    COMMA_LOCATION_ARGS) {
  cCollectionElement_astNewStackViewDeclarationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_astNewStackViewDeclarationList (in_mInstanciedStackViewName, in_mTypeStackViewName COMMA_THERE)) ;
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

GGS_astComputedHorizontalViewDeclaration_2E_weak::GGS_astComputedHorizontalViewDeclaration_2E_weak (void) :
GGS_astAbstractViewDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedHorizontalViewDeclaration_2E_weak & GGS_astComputedHorizontalViewDeclaration_2E_weak::operator = (const GGS_astComputedHorizontalViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

GGS_astComputedVerticalViewDeclaration_2E_weak::GGS_astComputedVerticalViewDeclaration_2E_weak (void) :
GGS_astAbstractViewDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedVerticalViewDeclaration_2E_weak & GGS_astComputedVerticalViewDeclaration_2E_weak::operator = (const GGS_astComputedVerticalViewDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
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

GGS_astAbstractViewInstructionDeclaration_2E_weak::GGS_astAbstractViewInstructionDeclaration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_astAbstractViewInstructionDeclaration_2E_weak & GGS_astAbstractViewInstructionDeclaration_2E_weak::operator = (const GGS_astAbstractViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
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
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
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

acPtr_class * cPtr_astSeparatorInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
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

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSeparatorInstructionDeclaration_2E_weak::objectCompare (const GGS_astSeparatorInstructionDeclaration_2E_weak & inOperand) const {
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

GGS_astSeparatorInstructionDeclaration_2E_weak::GGS_astSeparatorInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak & GGS_astSeparatorInstructionDeclaration_2E_weak::operator = (const GGS_astSeparatorInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak::GGS_astSeparatorInstructionDeclaration_2E_weak (const GGS_astSeparatorInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak GGS_astSeparatorInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astSeparatorInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astSeparatorInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astSeparatorInstructionDeclaration * p = (cPtr_astSeparatorInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astSeparatorInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration GGS_astSeparatorInstructionDeclaration_2E_weak::bang_astSeparatorInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astSeparatorInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSeparatorInstructionDeclaration) ;
      result = GGS_astSeparatorInstructionDeclaration ((cPtr_astSeparatorInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astSeparatorInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ("astSeparatorInstructionDeclaration.weak",
                                                                                               & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSeparatorInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSeparatorInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSeparatorInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSeparatorInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSeparatorInstructionDeclaration_2E_weak GGS_astSeparatorInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astSeparatorInstructionDeclaration_2E_weak result ;
  const GGS_astSeparatorInstructionDeclaration_2E_weak * p = (const GGS_astSeparatorInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSeparatorInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSeparatorInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astGutterInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astGutterInstructionDeclaration::objectCompare (const GGS_astGutterInstructionDeclaration & inOperand) const {
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

GGS_astGutterInstructionDeclaration::GGS_astGutterInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_astGutterInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astGutterInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astGutterInstructionDeclaration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_astGutterInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astGutterInstructionDeclaration::
astGutterInstructionDeclaration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                    Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration::GGS_astGutterInstructionDeclaration (const cPtr_astGutterInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astGutterInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astGutterInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astGutterInstructionDeclaration * p = (cPtr_astGutterInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astGutterInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astGutterInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astGutterInstructionDeclaration::cPtr_astGutterInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astGutterInstructionDeclaration::cPtr_astGutterInstructionDeclaration (const GGS_bool & in_horizontal,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astGutterInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;
}

void cPtr_astGutterInstructionDeclaration::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("[@astGutterInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astGutterInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astGutterInstructionDeclaration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astGutterInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astGutterInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ("astGutterInstructionDeclaration",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astGutterInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astGutterInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astGutterInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration result ;
  const GGS_astGutterInstructionDeclaration * p = (const GGS_astGutterInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astGutterInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astGutterInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astGutterInstructionDeclaration_2E_weak::objectCompare (const GGS_astGutterInstructionDeclaration_2E_weak & inOperand) const {
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

GGS_astGutterInstructionDeclaration_2E_weak::GGS_astGutterInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak & GGS_astGutterInstructionDeclaration_2E_weak::operator = (const GGS_astGutterInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak::GGS_astGutterInstructionDeclaration_2E_weak (const GGS_astGutterInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak GGS_astGutterInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astGutterInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astGutterInstructionDeclaration * p = (cPtr_astGutterInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astGutterInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration GGS_astGutterInstructionDeclaration_2E_weak::bang_astGutterInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astGutterInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astGutterInstructionDeclaration) ;
      result = GGS_astGutterInstructionDeclaration ((cPtr_astGutterInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astGutterInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ("astGutterInstructionDeclaration.weak",
                                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astGutterInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astGutterInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astGutterInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astGutterInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astGutterInstructionDeclaration_2E_weak GGS_astGutterInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astGutterInstructionDeclaration_2E_weak result ;
  const GGS_astGutterInstructionDeclaration_2E_weak * p = (const GGS_astGutterInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astGutterInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astGutterInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astDividerInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astDividerInstructionDeclaration::objectCompare (const GGS_astDividerInstructionDeclaration & inOperand) const {
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

GGS_astDividerInstructionDeclaration::GGS_astDividerInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_astDividerInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astDividerInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astDividerInstructionDeclaration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_astDividerInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astDividerInstructionDeclaration::
astDividerInstructionDeclaration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                     Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration::GGS_astDividerInstructionDeclaration (const cPtr_astDividerInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astDividerInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astDividerInstructionDeclaration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_astDividerInstructionDeclaration * p = (cPtr_astDividerInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astDividerInstructionDeclaration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astDividerInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astDividerInstructionDeclaration::cPtr_astDividerInstructionDeclaration (const GGS_bool & in_horizontal,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astDividerInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

void cPtr_astDividerInstructionDeclaration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("[@astDividerInstructionDeclaration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astDividerInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astDividerInstructionDeclaration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astDividerInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astDividerInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ("astDividerInstructionDeclaration",
                                                                                     & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astDividerInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astDividerInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astDividerInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration result ;
  const GGS_astDividerInstructionDeclaration * p = (const GGS_astDividerInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astDividerInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astDividerInstructionDeclaration_2E_weak::objectCompare (const GGS_astDividerInstructionDeclaration_2E_weak & inOperand) const {
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

GGS_astDividerInstructionDeclaration_2E_weak::GGS_astDividerInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak & GGS_astDividerInstructionDeclaration_2E_weak::operator = (const GGS_astDividerInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak::GGS_astDividerInstructionDeclaration_2E_weak (const GGS_astDividerInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak GGS_astDividerInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astDividerInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astDividerInstructionDeclaration * p = (cPtr_astDividerInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astDividerInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration GGS_astDividerInstructionDeclaration_2E_weak::bang_astDividerInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astDividerInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astDividerInstructionDeclaration) ;
      result = GGS_astDividerInstructionDeclaration ((cPtr_astDividerInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astDividerInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ("astDividerInstructionDeclaration.weak",
                                                                                             & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astDividerInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDividerInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astDividerInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astDividerInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDividerInstructionDeclaration_2E_weak GGS_astDividerInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_astDividerInstructionDeclaration_2E_weak result ;
  const GGS_astDividerInstructionDeclaration_2E_weak * p = (const GGS_astDividerInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astDividerInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astDividerInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum optionalHiddenBinding
//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding::GGS_optionalHiddenBinding (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  result.mEnum = Enumeration::enum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::class_func_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_optionalHiddenBinding_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::method_extractBinding (GGS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue_hidden,
                                                       Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_hidden.drop () ;
    String s ;
    s.appendCString ("method @optionalHiddenBinding.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_hidden = ptr->mProperty_hidden ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding_2E_binding_3F_ GGS_optionalHiddenBinding::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_optionalHiddenBinding_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_optionalHiddenBinding_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::getAssociatedValuesFor_binding (GGS_abstractBooleanMultipleBindingExpressionAST & out_hidden) const {
  const auto ptr = (const GGS_optionalHiddenBinding_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_hidden = ptr->mProperty_hidden ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_optionalHiddenBinding [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalHiddenBinding::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_optionalHiddenBinding::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_optionalHiddenBinding::description (String & ioString,
                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @optionalHiddenBinding: ") ;
  ioString.appendCString (gEnumNameArrayFor_optionalHiddenBinding [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @optionalHiddenBinding generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_optionalHiddenBinding ("optionalHiddenBinding",
                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_optionalHiddenBinding::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_optionalHiddenBinding ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_optionalHiddenBinding::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_optionalHiddenBinding (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_optionalHiddenBinding::extractObject (const GGS_object & inObject,
                                                                    Compiler * inCompiler
                                                                    COMMA_LOCATION_ARGS) {
  GGS_optionalHiddenBinding result ;
  const GGS_optionalHiddenBinding * p = (const GGS_optionalHiddenBinding *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_optionalHiddenBinding *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("optionalHiddenBinding", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astHStackViewInstructionDeclaration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astHStackViewInstructionDeclaration::objectCompare (const GGS_astHStackViewInstructionDeclaration & inOperand) const {
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

GGS_astHStackViewInstructionDeclaration::GGS_astHStackViewInstructionDeclaration (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration::
init_21__21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                      const GGS_astViewInstructionList & in_mInstructionList,
                      const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                      const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                      Compiler * inCompiler
                      COMMA_LOCATION_ARGS) {
  cPtr_astHStackViewInstructionDeclaration * object = nullptr ;
  macroMyNew (object, cPtr_astHStackViewInstructionDeclaration (inCompiler COMMA_THERE)) ;
  object->astHStackViewInstructionDeclaration_init_21__21__21__21_ (in_mFunctionCallList, in_mInstructionList, in_mOptionalHiddenBinding, in_mAstNewStackViewDeclarationList, inCompiler) ;
  const GGS_astHStackViewInstructionDeclaration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astHStackViewInstructionDeclaration::
astHStackViewInstructionDeclaration_init_21__21__21__21_ (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                          const GGS_astViewInstructionList & in_mInstructionList,
                                                          const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                          const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                          Compiler * /* inCompiler */) {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration::GGS_astHStackViewInstructionDeclaration (const cPtr_astHStackViewInstructionDeclaration * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astHStackViewInstructionDeclaration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionCallList GGS_astHStackViewInstructionDeclaration::readProperty_mFunctionCallList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionCallList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mFunctionCallList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astViewInstructionList GGS_astHStackViewInstructionDeclaration::readProperty_mInstructionList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astViewInstructionList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mInstructionList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_optionalHiddenBinding GGS_astHStackViewInstructionDeclaration::readProperty_mOptionalHiddenBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_optionalHiddenBinding () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mOptionalHiddenBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astNewStackViewDeclarationList GGS_astHStackViewInstructionDeclaration::readProperty_mAstNewStackViewDeclarationList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astNewStackViewDeclarationList () ;
  }else{
    cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_astHStackViewInstructionDeclaration) ;
    return p->mProperty_mAstNewStackViewDeclarationList ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @astHStackViewInstructionDeclaration class
//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
}

//--------------------------------------------------------------------------------------------------

cPtr_astHStackViewInstructionDeclaration::cPtr_astHStackViewInstructionDeclaration (const GGS_astAutoLayoutViewFunctionCallList & in_mFunctionCallList,
                                                                                    const GGS_astViewInstructionList & in_mInstructionList,
                                                                                    const GGS_optionalHiddenBinding & in_mOptionalHiddenBinding,
                                                                                    const GGS_astNewStackViewDeclarationList & in_mAstNewStackViewDeclarationList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE),
mProperty_mFunctionCallList (),
mProperty_mInstructionList (),
mProperty_mOptionalHiddenBinding (),
mProperty_mAstNewStackViewDeclarationList () {
  mProperty_mFunctionCallList = in_mFunctionCallList ;
  mProperty_mInstructionList = in_mInstructionList ;
  mProperty_mOptionalHiddenBinding = in_mOptionalHiddenBinding ;
  mProperty_mAstNewStackViewDeclarationList = in_mAstNewStackViewDeclarationList ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astHStackViewInstructionDeclaration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

void cPtr_astHStackViewInstructionDeclaration::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("[@astHStackViewInstructionDeclaration:") ;
  mProperty_mFunctionCallList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mInstructionList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOptionalHiddenBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAstNewStackViewDeclarationList.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astHStackViewInstructionDeclaration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astHStackViewInstructionDeclaration (mProperty_mFunctionCallList, mProperty_mInstructionList, mProperty_mOptionalHiddenBinding, mProperty_mAstNewStackViewDeclarationList, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astHStackViewInstructionDeclaration::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
    mProperty_mFunctionCallList.printNonNullClassInstanceProperties ("mFunctionCallList") ;
    mProperty_mInstructionList.printNonNullClassInstanceProperties ("mInstructionList") ;
    mProperty_mOptionalHiddenBinding.printNonNullClassInstanceProperties ("mOptionalHiddenBinding") ;
    mProperty_mAstNewStackViewDeclarationList.printNonNullClassInstanceProperties ("mAstNewStackViewDeclarationList") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astHStackViewInstructionDeclaration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ("astHStackViewInstructionDeclaration",
                                                                                        & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astHStackViewInstructionDeclaration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astHStackViewInstructionDeclaration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astHStackViewInstructionDeclaration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration::extractObject (const GGS_object & inObject,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration result ;
  const GGS_astHStackViewInstructionDeclaration * p = (const GGS_astHStackViewInstructionDeclaration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astHStackViewInstructionDeclaration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astHStackViewInstructionDeclaration_2E_weak::objectCompare (const GGS_astHStackViewInstructionDeclaration_2E_weak & inOperand) const {
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

GGS_astHStackViewInstructionDeclaration_2E_weak::GGS_astHStackViewInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak & GGS_astHStackViewInstructionDeclaration_2E_weak::operator = (const GGS_astHStackViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak::GGS_astHStackViewInstructionDeclaration_2E_weak (const GGS_astHStackViewInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak GGS_astHStackViewInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astHStackViewInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astHStackViewInstructionDeclaration * p = (cPtr_astHStackViewInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astHStackViewInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration GGS_astHStackViewInstructionDeclaration_2E_weak::bang_astHStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astHStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astHStackViewInstructionDeclaration) ;
      result = GGS_astHStackViewInstructionDeclaration ((cPtr_astHStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astHStackViewInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ("astHStackViewInstructionDeclaration.weak",
                                                                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astHStackViewInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astHStackViewInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astHStackViewInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astHStackViewInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astHStackViewInstructionDeclaration_2E_weak GGS_astHStackViewInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astHStackViewInstructionDeclaration_2E_weak result ;
  const GGS_astHStackViewInstructionDeclaration_2E_weak * p = (const GGS_astHStackViewInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astHStackViewInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astHStackViewInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astVStackViewInstructionDeclaration_2E_weak::objectCompare (const GGS_astVStackViewInstructionDeclaration_2E_weak & inOperand) const {
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

GGS_astVStackViewInstructionDeclaration_2E_weak::GGS_astVStackViewInstructionDeclaration_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak & GGS_astVStackViewInstructionDeclaration_2E_weak::operator = (const GGS_astVStackViewInstructionDeclaration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak::GGS_astVStackViewInstructionDeclaration_2E_weak (const GGS_astVStackViewInstructionDeclaration & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak GGS_astVStackViewInstructionDeclaration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration_2E_weak::unwrappedValue (void) const {
  GGS_astVStackViewInstructionDeclaration result ;
  if (isValid ()) {
    const cPtr_astVStackViewInstructionDeclaration * p = (cPtr_astVStackViewInstructionDeclaration *) ptr () ;
    if (nullptr != p) {
      result = GGS_astVStackViewInstructionDeclaration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration GGS_astVStackViewInstructionDeclaration_2E_weak::bang_astVStackViewInstructionDeclaration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astVStackViewInstructionDeclaration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astVStackViewInstructionDeclaration) ;
      result = GGS_astVStackViewInstructionDeclaration ((cPtr_astVStackViewInstructionDeclaration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astVStackViewInstructionDeclaration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ("astVStackViewInstructionDeclaration.weak",
                                                                                                & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astVStackViewInstructionDeclaration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astVStackViewInstructionDeclaration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astVStackViewInstructionDeclaration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astVStackViewInstructionDeclaration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astVStackViewInstructionDeclaration_2E_weak GGS_astVStackViewInstructionDeclaration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) {
  GGS_astVStackViewInstructionDeclaration_2E_weak result ;
  const GGS_astVStackViewInstructionDeclaration_2E_weak * p = (const GGS_astVStackViewInstructionDeclaration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astVStackViewInstructionDeclaration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astVStackViewInstructionDeclaration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @astSpaceViewInstruction reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSpaceViewInstruction::objectCompare (const GGS_astSpaceViewInstruction & inOperand) const {
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

GGS_astSpaceViewInstruction::GGS_astSpaceViewInstruction (void) :
GGS_astAbstractViewInstructionDeclaration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_astSpaceViewInstruction * object = nullptr ;
  macroMyNew (object, cPtr_astSpaceViewInstruction (inCompiler COMMA_THERE)) ;
  object->astSpaceViewInstruction_init (inCompiler) ;
  const GGS_astSpaceViewInstruction result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_astSpaceViewInstruction::
astSpaceViewInstruction_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction::GGS_astSpaceViewInstruction (const cPtr_astSpaceViewInstruction * inSourcePtr) :
GGS_astAbstractViewInstructionDeclaration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_astSpaceViewInstruction) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @astSpaceViewInstruction class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_astSpaceViewInstruction::cPtr_astSpaceViewInstruction (Compiler * inCompiler
                                                            COMMA_LOCATION_ARGS) :
cPtr_astAbstractViewInstructionDeclaration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_astSpaceViewInstruction::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

void cPtr_astSpaceViewInstruction::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@astSpaceViewInstruction]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_astSpaceViewInstruction::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_astSpaceViewInstruction (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_astSpaceViewInstruction::printNonNullClassInstanceProperties (void) const {
    cPtr_astAbstractViewInstructionDeclaration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @astSpaceViewInstruction generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction ("astSpaceViewInstruction",
                                                                            & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSpaceViewInstruction::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSpaceViewInstruction::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSpaceViewInstruction (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction::extractObject (const GGS_object & inObject,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  GGS_astSpaceViewInstruction result ;
  const GGS_astSpaceViewInstruction * p = (const GGS_astSpaceViewInstruction *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSpaceViewInstruction *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astSpaceViewInstruction_2E_weak::objectCompare (const GGS_astSpaceViewInstruction_2E_weak & inOperand) const {
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

GGS_astSpaceViewInstruction_2E_weak::GGS_astSpaceViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak & GGS_astSpaceViewInstruction_2E_weak::operator = (const GGS_astSpaceViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak::GGS_astSpaceViewInstruction_2E_weak (const GGS_astSpaceViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak GGS_astSpaceViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astSpaceViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astSpaceViewInstruction result ;
  if (isValid ()) {
    const cPtr_astSpaceViewInstruction * p = (cPtr_astSpaceViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astSpaceViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction GGS_astSpaceViewInstruction_2E_weak::bang_astSpaceViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astSpaceViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astSpaceViewInstruction) ;
      result = GGS_astSpaceViewInstruction ((cPtr_astSpaceViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astSpaceViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ("astSpaceViewInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astSpaceViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astSpaceViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astSpaceViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astSpaceViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astSpaceViewInstruction_2E_weak GGS_astSpaceViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astSpaceViewInstruction_2E_weak result ;
  const GGS_astSpaceViewInstruction_2E_weak * p = (const GGS_astSpaceViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astSpaceViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astSpaceViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astLocalViewInstruction_2E_weak::objectCompare (const GGS_astLocalViewInstruction_2E_weak & inOperand) const {
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

GGS_astLocalViewInstruction_2E_weak::GGS_astLocalViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak & GGS_astLocalViewInstruction_2E_weak::operator = (const GGS_astLocalViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak::GGS_astLocalViewInstruction_2E_weak (const GGS_astLocalViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak GGS_astLocalViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astLocalViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astLocalViewInstruction result ;
  if (isValid ()) {
    const cPtr_astLocalViewInstruction * p = (cPtr_astLocalViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astLocalViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction GGS_astLocalViewInstruction_2E_weak::bang_astLocalViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astLocalViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astLocalViewInstruction) ;
      result = GGS_astLocalViewInstruction ((cPtr_astLocalViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astLocalViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ("astLocalViewInstruction.weak",
                                                                                    & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astLocalViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astLocalViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astLocalViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astLocalViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astLocalViewInstruction_2E_weak GGS_astLocalViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  GGS_astLocalViewInstruction_2E_weak result ;
  const GGS_astLocalViewInstruction_2E_weak * p = (const GGS_astLocalViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astLocalViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astLocalViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_astComputedViewInstruction_2E_weak::objectCompare (const GGS_astComputedViewInstruction_2E_weak & inOperand) const {
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

GGS_astComputedViewInstruction_2E_weak::GGS_astComputedViewInstruction_2E_weak (void) :
GGS_astAbstractViewInstructionDeclaration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak & GGS_astComputedViewInstruction_2E_weak::operator = (const GGS_astComputedViewInstruction & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak::GGS_astComputedViewInstruction_2E_weak (const GGS_astComputedViewInstruction & inSource) :
GGS_astAbstractViewInstructionDeclaration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak GGS_astComputedViewInstruction_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_astComputedViewInstruction_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction_2E_weak::unwrappedValue (void) const {
  GGS_astComputedViewInstruction result ;
  if (isValid ()) {
    const cPtr_astComputedViewInstruction * p = (cPtr_astComputedViewInstruction *) ptr () ;
    if (nullptr != p) {
      result = GGS_astComputedViewInstruction (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction GGS_astComputedViewInstruction_2E_weak::bang_astComputedViewInstruction_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_astComputedViewInstruction result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_astComputedViewInstruction) ;
      result = GGS_astComputedViewInstruction ((cPtr_astComputedViewInstruction *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @astComputedViewInstruction.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ("astComputedViewInstruction.weak",
                                                                                       & kTypeDescriptor_GALGAS_astAbstractViewInstructionDeclaration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astComputedViewInstruction_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astComputedViewInstruction_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astComputedViewInstruction_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astComputedViewInstruction_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astComputedViewInstruction_2E_weak GGS_astComputedViewInstruction_2E_weak::extractObject (const GGS_object & inObject,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astComputedViewInstruction_2E_weak result ;
  const GGS_astComputedViewInstruction_2E_weak * p = (const GGS_astComputedViewInstruction_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astComputedViewInstruction_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astComputedViewInstruction.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum astAutoLayoutViewInstructionParameterValue
//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue::GGS_astAutoLayoutViewInstructionParameterValue (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (const GGS_string & inAssociatedValue0
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_string ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_string (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (const GGS_string & inAssociatedValue0,
                                                                                                                    const GGS_runActionDescriptor & inAssociatedValue1,
                                                                                                                    const GGS_multipleBindingDescriptor & inAssociatedValue2
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_menuItem ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (const GGS_lstring & inAssociatedValue0,
                                                                                                                    const GGS_lstring & inAssociatedValue1
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_enumFunc ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (inAssociatedValue0, inAssociatedValue1)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (const GGS_astAbstractViewInstructionDeclaration & inAssociatedValue0
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_viewFunc ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::class_func_entity (const GGS_lstring & inAssociatedValue0
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  result.mEnum = Enumeration::enum_entity ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractString (GGS_string & outAssociatedValue_value,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_string) {
    outAssociatedValue_value.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.string invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_value = ptr->mProperty_value ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractMenuItem (GGS_string & outAssociatedValue_title,
                                                                             GGS_runActionDescriptor & outAssociatedValue_run,
                                                                             GGS_multipleBindingDescriptor & outAssociatedValue_enabled,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_menuItem) {
    outAssociatedValue_title.drop () ;
    outAssociatedValue_run.drop () ;
    outAssociatedValue_enabled.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.menuItem invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_title = ptr->mProperty_title ;
    outAssociatedValue_run = ptr->mProperty_run ;
    outAssociatedValue_enabled = ptr->mProperty_enabled ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractEnumFunc (GGS_lstring & outAssociatedValue_enumTypeName,
                                                                             GGS_lstring & outAssociatedValue_enumFuncName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enumFunc) {
    outAssociatedValue_enumTypeName.drop () ;
    outAssociatedValue_enumFuncName.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.enumFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_enumTypeName = ptr->mProperty_enumTypeName ;
    outAssociatedValue_enumFuncName = ptr->mProperty_enumFuncName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractViewFunc (GGS_astAbstractViewInstructionDeclaration & outAssociatedValue_instruction,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_viewFunc) {
    outAssociatedValue_instruction.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.viewFunc invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_instruction = ptr->mProperty_instruction ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::method_extractEntity (GGS_lstring & outAssociatedValue_entityName,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_entity) {
    outAssociatedValue_entityName.drop () ;
    String s ;
    s.appendCString ("method @astAutoLayoutViewInstructionParameterValue.entity invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_entityName = ptr->mProperty_entityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getString (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_string_3F_ result ;
  if (mEnum == Enumeration::enum_string) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_string (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_string (GGS_string & out_value) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_string *) mAssociatedValues.associatedValuesPointer () ;
  out_value = ptr->mProperty_value ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getMenuItem (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem_3F_ result ;
  if (mEnum == Enumeration::enum_menuItem) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_menuItem (GGS_string & out_title,
                                                                                      GGS_runActionDescriptor & out_run,
                                                                                      GGS_multipleBindingDescriptor & out_enabled) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_menuItem *) mAssociatedValues.associatedValuesPointer () ;
  out_title = ptr->mProperty_title ;
  out_run = ptr->mProperty_run ;
  out_enabled = ptr->mProperty_enabled ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getEnumFunc (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc_3F_ result ;
  if (mEnum == Enumeration::enum_enumFunc) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_enumFunc (GGS_lstring & out_enumTypeName,
                                                                                      GGS_lstring & out_enumFuncName) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_enumFunc *) mAssociatedValues.associatedValuesPointer () ;
  out_enumTypeName = ptr->mProperty_enumTypeName ;
  out_enumFuncName = ptr->mProperty_enumFuncName ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getViewFunc (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc_3F_ result ;
  if (mEnum == Enumeration::enum_viewFunc) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_viewFunc (GGS_astAbstractViewInstructionDeclaration & out_instruction) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_viewFunc *) mAssociatedValues.associatedValuesPointer () ;
  out_instruction = ptr->mProperty_instruction ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ GGS_astAutoLayoutViewInstructionParameterValue::getter_getEntity (UNUSED_LOCATION_ARGS) const {
  GGS_astAutoLayoutViewInstructionParameterValue_2E_entity_3F_ result ;
  if (mEnum == Enumeration::enum_entity) {
    const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_astAutoLayoutViewInstructionParameterValue_2E_entity (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::getAssociatedValuesFor_entity (GGS_lstring & out_entityName) const {
  const auto ptr = (const GGS_astAutoLayoutViewInstructionParameterValue_2E_entity *) mAssociatedValues.associatedValuesPointer () ;
  out_entityName = ptr->mProperty_entityName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [6] = {
  "(not built)",
  "string",
  "menuItem",
  "enumFunc",
  "viewFunc",
  "entity"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isString (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_string == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isMenuItem (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_menuItem == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isEnumFunc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enumFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isViewFunc (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_viewFunc == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_astAutoLayoutViewInstructionParameterValue::getter_isEntity (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entity == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astAutoLayoutViewInstructionParameterValue::description (String & ioString,
                                                                  const int32_t inIndentation) const {
  ioString.appendCString ("<enum @astAutoLayoutViewInstructionParameterValue: ") ;
  ioString.appendCString (gEnumNameArrayFor_astAutoLayoutViewInstructionParameterValue [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @astAutoLayoutViewInstructionParameterValue generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ("astAutoLayoutViewInstructionParameterValue",
                                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astAutoLayoutViewInstructionParameterValue::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astAutoLayoutViewInstructionParameterValue ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_astAutoLayoutViewInstructionParameterValue::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_astAutoLayoutViewInstructionParameterValue (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewInstructionParameterValue GGS_astAutoLayoutViewInstructionParameterValue::extractObject (const GGS_object & inObject,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) {
  GGS_astAutoLayoutViewInstructionParameterValue result ;
  const GGS_astAutoLayoutViewInstructionParameterValue * p = (const GGS_astAutoLayoutViewInstructionParameterValue *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_astAutoLayoutViewInstructionParameterValue *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("astAutoLayoutViewInstructionParameterValue", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::GGS_autoLayoutViewDeclarationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::~ GGS_autoLayoutViewDeclarationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap::GGS_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap & GGS_autoLayoutViewDeclarationMap::operator = (const GGS_autoLayoutViewDeclarationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewDeclarationMap::getter_hasKey (const GGS_string & inKey
                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewDeclarationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                 const GGS_uint & inLevel
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewDeclarationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewDeclarationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutViewDeclarationMap::getter_locationForKey (const GGS_string & inKey,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS_lstringlist GGS_autoLayoutViewDeclarationMap::getter_keyList (Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  GGS_lstringlist result ;
  if (isValid ()) {
    result = GGS_lstringlist::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewDeclarationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::performInsert (const GGS_autoLayoutViewDeclarationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewDeclarationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>
GGS_autoLayoutViewDeclarationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutViewDeclarationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>>
GGS_autoLayoutViewDeclarationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutViewDeclarationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element_3F_ GGS_autoLayoutViewDeclarationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewDeclarationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutViewDeclarationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutViewDeclarationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutViewDeclarationMap & inMapToOverride
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewDeclarationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::setter_insertKey (GGS_lstring inLKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewDeclarationMap_2E_element element (inLKey) ;
  const char * kInsertErrorMessage = "the '%K' view is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewDeclarationMap::method_searchKey (GGS_lstring inLKey,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element> info ;
  if (isValid () && inLKey.isValid ()) {
    const String key = inLKey.mProperty_string.stringValue () ;
    info = infoForKey (key) ;
    if (info.isNil ()) {
      GenericUniqueArray <String> nearestKeyArray ;
      findNearestKey (key, nearestKeyArray) ;
      const char * kSearchErrorMessage = "there is no '%K' view" ;
      inCompiler->semanticErrorWith_K_message (inLKey, nearestKeyArray, kSearchErrorMessage COMMA_THERE) ;
    }
  }
  if (info.isNil ()) {
  }else{
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutViewDeclarationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> & inArray,
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

void GGS_autoLayoutViewDeclarationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @") ;
  ioString.appendString (staticTypeDescriptor ()->mGalgasTypeName) ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewDeclarationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutViewDeclarationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewDeclarationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutViewDeclarationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewDeclarationMap::DownEnumerator_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element DownEnumerator_autoLayoutViewDeclarationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewDeclarationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutViewDeclarationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewDeclarationMap::UpEnumerator_autoLayoutViewDeclarationMap (const GGS_autoLayoutViewDeclarationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap_2E_element UpEnumerator_autoLayoutViewDeclarationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewDeclarationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewDeclarationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ("autoLayoutViewDeclarationMap",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewDeclarationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewDeclarationMap ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewDeclarationMap::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewDeclarationMap (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewDeclarationMap GGS_autoLayoutViewDeclarationMap::extractObject (const GGS_object & inObject,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewDeclarationMap result ;
  const GGS_autoLayoutViewDeclarationMap * p = (const GGS_autoLayoutViewDeclarationMap *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewDeclarationMap *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewDeclarationMap", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @abstractViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewInstructionGeneration::objectCompare (const GGS_abstractViewInstructionGeneration & inOperand) const {
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

GGS_abstractViewInstructionGeneration::GGS_abstractViewInstructionGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractViewInstructionGeneration::
abstractViewInstructionGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration::GGS_abstractViewInstructionGeneration (const cPtr_abstractViewInstructionGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractViewInstructionGeneration::cPtr_abstractViewInstructionGeneration (Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ("abstractViewInstructionGeneration",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration result ;
  const GGS_abstractViewInstructionGeneration * p = (const GGS_abstractViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewDeclaration checkView'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_checkView (cPtr_astAbstractViewDeclaration * inObject,
                                    const GGS_string constin_inViewName,
                                    const GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                    const GGS_bool constin_inPreferences,
                                    const GGS_propertyMap constin_inRootObservablePropertyMap,
                                    const GGS_propertyMap constin_inPreferencesPropertyMap,
                                    const GGS_semanticContext constin_inSemanticContext,
                                    const GGS_propertyMap constin_inObservablePropertyMap,
                                    const GGS_actionMap constin_inActionMap,
                                    const GGS_string constin_inReceiverSwiftTypeName,
                                    const GGS_classMap constin_inClassMap,
                                    GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                    GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                    GGS_autoLayoutOutletMap & io_ioOutletMap,
                                    GGS_abstractViewGeneration & out_outGeneration,
                                    Compiler * inCompiler
                                    COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outGeneration.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewDeclaration) ;
    inObject->method_checkView (constin_inViewName, constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outGeneration, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Extension method '@astAutoLayoutViewFunctionCallList checkViewFunctionCallList'
//
//--------------------------------------------------------------------------------------------------

void extensionMethod_checkViewFunctionCallList (const GGS_astAutoLayoutViewFunctionCallList inObject,
                                                const GGS_astAutoLayoutViewFunctionMap constinArgument_inFunctionMap,
                                                const GGS_autoLayoutViewDeclarationMap constinArgument_inViewDeclarationMap,
                                                const GGS_bool constinArgument_inPreferences,
                                                const GGS_actionMap constinArgument_inPreferencesActionMap,
                                                const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                const GGS_propertyMap constinArgument_inObservablePropertyMap,
                                                const GGS_actionMap constinArgument_inActionMap,
                                                const GGS_string constinArgument_inReceiverSwiftTypeName,
                                                const GGS_classMap constinArgument_inClassMap,
                                                GGS_implicitViewFunctionGenerationList & ioArgument_ioImplicitViewFunctionGenerationList,
                                                GGS_autoLayoutConfiguratorMap & ioArgument_ioConfiguratorMap,
                                                GGS_autoLayoutOutletMap & ioArgument_ioOutletMap,
                                                GGS_autoLayoutViewInstructionGenerationFuncCallList & outArgument_outFuncCallList,
                                                Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFuncCallList.drop () ; // Release 'out' argument
  GGS_autoLayoutViewInstructionGenerationFuncCallList temp_0 = GGS_autoLayoutViewInstructionGenerationFuncCallList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 653)) ;
  outArgument_outFuncCallList = temp_0 ;
  const GGS_astAutoLayoutViewFunctionCallList temp_1 = inObject ;
  UpEnumerator_astAutoLayoutViewFunctionCallList enumerator_26038 (temp_1) ;
  while (enumerator_26038.hasCurrentObject ()) {
    GGS_string var_mangleName_26078 = enumerator_26038.current_mFunctionName (HERE).readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 655)) ;
    UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_26142 (enumerator_26038.current_mParameterList (HERE)) ;
    while (enumerator_26142.hasCurrentObject ()) {
      var_mangleName_26078.plusAssignOperation(enumerator_26142.current_mParameterName (HERE).readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 657)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 657)) ;
      enumerator_26142.gotoNextObject () ;
    }
    var_mangleName_26078.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 659)) ;
    GGS_autoLayoutClassParameterList var_formalParameterList_26320 ;
    constinArgument_inFunctionMap.method_searchKey (GGS_lstring::init_21__21_ (var_mangleName_26078, enumerator_26038.current_mFunctionName (HERE).readProperty_location (), inCompiler COMMA_HERE), var_formalParameterList_26320, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 660)) ;
    GGS_autoLayoutViewInstructionGenerationParameterList temp_2 = GGS_autoLayoutViewInstructionGenerationParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 661)) ;
    GGS_autoLayoutViewInstructionGenerationParameterList var_parameterList_26399 = temp_2 ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, var_formalParameterList_26320.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 662)).objectCompare (enumerator_26038.current_mParameterList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 662)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_26038.current_mFunctionName (HERE).readProperty_location (), var_formalParameterList_26320.getter_count (SOURCE_FILE ("auto-layout-view.ggs", 664)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 664)).add_operation (GGS_string (" parameter(s) required, "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 664)).add_operation (enumerator_26038.current_mParameterList (HERE).getter_count (SOURCE_FILE ("auto-layout-view.ggs", 664)).getter_string (SOURCE_FILE ("auto-layout-view.ggs", 664)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 664)).add_operation (GGS_string (" provided"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 664)), fixItArray4  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 663)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      UpEnumerator_astAutoLayoutViewInstructionParameterList enumerator_26656 (enumerator_26038.current_mParameterList (HERE)) ;
      UpEnumerator_autoLayoutClassParameterList enumerator_26700 (var_formalParameterList_26320) ;
      while (enumerator_26656.hasCurrentObject () && enumerator_26700.hasCurrentObject ()) {
        GalgasBool test_5 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_26753 = enumerator_26700.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 667)).unwrappedValue () ;
          if (!enumerator_26700.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 667)).isValuated ()) {
            test_5 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_5) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_26798 = enumerator_26656.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 667)).unwrappedValue () ;
            if (!enumerator_26656.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-view.ggs", 667)).isValuated ()) {
              test_5 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_5) {
              GGS_classKind var_typeKind_26895 ;
              GGS_propertyMap joker_26905_3 ; // Joker input parameter
              GGS_actionMap joker_26905_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_26905_1 ; // Joker input parameter
              constinArgument_inClassMap.method_searchKey (var_formalTypeEnum_26753.readProperty_name (), var_typeKind_26895, joker_26905_3, joker_26905_2, joker_26905_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 668)) ;
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_26927 = var_typeKind_26895.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 669)).unwrappedValue () ;
                if (!var_typeKind_26895.getter_getAtomic (SOURCE_FILE ("auto-layout-view.ggs", 669)).isValuated ()) {
                  test_6 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_26968 = var_atomicTypeKind_26927.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 669)).unwrappedValue () ;
                  if (!var_atomicTypeKind_26927.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-view.ggs", 669)).isValuated ()) {
                    test_6 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_6) {
                    GGS_uint joker_27093 ; // Joker input parameter
                    var_atomicEnumType_26968.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_26798.readProperty_name (), joker_27093, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 670)) ;
                  }
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GenericArray <FixItDescription> fixItArray7 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_26753.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 672)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_5) {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_26656.current_mParameterType (HERE).objectCompare (enumerator_26700.current_mParameterType (HERE))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (enumerator_26656.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_26700.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)).add_operation (extensionGetter_string (enumerator_26656.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)), fixItArray9  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 675)) ;
            }
          }
        }
        GalgasBool test_10 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_10) {
          test_10 = GGS_bool (ComparisonKind::notEqual, enumerator_26656.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_26700.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_10) {
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_26656.current_mParameterName (HERE).readProperty_location (), GGS_string ("the parameter name should be '").add_operation (enumerator_26700.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 678)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 678)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 678)) ;
          }
        }
        switch (enumerator_26656.current_mParameter (HERE).enumValue ()) {
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::invalid:
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_viewFunc:
          {
            GGS_astAbstractViewInstructionDeclaration extractedValue_27531_instruction_0 ;
            enumerator_26656.current_mParameter (HERE).getAssociatedValuesFor_viewFunc (extractedValue_27531_instruction_0) ;
            GGS_abstractViewInstructionGeneration var_viewInstruction_28054 ;
            callExtensionMethod_generateViewCode ((cPtr_astAbstractViewInstructionDeclaration *) extractedValue_27531_instruction_0.ptr (), constinArgument_inViewDeclarationMap, constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inPreferencesPropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inActionMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inClassMap, ioArgument_ioImplicitViewFunctionGenerationList, ioArgument_ioConfiguratorMap, ioArgument_ioOutletMap, var_viewInstruction_28054, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 682)) ;
            GGS_string var_viewInstructionString_28096 = callExtensionGetter_generateViewInstruction ((const cPtr_abstractViewInstructionGeneration *) var_viewInstruction_28054.ptr (), constinArgument_inPreferences, enumerator_26656.current_mParameterName (HERE).readProperty_string (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 697)) ;
            {
            var_parameterList_26399.setter_append (enumerator_26656.current_mParameterName (HERE).readProperty_string (), GGS_string ("{ () -> NSView in ").add_operation (var_viewInstructionString_28096, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 702)).add_operation (GGS_string (" ; return "), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 702)).add_operation (enumerator_26656.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 702)).add_operation (GGS_string (" } ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 702)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 702)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_string:
          {
            GGS_string extractedValue_28396_stringValue_0 ;
            enumerator_26656.current_mParameter (HERE).getAssociatedValuesFor_string (extractedValue_28396_stringValue_0) ;
            {
            var_parameterList_26399.setter_append (enumerator_26656.current_mParameterName (HERE).readProperty_string (), extractedValue_28396_stringValue_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 704)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_entity:
          {
            GGS_lstring extractedValue_28485_entityName_0 ;
            enumerator_26656.current_mParameter (HERE).getAssociatedValuesFor_entity (extractedValue_28485_entityName_0) ;
            GGS_classKind var_classKind_28548 ;
            GGS_propertyMap joker_28559_3 ; // Joker input parameter
            GGS_actionMap joker_28559_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_28559_1 ; // Joker input parameter
            constinArgument_inClassMap.method_searchKey (extractedValue_28485_entityName_0, var_classKind_28548, joker_28559_3, joker_28559_2, joker_28559_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 706)) ;
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              test_12 = var_classKind_28548.getter_isEntity (SOURCE_FILE ("auto-layout-view.ggs", 707)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 707)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (extractedValue_28485_entityName_0.readProperty_location (), GGS_string ("an entity is required here"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 708)) ;
              }
            }
            {
            var_parameterList_26399.setter_append (enumerator_26656.current_mParameterName (HERE).readProperty_string (), extractedValue_28485_entityName_0.readProperty_string ().add_operation (GGS_string (".self"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 710)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 710)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_menuItem:
          {
            GGS_string extractedValue_28770_title_0 ;
            GGS_runActionDescriptor extractedValue_28777_run_1 ;
            GGS_multipleBindingDescriptor extractedValue_28782_enabledBinding_2 ;
            enumerator_26656.current_mParameter (HERE).getAssociatedValuesFor_menuItem (extractedValue_28770_title_0, extractedValue_28777_run_1, extractedValue_28782_enabledBinding_2) ;
            GGS_autolayoutRunBindingForGeneration var_runBindingGeneration_29098 ;
            {
            routine_analyzeAutoLayoutRunBinding_3F__3F_handlesRunAction_3F__3F__3F__3F__3F__3F__21_ (extractedValue_28777_run_1, GGS_bool (true), constinArgument_inPreferences, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.ggs", 716)), constinArgument_inActionMap, constinArgument_inObservablePropertyMap, constinArgument_inReceiverSwiftTypeName, constinArgument_inPreferencesActionMap, var_runBindingGeneration_29098, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 712)) ;
            }
            GGS_autolayoutEnabledBindingForGeneration var_enabledBindingGeneration_29454 ;
            {
            routine_analyzeAutoLayoutEnableBinding_3F__3F_handlesEnabledBinding_3F_prefs_3F__3F__3F__3F_prefsMap_21_ (extractedValue_28782_enabledBinding_2, GGS_bool (true), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inObservablePropertyMap, constinArgument_inPreferencesPropertyMap, var_enabledBindingGeneration_29454, inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 723)) ;
            }
            GGS_string var_s_29505 = GGS_string ("AutoLayoutMenuItemDescriptor (title: ").add_operation (extractedValue_28770_title_0.getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.ggs", 733)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 733)) ;
            switch (var_runBindingGeneration_29098.enumValue ()) {
            case GGS_autolayoutRunBindingForGeneration::Enumeration::invalid:
              break ;
            case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_none:
              {
                var_s_29505.plusAssignOperation(GGS_string (", target: nil, selector: nil"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 736)) ;
              }
              break ;
            case GGS_autolayoutRunBindingForGeneration::Enumeration::enum_run:
              {
                GGS_string extractedValue_29705_targetName_0 ;
                GGS_string extractedValue_29717_actionName_1 ;
                GGS_string extractedValue_29729_runTargetName_2 ;
                var_runBindingGeneration_29098.getAssociatedValuesFor_run (extractedValue_29705_targetName_0, extractedValue_29717_actionName_1, extractedValue_29729_runTargetName_2) ;
                var_s_29505.plusAssignOperation(GGS_string (", target: ").add_operation (extractedValue_29705_targetName_0, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)).add_operation (GGS_string (", selector: #selector ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)).add_operation (extractedValue_29729_runTargetName_2, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)).add_operation (extractedValue_29717_actionName_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)).add_operation (GGS_string (" (_:))"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 738)) ;
              }
              break ;
            }
            switch (var_enabledBindingGeneration_29454.enumValue ()) {
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::invalid:
              break ;
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_none:
              {
                var_s_29505.plusAssignOperation(GGS_string (", enableBinding: .alwaysTrue"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 742)) ;
              }
              break ;
            case GGS_autolayoutEnabledBindingForGeneration::Enumeration::enum_enabled:
              {
                GGS_abstractBooleanMultipleBindingExpressionForGeneration extractedValue_30014_binding_0 ;
                var_enabledBindingGeneration_29454.getAssociatedValuesFor_enabled (extractedValue_30014_binding_0) ;
                var_s_29505.plusAssignOperation(GGS_string (", enableBinding: ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) extractedValue_30014_binding_0.ptr (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 744)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 744)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 744)) ;
              }
              break ;
            }
            var_s_29505.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 746)) ;
            {
            var_parameterList_26399.setter_append (enumerator_26656.current_mParameterName (HERE).readProperty_string (), var_s_29505, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 747)) ;
            }
          }
          break ;
        case GGS_astAutoLayoutViewInstructionParameterValue::Enumeration::enum_enumFunc:
          {
            GGS_lstring extractedValue_30188_enumTypeName_0 ;
            GGS_lstring extractedValue_30202_funcName_1 ;
            enumerator_26656.current_mParameter (HERE).getAssociatedValuesFor_enumFunc (extractedValue_30188_enumTypeName_0, extractedValue_30202_funcName_1) ;
            GGS_classKind var_type_30282 ;
            GGS_propertyMap joker_30288_3 ; // Joker input parameter
            GGS_actionMap joker_30288_2 ; // Joker input parameter
            GGS_propertyGenerationList joker_30288_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_30188_enumTypeName_0, var_type_30282, joker_30288_3, joker_30288_2, joker_30288_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 749)) ;
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              test_14 = var_type_30282.getter_isAtomic (SOURCE_FILE ("auto-layout-view.ggs", 750)).operator_not (SOURCE_FILE ("auto-layout-view.ggs", 750)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (extractedValue_30188_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 751)) ;
              }
            }
            if (GalgasBool::boolFalse == test_14) {
              GGS_typeKind var_typeKind_30464 ;
              var_type_30282.method_extractAtomic (var_typeKind_30464, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 753)) ;
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = var_typeKind_30464.getter_isEnumType (SOURCE_FILE ("auto-layout-view.ggs", 754)).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GGS_enumFuncMap var_funcMap_30572 ;
                  GGS_string joker_30554_2 ; // Joker input parameter
                  GGS_enumConstantMap joker_30554_1 ; // Joker input parameter
                  var_typeKind_30464.method_extractEnumType (joker_30554_2, joker_30554_1, var_funcMap_30572, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 755)) ;
                  GGS_enumFunAssociationSortedList joker_30624 ; // Joker input parameter
                  var_funcMap_30572.method_searchKey (extractedValue_30202_funcName_1, joker_30624, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 756)) ;
                }
              }
              if (GalgasBool::boolFalse == test_16) {
                GenericArray <FixItDescription> fixItArray17 ;
                inCompiler->emitSemanticError (extractedValue_30188_enumTypeName_0.readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-view.ggs", 758)) ;
              }
            }
            {
            var_parameterList_26399.setter_append (enumerator_26656.current_mParameterName (HERE).readProperty_string (), extractedValue_30188_enumTypeName_0.readProperty_string ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 761)).add_operation (extractedValue_30202_funcName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 761)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 761)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 761)) ;
            }
          }
          break ;
        }
        enumerator_26656.gotoNextObject () ;
        enumerator_26700.gotoNextObject () ;
      }
    }
    {
    outArgument_outFuncCallList.setter_append (enumerator_26038.current_mFunctionName (HERE).readProperty_string (), var_parameterList_26399, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.ggs", 765)) ;
    }
    enumerator_26038.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Abstract extension method '@astAbstractViewInstructionDeclaration generateViewCode'
//
//--------------------------------------------------------------------------------------------------

void callExtensionMethod_generateViewCode (cPtr_astAbstractViewInstructionDeclaration * inObject,
                                           const GGS_autoLayoutViewDeclarationMap constin_inViewDeclarationMap,
                                           const GGS_bool constin_inPreferences,
                                           const GGS_propertyMap constin_inRootObservablePropertyMap,
                                           const GGS_propertyMap constin_inPreferencesPropertyMap,
                                           const GGS_semanticContext constin_inSemanticContext,
                                           const GGS_propertyMap constin_inObservablePropertyMap,
                                           const GGS_actionMap constin_inActionMap,
                                           const GGS_string constin_inReceiverSwiftTypeName,
                                           const GGS_classMap constin_inClassMap,
                                           GGS_implicitViewFunctionGenerationList & io_ioImplicitViewFunctionGenerationList,
                                           GGS_autoLayoutConfiguratorMap & io_ioConfiguratorMap,
                                           GGS_autoLayoutOutletMap & io_ioOutletMap,
                                           GGS_abstractViewInstructionGeneration & out_outInstruction,
                                           Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) {
//--- Drop output arguments
  out_outInstruction.drop () ;
//--- Find method
  if (nullptr != inObject) {
    macroValidSharedObject (inObject, cPtr_astAbstractViewInstructionDeclaration) ;
    inObject->method_generateViewCode (constin_inViewDeclarationMap, constin_inPreferences, constin_inRootObservablePropertyMap, constin_inPreferencesPropertyMap, constin_inSemanticContext, constin_inObservablePropertyMap, constin_inActionMap, constin_inReceiverSwiftTypeName, constin_inClassMap, io_ioImplicitViewFunctionGenerationList, io_ioConfiguratorMap, io_ioOutletMap, out_outInstruction, inCompiler COMMA_THERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
// @abstractViewGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewGeneration::objectCompare (const GGS_abstractViewGeneration & inOperand) const {
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

GGS_abstractViewGeneration::GGS_abstractViewGeneration (void) :
AC_GALGAS_reference_class () {
}


void cPtr_abstractViewGeneration::
abstractViewGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration::GGS_abstractViewGeneration (const cPtr_abstractViewGeneration * inSourcePtr) :
AC_GALGAS_reference_class (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_abstractViewGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @abstractViewGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_abstractViewGeneration::cPtr_abstractViewGeneration (Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) :
acStrongPtr_class (inCompiler COMMA_THERE) {
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_abstractViewGeneration::printNonNullClassInstanceProperties (void) const {
    acStrongPtr_class::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @abstractViewGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration ("abstractViewGeneration",
                                                                           nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration::extractObject (const GGS_object & inObject,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractViewGeneration result ;
  const GGS_abstractViewGeneration * p = (const GGS_abstractViewGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewGeneration_2E_weak::objectCompare (const GGS_abstractViewGeneration_2E_weak & inOperand) const {
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

GGS_abstractViewGeneration_2E_weak::GGS_abstractViewGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak & GGS_abstractViewGeneration_2E_weak::operator = (const GGS_abstractViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak::GGS_abstractViewGeneration_2E_weak (const GGS_abstractViewGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak GGS_abstractViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractViewGeneration result ;
  if (isValid ()) {
    const cPtr_abstractViewGeneration * p = (cPtr_abstractViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration GGS_abstractViewGeneration_2E_weak::bang_abstractViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractViewGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewGeneration) ;
      result = GGS_abstractViewGeneration ((cPtr_abstractViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ("abstractViewGeneration.weak",
                                                                                   nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewGeneration_2E_weak GGS_abstractViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  GGS_abstractViewGeneration_2E_weak result ;
  const GGS_abstractViewGeneration_2E_weak * p = (const GGS_abstractViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationFuncCallList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList : public cCollectionElement {
  public: GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GGS_string & in_mFunctionName,
                                                                              const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                              COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GGS_string & in_mFunctionName,
                                                                                                                                        const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mFunctionName, in_mParameters) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mFunctionName, inElement.mProperty_mParameters) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (mObject.mProperty_mFunctionName, mObject.mProperty_mParameters COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList::GGS_autoLayoutViewInstructionGenerationFuncCallList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList::GGS_autoLayoutViewInstructionGenerationFuncCallList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = (cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList) ;
    const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element element (p->mObject.mProperty_mFunctionName, p->mObject.mProperty_mParameters) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                     const GGS_string & in_mFunctionName,
                                                                                     const GGS_autoLayoutViewInstructionGenerationParameterList & in_mParameters
                                                                                     COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationFuncCallList (in_mFunctionName, in_mParameters COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::description (String & ioString,
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
      ioString.appendString ("mParameters:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameters.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                   const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::addAssignOperation (const GGS_string & inOperand0,
                                                                              const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand1
                                                                              COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_append (const GGS_string inOperand0,
                                                                         const GGS_autoLayoutViewInstructionGenerationParameterList inOperand1,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                const GGS_autoLayoutViewInstructionGenerationParameterList inOperand1,
                                                                                const GGS_uint inInsertionIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                                const GGS_uint inRemoveIndex,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mFunctionName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_popFirst (GGS_string & outOperand0,
                                                                           GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_popLast (GGS_string & outOperand0,
                                                                          GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::method_first (GGS_string & outOperand0,
                                                                        GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mFunctionName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameters ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::method_last (GGS_string & outOperand0,
                                                                       GGS_autoLayoutViewInstructionGenerationParameterList & outOperand1,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mFunctionName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameters ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::add_operation (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::subList (const int32_t inStart,
                                                                                                                  const int32_t inLength,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
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

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                Compiler * inCompiler
                                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationFuncCallList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationFuncCallList inList,
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMFunctionNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_mFunctionNameAtIndex (const GGS_uint & inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_autoLayoutViewInstructionGenerationFuncCallList::setter_setMParametersAtIndex (GGS_autoLayoutViewInstructionGenerationParameterList inOperand,
                                                                                        GGS_uint inIndex,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameters = inOperand ;
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
  
GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationFuncCallList::getter_mParametersAtIndex (const GGS_uint & inIndex,
                                                                                                                                     Compiler * inCompiler
                                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameters ;
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
// Down Enumerator for @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList DownEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameters ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationFuncCallList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList (const GGS_autoLayoutViewInstructionGenerationFuncCallList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mFunctionName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mFunctionName ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList UpEnumerator_autoLayoutViewInstructionGenerationFuncCallList::current_mParameters (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameters ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationFuncCallList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ("autoLayoutViewInstructionGenerationFuncCallList",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationFuncCallList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationFuncCallList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationFuncCallList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationFuncCallList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationFuncCallList GGS_autoLayoutViewInstructionGenerationFuncCallList::extractObject (const GGS_object & inObject,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationFuncCallList result ;
  const GGS_autoLayoutViewInstructionGenerationFuncCallList * p = (const GGS_autoLayoutViewInstructionGenerationFuncCallList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationFuncCallList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationFuncCallList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationList : public cCollectionElement {
  public: GGS_autoLayoutViewInstructionGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutViewInstructionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationList::cCollectionElement_autoLayoutViewInstructionGenerationList (const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationList::cCollectionElement_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mInstruction) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationList (mObject.mProperty_mInstruction COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList::GGS_autoLayoutViewInstructionGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList::GGS_autoLayoutViewInstructionGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationList * p = (cCollectionElement_autoLayoutViewInstructionGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationList) ;
    const GGS_autoLayoutViewInstructionGenerationList_2E_element element (p->mObject.mProperty_mInstruction) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_abstractViewInstructionGeneration & in_mInstruction
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationList (in_mInstruction COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::description (String & ioString,
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::class_func_listWithValue (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element element (inOperand0) ;
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::addAssignOperation (const GGS_abstractViewInstructionGeneration & inOperand0
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::setter_append (const GGS_abstractViewInstructionGeneration inOperand0,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::setter_insertAtIndex (const GGS_abstractViewInstructionGeneration inOperand0,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationList_2E_element newElement (inOperand0) ;
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

void GGS_autoLayoutViewInstructionGenerationList::setter_removeAtIndex (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_autoLayoutViewInstructionGenerationList::setter_popFirst (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_autoLayoutViewInstructionGenerationList::setter_popLast (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_autoLayoutViewInstructionGenerationList::method_first (GGS_abstractViewInstructionGeneration & outOperand0,
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

void GGS_autoLayoutViewInstructionGenerationList::method_last (GGS_abstractViewInstructionGeneration & outOperand0,
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::add_operation (const GGS_autoLayoutViewInstructionGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
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

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationList inList,
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

void GGS_autoLayoutViewInstructionGenerationList::setter_setMInstructionAtIndex (GGS_abstractViewInstructionGeneration inOperand,
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
  
GGS_abstractViewInstructionGeneration GGS_autoLayoutViewInstructionGenerationList::getter_mInstructionAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationList::DownEnumerator_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration DownEnumerator_autoLayoutViewInstructionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationList::UpEnumerator_autoLayoutViewInstructionGenerationList (const GGS_autoLayoutViewInstructionGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration UpEnumerator_autoLayoutViewInstructionGenerationList::current_mInstruction (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mInstruction ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ("autoLayoutViewInstructionGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationList GGS_autoLayoutViewInstructionGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationList result ;
  const GGS_autoLayoutViewInstructionGenerationList * p = (const GGS_autoLayoutViewInstructionGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedHorizontalViewGeneration_2E_weak::objectCompare (const GGS_computedHorizontalViewGeneration_2E_weak & inOperand) const {
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

GGS_computedHorizontalViewGeneration_2E_weak::GGS_computedHorizontalViewGeneration_2E_weak (void) :
GGS_abstractViewGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak & GGS_computedHorizontalViewGeneration_2E_weak::operator = (const GGS_computedHorizontalViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak::GGS_computedHorizontalViewGeneration_2E_weak (const GGS_computedHorizontalViewGeneration & inSource) :
GGS_abstractViewGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak GGS_computedHorizontalViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedHorizontalViewGeneration result ;
  if (isValid ()) {
    const cPtr_computedHorizontalViewGeneration * p = (cPtr_computedHorizontalViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedHorizontalViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration GGS_computedHorizontalViewGeneration_2E_weak::bang_computedHorizontalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedHorizontalViewGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedHorizontalViewGeneration) ;
      result = GGS_computedHorizontalViewGeneration ((cPtr_computedHorizontalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedHorizontalViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ("computedHorizontalViewGeneration.weak",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedHorizontalViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedHorizontalViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedHorizontalViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedHorizontalViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedHorizontalViewGeneration_2E_weak GGS_computedHorizontalViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_computedHorizontalViewGeneration_2E_weak result ;
  const GGS_computedHorizontalViewGeneration_2E_weak * p = (const GGS_computedHorizontalViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedHorizontalViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedHorizontalViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_computedVerticalViewGeneration_2E_weak::objectCompare (const GGS_computedVerticalViewGeneration_2E_weak & inOperand) const {
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

GGS_computedVerticalViewGeneration_2E_weak::GGS_computedVerticalViewGeneration_2E_weak (void) :
GGS_abstractViewGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak & GGS_computedVerticalViewGeneration_2E_weak::operator = (const GGS_computedVerticalViewGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak::GGS_computedVerticalViewGeneration_2E_weak (const GGS_computedVerticalViewGeneration & inSource) :
GGS_abstractViewGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak GGS_computedVerticalViewGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration_2E_weak::unwrappedValue (void) const {
  GGS_computedVerticalViewGeneration result ;
  if (isValid ()) {
    const cPtr_computedVerticalViewGeneration * p = (cPtr_computedVerticalViewGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_computedVerticalViewGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration GGS_computedVerticalViewGeneration_2E_weak::bang_computedVerticalViewGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_computedVerticalViewGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_computedVerticalViewGeneration) ;
      result = GGS_computedVerticalViewGeneration ((cPtr_computedVerticalViewGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @computedVerticalViewGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ("computedVerticalViewGeneration.weak",
                                                                                           & kTypeDescriptor_GALGAS_abstractViewGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_computedVerticalViewGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_computedVerticalViewGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_computedVerticalViewGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_computedVerticalViewGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_computedVerticalViewGeneration_2E_weak GGS_computedVerticalViewGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_computedVerticalViewGeneration_2E_weak result ;
  const GGS_computedVerticalViewGeneration_2E_weak * p = (const GGS_computedVerticalViewGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_computedVerticalViewGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("computedVerticalViewGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateViewInstruction (const cPtr_abstractViewInstructionGeneration * inObject,
                                                        const GGS_bool in_inPreferences,
                                                        const GGS_string in_inName,
                                                        const GGS_string in_inIndentation,
                                                        Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateViewInstruction (in_inPreferences, in_inName, in_inIndentation, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//
//Abstract extension getter '@abstractViewInstructionGeneration generateAppendViewInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_string callExtensionGetter_generateAppendViewInstruction (const cPtr_abstractViewInstructionGeneration * inObject,
                                                              const GGS_bool in_inPreferences,
                                                              const GGS_string in_inReceiverViewName,
                                                              const GGS_string in_inIndentation,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  GGS_string result ;
  if (nullptr != inObject) {
    result = inObject->getter_generateAppendViewInstruction (in_inPreferences, in_inReceiverViewName, in_inIndentation, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_abstractViewInstructionGeneration_2E_weak::objectCompare (const GGS_abstractViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_abstractViewInstructionGeneration_2E_weak::GGS_abstractViewInstructionGeneration_2E_weak (void) :
AC_GALGAS_weak_reference () {
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak & GGS_abstractViewInstructionGeneration_2E_weak::operator = (const GGS_abstractViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak::GGS_abstractViewInstructionGeneration_2E_weak (const GGS_abstractViewInstructionGeneration & inSource) :
AC_GALGAS_weak_reference (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak GGS_abstractViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_abstractViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_abstractViewInstructionGeneration * p = (cPtr_abstractViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_abstractViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration GGS_abstractViewInstructionGeneration_2E_weak::bang_abstractViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_abstractViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_abstractViewInstructionGeneration) ;
      result = GGS_abstractViewInstructionGeneration ((cPtr_abstractViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @abstractViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ("abstractViewInstructionGeneration.weak",
                                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_abstractViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_abstractViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_abstractViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractViewInstructionGeneration_2E_weak GGS_abstractViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_LOCATION_ARGS) {
  GGS_abstractViewInstructionGeneration_2E_weak result ;
  const GGS_abstractViewInstructionGeneration_2E_weak * p = (const GGS_abstractViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_abstractViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("abstractViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutMultipleBindingGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutMultipleBindingGenerationList : public cCollectionElement {
  public: GGS_autoLayoutMultipleBindingGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutMultipleBindingGenerationList (const GGS_string & in_mBindingName,
                                                                      const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutMultipleBindingGenerationList::cCollectionElement_autoLayoutMultipleBindingGenerationList (const GGS_string & in_mBindingName,
                                                                                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutMultipleBindingGenerationList::cCollectionElement_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectExpression) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutMultipleBindingGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutMultipleBindingGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutMultipleBindingGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectExpression COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList::GGS_autoLayoutMultipleBindingGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList::GGS_autoLayoutMultipleBindingGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutMultipleBindingGenerationList * p = (cCollectionElement_autoLayoutMultipleBindingGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutMultipleBindingGenerationList) ;
    const GGS_autoLayoutMultipleBindingGenerationList_2E_element element (p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectExpression) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_string & in_mBindingName,
                                                                             const GGS_abstractBooleanMultipleBindingExpressionForGeneration & in_mBoundObjectExpression
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutMultipleBindingGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutMultipleBindingGenerationList (in_mBindingName, in_mBoundObjectExpression COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutMultipleBindingGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutMultipleBindingGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::description (String & ioString,
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
      ioString.appendString ("mBoundObjectExpression:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mBoundObjectExpression.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::plusPlusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                   const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                      const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inOperand1
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::setter_append (const GGS_string inOperand0,
                                                                 const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand1,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                        const GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand1,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutMultipleBindingGenerationList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                   GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_popLast (GGS_string & outOperand0,
                                                                  GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::method_first (GGS_string & outOperand0,
                                                                GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectExpression ;
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

void GGS_autoLayoutMultipleBindingGenerationList::method_last (GGS_string & outOperand0,
                                                               GGS_abstractBooleanMultipleBindingExpressionForGeneration & outOperand1,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectExpression ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::add_operation (const GGS_autoLayoutMultipleBindingGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
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

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutMultipleBindingGenerationList::plusAssignOperation (const GGS_autoLayoutMultipleBindingGenerationList inList,
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutMultipleBindingGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
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

void GGS_autoLayoutMultipleBindingGenerationList::setter_setMBoundObjectExpressionAtIndex (GGS_abstractBooleanMultipleBindingExpressionForGeneration inOperand,
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
  
GGS_abstractBooleanMultipleBindingExpressionForGeneration GGS_autoLayoutMultipleBindingGenerationList::getter_mBoundObjectExpressionAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutMultipleBindingGenerationList::DownEnumerator_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element DownEnumerator_autoLayoutMultipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutMultipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration DownEnumerator_autoLayoutMultipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutMultipleBindingGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutMultipleBindingGenerationList::UpEnumerator_autoLayoutMultipleBindingGenerationList (const GGS_autoLayoutMultipleBindingGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList_2E_element UpEnumerator_autoLayoutMultipleBindingGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutMultipleBindingGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_abstractBooleanMultipleBindingExpressionForGeneration UpEnumerator_autoLayoutMultipleBindingGenerationList::current_mBoundObjectExpression (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectExpression ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutMultipleBindingGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ("autoLayoutMultipleBindingGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutMultipleBindingGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutMultipleBindingGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutMultipleBindingGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutMultipleBindingGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutMultipleBindingGenerationList GGS_autoLayoutMultipleBindingGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutMultipleBindingGenerationList result ;
  const GGS_autoLayoutMultipleBindingGenerationList * p = (const GGS_autoLayoutMultipleBindingGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutMultipleBindingGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutMultipleBindingGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_hStackViewInstructionGeneration_2E_weak::objectCompare (const GGS_hStackViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_hStackViewInstructionGeneration_2E_weak::GGS_hStackViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak & GGS_hStackViewInstructionGeneration_2E_weak::operator = (const GGS_hStackViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak::GGS_hStackViewInstructionGeneration_2E_weak (const GGS_hStackViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak GGS_hStackViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_hStackViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_hStackViewInstructionGeneration * p = (cPtr_hStackViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_hStackViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration GGS_hStackViewInstructionGeneration_2E_weak::bang_hStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_hStackViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_hStackViewInstructionGeneration) ;
      result = GGS_hStackViewInstructionGeneration ((cPtr_hStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @hStackViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2E_weak ("hStackViewInstructionGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_hStackViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_hStackViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_hStackViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_hStackViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_hStackViewInstructionGeneration_2E_weak GGS_hStackViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_hStackViewInstructionGeneration_2E_weak result ;
  const GGS_hStackViewInstructionGeneration_2E_weak * p = (const GGS_hStackViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_hStackViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("hStackViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_vStackViewInstructionGeneration_2E_weak::objectCompare (const GGS_vStackViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_vStackViewInstructionGeneration_2E_weak::GGS_vStackViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak & GGS_vStackViewInstructionGeneration_2E_weak::operator = (const GGS_vStackViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak::GGS_vStackViewInstructionGeneration_2E_weak (const GGS_vStackViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak GGS_vStackViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_vStackViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_vStackViewInstructionGeneration * p = (cPtr_vStackViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_vStackViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration GGS_vStackViewInstructionGeneration_2E_weak::bang_vStackViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_vStackViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_vStackViewInstructionGeneration) ;
      result = GGS_vStackViewInstructionGeneration ((cPtr_vStackViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @vStackViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2E_weak ("vStackViewInstructionGeneration.weak",
                                                                                            & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_vStackViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_vStackViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_vStackViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_vStackViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_vStackViewInstructionGeneration_2E_weak GGS_vStackViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_vStackViewInstructionGeneration_2E_weak result ;
  const GGS_vStackViewInstructionGeneration_2E_weak * p = (const GGS_vStackViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_vStackViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("vStackViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutSpaceViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSpaceViewInstructionGeneration::objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration & inOperand) const {
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

GGS_autoLayoutSpaceViewInstructionGeneration::GGS_autoLayoutSpaceViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration::
init (Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutSpaceViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutSpaceViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutSpaceViewInstructionGeneration_init (inCompiler) ;
  const GGS_autoLayoutSpaceViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutSpaceViewInstructionGeneration::
autoLayoutSpaceViewInstructionGeneration_init (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration::GGS_autoLayoutSpaceViewInstructionGeneration (const cPtr_autoLayoutSpaceViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSpaceViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSpaceViewInstructionGeneration::cPtr_autoLayoutSpaceViewInstructionGeneration (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE) {
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutSpaceViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

void cPtr_autoLayoutSpaceViewInstructionGeneration::description (String & ioString,
                                                                 const int32_t /* inIndentation */) const {
  ioString.appendCString ("[@autoLayoutSpaceViewInstructionGeneration]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutSpaceViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutSpaceViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutSpaceViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSpaceViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ("autoLayoutSpaceViewInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSpaceViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSpaceViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSpaceViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  const GGS_autoLayoutSpaceViewInstructionGeneration * p = (const GGS_autoLayoutSpaceViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSpaceViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak & GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutSpaceViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (const GGS_autoLayoutSpaceViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutSpaceViewInstructionGeneration * p = (cPtr_autoLayoutSpaceViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutSpaceViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::bang_autoLayoutSpaceViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutSpaceViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSpaceViewInstructionGeneration) ;
      result = GGS_autoLayoutSpaceViewInstructionGeneration ((cPtr_autoLayoutSpaceViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSpaceViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2E_weak ("autoLayoutSpaceViewInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSpaceViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSpaceViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSpaceViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutSeparatorInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSeparatorInstructionGeneration::objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration & inOperand) const {
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

GGS_autoLayoutSeparatorInstructionGeneration::GGS_autoLayoutSeparatorInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutSeparatorInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutSeparatorInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutSeparatorInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutSeparatorInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutSeparatorInstructionGeneration::
autoLayoutSeparatorInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                             Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration::GGS_autoLayoutSeparatorInstructionGeneration (const cPtr_autoLayoutSeparatorInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutSeparatorInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutSeparatorInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutSeparatorInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSeparatorInstructionGeneration::cPtr_autoLayoutSeparatorInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutSeparatorInstructionGeneration::cPtr_autoLayoutSeparatorInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutSeparatorInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

void cPtr_autoLayoutSeparatorInstructionGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutSeparatorInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutSeparatorInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutSeparatorInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutSeparatorInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSeparatorInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ("autoLayoutSeparatorInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSeparatorInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSeparatorInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSeparatorInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  const GGS_autoLayoutSeparatorInstructionGeneration * p = (const GGS_autoLayoutSeparatorInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSeparatorInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak & GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutSeparatorInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (const GGS_autoLayoutSeparatorInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutSeparatorInstructionGeneration * p = (cPtr_autoLayoutSeparatorInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutSeparatorInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::bang_autoLayoutSeparatorInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutSeparatorInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutSeparatorInstructionGeneration) ;
      result = GGS_autoLayoutSeparatorInstructionGeneration ((cPtr_autoLayoutSeparatorInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutSeparatorInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2E_weak ("autoLayoutSeparatorInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutSeparatorInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutSeparatorInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutSeparatorInstructionGeneration_2E_weak GGS_autoLayoutSeparatorInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutSeparatorInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak * p = (const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutSeparatorInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutSeparatorInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutGutterInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutGutterInstructionGeneration::objectCompare (const GGS_autoLayoutGutterInstructionGeneration & inOperand) const {
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

GGS_autoLayoutGutterInstructionGeneration::GGS_autoLayoutGutterInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutGutterInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutGutterInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutGutterInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutGutterInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutGutterInstructionGeneration::
autoLayoutGutterInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                          Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration::GGS_autoLayoutGutterInstructionGeneration (const cPtr_autoLayoutGutterInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutGutterInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutGutterInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutGutterInstructionGeneration * p = (cPtr_autoLayoutGutterInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutGutterInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutGutterInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutGutterInstructionGeneration::cPtr_autoLayoutGutterInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutGutterInstructionGeneration::cPtr_autoLayoutGutterInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutGutterInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ;
}

void cPtr_autoLayoutGutterInstructionGeneration::description (String & ioString,
                                                              const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutGutterInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutGutterInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutGutterInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutGutterInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutGutterInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ("autoLayoutGutterInstructionGeneration",
                                                                                          & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutGutterInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutGutterInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutGutterInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration result ;
  const GGS_autoLayoutGutterInstructionGeneration * p = (const GGS_autoLayoutGutterInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutGutterInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutGutterInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutGutterInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutGutterInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutGutterInstructionGeneration_2E_weak::GGS_autoLayoutGutterInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak & GGS_autoLayoutGutterInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutGutterInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak::GGS_autoLayoutGutterInstructionGeneration_2E_weak (const GGS_autoLayoutGutterInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak GGS_autoLayoutGutterInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutGutterInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutGutterInstructionGeneration * p = (cPtr_autoLayoutGutterInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutGutterInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration GGS_autoLayoutGutterInstructionGeneration_2E_weak::bang_autoLayoutGutterInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutGutterInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutGutterInstructionGeneration) ;
      result = GGS_autoLayoutGutterInstructionGeneration ((cPtr_autoLayoutGutterInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutGutterInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration_2E_weak ("autoLayoutGutterInstructionGeneration.weak",
                                                                                                  & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutGutterInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutGutterInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutGutterInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutGutterInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutGutterInstructionGeneration_2E_weak GGS_autoLayoutGutterInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autoLayoutGutterInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutGutterInstructionGeneration_2E_weak * p = (const GGS_autoLayoutGutterInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutGutterInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutGutterInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutDividerInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDividerInstructionGeneration::objectCompare (const GGS_autoLayoutDividerInstructionGeneration & inOperand) const {
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

GGS_autoLayoutDividerInstructionGeneration::GGS_autoLayoutDividerInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration::
init_21_horizontal (const GGS_bool & in_horizontal,
                    Compiler * inCompiler
                    COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutDividerInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutDividerInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutDividerInstructionGeneration_init_21_horizontal (in_horizontal, inCompiler) ;
  const GGS_autoLayoutDividerInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutDividerInstructionGeneration::
autoLayoutDividerInstructionGeneration_init_21_horizontal (const GGS_bool & in_horizontal,
                                                           Compiler * /* inCompiler */) {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration::GGS_autoLayoutDividerInstructionGeneration (const cPtr_autoLayoutDividerInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutDividerInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutDividerInstructionGeneration::readProperty_horizontal (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutDividerInstructionGeneration) ;
    return p->mProperty_horizontal ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutDividerInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDividerInstructionGeneration::cPtr_autoLayoutDividerInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutDividerInstructionGeneration::cPtr_autoLayoutDividerInstructionGeneration (const GGS_bool & in_horizontal,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_horizontal () {
  mProperty_horizontal = in_horizontal ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutDividerInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

void cPtr_autoLayoutDividerInstructionGeneration::description (String & ioString,
                                                               const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutDividerInstructionGeneration:") ;
  mProperty_horizontal.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutDividerInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutDividerInstructionGeneration (mProperty_horizontal, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutDividerInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_horizontal.printNonNullClassInstanceProperties ("horizontal") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDividerInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ("autoLayoutDividerInstructionGeneration",
                                                                                           & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDividerInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDividerInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDividerInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration result ;
  const GGS_autoLayoutDividerInstructionGeneration * p = (const GGS_autoLayoutDividerInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDividerInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutDividerInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutDividerInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutDividerInstructionGeneration_2E_weak::GGS_autoLayoutDividerInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak & GGS_autoLayoutDividerInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutDividerInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak::GGS_autoLayoutDividerInstructionGeneration_2E_weak (const GGS_autoLayoutDividerInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak GGS_autoLayoutDividerInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutDividerInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutDividerInstructionGeneration * p = (cPtr_autoLayoutDividerInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutDividerInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration GGS_autoLayoutDividerInstructionGeneration_2E_weak::bang_autoLayoutDividerInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutDividerInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutDividerInstructionGeneration) ;
      result = GGS_autoLayoutDividerInstructionGeneration ((cPtr_autoLayoutDividerInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutDividerInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2E_weak ("autoLayoutDividerInstructionGeneration.weak",
                                                                                                   & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutDividerInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutDividerInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutDividerInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutDividerInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutDividerInstructionGeneration_2E_weak GGS_autoLayoutDividerInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutDividerInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutDividerInstructionGeneration_2E_weak * p = (const GGS_autoLayoutDividerInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutDividerInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutDividerInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
// @autoLayoutLocalViewInstructionGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutLocalViewInstructionGeneration::objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration & inOperand) const {
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

GGS_autoLayoutLocalViewInstructionGeneration::GGS_autoLayoutLocalViewInstructionGeneration (void) :
GGS_abstractViewInstructionGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration::
init_21_ (const GGS_string & in_mLocalView,
          Compiler * inCompiler
          COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutLocalViewInstructionGeneration * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutLocalViewInstructionGeneration (inCompiler COMMA_THERE)) ;
  object->autoLayoutLocalViewInstructionGeneration_init_21_ (in_mLocalView, inCompiler) ;
  const GGS_autoLayoutLocalViewInstructionGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutLocalViewInstructionGeneration::
autoLayoutLocalViewInstructionGeneration_init_21_ (const GGS_string & in_mLocalView,
                                                   Compiler * /* inCompiler */) {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration::GGS_autoLayoutLocalViewInstructionGeneration (const cPtr_autoLayoutLocalViewInstructionGeneration * inSourcePtr) :
GGS_abstractViewInstructionGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_autoLayoutLocalViewInstructionGeneration::readProperty_mLocalView (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutLocalViewInstructionGeneration) ;
    return p->mProperty_mLocalView ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutLocalViewInstructionGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutLocalViewInstructionGeneration::cPtr_autoLayoutLocalViewInstructionGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutLocalViewInstructionGeneration::cPtr_autoLayoutLocalViewInstructionGeneration (const GGS_string & in_mLocalView,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) :
cPtr_abstractViewInstructionGeneration (inCompiler COMMA_THERE),
mProperty_mLocalView () {
  mProperty_mLocalView = in_mLocalView ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutLocalViewInstructionGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

void cPtr_autoLayoutLocalViewInstructionGeneration::description (String & ioString,
                                                                 const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutLocalViewInstructionGeneration:") ;
  mProperty_mLocalView.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

acPtr_class * cPtr_autoLayoutLocalViewInstructionGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  acPtr_class * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutLocalViewInstructionGeneration (mProperty_mLocalView, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_autoLayoutLocalViewInstructionGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractViewInstructionGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mLocalView.printNonNullClassInstanceProperties ("mLocalView") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @autoLayoutLocalViewInstructionGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ("autoLayoutLocalViewInstructionGeneration",
                                                                                             & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutLocalViewInstructionGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutLocalViewInstructionGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutLocalViewInstructionGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration::extractObject (const GGS_object & inObject,
                                                                                                          Compiler * inCompiler
                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  const GGS_autoLayoutLocalViewInstructionGeneration * p = (const GGS_autoLayoutLocalViewInstructionGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutLocalViewInstructionGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::objectCompare (const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & inOperand) const {
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

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (void) :
GGS_abstractViewInstructionGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak & GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::operator = (const GGS_autoLayoutLocalViewInstructionGeneration & inSource) {
  cPtr_weakReference_proxy * proxyPtr = nullptr ;
  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (const GGS_autoLayoutLocalViewInstructionGeneration & inSource) :
GGS_abstractViewInstructionGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::unwrappedValue (void) const {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  if (isValid ()) {
    const cPtr_autoLayoutLocalViewInstructionGeneration * p = (cPtr_autoLayoutLocalViewInstructionGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_autoLayoutLocalViewInstructionGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::bang_autoLayoutLocalViewInstructionGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutLocalViewInstructionGeneration result ;
  if (mProxyPtr != nullptr) {
    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_autoLayoutLocalViewInstructionGeneration) ;
      result = GGS_autoLayoutLocalViewInstructionGeneration ((cPtr_autoLayoutLocalViewInstructionGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @autoLayoutLocalViewInstructionGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2E_weak ("autoLayoutLocalViewInstructionGeneration.weak",
                                                                                                     & kTypeDescriptor_GALGAS_abstractViewInstructionGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutLocalViewInstructionGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutLocalViewInstructionGeneration_2E_weak (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutLocalViewInstructionGeneration_2E_weak GGS_autoLayoutLocalViewInstructionGeneration_2E_weak::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutLocalViewInstructionGeneration_2E_weak result ;
  const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak * p = (const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutLocalViewInstructionGeneration_2E_weak *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutLocalViewInstructionGeneration.weak", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutRegularBindingsGenerationList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutRegularBindingsGenerationList : public cCollectionElement {
  public: GGS_autoLayoutRegularBindingsGenerationList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutRegularBindingsGenerationList (const GGS_string & in_mBindingName,
                                                                      const GGS_boundObjectList & in_mBoundObjectList,
                                                                      const GGS_string & in_mBindingOptionsString
                                                                      COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutRegularBindingsGenerationList::cCollectionElement_autoLayoutRegularBindingsGenerationList (const GGS_string & in_mBindingName,
                                                                                                                        const GGS_boundObjectList & in_mBoundObjectList,
                                                                                                                        const GGS_string & in_mBindingOptionsString
                                                                                                                        COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutRegularBindingsGenerationList::cCollectionElement_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mBindingName, inElement.mProperty_mBoundObjectList, inElement.mProperty_mBindingOptionsString) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutRegularBindingsGenerationList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutRegularBindingsGenerationList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutRegularBindingsGenerationList (mObject.mProperty_mBindingName, mObject.mProperty_mBoundObjectList, mObject.mProperty_mBindingOptionsString COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList::GGS_autoLayoutRegularBindingsGenerationList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList::GGS_autoLayoutRegularBindingsGenerationList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutRegularBindingsGenerationList * p = (cCollectionElement_autoLayoutRegularBindingsGenerationList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutRegularBindingsGenerationList) ;
    const GGS_autoLayoutRegularBindingsGenerationList_2E_element element (p->mObject.mProperty_mBindingName, p->mObject.mProperty_mBoundObjectList, p->mObject.mProperty_mBindingOptionsString) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                             const GGS_string & in_mBindingName,
                                                                             const GGS_boundObjectList & in_mBoundObjectList,
                                                                             const GGS_string & in_mBindingOptionsString
                                                                             COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutRegularBindingsGenerationList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutRegularBindingsGenerationList (in_mBindingName, in_mBoundObjectList, in_mBindingOptionsString COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutRegularBindingsGenerationList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutRegularBindingsGenerationList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::description (String & ioString,
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::plusPlusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList_2E_element & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                   const GGS_boundObjectList & inOperand1,
                                                                                                                   const GGS_string & inOperand2
                                                                                                                   COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element element (inOperand0, inOperand1, inOperand2) ;
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::addAssignOperation (const GGS_string & inOperand0,
                                                                      const GGS_boundObjectList & inOperand1,
                                                                      const GGS_string & inOperand2
                                                                      COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::setter_append (const GGS_string inOperand0,
                                                                 const GGS_boundObjectList inOperand1,
                                                                 const GGS_string inOperand2,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                        const GGS_boundObjectList inOperand1,
                                                                        const GGS_string inOperand2,
                                                                        const GGS_uint inInsertionIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutRegularBindingsGenerationList_2E_element newElement (inOperand0, inOperand1, inOperand2) ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                        GGS_boundObjectList & outOperand1,
                                                                        GGS_string & outOperand2,
                                                                        const GGS_uint inRemoveIndex,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mBindingName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (idx COMMA_HERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_popFirst (GGS_string & outOperand0,
                                                                   GGS_boundObjectList & outOperand1,
                                                                   GGS_string & outOperand2,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_popLast (GGS_string & outOperand0,
                                                                  GGS_boundObjectList & outOperand1,
                                                                  GGS_string & outOperand2,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::method_first (GGS_string & outOperand0,
                                                                GGS_boundObjectList & outOperand1,
                                                                GGS_string & outOperand2,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mBindingName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray (0 COMMA_THERE).mProperty_mBindingOptionsString ;
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

void GGS_autoLayoutRegularBindingsGenerationList::method_last (GGS_string & outOperand0,
                                                               GGS_boundObjectList & outOperand1,
                                                               GGS_string & outOperand2,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mBindingName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mBoundObjectList ;
      outOperand2 = mArray.lastObject (HERE).mProperty_mBindingOptionsString ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::add_operation (const GGS_autoLayoutRegularBindingsGenerationList & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::subList (const int32_t inStart,
                                                                                                  const int32_t inLength,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
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

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                  Compiler * inCompiler
                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutRegularBindingsGenerationList::plusAssignOperation (const GGS_autoLayoutRegularBindingsGenerationList inList,
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBindingNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutRegularBindingsGenerationList::getter_mBindingNameAtIndex (const GGS_uint & inIndex,
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBoundObjectListAtIndex (GGS_boundObjectList inOperand,
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
  
GGS_boundObjectList GGS_autoLayoutRegularBindingsGenerationList::getter_mBoundObjectListAtIndex (const GGS_uint & inIndex,
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

void GGS_autoLayoutRegularBindingsGenerationList::setter_setMBindingOptionsStringAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutRegularBindingsGenerationList::getter_mBindingOptionsStringAtIndex (const GGS_uint & inIndex,
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
// Down Enumerator for @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutRegularBindingsGenerationList::DownEnumerator_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element DownEnumerator_autoLayoutRegularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutRegularBindingsGenerationList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutRegularBindingsGenerationList::UpEnumerator_autoLayoutRegularBindingsGenerationList (const GGS_autoLayoutRegularBindingsGenerationList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList_2E_element UpEnumerator_autoLayoutRegularBindingsGenerationList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingName ;
}

//--------------------------------------------------------------------------------------------------

GGS_boundObjectList UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBoundObjectList (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBoundObjectList ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutRegularBindingsGenerationList::current_mBindingOptionsString (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mBindingOptionsString ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutRegularBindingsGenerationList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ("autoLayoutRegularBindingsGenerationList",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutRegularBindingsGenerationList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutRegularBindingsGenerationList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutRegularBindingsGenerationList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutRegularBindingsGenerationList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutRegularBindingsGenerationList GGS_autoLayoutRegularBindingsGenerationList::extractObject (const GGS_object & inObject,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) {
  GGS_autoLayoutRegularBindingsGenerationList result ;
  const GGS_autoLayoutRegularBindingsGenerationList * p = (const GGS_autoLayoutRegularBindingsGenerationList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutRegularBindingsGenerationList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutRegularBindingsGenerationList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autolayoutRunBindingForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration::GGS_autolayoutRunBindingForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::class_func_run (const GGS_string & inAssociatedValue0,
                                                                                             const GGS_string & inAssociatedValue1,
                                                                                             const GGS_string & inAssociatedValue2
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  result.mEnum = Enumeration::enum_run ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autolayoutRunBindingForGeneration_2E_run (inAssociatedValue0, inAssociatedValue1, inAssociatedValue2)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::method_extractRun (GGS_string & outAssociatedValue_targetName,
                                                               GGS_string & outAssociatedValue_actionName,
                                                               GGS_string & outAssociatedValue_targetTypeName,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_run) {
    outAssociatedValue_targetName.drop () ;
    outAssociatedValue_actionName.drop () ;
    outAssociatedValue_targetTypeName.drop () ;
    String s ;
    s.appendCString ("method @autolayoutRunBindingForGeneration.run invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_targetName = ptr->mProperty_targetName ;
    outAssociatedValue_actionName = ptr->mProperty_actionName ;
    outAssociatedValue_targetTypeName = ptr->mProperty_targetTypeName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration_2E_run_3F_ GGS_autolayoutRunBindingForGeneration::getter_getRun (UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutRunBindingForGeneration_2E_run_3F_ result ;
  if (mEnum == Enumeration::enum_run) {
    const auto ptr = (const GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autolayoutRunBindingForGeneration_2E_run (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::getAssociatedValuesFor_run (GGS_string & out_targetName,
                                                                        GGS_string & out_actionName,
                                                                        GGS_string & out_targetTypeName) const {
  const auto ptr = (const GGS_autolayoutRunBindingForGeneration_2E_run *) mAssociatedValues.associatedValuesPointer () ;
  out_targetName = ptr->mProperty_targetName ;
  out_actionName = ptr->mProperty_actionName ;
  out_targetTypeName = ptr->mProperty_targetTypeName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutRunBindingForGeneration [3] = {
  "(not built)",
  "none",
  "run"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutRunBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutRunBindingForGeneration::getter_isRun (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_run == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutRunBindingForGeneration::description (String & ioString,
                                                         const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autolayoutRunBindingForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autolayoutRunBindingForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutRunBindingForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ("autolayoutRunBindingForGeneration",
                                                                                      nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutRunBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutRunBindingForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutRunBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutRunBindingForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutRunBindingForGeneration GGS_autolayoutRunBindingForGeneration::extractObject (const GGS_object & inObject,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_LOCATION_ARGS) {
  GGS_autolayoutRunBindingForGeneration result ;
  const GGS_autolayoutRunBindingForGeneration * p = (const GGS_autolayoutRunBindingForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutRunBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutRunBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autoLayoutViewGraphicControllerBindingGeneration
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration::GGS_autoLayoutViewGraphicControllerBindingGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::class_func_binding (const GGS_string & inAssociatedValue0
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::method_extractBinding (GGS_string & outAssociatedValue_arrayControllerControllerName,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_arrayControllerControllerName.drop () ;
    String s ;
    s.appendCString ("method @autoLayoutViewGraphicControllerBindingGeneration.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_arrayControllerControllerName = ptr->mProperty_arrayControllerControllerName ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::getAssociatedValuesFor_binding (GGS_string & out_arrayControllerControllerName) const {
  const auto ptr = (const GGS_autoLayoutViewGraphicControllerBindingGeneration_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_arrayControllerControllerName = ptr->mProperty_arrayControllerControllerName ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [3] = {
  "(not built)",
  "none",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewGraphicControllerBindingGeneration::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewGraphicControllerBindingGeneration::description (String & ioString,
                                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autoLayoutViewGraphicControllerBindingGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autoLayoutViewGraphicControllerBindingGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewGraphicControllerBindingGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ("autoLayoutViewGraphicControllerBindingGeneration",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewGraphicControllerBindingGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewGraphicControllerBindingGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewGraphicControllerBindingGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewGraphicControllerBindingGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewGraphicControllerBindingGeneration GGS_autoLayoutViewGraphicControllerBindingGeneration::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewGraphicControllerBindingGeneration result ;
  const GGS_autoLayoutViewGraphicControllerBindingGeneration * p = (const GGS_autoLayoutViewGraphicControllerBindingGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewGraphicControllerBindingGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewGraphicControllerBindingGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//  Enum autolayoutEnabledBindingForGeneration
//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration::GGS_autolayoutEnabledBindingForGeneration (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_none (UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_none ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::class_func_enabled (const GGS_abstractBooleanMultipleBindingExpressionForGeneration & inAssociatedValue0
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  result.mEnum = Enumeration::enum_enabled ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_autolayoutEnabledBindingForGeneration_2E_enabled (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::method_extractEnabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & outAssociatedValue_binding,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_enabled) {
    outAssociatedValue_binding.drop () ;
    String s ;
    s.appendCString ("method @autolayoutEnabledBindingForGeneration.enabled invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_binding = ptr->mProperty_binding ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ GGS_autolayoutEnabledBindingForGeneration::getter_getEnabled (UNUSED_LOCATION_ARGS) const {
  GGS_autolayoutEnabledBindingForGeneration_2E_enabled_3F_ result ;
  if (mEnum == Enumeration::enum_enabled) {
    const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_autolayoutEnabledBindingForGeneration_2E_enabled (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::getAssociatedValuesFor_enabled (GGS_abstractBooleanMultipleBindingExpressionForGeneration & out_binding) const {
  const auto ptr = (const GGS_autolayoutEnabledBindingForGeneration_2E_enabled *) mAssociatedValues.associatedValuesPointer () ;
  out_binding = ptr->mProperty_binding ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [3] = {
  "(not built)",
  "none",
  "enabled"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isNone (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_none == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autolayoutEnabledBindingForGeneration::getter_isEnabled (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_enabled == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autolayoutEnabledBindingForGeneration::description (String & ioString,
                                                             const int32_t inIndentation) const {
  ioString.appendCString ("<enum @autolayoutEnabledBindingForGeneration: ") ;
  ioString.appendCString (gEnumNameArrayFor_autolayoutEnabledBindingForGeneration [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @autolayoutEnabledBindingForGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ("autolayoutEnabledBindingForGeneration",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autolayoutEnabledBindingForGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autolayoutEnabledBindingForGeneration ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autolayoutEnabledBindingForGeneration::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autolayoutEnabledBindingForGeneration (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autolayoutEnabledBindingForGeneration GGS_autolayoutEnabledBindingForGeneration::extractObject (const GGS_object & inObject,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) {
  GGS_autolayoutEnabledBindingForGeneration result ;
  const GGS_autolayoutEnabledBindingForGeneration * p = (const GGS_autolayoutEnabledBindingForGeneration *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autolayoutEnabledBindingForGeneration *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autolayoutEnabledBindingForGeneration", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@autoLayoutViewInstructionGenerationParameterList' list
//--------------------------------------------------------------------------------------------------

class cCollectionElement_autoLayoutViewInstructionGenerationParameterList : public cCollectionElement {
  public: GGS_autoLayoutViewInstructionGenerationParameterList_2E_element mObject ;

//--- Class functions
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                               const GGS_string & in_mParameterValue
                                                                               COMMA_LOCATION_ARGS) ;
  public: cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) ;

//--- Virtual method that checks that all attributes are valid
  public: virtual bool isValid (void) const ;

//--- Virtual method that returns a copy of current object
  public: virtual cCollectionElement * copy (void) ;
} ;

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_string & in_mParameterName,
                                                                                                                                          const GGS_string & in_mParameterValue
                                                                                                                                          COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (in_mParameterName, in_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

cCollectionElement_autoLayoutViewInstructionGenerationParameterList::cCollectionElement_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inElement COMMA_LOCATION_ARGS) :
cCollectionElement (THERE),
mObject (inElement.mProperty_mParameterName, inElement.mProperty_mParameterValue) {
}

//--------------------------------------------------------------------------------------------------

bool cCollectionElement_autoLayoutViewInstructionGenerationParameterList::isValid (void) const {
  return true ;
}

//--------------------------------------------------------------------------------------------------

cCollectionElement * cCollectionElement_autoLayoutViewInstructionGenerationParameterList::copy (void) {
  cCollectionElement * result = nullptr ;
  macroMyNew (result, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (mObject.mProperty_mParameterName, mObject.mProperty_mParameterValue COMMA_HERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------
// List type @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (void) :
mArray () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList::GGS_autoLayoutViewInstructionGenerationParameterList (const capCollectionElementArray & inArray) :
mArray () {
  mArray.setCapacity (std::max (16, int32_t (inArray.count ()))) ;
  for (uint32_t i = 0 ; i < inArray.count () ; i++) {
    const capCollectionElement v = inArray.objectAtIndex (i COMMA_HERE) ;
    cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = (cCollectionElement_autoLayoutViewInstructionGenerationParameterList *) v.ptr () ;
    macroValidSharedObject (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList) ;
    const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (p->mObject.mProperty_mParameterName, p->mObject.mProperty_mParameterValue) ;
    mArray.appendObject (element) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::makeAttributesFromObjects (capCollectionElement & outAttributes,
                                                                                      const GGS_string & in_mParameterName,
                                                                                      const GGS_string & in_mParameterValue
                                                                                      COMMA_LOCATION_ARGS) {
  cCollectionElement_autoLayoutViewInstructionGenerationParameterList * p = nullptr ;
  macroMyNew (p, cCollectionElement_autoLayoutViewInstructionGenerationParameterList (in_mParameterName, in_mParameterValue COMMA_THERE)) ;
  outAttributes.setPointer (p) ;
  macroDetachSharedObject (p) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewInstructionGenerationParameterList::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_range GGS_autoLayoutViewInstructionGenerationParameterList::getter_range (UNUSED_LOCATION_ARGS) const {
  GGS_range result ;
  if (isValid ()) {
    result = GGS_range (0, count ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::description (String & ioString,
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
      ioString.appendString ("mParameterValue:") ;
      mArray (int32_t (i) COMMA_HERE).mProperty_mParameterValue.description (ioString, inIndentation + 1) ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  result.mArray.setCapacity (16) ; // Build
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusPlusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element & inValue
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inValue.isValid ()) {
    mArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::class_func_listWithValue (const GGS_string & inOperand0,
                                                                                                                                     const GGS_string & inOperand1
                                                                                                                                     COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element element (inOperand0, inOperand1) ;
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (element.isValid ()) {
    result.mArray.setCapacity (16) ; // Build
    result.plusPlusAssignOperation (element COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::addAssignOperation (const GGS_string & inOperand0,
                                                                               const GGS_string & inOperand1
                                                                               COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  plusPlusAssignOperation (newElement COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_append (const GGS_string inOperand0,
                                                                          const GGS_string inOperand1,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
  if (isValid () && newElement.isValid ()) {
    plusPlusAssignOperation (newElement COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_insertAtIndex (const GGS_string inOperand0,
                                                                                 const GGS_string inOperand1,
                                                                                 const GGS_uint inInsertionIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewInstructionGenerationParameterList_2E_element newElement (inOperand0, inOperand1) ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_removeAtIndex (GGS_string & outOperand0,
                                                                                 GGS_string & outOperand1,
                                                                                 const GGS_uint inRemoveIndex,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx < mArray.count ()) {
      removed = true ;
      outOperand0 = mArray (idx COMMA_HERE).mProperty_mParameterName ;
      outOperand1 = mArray (idx COMMA_HERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popFirst (GGS_string & outOperand0,
                                                                            GGS_string & outOperand1,
                                                                            Compiler * inCompiler
                                                                            COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_popLast (GGS_string & outOperand0,
                                                                           GGS_string & outOperand1,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  bool removed = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      removed = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::method_first (GGS_string & outOperand0,
                                                                         GGS_string & outOperand1,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray (0 COMMA_THERE).mProperty_mParameterName ;
      outOperand1 = mArray (0 COMMA_THERE).mProperty_mParameterValue ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::method_last (GGS_string & outOperand0,
                                                                        GGS_string & outOperand1,
                                                                        Compiler * inCompiler
                                                                        COMMA_LOCATION_ARGS) const {
  bool found = false ;
  if (isValid ()) {
    if (mArray.count () > 0) {
      found = true ;
      outOperand0 = mArray.lastObject (HERE).mProperty_mParameterName ;
      outOperand1 = mArray.lastObject (HERE).mProperty_mParameterValue ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::add_operation (const GGS_autoLayoutViewInstructionGenerationParameterList & inOperand,
                                                                                                                          Compiler * /* inCompiler */
                                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::subList (const int32_t inStart,
                                                                                                                    const int32_t inLength,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
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

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListWithRange (const GGS_range & inRange,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inRange.isValid ()) {
    const int32_t start  = int32_t (inRange.mProperty_start.uintValue ()) ;
    const int32_t length = int32_t (inRange.mProperty_length.uintValue ()) ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListFromIndex (const GGS_uint & inIndex,
                                                                                                                                    Compiler * inCompiler
                                                                                                                                    COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = int32_t (inIndex.uintValue ()) ;
    const int32_t length = int32_t (count ()) - start ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::getter_subListToIndex (const GGS_uint & inIndex,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t start  = 0 ;
    const int32_t length = int32_t (inIndex.uintValue ()) + 1 ;
    result = subList (start, length, inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewInstructionGenerationParameterList::plusAssignOperation (const GGS_autoLayoutViewInstructionGenerationParameterList inList,
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterNameAtIndex (GGS_string inOperand,
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterNameAtIndex (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_string result ;
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

void GGS_autoLayoutViewInstructionGenerationParameterList::setter_setMParameterValueAtIndex (GGS_string inOperand,
                                                                                             GGS_uint inIndex,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue = inOperand ;
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
  
GGS_string GGS_autoLayoutViewInstructionGenerationParameterList::getter_mParameterValueAtIndex (const GGS_uint & inIndex,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < count ()) {
      result = mArray (int32_t (idx) COMMA_HERE).mProperty_mParameterValue ;
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
// Down Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewInstructionGenerationParameterList::DownEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
  mIndex = mArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string DownEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}



//--------------------------------------------------------------------------------------------------
// Up Enumerator for @autoLayoutViewInstructionGenerationParameterList
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewInstructionGenerationParameterList::UpEnumerator_autoLayoutViewInstructionGenerationParameterList (const GGS_autoLayoutViewInstructionGenerationParameterList & inEnumeratedObject) :
mArray (inEnumeratedObject.sortedElementArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList_2E_element UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterName (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterName ;
}

//--------------------------------------------------------------------------------------------------

GGS_string UpEnumerator_autoLayoutViewInstructionGenerationParameterList::current_mParameterValue (LOCATION_ARGS) const {
  return mArray (mIndex COMMA_THERE).mProperty_mParameterValue ;
}




//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewInstructionGenerationParameterList generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ("autoLayoutViewInstructionGenerationParameterList",
                                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewInstructionGenerationParameterList::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewInstructionGenerationParameterList ;
}

//--------------------------------------------------------------------------------------------------

AC_GALGAS_root * GGS_autoLayoutViewInstructionGenerationParameterList::clonedObject (void) const {
  AC_GALGAS_root * result = nullptr ;
  if (isValid ()) {
    macroMyNew (result, GGS_autoLayoutViewInstructionGenerationParameterList (*this)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewInstructionGenerationParameterList GGS_autoLayoutViewInstructionGenerationParameterList::extractObject (const GGS_object & inObject,
                                                                                                                          Compiler * inCompiler
                                                                                                                          COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewInstructionGenerationParameterList result ;
  const GGS_autoLayoutViewInstructionGenerationParameterList * p = (const GGS_autoLayoutViewInstructionGenerationParameterList *) inObject.embeddedObject () ;
  if (nullptr != p) {
    if (nullptr != dynamic_cast <const GGS_autoLayoutViewInstructionGenerationParameterList *> (p)) {
      result = *p ;
    }else{
      inCompiler->castError ("autoLayoutViewInstructionGenerationParameterList", p->dynamicTypeDescriptor () COMMA_THERE) ;
    }  
  }
  return result ;
}

