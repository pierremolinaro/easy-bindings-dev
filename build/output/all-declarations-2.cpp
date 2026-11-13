#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-2.h"

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
      GGS_lstring extractedValue_9799_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_9799_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_9799_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 232)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_9889_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_9889_propertyName_0) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_9889_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 234)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 234)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_9994_propertyName_0 ;
      GGS_lstring extractedValue_10017_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_9994_propertyName_0, extractedValue_10017_optionName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_9994_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 236)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 236)).add_operation (extractedValue_10017_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 236)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_10131_relationshipName_0 ;
      GGS_lstring extractedValue_10158_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_10131_relationshipName_0, extractedValue_10158_elementPropertyName_1) ;
      result_outResult = GGS_string ("root_").add_operation (extractedValue_10131_relationshipName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 238)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 238)).add_operation (extractedValue_10158_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 238)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_10280__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_10280__0) ;
      result_outResult = GGS_string ("self_address") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_10346_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_10346_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10346_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 242)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_10441_propertyName_0 ;
      GGS_lstring extractedValue_10464_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_10441_propertyName_0, extractedValue_10464_optionName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10441_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)).add_operation (extractedValue_10464_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 244)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_10571_propertyName_0 ;
      GGS_lstring extractedValue_10594_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_10571_propertyName_0, extractedValue_10594_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10571_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 246)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 246)).add_operation (extractedValue_10594_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 246)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_10720_propertyName_0 ;
      GGS_lstring extractedValue_10743_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_10720_propertyName_0, extractedValue_10743_elementPropertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10720_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 248)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 248)).add_operation (extractedValue_10743_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 248)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_10867_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_10867_propertyName_0) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_10867_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 250)).add_operation (GGS_string ("_none"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 250)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_10963_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_10963_propertyName_0) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_10963_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 252)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_11060_propertyName_0 ;
      GGS_lstring extractedValue_11083_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_11060_propertyName_0, extractedValue_11083_optionName_1) ;
      result_outResult = GGS_string ("prefs_").add_operation (extractedValue_11060_propertyName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)).add_operation (extractedValue_11083_optionName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 254)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_11196_controllerName_0 ;
      GGS_lstring extractedValue_11221_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_11196_controllerName_0, extractedValue_11221_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11196_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 256)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 256)).add_operation (extractedValue_11221_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 256)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_11348_controllerName_0 ;
      GGS_lstring extractedValue_11373_propertyName_1 ;
      GGS_lstring extractedValue_11396_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_11348_controllerName_0, extractedValue_11373_propertyName_1, extractedValue_11396_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11348_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)).add_operation (extractedValue_11373_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)).add_operation (extractedValue_11396_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 258)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_11558_controllerName_0 ;
      GGS_lstring extractedValue_11583_propertyName_1 ;
      GGS_lstring extractedValue_11606_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_11558_controllerName_0, extractedValue_11583_propertyName_1, extractedValue_11606_secondaryPropertyName_2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11558_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (extractedValue_11583_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (GGS_string ("_all_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)).add_operation (extractedValue_11606_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 260)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_11770_controllerName_0 ;
      GGS_lstring extractedValue_11795_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_11770_controllerName_0, extractedValue_11795_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_11770_controllerName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)).add_operation (extractedValue_11795_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)).add_operation (GGS_string ("_all_<<2>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 262)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_11914__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_11914__0) ;
      result_outResult = GGS_string ("self_signatureObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_11984__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_11984__0) ;
      result_outResult = GGS_string ("self_versionObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_12064__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_12064__0) ;
      result_outResult = GGS_string ("self_versionShouldChangeObserver") ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_12151_superEntityName_0 ;
      GGS_lstring extractedValue_12177_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_12151_superEntityName_0, extractedValue_12177_propertyName_1) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12151_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 270)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 270)).add_operation (extractedValue_12177_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 270)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_12303_superEntityName_0 ;
      GGS_lstring extractedValue_12329_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_12343__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_12303_superEntityName_0, extractedValue_12329_propertyName_1, extractedValue_12343__2) ;
      result_outResult = GGS_string ("self_").add_operation (extractedValue_12303_superEntityName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 272)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 272)).add_operation (extractedValue_12329_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 272)) ;
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
                                           Compiler * /* inCompiler */
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_12648__0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_12648__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_12699__0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_12699__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_12757__0 ;
      GGS_lstring extractedValue_12757__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_12757__0, extractedValue_12757__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_12817__0 ;
      GGS_lstring extractedValue_12817__1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_12817__0, extractedValue_12817__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_12871__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_12871__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_12918__0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_12918__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 291)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_12989__0 ;
      GGS_lstring extractedValue_12989__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_12989__0, extractedValue_12989__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 293)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_13055__0 ;
      GGS_lstring extractedValue_13055__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_13055__0, extractedValue_13055__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 295)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_13122__0 ;
      GGS_lstring extractedValue_13122__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_13122__0, extractedValue_13122__1) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 297)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_13186__0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_13186__0) ;
      result_outResult = constinArgument_inPreferences.operator_not (SOURCE_FILE ("observable-property.galgas4", 299)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_13247__0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_13247__0) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_13307__0 ;
      GGS_lstring extractedValue_13307__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_13307__0, extractedValue_13307__1) ;
      result_outResult = GGS_bool (false) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_13366__0 ;
      GGS_lstring extractedValue_13366__1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_13366__0, extractedValue_13366__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_13433__0 ;
      GGS_lstring extractedValue_13433__1 ;
      GGS_lstring extractedValue_13433__2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_13433__0, extractedValue_13433__1, extractedValue_13433__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_13496__0 ;
      GGS_lstring extractedValue_13496__1 ;
      GGS_lstring extractedValue_13496__2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_13496__0, extractedValue_13496__1, extractedValue_13496__2) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_13557__0 ;
      GGS_lstring extractedValue_13557__1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_13557__0, extractedValue_13557__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_13609__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_13609__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_13659__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_13659__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_13721__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_13721__0) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_13770__0 ;
      GGS_lstring extractedValue_13770__1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_13770__0, extractedValue_13770__1) ;
      result_outResult = GGS_bool (true) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_13835__0 ;
      GGS_lstring extractedValue_13835__1 ;
      GGS_abstractDefaultValue extractedValue_13835__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_13835__0, extractedValue_13835__1, extractedValue_13835__2) ;
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
                                       Compiler * /* inCompiler */
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_location result_outResult ; // Returned variable
  const GGS_observablePropertyAST temp_0 = inObject ;
  switch (temp_0.enumValue ()) {
  case GGS_observablePropertyAST::Enumeration::invalid:
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_14082_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_14082_propertyName_0) ;
      result_outResult = extractedValue_14082_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_14170_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_14170_propertyName_0) ;
      result_outResult = extractedValue_14170_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_14255__0 ;
      GGS_lstring extractedValue_14267_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_14255__0, extractedValue_14267_optionName_1) ;
      result_outResult = extractedValue_14267_optionName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_14350__0 ;
      GGS_lstring extractedValue_14362_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_14350__0, extractedValue_14362_propertyName_1) ;
      result_outResult = extractedValue_14362_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_14444_issueLocation_0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_14444_issueLocation_0) ;
      result_outResult = extractedValue_14444_issueLocation_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_14521_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_14521_propertyName_0) ;
      result_outResult = extractedValue_14521_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_14615_propertyName_0 ;
      GGS_lstring extractedValue_14629__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_14615_propertyName_0, extractedValue_14629__1) ;
      result_outResult = extractedValue_14615_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_14707_propertyName_0 ;
      GGS_lstring extractedValue_14721__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_14707_propertyName_0, extractedValue_14721__1) ;
      result_outResult = extractedValue_14707_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_14800_propertyName_0 ;
      GGS_lstring extractedValue_14814__1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_14800_propertyName_0, extractedValue_14814__1) ;
      result_outResult = extractedValue_14800_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_14891_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_14891_propertyName_0) ;
      result_outResult = extractedValue_14891_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_14976_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_14976_propertyName_0) ;
      result_outResult = extractedValue_14976_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_15071_propertyName_0 ;
      GGS_lstring extractedValue_15085__1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_15071_propertyName_0, extractedValue_15085__1) ;
      result_outResult = extractedValue_15071_propertyName_0.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_15159__0 ;
      GGS_lstring extractedValue_15171_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_15159__0, extractedValue_15171_propertyName_1) ;
      result_outResult = extractedValue_15171_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_15266__0 ;
      GGS_lstring extractedValue_15266__1 ;
      GGS_lstring extractedValue_15278_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_15266__0, extractedValue_15266__1, extractedValue_15278_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15278_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_15387__0 ;
      GGS_lstring extractedValue_15387__1 ;
      GGS_lstring extractedValue_15399_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_15387__0, extractedValue_15387__1, extractedValue_15399_secondaryPropertyName_2) ;
      result_outResult = extractedValue_15399_secondaryPropertyName_2.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_15505__0 ;
      GGS_lstring extractedValue_15517_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_15505__0, extractedValue_15517_propertyName_1) ;
      result_outResult = extractedValue_15517_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_15607_location_0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_15607_location_0) ;
      result_outResult = extractedValue_15607_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_15678_location_0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_15678_location_0) ;
      result_outResult = extractedValue_15678_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionShouldChangeProperty:
    {
      GGS_location extractedValue_15761_location_0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_15761_location_0) ;
      result_outResult = extractedValue_15761_location_0 ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_15820__0 ;
      GGS_lstring extractedValue_15832_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_15820__0, extractedValue_15832_propertyName_1) ;
      result_outResult = extractedValue_15832_propertyName_1.readProperty_location () ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_15924__0 ;
      GGS_lstring extractedValue_15936_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_15950__2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_15924__0, extractedValue_15936_propertyName_1, extractedValue_15950__2) ;
      result_outResult = extractedValue_15936_propertyName_1.readProperty_location () ;
    }
    break ;
  }
//---
  return result_outResult ;
}




//--------------------------------------------------------------------------------------------------
//
//Extension proc '@observablePropertyAST analyzeObservableProperty'
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
      GGS_location extractedValue_16896__0 ;
      temp_0.getAssociatedValuesFor_versionShouldChangeProperty (extractedValue_16896__0) ;
      GGS_typeKind var_type_16909 = GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 387)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_16909, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 388))  COMMA_SOURCE_FILE ("observable-property.galgas4", 388)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_16909, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 389)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_versionProperty:
    {
      GGS_location extractedValue_17118__0 ;
      temp_0.getAssociatedValuesFor_versionProperty (extractedValue_17118__0) ;
      GGS_typeKind var_type_17131 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 391)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17131, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 392))  COMMA_SOURCE_FILE ("observable-property.galgas4", 392)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17131, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 393)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_signatureProperty:
    {
      GGS_location extractedValue_17345__0 ;
      temp_0.getAssociatedValuesFor_signatureProperty (extractedValue_17345__0) ;
      GGS_typeKind var_type_17358 = GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 395)) ;
      outArgument_outKind = GGS_propertyKind::class_func_property (var_type_17358, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 396))  COMMA_SOURCE_FILE ("observable-property.galgas4", 396)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (var_type_17358, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 397)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootProperty:
    {
      GGS_lstring extractedValue_17576_propertyName_0 ;
      temp_0.getAssociatedValuesFor_rootProperty (extractedValue_17576_propertyName_0) ;
      GGS_actionMap joker_17668_2 ; // Joker input parameter
      GGS_bool joker_17668_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17576_propertyName_0, outArgument_outKind, joker_17668_2, joker_17668_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 399)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 404)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyNone:
    {
      GGS_lstring extractedValue_17787_relationshipName_0 ;
      temp_0.getAssociatedValuesFor_rootPropertyNone (extractedValue_17787_relationshipName_0) ;
      GGS_propertyKind var_kind_17863 ;
      GGS_actionMap joker_17869_2 ; // Joker input parameter
      GGS_bool joker_17869_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_17787_relationshipName_0, var_kind_17863, joker_17869_2, joker_17869_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 406)) ;
      switch (var_kind_17863.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_17910__0 ;
          GGS_propertyAccessibility extractedValue_17910__1 ;
          var_kind_17863.getAssociatedValuesFor_property (extractedValue_17910__0, extractedValue_17910__1) ;
          GenericArray <FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (extractedValue_17787_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'none'"), fixItArray1  COMMA_SOURCE_FILE ("observable-property.galgas4", 409)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_18016__0 ;
          GGS_propertyAccessibility extractedValue_18016__1 ;
          GGS_bool extractedValue_18016__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_18016__3 ;
          var_kind_17863.getAssociatedValuesFor_toMany (extractedValue_18016__0, extractedValue_18016__1, extractedValue_18016__2, extractedValue_18016__3) ;
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (extractedValue_17787_relationshipName_0.readProperty_location (), GGS_string ("an array property does not accept 'none'"), fixItArray2  COMMA_SOURCE_FILE ("observable-property.galgas4", 411)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_18128__0 ;
          GGS_propertyAccessibility extractedValue_18128__1 ;
          GGS_bool extractedValue_18128__2 ;
          GGS_toOneOppositeRelationship extractedValue_18128__3 ;
          GGS_bool extractedValue_18128__4 ;
          var_kind_17863.getAssociatedValuesFor_toOne (extractedValue_18128__0, extractedValue_18128__1, extractedValue_18128__2, extractedValue_18128__3, extractedValue_18128__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 413)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 413))  COMMA_SOURCE_FILE ("observable-property.galgas4", 413)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_18254__0 ;
          GGS_bool extractedValue_18254__1 ;
          var_kind_17863.getAssociatedValuesFor_arrayController (extractedValue_18254__0, extractedValue_18254__1) ;
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (extractedValue_17787_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray3  COMMA_SOURCE_FILE ("observable-property.galgas4", 415)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_18381__0 ;
          var_kind_17863.getAssociatedValuesFor_selectionController (extractedValue_18381__0) ;
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (extractedValue_17787_relationshipName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray4  COMMA_SOURCE_FILE ("observable-property.galgas4", 417)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 419)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyWithOption:
    {
      GGS_lstring extractedValue_18604_propertyName_0 ;
      GGS_lstring extractedValue_18627_optionName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyWithOption (extractedValue_18604_propertyName_0, extractedValue_18627_optionName_1) ;
      GGS_propertyKind var_kind_18706 ;
      GGS_actionMap joker_18718_2 ; // Joker input parameter
      GGS_bool joker_18718_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_18604_propertyName_0, var_kind_18706, joker_18718_2, joker_18718_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 421)) ;
      switch (var_kind_18706.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_18764__0 ;
          GGS_propertyAccessibility extractedValue_18764__1 ;
          var_kind_18706.getAssociatedValuesFor_property (extractedValue_18764__0, extractedValue_18764__1) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (extractedValue_18604_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray5  COMMA_SOURCE_FILE ("observable-property.galgas4", 428)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_18870__0 ;
          GGS_propertyAccessibility extractedValue_18870__1 ;
          GGS_bool extractedValue_18870__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_18870__3 ;
          var_kind_18706.getAssociatedValuesFor_toMany (extractedValue_18870__0, extractedValue_18870__1, extractedValue_18870__2, extractedValue_18870__3) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_bool (ComparisonKind::equal, extractedValue_18627_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 431)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 431))  COMMA_SOURCE_FILE ("observable-property.galgas4", 431)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            GenericArray <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (extractedValue_18627_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray7  COMMA_SOURCE_FILE ("observable-property.galgas4", 433)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_19136__0 ;
          GGS_propertyAccessibility extractedValue_19136__1 ;
          GGS_bool extractedValue_19136__2 ;
          GGS_toOneOppositeRelationship extractedValue_19136__3 ;
          GGS_bool extractedValue_19136__4 ;
          var_kind_18706.getAssociatedValuesFor_toOne (extractedValue_19136__0, extractedValue_19136__1, extractedValue_19136__2, extractedValue_19136__3, extractedValue_19136__4) ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (extractedValue_18604_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray8  COMMA_SOURCE_FILE ("observable-property.galgas4", 436)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_19257__0 ;
          GGS_bool extractedValue_19257__1 ;
          var_kind_18706.getAssociatedValuesFor_arrayController (extractedValue_19257__0, extractedValue_19257__1) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::equal, extractedValue_18627_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 439)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 439))  COMMA_SOURCE_FILE ("observable-property.galgas4", 439)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, extractedValue_18627_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 441)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 441))  COMMA_SOURCE_FILE ("observable-property.galgas4", 441)) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (extractedValue_18627_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray11  COMMA_SOURCE_FILE ("observable-property.galgas4", 443)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_19687__0 ;
          var_kind_18706.getAssociatedValuesFor_selectionController (extractedValue_19687__0) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (extractedValue_18604_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray12  COMMA_SOURCE_FILE ("observable-property.galgas4", 446)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 448)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_rootPropertyRelationship:
    {
      GGS_lstring extractedValue_19912_relationshipName_0 ;
      GGS_lstring extractedValue_19939_propertyName_1 ;
      temp_0.getAssociatedValuesFor_rootPropertyRelationship (extractedValue_19912_relationshipName_0, extractedValue_19939_propertyName_1) ;
      GGS_propertyKind var_kind_20031 ;
      GGS_actionMap joker_20037_2 ; // Joker input parameter
      GGS_bool joker_20037_1 ; // Joker input parameter
      constinArgument_inRootPropertyMap.method_searchKey (extractedValue_19912_relationshipName_0, var_kind_20031, joker_20037_2, joker_20037_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 450)) ;
      switch (var_kind_20031.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_20078__0 ;
          GGS_propertyAccessibility extractedValue_20078__1 ;
          var_kind_20031.getAssociatedValuesFor_property (extractedValue_20078__0, extractedValue_20078__1) ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (extractedValue_19912_relationshipName_0.readProperty_location (), GGS_string ("a property does not accept 'all'"), fixItArray13  COMMA_SOURCE_FILE ("observable-property.galgas4", 453)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_20182_typeName_0 ;
          GGS_propertyAccessibility extractedValue_20193__1 ;
          GGS_bool extractedValue_20193__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_20193__3 ;
          var_kind_20031.getAssociatedValuesFor_toMany (extractedValue_20182_typeName_0, extractedValue_20193__1, extractedValue_20193__2, extractedValue_20193__3) ;
          GGS_propertyMap var_observablePropertyMap_20298 ;
          GGS_classKind joker_20289 ; // Joker input parameter
          GGS_actionMap joker_20321_2 ; // Joker input parameter
          GGS__5B_propertyGeneration_5D_ joker_20321_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_20182_typeName_0.readProperty_string (), extractedValue_19912_relationshipName_0.readProperty_location (), inCompiler COMMA_HERE), joker_20289, var_observablePropertyMap_20298, joker_20321_2, joker_20321_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 455)) ;
          GGS_actionMap joker_20389_2 ; // Joker input parameter
          GGS_bool joker_20389_1 ; // Joker input parameter
          var_observablePropertyMap_20298.method_searchKey (extractedValue_19939_propertyName_1, outArgument_outKind, joker_20389_2, joker_20389_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 456)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_20411__0 ;
          GGS_propertyAccessibility extractedValue_20411__1 ;
          GGS_bool extractedValue_20411__2 ;
          GGS_toOneOppositeRelationship extractedValue_20411__3 ;
          GGS_bool extractedValue_20411__4 ;
          var_kind_20031.getAssociatedValuesFor_toOne (extractedValue_20411__0, extractedValue_20411__1, extractedValue_20411__2, extractedValue_20411__3, extractedValue_20411__4) ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (extractedValue_19912_relationshipName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'all'"), fixItArray14  COMMA_SOURCE_FILE ("observable-property.galgas4", 458)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_20531__0 ;
          GGS_bool extractedValue_20531__1 ;
          var_kind_20031.getAssociatedValuesFor_arrayController (extractedValue_20531__0, extractedValue_20531__1) ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (extractedValue_19912_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray15  COMMA_SOURCE_FILE ("observable-property.galgas4", 460)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_20657__0 ;
          var_kind_20031.getAssociatedValuesFor_selectionController (extractedValue_20657__0) ;
          GenericArray <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (extractedValue_19912_relationshipName_0.readProperty_location (), GGS_string ("an array controller does not accept 'all'"), fixItArray16  COMMA_SOURCE_FILE ("observable-property.galgas4", 462)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_20031, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 464)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 464)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 464)).add_operation (extractedValue_19939_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 464)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 464)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_20031, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 465)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 465)).add_operation (extractedValue_19939_propertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 465)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfProperty:
    {
      GGS_lstring extractedValue_20975_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfProperty (extractedValue_20975_propertyName_0) ;
      GGS_actionMap joker_21072_2 ; // Joker input parameter
      GGS_bool joker_21072_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_20975_propertyName_0, outArgument_outKind, joker_21072_2, joker_21072_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 467)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_21121__0 ;
          GGS_propertyAccessibility extractedValue_21121__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_21121__0, extractedValue_21121__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 474)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_21221__0 ;
          GGS_propertyAccessibility extractedValue_21221__1 ;
          GGS_bool extractedValue_21221__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_21221__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_21221__0, extractedValue_21221__1, extractedValue_21221__2, extractedValue_21221__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_21312__0 ;
          GGS_propertyAccessibility extractedValue_21312__1 ;
          GGS_bool extractedValue_21312__2 ;
          GGS_toOneOppositeRelationship extractedValue_21312__3 ;
          GGS_bool extractedValue_21312__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_21312__0, extractedValue_21312__1, extractedValue_21312__2, extractedValue_21312__3, extractedValue_21312__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_21412__0 ;
          GGS_bool extractedValue_21412__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_21412__0, extractedValue_21412__1) ;
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (extractedValue_20975_propertyName_0.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray17  COMMA_SOURCE_FILE ("observable-property.galgas4", 480)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_21570__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_21570__0) ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (extractedValue_20975_propertyName_0.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray18  COMMA_SOURCE_FILE ("observable-property.galgas4", 482)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfWithoutProperty:
    {
      GGS_location extractedValue_21737__0 ;
      temp_0.getAssociatedValuesFor_selfWithoutProperty (extractedValue_21737__0) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("Int") ;
      outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 486)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 486))  COMMA_SOURCE_FILE ("observable-property.galgas4", 486)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyWithOption:
    {
      GGS_lstring extractedValue_21936_propertyName_0 ;
      GGS_lstring extractedValue_21959_optionName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyWithOption (extractedValue_21936_propertyName_0, extractedValue_21959_optionName_1) ;
      GGS_propertyKind var_kind_22043 ;
      GGS_actionMap joker_22055_2 ; // Joker input parameter
      GGS_bool joker_22055_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_21936_propertyName_0, var_kind_22043, joker_22055_2, joker_22055_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 488)) ;
      switch (var_kind_22043.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_22101__0 ;
          GGS_propertyAccessibility extractedValue_22101__1 ;
          var_kind_22043.getAssociatedValuesFor_property (extractedValue_22101__0, extractedValue_22101__1) ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (extractedValue_21936_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray19  COMMA_SOURCE_FILE ("observable-property.galgas4", 495)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_22206__0 ;
          GGS_propertyAccessibility extractedValue_22206__1 ;
          GGS_bool extractedValue_22206__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_22206__3 ;
          var_kind_22043.getAssociatedValuesFor_toMany (extractedValue_22206__0, extractedValue_22206__1, extractedValue_22206__2, extractedValue_22206__3) ;
          GalgasBool test_20 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, extractedValue_21959_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 498)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 498))  COMMA_SOURCE_FILE ("observable-property.galgas4", 498)) ;
            }
          }
          if (GalgasBool::boolFalse == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (extractedValue_21959_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count')"), fixItArray21  COMMA_SOURCE_FILE ("observable-property.galgas4", 500)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_22472__0 ;
          GGS_propertyAccessibility extractedValue_22472__1 ;
          GGS_bool extractedValue_22472__2 ;
          GGS_toOneOppositeRelationship extractedValue_22472__3 ;
          GGS_bool extractedValue_22472__4 ;
          var_kind_22043.getAssociatedValuesFor_toOne (extractedValue_22472__0, extractedValue_22472__1, extractedValue_22472__2, extractedValue_22472__3, extractedValue_22472__4) ;
          GenericArray <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (extractedValue_21936_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray22  COMMA_SOURCE_FILE ("observable-property.galgas4", 503)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_22584__0 ;
          GGS_bool extractedValue_22584__1 ;
          var_kind_22043.getAssociatedValuesFor_arrayController (extractedValue_22584__0, extractedValue_22584__1) ;
          GalgasBool test_23 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_23) {
            test_23 = GGS_bool (ComparisonKind::equal, extractedValue_21959_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_23) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 506)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 506))  COMMA_SOURCE_FILE ("observable-property.galgas4", 506)) ;
            }
          }
          if (GalgasBool::boolFalse == test_23) {
            GalgasBool test_24 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_24) {
              test_24 = GGS_bool (ComparisonKind::equal, extractedValue_21959_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 508)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 508))  COMMA_SOURCE_FILE ("observable-property.galgas4", 508)) ;
              }
            }
            if (GalgasBool::boolFalse == test_24) {
              GenericArray <FixItDescription> fixItArray25 ;
              inCompiler->emitSemanticError (extractedValue_21959_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray25  COMMA_SOURCE_FILE ("observable-property.galgas4", 510)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_23014__0 ;
          var_kind_22043.getAssociatedValuesFor_selectionController (extractedValue_23014__0) ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (extractedValue_21936_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray26  COMMA_SOURCE_FILE ("observable-property.galgas4", 513)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 515)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyArray:
    {
      GGS_lstring extractedValue_23223_propertyName_0 ;
      GGS_lstring extractedValue_23246_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyArray (extractedValue_23223_propertyName_0, extractedValue_23246_elementPropertyName_1) ;
      GGS_propertyKind var_kind_23359 ;
      GGS_actionMap joker_23371_2 ; // Joker input parameter
      GGS_bool joker_23371_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_23223_propertyName_0, var_kind_23359, joker_23371_2, joker_23371_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 517)) ;
      switch (var_kind_23359.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_23417__0 ;
          GGS_propertyAccessibility extractedValue_23417__1 ;
          var_kind_23359.getAssociatedValuesFor_property (extractedValue_23417__0, extractedValue_23417__1) ;
          GenericArray <FixItDescription> fixItArray27 ;
          inCompiler->emitSemanticError (extractedValue_23223_propertyName_0.readProperty_location (), GGS_string ("an atomic property accepts no option"), fixItArray27  COMMA_SOURCE_FILE ("observable-property.galgas4", 524)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_23521_typeName_0 ;
          GGS_propertyAccessibility extractedValue_23532__1 ;
          GGS_bool extractedValue_23532__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_23532__3 ;
          var_kind_23359.getAssociatedValuesFor_toMany (extractedValue_23521_typeName_0, extractedValue_23532__1, extractedValue_23532__2, extractedValue_23532__3) ;
          GGS_propertyMap var_observablePropertyMap_23601 ;
          GGS_classKind joker_23592 ; // Joker input parameter
          GGS_actionMap joker_23624_2 ; // Joker input parameter
          GGS__5B_propertyGeneration_5D_ joker_23624_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_23521_typeName_0, joker_23592, var_observablePropertyMap_23601, joker_23624_2, joker_23624_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 526)) ;
          GGS_actionMap joker_23723_2 ; // Joker input parameter
          GGS_bool joker_23723_1 ; // Joker input parameter
          var_observablePropertyMap_23601.method_searchKey (extractedValue_23246_elementPropertyName_1, outArgument_outKind, joker_23723_2, joker_23723_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 527)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_23752__0 ;
          GGS_propertyAccessibility extractedValue_23752__1 ;
          GGS_bool extractedValue_23752__2 ;
          GGS_toOneOppositeRelationship extractedValue_23752__3 ;
          GGS_bool extractedValue_23752__4 ;
          var_kind_23359.getAssociatedValuesFor_toOne (extractedValue_23752__0, extractedValue_23752__1, extractedValue_23752__2, extractedValue_23752__3, extractedValue_23752__4) ;
          GenericArray <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (extractedValue_23223_propertyName_0.readProperty_location (), GGS_string ("a toOne property accepts no option"), fixItArray28  COMMA_SOURCE_FILE ("observable-property.galgas4", 533)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_23864__0 ;
          GGS_bool extractedValue_23864__1 ;
          var_kind_23359.getAssociatedValuesFor_arrayController (extractedValue_23864__0, extractedValue_23864__1) ;
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (extractedValue_23223_propertyName_0.readProperty_location (), GGS_string ("an array controller accepts no option"), fixItArray29  COMMA_SOURCE_FILE ("observable-property.galgas4", 535)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_23982__0 ;
          var_kind_23359.getAssociatedValuesFor_selectionController (extractedValue_23982__0) ;
          GenericArray <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (extractedValue_23223_propertyName_0.readProperty_location (), GGS_string ("a selection controller accepts no option"), fixItArray30  COMMA_SOURCE_FILE ("observable-property.galgas4", 537)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extensionGetter_swiftTypeName (var_kind_23359, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 539)), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 539)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 539)).add_operation (extractedValue_23246_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 540)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 540)) ;
      outArgument_outProtocolTypeString = extensionGetter_swiftTypeName (var_kind_23359, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 541)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 541)).add_operation (extractedValue_23246_elementPropertyName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 541)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyObject:
    {
      GGS_lstring extractedValue_24322_propertyName_0 ;
      GGS_lstring extractedValue_24345_elementPropertyName_1 ;
      temp_0.getAssociatedValuesFor_selfPropertyObject (extractedValue_24322_propertyName_0, extractedValue_24345_elementPropertyName_1) ;
      GGS_propertyKind var_kind_24458 ;
      GGS_actionMap joker_24470_2 ; // Joker input parameter
      GGS_bool joker_24470_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_24322_propertyName_0, var_kind_24458, joker_24470_2, joker_24470_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 543)) ;
      switch (var_kind_24458.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_24516__0 ;
          GGS_propertyAccessibility extractedValue_24516__1 ;
          var_kind_24458.getAssociatedValuesFor_property (extractedValue_24516__0, extractedValue_24516__1) ;
          GenericArray <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (extractedValue_24322_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'one'"), fixItArray31  COMMA_SOURCE_FILE ("observable-property.galgas4", 550)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_24625__0 ;
          GGS_propertyAccessibility extractedValue_24625__1 ;
          GGS_bool extractedValue_24625__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_24625__3 ;
          var_kind_24458.getAssociatedValuesFor_toMany (extractedValue_24625__0, extractedValue_24625__1, extractedValue_24625__2, extractedValue_24625__3) ;
          GenericArray <FixItDescription> fixItArray32 ;
          inCompiler->emitSemanticError (extractedValue_24322_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'one'"), fixItArray32  COMMA_SOURCE_FILE ("observable-property.galgas4", 552)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_24730_typeName_0 ;
          GGS_propertyAccessibility extractedValue_24741__1 ;
          GGS_bool extractedValue_24741__2 ;
          GGS_toOneOppositeRelationship extractedValue_24741__3 ;
          GGS_bool extractedValue_24741__4 ;
          var_kind_24458.getAssociatedValuesFor_toOne (extractedValue_24730_typeName_0, extractedValue_24741__1, extractedValue_24741__2, extractedValue_24741__3, extractedValue_24741__4) ;
          GGS_propertyMap var_observablePropertyMap_24810 ;
          GGS_classKind joker_24801 ; // Joker input parameter
          GGS_actionMap joker_24833_2 ; // Joker input parameter
          GGS__5B_propertyGeneration_5D_ joker_24833_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_24730_typeName_0, joker_24801, var_observablePropertyMap_24810, joker_24833_2, joker_24833_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 554)) ;
          GGS_actionMap joker_24932_2 ; // Joker input parameter
          GGS_bool joker_24932_1 ; // Joker input parameter
          var_observablePropertyMap_24810.method_searchKey (extractedValue_24345_elementPropertyName_1, outArgument_outKind, joker_24932_2, joker_24932_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 555)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_24971__0 ;
          GGS_bool extractedValue_24971__1 ;
          var_kind_24458.getAssociatedValuesFor_arrayController (extractedValue_24971__0, extractedValue_24971__1) ;
          GenericArray <FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (extractedValue_24322_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'one'"), fixItArray33  COMMA_SOURCE_FILE ("observable-property.galgas4", 561)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_25093__0 ;
          var_kind_24458.getAssociatedValuesFor_selectionController (extractedValue_25093__0) ;
          GenericArray <FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (extractedValue_24322_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'one'"), fixItArray34  COMMA_SOURCE_FILE ("observable-property.galgas4", 563)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 565)).add_operation (GGS_string ("\?"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 565)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfPropertyNone:
    {
      GGS_lstring extractedValue_25311_propertyName_0 ;
      temp_0.getAssociatedValuesFor_selfPropertyNone (extractedValue_25311_propertyName_0) ;
      GGS_propertyKind var_kind_25414 ;
      GGS_actionMap joker_25426_2 ; // Joker input parameter
      GGS_bool joker_25426_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_25311_propertyName_0, var_kind_25414, joker_25426_2, joker_25426_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 567)) ;
      switch (var_kind_25414.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_25472__0 ;
          GGS_propertyAccessibility extractedValue_25472__1 ;
          var_kind_25414.getAssociatedValuesFor_property (extractedValue_25472__0, extractedValue_25472__1) ;
          GenericArray <FixItDescription> fixItArray35 ;
          inCompiler->emitSemanticError (extractedValue_25311_propertyName_0.readProperty_location (), GGS_string ("an atomic property does not accept 'none'"), fixItArray35  COMMA_SOURCE_FILE ("observable-property.galgas4", 574)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_25582__0 ;
          GGS_propertyAccessibility extractedValue_25582__1 ;
          GGS_bool extractedValue_25582__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_25582__3 ;
          var_kind_25414.getAssociatedValuesFor_toMany (extractedValue_25582__0, extractedValue_25582__1, extractedValue_25582__2, extractedValue_25582__3) ;
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (extractedValue_25311_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept 'none'"), fixItArray36  COMMA_SOURCE_FILE ("observable-property.galgas4", 576)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_25689__0 ;
          GGS_propertyAccessibility extractedValue_25689__1 ;
          GGS_bool extractedValue_25689__2 ;
          GGS_toOneOppositeRelationship extractedValue_25689__3 ;
          GGS_bool extractedValue_25689__4 ;
          var_kind_25414.getAssociatedValuesFor_toOne (extractedValue_25689__0, extractedValue_25689__1, extractedValue_25689__2, extractedValue_25689__3, extractedValue_25689__4) ;
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 578)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 578))  COMMA_SOURCE_FILE ("observable-property.galgas4", 578)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_25815__0 ;
          GGS_bool extractedValue_25815__1 ;
          var_kind_25414.getAssociatedValuesFor_arrayController (extractedValue_25815__0, extractedValue_25815__1) ;
          GenericArray <FixItDescription> fixItArray37 ;
          inCompiler->emitSemanticError (extractedValue_25311_propertyName_0.readProperty_location (), GGS_string ("an array controller does not accept 'none'"), fixItArray37  COMMA_SOURCE_FILE ("observable-property.galgas4", 580)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_25938__0 ;
          var_kind_25414.getAssociatedValuesFor_selectionController (extractedValue_25938__0) ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (extractedValue_25311_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept 'none'"), fixItArray38  COMMA_SOURCE_FILE ("observable-property.galgas4", 582)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 584)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsProperty:
    {
      GGS_lstring extractedValue_26148_propertyName_0 ;
      temp_0.getAssociatedValuesFor_prefsProperty (extractedValue_26148_propertyName_0) ;
      GGS_propertyMap var_observablePropertyMap_26249 ;
      GGS_classKind joker_26240 ; // Joker input parameter
      GGS_actionMap joker_26272_2 ; // Joker input parameter
      GGS__5B_propertyGeneration_5D_ joker_26272_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 586)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 586)), inCompiler COMMA_HERE), joker_26240, var_observablePropertyMap_26249, joker_26272_2, joker_26272_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 586)) ;
      GGS_actionMap joker_26356_2 ; // Joker input parameter
      GGS_bool joker_26356_1 ; // Joker input parameter
      var_observablePropertyMap_26249.method_searchKey (extractedValue_26148_propertyName_0, outArgument_outKind, joker_26356_2, joker_26356_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 587)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 592)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_prefsPropertyWithOption:
    {
      GGS_lstring extractedValue_26482_propertyName_0 ;
      GGS_lstring extractedValue_26505_optionName_1 ;
      temp_0.getAssociatedValuesFor_prefsPropertyWithOption (extractedValue_26482_propertyName_0, extractedValue_26505_optionName_1) ;
      GGS_propertyMap var_observablePropertyMap_26604 ;
      GGS_classKind joker_26595 ; // Joker input parameter
      GGS_actionMap joker_26627_2 ; // Joker input parameter
      GGS__5B_propertyGeneration_5D_ joker_26627_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 594)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 594)), inCompiler COMMA_HERE), joker_26595, var_observablePropertyMap_26604, joker_26627_2, joker_26627_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 594)) ;
      GGS_propertyKind var_kind_26700 ;
      GGS_actionMap joker_26712_2 ; // Joker input parameter
      GGS_bool joker_26712_1 ; // Joker input parameter
      var_observablePropertyMap_26604.method_searchKey (extractedValue_26482_propertyName_0, var_kind_26700, joker_26712_2, joker_26712_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 595)) ;
      switch (var_kind_26700.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_26758__0 ;
          GGS_propertyAccessibility extractedValue_26758__1 ;
          var_kind_26700.getAssociatedValuesFor_property (extractedValue_26758__0, extractedValue_26758__1) ;
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticError (extractedValue_26482_propertyName_0.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray39  COMMA_SOURCE_FILE ("observable-property.galgas4", 602)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_26864__0 ;
          GGS_propertyAccessibility extractedValue_26864__1 ;
          GGS_bool extractedValue_26864__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_26864__3 ;
          var_kind_26700.getAssociatedValuesFor_toMany (extractedValue_26864__0, extractedValue_26864__1, extractedValue_26864__2, extractedValue_26864__3) ;
          GenericArray <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (extractedValue_26482_propertyName_0.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray40  COMMA_SOURCE_FILE ("observable-property.galgas4", 604)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_26976__0 ;
          GGS_propertyAccessibility extractedValue_26976__1 ;
          GGS_bool extractedValue_26976__2 ;
          GGS_toOneOppositeRelationship extractedValue_26976__3 ;
          GGS_bool extractedValue_26976__4 ;
          var_kind_26700.getAssociatedValuesFor_toOne (extractedValue_26976__0, extractedValue_26976__1, extractedValue_26976__2, extractedValue_26976__3, extractedValue_26976__4) ;
          GenericArray <FixItDescription> fixItArray41 ;
          inCompiler->emitSemanticError (extractedValue_26482_propertyName_0.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray41  COMMA_SOURCE_FILE ("observable-property.galgas4", 606)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_27097__0 ;
          GGS_bool extractedValue_27097__1 ;
          var_kind_26700.getAssociatedValuesFor_arrayController (extractedValue_27097__0, extractedValue_27097__1) ;
          GalgasBool test_42 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_42) {
            test_42 = GGS_bool (ComparisonKind::equal, extractedValue_26505_optionName_1.readProperty_string ().objectCompare (GGS_string ("count"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_42) {
              outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 609)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 609))  COMMA_SOURCE_FILE ("observable-property.galgas4", 609)) ;
            }
          }
          if (GalgasBool::boolFalse == test_42) {
            GalgasBool test_43 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_43) {
              test_43 = GGS_bool (ComparisonKind::equal, extractedValue_26505_optionName_1.readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_43) {
                outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_boolType (SOURCE_FILE ("observable-property.galgas4", 611)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 611))  COMMA_SOURCE_FILE ("observable-property.galgas4", 611)) ;
              }
            }
            if (GalgasBool::boolFalse == test_43) {
              GenericArray <FixItDescription> fixItArray44 ;
              inCompiler->emitSemanticError (extractedValue_26505_optionName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'count', 'empty')"), fixItArray44  COMMA_SOURCE_FILE ("observable-property.galgas4", 613)) ;
              outArgument_outKind.drop () ; // Release error dropped variable
            }
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_27527__0 ;
          var_kind_26700.getAssociatedValuesFor_selectionController (extractedValue_27527__0) ;
          GenericArray <FixItDescription> fixItArray45 ;
          inCompiler->emitSemanticError (extractedValue_26482_propertyName_0.readProperty_location (), GGS_string ("a selection controller does not accept any option"), fixItArray45  COMMA_SOURCE_FILE ("observable-property.galgas4", 616)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 618)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerProperty:
    {
      GGS_lstring extractedValue_27750_controllerName_0 ;
      GGS_lstring extractedValue_27775_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerProperty (extractedValue_27750_controllerName_0, extractedValue_27775_propertyName_1) ;
      GGS_propertyKind var_propertyKind_27877 ;
      GGS_actionMap joker_27897_2 ; // Joker input parameter
      GGS_bool joker_27897_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_27750_controllerName_0, var_propertyKind_27877, joker_27897_2, joker_27897_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 620)) ;
      switch (var_propertyKind_27877.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_27951__0 ;
          GGS_propertyAccessibility extractedValue_27951__1 ;
          var_propertyKind_27877.getAssociatedValuesFor_property (extractedValue_27951__0, extractedValue_27951__1) ;
          GenericArray <FixItDescription> fixItArray46 ;
          inCompiler->emitSemanticError (extractedValue_27775_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray46  COMMA_SOURCE_FILE ("observable-property.galgas4", 627)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_28057__0 ;
          GGS_propertyAccessibility extractedValue_28057__1 ;
          GGS_bool extractedValue_28057__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_28057__3 ;
          var_propertyKind_27877.getAssociatedValuesFor_toMany (extractedValue_28057__0, extractedValue_28057__1, extractedValue_28057__2, extractedValue_28057__3) ;
          GenericArray <FixItDescription> fixItArray47 ;
          inCompiler->emitSemanticError (extractedValue_27775_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray47  COMMA_SOURCE_FILE ("observable-property.galgas4", 629)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_28169__0 ;
          GGS_propertyAccessibility extractedValue_28169__1 ;
          GGS_bool extractedValue_28169__2 ;
          GGS_toOneOppositeRelationship extractedValue_28169__3 ;
          GGS_bool extractedValue_28169__4 ;
          var_propertyKind_27877.getAssociatedValuesFor_toOne (extractedValue_28169__0, extractedValue_28169__1, extractedValue_28169__2, extractedValue_28169__3, extractedValue_28169__4) ;
          GenericArray <FixItDescription> fixItArray48 ;
          inCompiler->emitSemanticError (extractedValue_27775_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray48  COMMA_SOURCE_FILE ("observable-property.galgas4", 631)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_28289_typeName_0 ;
          GGS_bool extractedValue_28299_graphic_1 ;
          var_propertyKind_27877.getAssociatedValuesFor_arrayController (extractedValue_28289_typeName_0, extractedValue_28299_graphic_1) ;
          GalgasBool test_49 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_49) {
            GGS_bool test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27775_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
            if (GalgasBool::boolTrue != test_50.boolEnum ()) {
              test_50 = GGS_bool (ComparisonKind::equal, extractedValue_27775_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
            }
            test_49 = test_50.boolEnum () ;
            if (GalgasBool::boolTrue == test_49) {
              outArgument_outKind = GGS_propertyKind::class_func_toMany (extractedValue_28289_typeName_0, GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 636)), extractedValue_28299_graphic_1, GGS_toManyRelationshipOptionAST::class_func_none (SOURCE_FILE ("observable-property.galgas4", 638))  COMMA_SOURCE_FILE ("observable-property.galgas4", 634)) ;
            }
          }
          if (GalgasBool::boolFalse == test_49) {
            GenericArray <FixItDescription> fixItArray51 ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
            appendFixItActions (fixItArray51, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
            inCompiler->emitSemanticError (extractedValue_27775_propertyName_1.readProperty_location (), GGS_string ("unknown option (accepted : 'sortedArray' or 'selectedArray')"), fixItArray51  COMMA_SOURCE_FILE ("observable-property.galgas4", 641)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_28842_entityName_0 ;
          var_propertyKind_27877.getAssociatedValuesFor_selectionController (extractedValue_28842_entityName_0) ;
          GGS_propertyMap var_observablePropertyMap_28975 ;
          GGS_classKind joker_28958 ; // Joker input parameter
          GGS_actionMap joker_29006_2 ; // Joker input parameter
          GGS__5B_propertyGeneration_5D_ joker_29006_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_28842_entityName_0, extractedValue_27750_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_28958, var_observablePropertyMap_28975, joker_29006_2, joker_29006_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 647)) ;
          GGS_actionMap joker_29081_2 ; // Joker input parameter
          GGS_bool joker_29081_1 ; // Joker input parameter
          var_observablePropertyMap_28975.method_searchKey (extractedValue_27775_propertyName_1, outArgument_outKind, joker_29081_2, joker_29081_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 653)) ;
        }
        break ;
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 655)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerSecondaryProperty:
    {
      GGS_lstring extractedValue_29218_controllerName_0 ;
      GGS_lstring extractedValue_29243_propertyName_1 ;
      GGS_lstring extractedValue_29266_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerSecondaryProperty (extractedValue_29218_controllerName_0, extractedValue_29243_propertyName_1, extractedValue_29266_secondaryPropertyName_2) ;
      GGS_propertyKind joker_29346_3 ; // Joker input parameter
      GGS_actionMap joker_29346_2 ; // Joker input parameter
      GGS_bool joker_29346_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_29218_controllerName_0, joker_29346_3, joker_29346_2, joker_29346_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 657)) ;
      GalgasBool test_52 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_52) {
        GGS_bool test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29243_propertyName_1.readProperty_string ().objectCompare (GGS_string ("sortedArray"))) ;
        if (GalgasBool::boolTrue == test_53.boolEnum ()) {
          test_53 = GGS_bool (ComparisonKind::equal, extractedValue_29266_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
        }
        test_52 = test_53.boolEnum () ;
        if (GalgasBool::boolTrue == test_52) {
          outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 659)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 659))  COMMA_SOURCE_FILE ("observable-property.galgas4", 659)) ;
        }
      }
      if (GalgasBool::boolFalse == test_52) {
        GalgasBool test_54 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_54) {
          GGS_bool test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29243_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))) ;
          if (GalgasBool::boolTrue == test_55.boolEnum ()) {
            test_55 = GGS_bool (ComparisonKind::equal, extractedValue_29266_secondaryPropertyName_2.readProperty_string ().objectCompare (GGS_string ("count"))) ;
          }
          test_54 = test_55.boolEnum () ;
          if (GalgasBool::boolTrue == test_54) {
            outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 661)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 661))  COMMA_SOURCE_FILE ("observable-property.galgas4", 661)) ;
          }
        }
        if (GalgasBool::boolFalse == test_54) {
          GenericArray <FixItDescription> fixItArray56 ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("sortedArray")) ;
          appendFixItActions (fixItArray56, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_29243_propertyName_1.readProperty_location (), GGS_string ("unknown option"), fixItArray56  COMMA_SOURCE_FILE ("observable-property.galgas4", 663)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
        }
      }
      outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 665)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerOneProperty:
    {
      GGS_lstring extractedValue_29997_controllerName_0 ;
      GGS_lstring extractedValue_30022_propertyName_1 ;
      temp_0.getAssociatedValuesFor_selfControllerOneProperty (extractedValue_29997_controllerName_0, extractedValue_30022_propertyName_1) ;
      GGS_propertyKind var_propertyKind_30112 ;
      GGS_actionMap joker_30126_2 ; // Joker input parameter
      GGS_bool joker_30126_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_29997_controllerName_0, var_propertyKind_30112, joker_30126_2, joker_30126_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 667)) ;
      GGS_string var_controllerTypeName_30147 = GGS_string::makeEmptyString () ;
      switch (var_propertyKind_30112.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_30222__0 ;
          GGS_bool extractedValue_30222__1 ;
          var_propertyKind_30112.getAssociatedValuesFor_arrayController (extractedValue_30222__0, extractedValue_30222__1) ;
          GenericArray <FixItDescription> fixItArray57 ;
          inCompiler->emitSemanticError (extractedValue_29997_controllerName_0.readProperty_location (), GGS_string ("an array controller does not support 'one'"), fixItArray57  COMMA_SOURCE_FILE ("observable-property.galgas4", 671)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_30333__0 ;
          var_propertyKind_30112.getAssociatedValuesFor_selectionController (extractedValue_30333__0) ;
          GenericArray <FixItDescription> fixItArray58 ;
          inCompiler->emitSemanticError (extractedValue_29997_controllerName_0.readProperty_location (), GGS_string ("a selection controller does not support 'one'"), fixItArray58  COMMA_SOURCE_FILE ("observable-property.galgas4", 673)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_30437__0 ;
          GGS_propertyAccessibility extractedValue_30437__1 ;
          var_propertyKind_30112.getAssociatedValuesFor_property (extractedValue_30437__0, extractedValue_30437__1) ;
          GenericArray <FixItDescription> fixItArray59 ;
          inCompiler->emitSemanticError (extractedValue_29997_controllerName_0.readProperty_location (), GGS_string ("a property does not support 'one'"), fixItArray59  COMMA_SOURCE_FILE ("observable-property.galgas4", 675)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_30527__0 ;
          GGS_propertyAccessibility extractedValue_30527__1 ;
          GGS_bool extractedValue_30527__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_30527__3 ;
          var_propertyKind_30112.getAssociatedValuesFor_toMany (extractedValue_30527__0, extractedValue_30527__1, extractedValue_30527__2, extractedValue_30527__3) ;
          GenericArray <FixItDescription> fixItArray60 ;
          inCompiler->emitSemanticError (extractedValue_29997_controllerName_0.readProperty_location (), GGS_string ("a toMany relationship does not support 'one'"), fixItArray60  COMMA_SOURCE_FILE ("observable-property.galgas4", 677)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_30627__0 ;
          GGS_propertyAccessibility extractedValue_30627__1 ;
          GGS_bool extractedValue_30627__2 ;
          GGS_toOneOppositeRelationship extractedValue_30627__3 ;
          GGS_bool extractedValue_30627__4 ;
          var_propertyKind_30112.getAssociatedValuesFor_toOne (extractedValue_30627__0, extractedValue_30627__1, extractedValue_30627__2, extractedValue_30627__3, extractedValue_30627__4) ;
          GenericArray <FixItDescription> fixItArray61 ;
          inCompiler->emitSemanticError (extractedValue_29997_controllerName_0.readProperty_location (), GGS_string ("a toOne relationship does not support 'one'"), fixItArray61  COMMA_SOURCE_FILE ("observable-property.galgas4", 679)) ;
        }
        break ;
      }
      GGS_propertyMap var_observablePropertyMap_30836 ;
      GGS_classKind joker_30821 ; // Joker input parameter
      GGS_actionMap joker_30865_2 ; // Joker input parameter
      GGS__5B_propertyGeneration_5D_ joker_30865_1 ; // Joker input parameter
      constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (var_controllerTypeName_30147, extractedValue_29997_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_30821, var_observablePropertyMap_30836, joker_30865_2, joker_30865_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 681)) ;
      GGS_actionMap joker_30935_2 ; // Joker input parameter
      GGS_bool joker_30935_1 ; // Joker input parameter
      var_observablePropertyMap_30836.method_searchKey (extractedValue_30022_propertyName_1, outArgument_outKind, joker_30935_2, joker_30935_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 687)) ;
      outArgument_outSwiftTypeStringForTransientFunctionArgument = var_controllerTypeName_30147.add_operation (GGS_string ("\?<<8>>"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 688)) ;
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_selfControllerAllProperties:
    {
      GGS_lstring extractedValue_31068_controllerName_0 ;
      GGS_lstring extractedValue_31093_propertyName_1 ;
      GGS_lstring extractedValue_31116_secondaryPropertyName_2 ;
      temp_0.getAssociatedValuesFor_selfControllerAllProperties (extractedValue_31068_controllerName_0, extractedValue_31093_propertyName_1, extractedValue_31116_secondaryPropertyName_2) ;
      GGS_propertyKind var_propertyKind_31215 ;
      GGS_actionMap joker_31229_2 ; // Joker input parameter
      GGS_bool joker_31229_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_31068_controllerName_0, var_propertyKind_31215, joker_31229_2, joker_31229_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 690)) ;
      GalgasBool test_62 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_62) {
        test_62 = GGS_bool (ComparisonKind::notEqual, extractedValue_31093_propertyName_1.readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_62) {
          GenericArray <FixItDescription> fixItArray63 ;
          appendFixItActions (fixItArray63, EnumFixItKind::fixItReplace, GGS_string ("selectedArray")) ;
          inCompiler->emitSemanticError (extractedValue_31093_propertyName_1.readProperty_location (), GGS_string ("unknown property"), fixItArray63  COMMA_SOURCE_FILE ("observable-property.galgas4", 692)) ;
          outArgument_outKind.drop () ; // Release error dropped variable
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_62) {
        outArgument_outKind = GGS_propertyKind::class_func_property (GGS_typeKind::class_func_integerType (SOURCE_FILE ("observable-property.galgas4", 696)), GGS_propertyAccessibility::class_func_transient (GGS_bool (false)  COMMA_SOURCE_FILE ("observable-property.galgas4", 696))  COMMA_SOURCE_FILE ("observable-property.galgas4", 696)) ;
        switch (var_propertyKind_31215.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_31599__0 ;
            GGS_propertyAccessibility extractedValue_31599__1 ;
            var_propertyKind_31215.getAssociatedValuesFor_property (extractedValue_31599__0, extractedValue_31599__1) ;
            GenericArray <FixItDescription> fixItArray64 ;
            inCompiler->emitSemanticError (extractedValue_31093_propertyName_1.readProperty_location (), GGS_string ("a property does not accept any option"), fixItArray64  COMMA_SOURCE_FILE ("observable-property.galgas4", 699)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_31777__0 ;
            GGS_propertyAccessibility extractedValue_31777__1 ;
            GGS_bool extractedValue_31777__2 ;
            GGS_toManyRelationshipOptionAST extractedValue_31777__3 ;
            var_propertyKind_31215.getAssociatedValuesFor_toMany (extractedValue_31777__0, extractedValue_31777__1, extractedValue_31777__2, extractedValue_31777__3) ;
            GenericArray <FixItDescription> fixItArray65 ;
            inCompiler->emitSemanticError (extractedValue_31093_propertyName_1.readProperty_location (), GGS_string ("a toMany property does not accept any option"), fixItArray65  COMMA_SOURCE_FILE ("observable-property.galgas4", 703)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_31960__0 ;
            GGS_propertyAccessibility extractedValue_31960__1 ;
            GGS_bool extractedValue_31960__2 ;
            GGS_toOneOppositeRelationship extractedValue_31960__3 ;
            GGS_bool extractedValue_31960__4 ;
            var_propertyKind_31215.getAssociatedValuesFor_toOne (extractedValue_31960__0, extractedValue_31960__1, extractedValue_31960__2, extractedValue_31960__3, extractedValue_31960__4) ;
            GenericArray <FixItDescription> fixItArray66 ;
            inCompiler->emitSemanticError (extractedValue_31093_propertyName_1.readProperty_location (), GGS_string ("a toOne property does not accept any option"), fixItArray66  COMMA_SOURCE_FILE ("observable-property.galgas4", 707)) ;
            outArgument_outKind.drop () ; // Release error dropped variable
            outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_32152_typeName_0 ;
            GGS_bool extractedValue_32162__1 ;
            var_propertyKind_31215.getAssociatedValuesFor_arrayController (extractedValue_32152_typeName_0, extractedValue_32162__1) ;
            GGS_propertyMap var_observablePropertyMap_32293 ;
            GGS_classKind joker_32274 ; // Joker input parameter
            GGS_actionMap joker_32326_2 ; // Joker input parameter
            GGS__5B_propertyGeneration_5D_ joker_32326_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32152_typeName_0.readProperty_string (), extractedValue_31068_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32274, var_observablePropertyMap_32293, joker_32326_2, joker_32326_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 711)) ;
            GGS_actionMap joker_32413_2 ; // Joker input parameter
            GGS_bool joker_32413_1 ; // Joker input parameter
            var_observablePropertyMap_32293.method_searchKey (extractedValue_31116_secondaryPropertyName_2, outArgument_outKind, joker_32413_2, joker_32413_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 717)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32152_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 718)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 718)).add_operation (extractedValue_31116_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 718)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 718)) ;
            outArgument_outProtocolTypeString = extractedValue_32152_typeName_0.readProperty_string ().add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 719)).add_operation (extractedValue_31116_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 719)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_32647_entityName_0 ;
            var_propertyKind_31215.getAssociatedValuesFor_selectionController (extractedValue_32647_entityName_0) ;
            GGS_propertyMap var_observablePropertyMap_32788 ;
            GGS_classKind joker_32769 ; // Joker input parameter
            GGS_actionMap joker_32821_2 ; // Joker input parameter
            GGS__5B_propertyGeneration_5D_ joker_32821_1 ; // Joker input parameter
            constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (extractedValue_32647_entityName_0, extractedValue_31068_controllerName_0.readProperty_location (), inCompiler COMMA_HERE), joker_32769, var_observablePropertyMap_32788, joker_32821_2, joker_32821_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 721)) ;
            GGS_actionMap joker_32909_2 ; // Joker input parameter
            GGS_bool joker_32909_1 ; // Joker input parameter
            var_observablePropertyMap_32788.method_searchKey (extractedValue_31116_secondaryPropertyName_2, outArgument_outKind, joker_32909_2, joker_32909_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 727)) ;
            outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[any ").add_operation (extractedValue_32647_entityName_0, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 728)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 728)).add_operation (extractedValue_31116_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 728)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 728)) ;
            outArgument_outProtocolTypeString = extractedValue_32647_entityName_0.add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 729)).add_operation (extractedValue_31116_secondaryPropertyName_2.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 729)) ;
          }
          break ;
        }
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superProperty:
    {
      GGS_lstring extractedValue_33147__0 ;
      GGS_lstring extractedValue_33159_propertyName_1 ;
      temp_0.getAssociatedValuesFor_superProperty (extractedValue_33147__0, extractedValue_33159_propertyName_1) ;
      GGS_actionMap joker_33256_2 ; // Joker input parameter
      GGS_bool joker_33256_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_33159_propertyName_1, outArgument_outKind, joker_33256_2, joker_33256_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 733)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_33305__0 ;
          GGS_propertyAccessibility extractedValue_33305__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_33305__0, extractedValue_33305__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 740)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_33405__0 ;
          GGS_propertyAccessibility extractedValue_33405__1 ;
          GGS_bool extractedValue_33405__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_33405__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_33405__0, extractedValue_33405__1, extractedValue_33405__2, extractedValue_33405__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_33496__0 ;
          GGS_propertyAccessibility extractedValue_33496__1 ;
          GGS_bool extractedValue_33496__2 ;
          GGS_toOneOppositeRelationship extractedValue_33496__3 ;
          GGS_bool extractedValue_33496__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_33496__0, extractedValue_33496__1, extractedValue_33496__2, extractedValue_33496__3, extractedValue_33496__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_33596__0 ;
          GGS_bool extractedValue_33596__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_33596__0, extractedValue_33596__1) ;
          GenericArray <FixItDescription> fixItArray67 ;
          inCompiler->emitSemanticError (extractedValue_33159_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray67  COMMA_SOURCE_FILE ("observable-property.galgas4", 746)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_33754__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_33754__0) ;
          GenericArray <FixItDescription> fixItArray68 ;
          inCompiler->emitSemanticError (extractedValue_33159_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray68  COMMA_SOURCE_FILE ("observable-property.galgas4", 748)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  case GGS_observablePropertyAST::Enumeration::enum_superPropertyWithDefaultValue:
    {
      GGS_lstring extractedValue_33931__0 ;
      GGS_lstring extractedValue_33943_propertyName_1 ;
      GGS_abstractDefaultValue extractedValue_33957_defaultValue_2 ;
      temp_0.getAssociatedValuesFor_superPropertyWithDefaultValue (extractedValue_33931__0, extractedValue_33943_propertyName_1, extractedValue_33957_defaultValue_2) ;
      GGS_actionMap joker_34054_2 ; // Joker input parameter
      GGS_bool joker_34054_1 ; // Joker input parameter
      constinArgument_inBoundModelPropertyMap.method_searchKey (extractedValue_33943_propertyName_1, outArgument_outKind, joker_34054_2, joker_34054_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 751)) ;
      switch (outArgument_outKind.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_34102_propertyType_0 ;
          GGS_propertyAccessibility extractedValue_34116__1 ;
          outArgument_outKind.getAssociatedValuesFor_property (extractedValue_34102_propertyType_0, extractedValue_34116__1) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = extensionGetter_swiftTypeName (outArgument_outKind, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 758)) ;
          GGS_propertyMap var_preferencesPropertyMap_34285 ;
          GGS_classKind joker_34276 ; // Joker input parameter
          GGS_actionMap joker_34309_2 ; // Joker input parameter
          GGS__5B_propertyGeneration_5D_ joker_34309_1 ; // Joker input parameter
          constinArgument_inSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 759)), GGS_location::class_func_nowhere (SOURCE_FILE ("observable-property.galgas4", 759)), inCompiler COMMA_HERE), joker_34276, var_preferencesPropertyMap_34285, joker_34309_2, joker_34309_1, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 759)) ;
          GGS__5B_typeKind_5D_ temp_69 = GGS__5B_typeKind_5D_::init (inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 761)) ;
          temp_69.plusPlusAssignOperation (extractedValue_34102_propertyType_0  COMMA_SOURCE_FILE ("observable-property.galgas4", 761)) ;
          callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) extractedValue_33957_defaultValue_2.ptr (), temp_69, var_preferencesPropertyMap_34285, outArgument_outDefaultValue, inCompiler COMMA_SOURCE_FILE ("observable-property.galgas4", 760)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_34466__0 ;
          GGS_propertyAccessibility extractedValue_34466__1 ;
          GGS_bool extractedValue_34466__2 ;
          GGS_toManyRelationshipOptionAST extractedValue_34466__3 ;
          outArgument_outKind.getAssociatedValuesFor_toMany (extractedValue_34466__0, extractedValue_34466__1, extractedValue_34466__2, extractedValue_34466__3) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("[AnyObject]") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_34557__0 ;
          GGS_propertyAccessibility extractedValue_34557__1 ;
          GGS_bool extractedValue_34557__2 ;
          GGS_toOneOppositeRelationship extractedValue_34557__3 ;
          GGS_bool extractedValue_34557__4 ;
          outArgument_outKind.getAssociatedValuesFor_toOne (extractedValue_34557__0, extractedValue_34557__1, extractedValue_34557__2, extractedValue_34557__3, extractedValue_34557__4) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument = GGS_string ("AnyObject\?") ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_34657__0 ;
          GGS_bool extractedValue_34657__1 ;
          outArgument_outKind.getAssociatedValuesFor_arrayController (extractedValue_34657__0, extractedValue_34657__1) ;
          GenericArray <FixItDescription> fixItArray70 ;
          inCompiler->emitSemanticError (extractedValue_33943_propertyName_1.readProperty_location (), GGS_string ("an array controller cannot be observed"), fixItArray70  COMMA_SOURCE_FILE ("observable-property.galgas4", 770)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_34815__0 ;
          outArgument_outKind.getAssociatedValuesFor_selectionController (extractedValue_34815__0) ;
          GenericArray <FixItDescription> fixItArray71 ;
          inCompiler->emitSemanticError (extractedValue_33943_propertyName_1.readProperty_location (), GGS_string ("a selection controller cannot be observed"), fixItArray71  COMMA_SOURCE_FILE ("observable-property.galgas4", 772)) ;
          outArgument_outSwiftTypeStringForTransientFunctionArgument.drop () ; // Release error dropped variable
        }
        break ;
      }
    }
    break ;
  }
}


//--------------------------------------------------------------------------------------------------
// @autoLayoutViewClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_autoLayoutViewClassDeclarationAST::objectCompare (const GGS_autoLayoutViewClassDeclarationAST & inOperand) const {
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

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST GGS_autoLayoutViewClassDeclarationAST::
init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                              const GGS_bool & in_mUserDefined,
                                              const GGS_lstring & in_mSuperClassName,
                                              const GGS_bool & in_mHasRunAction,
                                              const GGS_bool & in_mHasEnabled,
                                              const GGS_bool & in_mHandlesTableValueBinding,
                                              const GGS_bool & in_mHandlesGraphicControllerBinding,
                                              const GGS_bool & in_mHasHidden,
                                              const GGS__5B_autoLayoutClassParameter_5D_ & in_mParameterList,
                                              const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                              Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) {
  cPtr_autoLayoutViewClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_autoLayoutViewClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (in_mClassName, in_mUserDefined, in_mSuperClassName, in_mHasRunAction, in_mHasEnabled, in_mHandlesTableValueBinding, in_mHandlesGraphicControllerBinding, in_mHasHidden, in_mParameterList, in_mAutoLayoutViewFunctionMap, inCompiler) ;
  const GGS_autoLayoutViewClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutViewClassDeclarationAST::
autoLayoutViewClassDeclarationAST_init_21__21__21__21__21__21__21__21__21__21_ (const GGS_lstring & in_mClassName,
                                                                                const GGS_bool & in_mUserDefined,
                                                                                const GGS_lstring & in_mSuperClassName,
                                                                                const GGS_bool & in_mHasRunAction,
                                                                                const GGS_bool & in_mHasEnabled,
                                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GGS_bool & in_mHasHidden,
                                                                                const GGS__5B_autoLayoutClassParameter_5D_ & in_mParameterList,
                                                                                const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassDeclarationAST::GGS_autoLayoutViewClassDeclarationAST (const cPtr_autoLayoutViewClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_autoLayoutViewClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mUserDefined (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mUserDefined ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_lstring GGS_autoLayoutViewClassDeclarationAST::readProperty_mSuperClassName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_lstring () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mSuperClassName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasRunAction (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasRunAction ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasEnabled (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasEnabled ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesTableValueBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesTableValueBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHandlesGraphicControllerBinding (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHandlesGraphicControllerBinding ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewClassDeclarationAST::readProperty_mHasHidden (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_bool () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mHasHidden ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutClassParameter_5D_ GGS_autoLayoutViewClassDeclarationAST::readProperty_mParameterList (void) const {
  if (nullptr == mObjectPtr) {
    return GGS__5B_autoLayoutClassParameter_5D_ () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mParameterList ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_astAutoLayoutViewFunctionMap GGS_autoLayoutViewClassDeclarationAST::readProperty_mAutoLayoutViewFunctionMap (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_astAutoLayoutViewFunctionMap () ;
  }else{
    cPtr_autoLayoutViewClassDeclarationAST * p = (cPtr_autoLayoutViewClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_autoLayoutViewClassDeclarationAST) ;
    return p->mProperty_mAutoLayoutViewFunctionMap ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @autoLayoutViewClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
}

//--------------------------------------------------------------------------------------------------

cPtr_autoLayoutViewClassDeclarationAST::cPtr_autoLayoutViewClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                                const GGS_bool & in_mUserDefined,
                                                                                const GGS_lstring & in_mSuperClassName,
                                                                                const GGS_bool & in_mHasRunAction,
                                                                                const GGS_bool & in_mHasEnabled,
                                                                                const GGS_bool & in_mHandlesTableValueBinding,
                                                                                const GGS_bool & in_mHandlesGraphicControllerBinding,
                                                                                const GGS_bool & in_mHasHidden,
                                                                                const GGS__5B_autoLayoutClassParameter_5D_ & in_mParameterList,
                                                                                const GGS_astAutoLayoutViewFunctionMap & in_mAutoLayoutViewFunctionMap,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mUserDefined (),
mProperty_mSuperClassName (),
mProperty_mHasRunAction (),
mProperty_mHasEnabled (),
mProperty_mHandlesTableValueBinding (),
mProperty_mHandlesGraphicControllerBinding (),
mProperty_mHasHidden (),
mProperty_mParameterList (),
mProperty_mAutoLayoutViewFunctionMap () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mUserDefined = in_mUserDefined ;
  mProperty_mSuperClassName = in_mSuperClassName ;
  mProperty_mHasRunAction = in_mHasRunAction ;
  mProperty_mHasEnabled = in_mHasEnabled ;
  mProperty_mHandlesTableValueBinding = in_mHandlesTableValueBinding ;
  mProperty_mHandlesGraphicControllerBinding = in_mHandlesGraphicControllerBinding ;
  mProperty_mHasHidden = in_mHasHidden ;
  mProperty_mParameterList = in_mParameterList ;
  mProperty_mAutoLayoutViewFunctionMap = in_mAutoLayoutViewFunctionMap ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_autoLayoutViewClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
}

void cPtr_autoLayoutViewClassDeclarationAST::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@autoLayoutViewClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mUserDefined.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mSuperClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasRunAction.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasEnabled.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesTableValueBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHandlesGraphicControllerBinding.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mHasHidden.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mParameterList.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mAutoLayoutViewFunctionMap.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_autoLayoutViewClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_autoLayoutViewClassDeclarationAST (mProperty_mClassName, mProperty_mUserDefined, mProperty_mSuperClassName, mProperty_mHasRunAction, mProperty_mHasEnabled, mProperty_mHandlesTableValueBinding, mProperty_mHandlesGraphicControllerBinding, mProperty_mHasHidden, mProperty_mParameterList, mProperty_mAutoLayoutViewFunctionMap, inCompiler COMMA_THERE)) ;
  return ptr ;
}


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
//     @autoLayoutViewClassDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ("autoLayoutViewClassDeclarationAST",
                                                                                      & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewClassDeclarationAST ;
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
    s.appendCString ("proc @autoLayoutClassParameterType.typeEnum invoked with an invalid enum value") ;
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
      GGS_lstring extractedValue_1368_name_0 ;
      temp_0.getAssociatedValuesFor_typeEnum (extractedValue_1368_name_0) ;
      result_result = GGS_string ("the ").add_operation (extractedValue_1368_name_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 41)).add_operation (GGS_string (" enum type"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 41)) ;
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
      GGS_lstring var_filePath_1779 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 41)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 42)) ;
      GGS_lstring var_sourceFile_1809 = GGS_lstring::init_21__21_ (var_filePath_1779.readProperty_string ().getter_absolutePathFromPath (GGS_string::class_func_stringWithSourceFilePath (inCompiler  COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 44)).getter_deletingLastPathComponent (SOURCE_FILE ("grammar-syntax.galgas4", 44)) COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 44)), var_filePath_1779.readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_location joker_2031 ; // Joker input parameter
      cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, var_sourceFile_1809, ioArgument_ioDeclarationAST, joker_2031  COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 47)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_ (GGS__5B_lstring_5D_ & ioArgument_ioExternSwiftDelegateList,
                                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas4", 10)) ;
  GGS_lstring var_externDelegateName_480 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas4", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas4", 12)) ;
  ioArgument_ioExternSwiftDelegateList.plusPlusAssignOperation (var_externDelegateName_480  COMMA_SOURCE_FILE ("extern-delegate.galgas4", 13)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_delegate_i1_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externDelegate COMMA_SOURCE_FILE ("extern-delegate.galgas4", 10)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("extern-delegate.galgas4", 11)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-delegate.galgas4", 12)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i2_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                const GGS_lstring constinArgument_inRootEntity,
                                                                                                GGS__5B_arrayControllerBindingAST_5D_ & /* ioArgument__5F_ioArrayControllerBindingListAST */,
                                                                                                GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableViewController COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 63)) ;
  GGS_lstring var_controllerName_2944 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 64)) ;
  GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ temp_0 = GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 65)) ;
  GGS__5B_autoLayoutTableViewControllerAttributeAST_5D_ var_arrayControllerAttributListAST_3013 = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 66)) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_lstring var_attributeName_3102 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 68)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 69)) ;
    GGS_abstractDefaultValue var_attributeValue_3178 ;
    nt_explicit_5F_value_ (var_attributeValue_3178, inCompiler) ;
    var_arrayControllerAttributListAST_3013.plusPlusAssignOperation (GGS_autoLayoutTableViewControllerAttributeAST::init_21__21_ (var_attributeName_3102, var_attributeValue_3178, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 71)) ;
    if (select_easyBindings_5F_syntax_1 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 73)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 75)) ;
  GGS_bool var_isRoot_3331 ;
  switch (select_easyBindings_5F_syntax_2 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 79)) ;
    var_isRoot_3331 = GGS_bool (true) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 82)) ;
    var_isRoot_3331 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 85)) ;
  GGS_lstring var_relationshipName_3471 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 86)) ;
  GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ temp_2 = GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 87)) ;
  GGS__5B_autoLayoutTableViewControllerBoundColumnAST_5D_ var_arrayControllerBoundColumnListAST_3544 = temp_2 ;
  switch (select_easyBindings_5F_syntax_3 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 89)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 91)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      if (select_easyBindings_5F_syntax_4 (inCompiler) == 2) {
        GGS_bool var_editableColumn_3664 ;
        switch (select_easyBindings_5F_syntax_5 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_column COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 96)) ;
          var_editableColumn_3664 = GGS_bool (false) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_editableColumn COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 99)) ;
          var_editableColumn_3664 = GGS_bool (true) ;
        } break ;
        default:
          break ;
        }
        GGS_lstring var_propertyName_3855 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 102)) ;
        GGS_stringset var_unusedSet_3881 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        GGS__5B_astAutoLayoutViewInstructionParameter_5D_ var_columnParameterListAST_3963 ;
        nt_view_5F_actual_5F_parameter_5F_list_ (var_unusedSet_3881, var_columnParameterListAST_3963, inCompiler) ;
        GGS_lstring var_sortPropertyName_4008 ;
        switch (select_easyBindings_5F_syntax_6 (inCompiler)) {
        case 1: {
          var_sortPropertyName_4008 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 107)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_sortkey COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 109)) ;
          var_sortPropertyName_4008 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 110)) ;
        } break ;
        default:
          break ;
        }
        var_arrayControllerBoundColumnListAST_3544.plusPlusAssignOperation (GGS_autoLayoutTableViewControllerBoundColumnAST::init_21__21__21__21_ (var_editableColumn_3664, var_propertyName_3855, var_columnParameterListAST_3963, var_sortPropertyName_4008, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 112)) ;
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
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutTableViewControllerDeclarationAST::init_21__21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2944, var_isRoot_3331, constinArgument_inRootEntity, var_relationshipName_3471, var_arrayControllerBoundColumnListAST_3544, var_arrayControllerAttributListAST_3013, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.galgas4", 121)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i3_ (GGS__5B_mainXibDescriptor_5D_ & ioArgument_ioElementList,
                                                                                  Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas4", 25)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_984 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 29)) ;
      GGS_lstring var_outletName_1032 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 30)) ;
      GGS__5B_mainXibElement_5D_ temp_1 = GGS__5B_mainXibElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 31)) ;
      temp_1.plusPlusAssignOperation (GGS_mainXibElement::class_func_outlet (var_outletType_984, var_outletName_1032  COMMA_SOURCE_FILE ("main-xib.galgas4", 31))  COMMA_SOURCE_FILE ("main-xib.galgas4", 31)) ;
      ioArgument_ioElementList.plusPlusAssignOperation (GGS_mainXibDescriptor::init_21_ (temp_1, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.galgas4", 31)) ;
    } break ;
    case 2: {
      GGS_lstring var_s_1181 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 33)) ;
      GGS__5B_mainXibElement_5D_ temp_2 = GGS__5B_mainXibElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 34)) ;
      temp_2.plusPlusAssignOperation (GGS_mainXibElement::class_func_text (var_s_1181  COMMA_SOURCE_FILE ("main-xib.galgas4", 34))  COMMA_SOURCE_FILE ("main-xib.galgas4", 34)) ;
      ioArgument_ioElementList.plusPlusAssignOperation (GGS_mainXibDescriptor::init_21_ (temp_2, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.galgas4", 34)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 36)) ;
      GGS__5B_mainXibElement_5D_ var_lineDescription_1300 ;
      nt_main_5F_xib_5F_line_ (var_lineDescription_1300, inCompiler) ;
      ioArgument_ioElementList.plusPlusAssignOperation (GGS_mainXibDescriptor::init_21_ (var_lineDescription_1300, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("main-xib.galgas4", 38)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 39)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_i3_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_mainxib COMMA_SOURCE_FILE ("main-xib.galgas4", 25)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 26)) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_8 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 29)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 30)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 33)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("main-xib.galgas4", 36)) ;
      nt_main_5F_xib_5F_line_indexing (inCompiler) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 39)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_7 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 42)) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("main-xib.galgas4", 44)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_main_5F_xib_5F_line_i4_ (GGS__5B_mainXibElement_5D_ & outArgument_outLineDescription,
                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outLineDescription.drop () ; // Release 'out' argument
  GGS__5B_mainXibElement_5D_ temp_0 = GGS__5B_mainXibElement_5D_::init (inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 50)) ;
  outArgument_outLineDescription = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_10 (inCompiler)) {
    case 1: {
      GGS_lstring var_outletType_1680 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 53)) ;
      GGS_lstring var_outletName_1728 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 54)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_outlet (var_outletType_1680, var_outletName_1728  COMMA_SOURCE_FILE ("main-xib.galgas4", 56)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 55)) ;
      }
    } break ;
    case 2: {
      GGS_lstring var_s_1904 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 59)) ;
      {
      outArgument_outLineDescription.setter_append (GGS_mainXibElement::class_func_text (var_s_1904  COMMA_SOURCE_FILE ("main-xib.galgas4", 60)), inCompiler COMMA_SOURCE_FILE ("main-xib.galgas4", 60)) ;
      }
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 63)) ;
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 53)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("main-xib.galgas4", 54)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("main-xib.galgas4", 59)) ;
    } break ;
    default:
      break ;
    }
    if (select_easyBindings_5F_syntax_9 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("main-xib.galgas4", 63)) ;
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
  GGS_lstring var_documentName_2180 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 53)) ;
  GGS_string var_customSuperClassName_2210 ;
  switch (select_easyBindings_5F_syntax_13 (inCompiler)) {
  case 1: {
    var_customSuperClassName_2210 = GGS_string::makeEmptyString () ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 58)) ;
    GGS_lstring var_name_2316 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 59)) ;
    var_customSuperClassName_2210 = var_name_2316.readProperty_string () ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 62)) ;
  GGS_lstring var_rootEntityName_2414 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 64)) ;
  GGS_lstring var_mainViewName_2476 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 65)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 66)) ;
  GGS__5B_outletDeclarationAST_5D_ temp_0 = GGS__5B_outletDeclarationAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 67)) ;
  GGS__5B_outletDeclarationAST_5D_ var_outletDeclarationList_2530 = temp_0 ;
  GGS__5B_lstring_5D_ temp_1 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 68)) ;
  GGS__5B_lstring_5D_ var_actionDeclarationList_2576 = temp_1 ;
  GGS__5B_arrayControllerBindingAST_5D_ temp_2 = GGS__5B_arrayControllerBindingAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 69)) ;
  GGS__5B_arrayControllerBindingAST_5D_ var_arrayControllerBindingListAST_2640 = temp_2 ;
  GGS__5B_astViewDeclaration_5D_ temp_3 = GGS__5B_astViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 70)) ;
  GGS__5B_astViewDeclaration_5D_ var_viewDeclarationList_2705 = temp_3 ;
  GGS__5B_astAutoLayoutOutletLinker_5D_ temp_4 = GGS__5B_astAutoLayoutOutletLinker_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 71)) ;
  GGS__5B_astAutoLayoutOutletLinker_5D_ var_autoLayoutOutletLinkerList_2767 = temp_4 ;
  bool repeatFlag_5 = true ;
  while (repeatFlag_5) {
    switch (select_easyBindings_5F_syntax_14 (inCompiler)) {
    case 2: {
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2705, inCompiler) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2576, inCompiler) ;
    } break ;
    case 4: {
      nt_transient_5F_declaration_ (var_documentName_2180, var_rootEntityName_2414, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (var_outletDeclarationList_2530, inCompiler) ;
    } break ;
    case 6: {
      nt_controller_5F_declaration_ (var_documentName_2180, var_rootEntityName_2414, var_arrayControllerBindingListAST_2640, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 84)) ;
      GGS_lstring var_linkerName_3267 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 86)) ;
      GGS__5B_lstring_5D_ temp_6 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 87)) ;
      GGS__5B_lstring_5D_ var_outletNameList_3310 = temp_6 ;
      bool repeatFlag_7 = true ;
      while (repeatFlag_7) {
        GGS_lstring var_outletName_3370 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 89)) ;
        {
        var_outletNameList_3310.setter_append (var_outletName_3370, inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 90)) ;
        }
        if (select_easyBindings_5F_syntax_15 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 92)) ;
        }else{
          repeatFlag_7 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 94)) ;
      var_autoLayoutOutletLinkerList_2767.plusPlusAssignOperation (GGS_astAutoLayoutOutletLinker::init_21__21_ (var_linkerName_3267, var_outletNameList_3310, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 95)) ;
    } break ;
    default:
      repeatFlag_5 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 97)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutDocumentDeclarationAST::init_21__21__21__21__21__21__21__21__21_ (var_documentName_2180, var_rootEntityName_2414, var_mainViewName_2476, var_outletDeclarationList_2530, var_actionDeclarationList_2576, var_arrayControllerBindingListAST_2640, var_viewDeclarationList_2705, var_customSuperClassName_2210, var_autoLayoutOutletLinkerList_2767, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 98)) ;
  }
  {
  GGS__5B_observablePropertyAST_5D_ temp_8 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 115)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_documentName_2180, var_rootEntityName_2414, GGS_string ("String").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 113)), GGS_string ("documentFileName").getter_here (inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 114)), temp_8, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 110)) ;
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_linker COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 84)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 85)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 86)) ;
      bool repeatFlag_1 = true ;
      while (repeatFlag_1) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 89)) ;
        if (select_easyBindings_5F_syntax_15 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 92)) ;
        }else{
          repeatFlag_1 = false ;
        }
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 94)) ;
    } break ;
    default:
      repeatFlag_0 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("document-auto-layout.galgas4", 97)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_preferences_5F_declaration_i7_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("preferences.galgas4", 48)) ;
  GGS_lstring var_prefs_1942 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 49)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 49)), inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("preferences.galgas4", 50)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 51)) ;
  GGS_stringset var_signatureList_2014 = temp_0 ;
  GGS__5B_arrayControllerBindingAST_5D_ temp_1 = GGS__5B_arrayControllerBindingAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 52)) ;
  GGS__5B_arrayControllerBindingAST_5D_ var_arrayControllerBindingListAST_2070 = temp_1 ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_16 (inCompiler)) {
    case 2: {
      GGS__5B_astViewDeclaration_5D_ temp_3 = GGS__5B_astViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 55)) ;
      GGS__5B_astViewDeclaration_5D_ var_viewDeclarationList_2158 = temp_3 ;
      nt_stack_5F_view_5F_declaration_ (var_viewDeclarationList_2158, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mViewDeclarationList.plusAssignOperation(var_viewDeclarationList_2158, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 57)) ;
    } break ;
    case 3: {
      nt_action_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mActionDeclarationList, inCompiler) ;
    } break ;
    case 4: {
      GGS__5B_simpleStoredProperty_5D_ temp_4 = GGS__5B_simpleStoredProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("preferences.galgas4", 61)) ;
      GGS__5B_simpleStoredProperty_5D_ var_simpleStoredPropertyList_2456 = temp_4 ;
      nt_simple_5F_stored_5F_declaration_ (var_prefs_1942, var_simpleStoredPropertyList_2456, var_signatureList_2014, ioArgument_ioDeclarationAST, inCompiler) ;
      ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSimpleStoredAttributeList.plusAssignOperation(var_simpleStoredPropertyList_2456, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 67)) ;
    } break ;
    case 5: {
      nt_outlet_5F_declaration_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mOutletDeclarationList, inCompiler) ;
    } break ;
    case 6: {
      nt_transient_5F_declaration_ (var_prefs_1942, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas4", 71)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 7: {
      nt_extern_5F_swift_5F_func_ (ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mExternSwiftFunctionList, inCompiler) ;
    } break ;
    case 8: {
      GGS_stringset var_unusedSignatureList_3006 = GGS_stringset::init (inCompiler COMMA_HERE) ;
      nt_toMany_5F_relationship_ (var_prefs_1942, var_unusedSignatureList_3006, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 9: {
      nt_controller_5F_declaration_ (var_prefs_1942, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("preferences.galgas4", 78)), var_arrayControllerBindingListAST_2070, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  ioArgument_ioDeclarationAST.mProperty_mPreferences.mProperty_mSignatureList.plusAssignOperation(var_signatureList_2014, inCompiler  COMMA_SOURCE_FILE ("preferences.galgas4", 80)) ;
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
                                                                                                      GGS__5B_simpleStoredProperty_5D_ & ioArgument_ioAttributeList,
                                                                                                      GGS_stringset & ioArgument_ioSignatureList,
                                                                                                      GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                      Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 51)) ;
  GGS_bool var_usedForSignature_2299 = GGS_bool (false) ;
  GGS_bool var_generateResetMethod_2332 = GGS_bool (false) ;
  GGS_bool var_generateDirectRead_2368 = GGS_bool (false) ;
  GGS_bool var_generateDirectAccess_2403 = GGS_bool (false) ;
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    if (select_easyBindings_5F_syntax_20 (inCompiler) == 2) {
      GGS_lstring var_attributeName_2478 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 58)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::equal, var_attributeName_2478.readProperty_string ().objectCompare (GGS_string ("signature"))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = var_usedForSignature_2299.boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              fixItArray3.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
              inCompiler->emitSemanticError (var_attributeName_2478.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 61)) ;
            }
          }
          var_usedForSignature_2299 = GGS_bool (true) ;
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (ComparisonKind::equal, var_attributeName_2478.readProperty_string ().objectCompare (GGS_string ("generateResetMethod"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = var_generateResetMethod_2332.boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GenericArray <FixItDescription> fixItArray6 ;
                fixItArray6.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                inCompiler->emitSemanticError (var_attributeName_2478.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 66)) ;
              }
            }
            var_generateResetMethod_2332 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_4) {
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::equal, var_attributeName_2478.readProperty_string ().objectCompare (GGS_string ("generateDirectRead"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_generateDirectRead_2368.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  GenericArray <FixItDescription> fixItArray9 ;
                  fixItArray9.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                  inCompiler->emitSemanticError (var_attributeName_2478.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray9  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 71)) ;
                }
              }
              var_generateDirectRead_2368 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_7) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::equal, var_attributeName_2478.readProperty_string ().objectCompare (GGS_string ("generateDirectAccess"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = var_generateDirectAccess_2403.boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    GenericArray <FixItDescription> fixItArray12 ;
                    fixItArray12.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
                    inCompiler->emitSemanticError (var_attributeName_2478.readProperty_location (), GGS_string ("duplicated attribute"), fixItArray12  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 76)) ;
                  }
                }
                var_generateDirectAccess_2403 = GGS_bool (true) ;
              }
            }
            if (GalgasBool::boolFalse == test_10) {
              GenericArray <FixItDescription> fixItArray13 ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@signature")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateResetMethod")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectRead")) ;
              appendFixItActions (fixItArray13, EnumFixItKind::fixItReplace, GGS_string ("@generateDirectAccess")) ;
              inCompiler->emitSemanticError (var_attributeName_2478.readProperty_location (), GGS_string ("unknow attribute"), fixItArray13  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 80)) ;
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
    GGS_bool test_15 = var_generateDirectAccess_2403 ;
    if (GalgasBool::boolTrue == test_15.boolEnum ()) {
      test_15 = var_generateDirectRead_2368 ;
    }
    test_14 = test_15.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GenericArray <FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 87)), GGS_string ("@generateDirectAccess implies @generateDirectRead"), fixItArray16  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 87)) ;
    }
  }
  GGS_lstring var_attributeTypeName_3759 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 89)) ;
  GGS_lstring var_attributeName_3810 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 90)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = var_usedForSignature_2299.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      {
      ioArgument_ioSignatureList.setter_insert (var_attributeName_3810.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 92)) ;
      }
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 94)) ;
  GGS_abstractDefaultValue var_defaultValue_3979 ;
  nt_explicit_5F_value_ (var_defaultValue_3979, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 96)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_3759, var_attributeName_3810, var_defaultValue_3979, var_generateResetMethod_2332, var_generateDirectRead_2368, var_generateDirectAccess_2403, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 97)) ;
  }
  ioArgument_ioAttributeList.plusPlusAssignOperation (GGS_simpleStoredProperty::init_21__21__21_ (var_attributeTypeName_3759, var_attributeName_3810, var_defaultValue_3979, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 109)) ;
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
                                                                                                       GGS__5B_simpleStoredProperty_5D_ & ioArgument_ioAttributeList,
                                                                                                       GGS_stringset & /* ioArgument__5F_ioSignatureList */,
                                                                                                       GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                       Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_standalone COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 122)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 123)) ;
  GGS_lstring var_attributeTypeName_4938 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 124)) ;
  GGS_lstring var_attributeName_4989 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 125)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 126)) ;
  GGS_abstractDefaultValue var_defaultValue_5067 ;
  nt_explicit_5F_value_ (var_defaultValue_5067, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 128)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_atomicPropertyDeclarationAST::init_21__21__21__21__21_generateResetMethod_21_generateDirectRead_21_generateDirectAccess_21_standalone (constinArgument_inClassName, var_attributeTypeName_4938, var_attributeName_4989, var_defaultValue_5067, GGS_bool (false), GGS_bool (true), GGS_bool (true), GGS_bool (true), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 129)) ;
  }
  ioArgument_ioAttributeList.plusPlusAssignOperation (GGS_simpleStoredProperty::init_21__21__21_ (var_attributeTypeName_4938, var_attributeName_4989, var_defaultValue_5067, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("simple-stored-property.galgas4", 141)) ;
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
    GGS_luint var_integerValue_2031 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 61)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2031, GGS_bool (false), inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 64)) ;
    GGS_luint var_integerValue_2168 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 65)) ;
    outArgument_outDefaultValue = GGS_integerAsDefaultValue::init_21__21_ (var_integerValue_2168, GGS_bool (true), inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    GGS_ldouble var_doubleValue_2295 = inCompiler->synthetizedAttribute_floatValue () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_double COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 68)) ;
    outArgument_outDefaultValue = GGS_doubleAsDefaultValue::init_21_ (var_doubleValue_2295, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    GGS_lstring var_stringValue_2417 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 71)) ;
    outArgument_outDefaultValue = GGS_stringAsDefaultValue::init_21_ (var_stringValue_2417, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    GGS_lstring var_stringValue_2531 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 74)) ;
    outArgument_outDefaultValue = GGS_identifierAsDefaultValue::init_21_ (var_stringValue_2531, inCompiler COMMA_HERE) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 77)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 78)) ;
    GGS_lstring var_name_2664 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("explicit-default-value.galgas4", 79)) ;
    outArgument_outDefaultValue = GGS_prefsAsDefaultValue::init_21_ (var_name_2664, inCompiler COMMA_HERE) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_binding_5F_option_5F_list_i12_ (GGS__5B_bindingOption_5D_ & outArgument_outBindingOptions,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outBindingOptions.drop () ; // Release 'out' argument
  GGS__5B_bindingOption_5D_ temp_0 = GGS__5B_bindingOption_5D_::init (inCompiler COMMA_SOURCE_FILE ("regular-binding.galgas4", 20)) ;
  outArgument_outBindingOptions = temp_0 ;
  switch (select_easyBindings_5F_syntax_22 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 23)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_optionName_911 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("regular-binding.galgas4", 25)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("regular-binding.galgas4", 26)) ;
      GGS_abstractDefaultValue var_optionValue_988 ;
      nt_explicit_5F_value_ (var_optionValue_988, inCompiler) ;
      outArgument_outBindingOptions.plusPlusAssignOperation (GGS_bindingOption::init_21__21_ (var_optionName_911, var_optionValue_988, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("regular-binding.galgas4", 28)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas4", 39)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 40)) ;
    GGS_lstring var_propertyName_2141 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 41)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootProperty (var_propertyName_2141  COMMA_SOURCE_FILE ("observable-property.galgas4", 43)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 45)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        GGS_lstring var_optionName_2311 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 47)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyWithOption (var_propertyName_2141, var_optionName_2311  COMMA_SOURCE_FILE ("observable-property.galgas4", 48)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 50)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 51)) ;
        GGS_lstring var_observablePropertyName_2507 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 52)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyRelationship (var_propertyName_2141, var_observablePropertyName_2507  COMMA_SOURCE_FILE ("observable-property.galgas4", 53)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 57)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_rootPropertyNone (var_propertyName_2141  COMMA_SOURCE_FILE ("observable-property.galgas4", 58)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas4", 62)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfWithoutProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 64))  COMMA_SOURCE_FILE ("observable-property.galgas4", 64)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 66)) ;
      GGS_lstring var_propertyName_2988 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 67)) ;
      switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfProperty (var_propertyName_2988  COMMA_SOURCE_FILE ("observable-property.galgas4", 69)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 71)) ;
        switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 73)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 74)) ;
          GGS_lstring var_elementPropertyName_3204 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 75)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyArray (var_propertyName_2988, var_elementPropertyName_3204  COMMA_SOURCE_FILE ("observable-property.galgas4", 76)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 81)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 82)) ;
          GGS_lstring var_elementPropertyName_3474 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 83)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyObject (var_propertyName_2988, var_elementPropertyName_3474  COMMA_SOURCE_FILE ("observable-property.galgas4", 84)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 89)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyNone (var_propertyName_2988  COMMA_SOURCE_FILE ("observable-property.galgas4", 90)) ;
        } break ;
        case 4: {
          GGS_lstring var_optionName_3829 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 92)) ;
          outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfPropertyWithOption (var_propertyName_2988, var_optionName_3829  COMMA_SOURCE_FILE ("observable-property.galgas4", 93)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas4", 98)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 99)) ;
    GGS_lstring var_propertyName_4049 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 100)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsProperty (var_propertyName_4049  COMMA_SOURCE_FILE ("observable-property.galgas4", 102)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 104)) ;
      GGS_lstring var_optionName_4203 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 105)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_prefsPropertyWithOption (var_propertyName_4049, var_optionName_4203  COMMA_SOURCE_FILE ("observable-property.galgas4", 106)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    GGS_lstring var_controllerName_4374 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas4", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 110)) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 112)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 113)) ;
      GGS_lstring var_propertyName_4466 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 114)) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerOneProperty (var_controllerName_4374, var_propertyName_4466  COMMA_SOURCE_FILE ("observable-property.galgas4", 115)) ;
    } break ;
    case 2: {
      GGS_lstring var_propertyName_4639 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 117)) ;
      switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
      case 1: {
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerProperty (var_controllerName_4374, var_propertyName_4639  COMMA_SOURCE_FILE ("observable-property.galgas4", 119)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 121)) ;
        GGS_lstring var_secondaryPropertyName_4844 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 122)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerSecondaryProperty (var_controllerName_4374, var_propertyName_4639, var_secondaryPropertyName_4844  COMMA_SOURCE_FILE ("observable-property.galgas4", 123)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 129)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 130)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 131)) ;
        GGS_lstring var_secondaryPropertyName_5176 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 132)) ;
        outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_selfControllerAllProperties (var_controllerName_4374, var_propertyName_4639, var_secondaryPropertyName_5176  COMMA_SOURCE_FILE ("observable-property.galgas4", 133)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas4", 141)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_signatureProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 142))  COMMA_SOURCE_FILE ("observable-property.galgas4", 142)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas4", 144)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 145))  COMMA_SOURCE_FILE ("observable-property.galgas4", 145)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas4", 147)) ;
    outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_versionShouldChangeProperty (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("observable-property.galgas4", 148))  COMMA_SOURCE_FILE ("observable-property.galgas4", 148)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas4", 150)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 151)) ;
    GGS_lstring var_superEntityName_5802 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 153)) ;
    GGS_lstring var_propertyName_5854 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 154)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superProperty (var_superEntityName_5802, var_propertyName_5854  COMMA_SOURCE_FILE ("observable-property.galgas4", 156)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.galgas4", 161)) ;
      GGS_abstractDefaultValue var_defaultValue_6106 ;
      nt_explicit_5F_value_ (var_defaultValue_6106, inCompiler) ;
      outArgument_outObservablePropertyAST = GGS_observablePropertyAST::class_func_superPropertyWithDefaultValue (var_superEntityName_5802, var_propertyName_5854, var_defaultValue_6106  COMMA_SOURCE_FILE ("observable-property.galgas4", 163)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("observable-property.galgas4", 39)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 40)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 41)) ;
    switch (select_easyBindings_5F_syntax_25 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 45)) ;
      switch (select_easyBindings_5F_syntax_26 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 47)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 50)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 51)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 52)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 57)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("observable-property.galgas4", 62)) ;
    switch (select_easyBindings_5F_syntax_27 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 67)) ;
      switch (select_easyBindings_5F_syntax_28 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 71)) ;
        switch (select_easyBindings_5F_syntax_29 (inCompiler)) {
        case 1: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 73)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 74)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 75)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 81)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 82)) ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 83)) ;
        } break ;
        case 3: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_none COMMA_SOURCE_FILE ("observable-property.galgas4", 89)) ;
        } break ;
        case 4: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 92)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("observable-property.galgas4", 98)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 99)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 100)) ;
    switch (select_easyBindings_5F_syntax_30 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 104)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 105)) ;
    } break ;
    default:
      break ;
    }
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("observable-property.galgas4", 109)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 110)) ;
    switch (select_easyBindings_5F_syntax_31 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_one COMMA_SOURCE_FILE ("observable-property.galgas4", 112)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 113)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 114)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 117)) ;
      switch (select_easyBindings_5F_syntax_32 (inCompiler)) {
      case 1: {
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 121)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 122)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 129)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_all COMMA_SOURCE_FILE ("observable-property.galgas4", 130)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 131)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 132)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_signature COMMA_SOURCE_FILE ("observable-property.galgas4", 141)) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_version COMMA_SOURCE_FILE ("observable-property.galgas4", 144)) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_versionShouldChange COMMA_SOURCE_FILE ("observable-property.galgas4", 147)) ;
  } break ;
  case 8: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_super COMMA_SOURCE_FILE ("observable-property.galgas4", 150)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 151)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 152)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("observable-property.galgas4", 153)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("observable-property.galgas4", 154)) ;
    switch (select_easyBindings_5F_syntax_33 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_default COMMA_SOURCE_FILE ("observable-property.galgas4", 161)) ;
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
  GGS_lstring var_functionName_3060 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 86)) ;
  GGS__5B_autoLayoutClassParameter_5D_ var_parameterList_3133 ;
  GGS_lstring var_mangledName_3153 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3060, var_parameterList_3133, var_mangledName_3153, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 88)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutVStackFunctionMap.setter_insertKey (var_mangledName_3153, var_parameterList_3133, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 89)) ;
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
  GGS_lstring var_functionName_3504 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 97)) ;
  GGS__5B_autoLayoutClassParameter_5D_ var_parameterList_3577 ;
  GGS_lstring var_mangledName_3597 ;
  nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_3504, var_parameterList_3577, var_mangledName_3597, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 99)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mAutoLayoutHStackFunctionMap.setter_insertKey (var_mangledName_3597, var_parameterList_3577, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 100)) ;
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
  GGS_bool var_userDefined_3915 ;
  switch (select_easyBindings_5F_syntax_34 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_extern COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 108)) ;
    var_userDefined_3915 = GGS_bool (true) ;
  } break ;
  case 2: {
    var_userDefined_3915 = GGS_bool (false) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_autolayout COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 113)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_class COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 114)) ;
  GGS_lstring var_outletClassName_4080 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 115)) ;
  GGS__5B_autoLayoutClassParameter_5D_ var_parameterList_4133 ;
  switch (select_easyBindings_5F_syntax_35 (inCompiler)) {
  case 1: {
    GGS__5B_autoLayoutClassParameter_5D_ temp_0 = GGS__5B_autoLayoutClassParameter_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 118)) ;
    var_parameterList_4133 = temp_0 ;
  } break ;
  case 2: {
    GGS_lstring joker_4261 ; // Joker input parameter
    nt_autolayout_5F_formal_5F_parameter_5F_list_ (GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view-class.galgas4", 120)), var_parameterList_4133, joker_4261, inCompiler) ;
    joker_4261.drop () ; // Release temporary input variables (joker in source)
  } break ;
  default:
    break ;
  }
  GGS_lstring var_superClassName_4290 ;
  switch (select_easyBindings_5F_syntax_36 (inCompiler)) {
  case 1: {
    var_superClassName_4290 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 124)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 126)) ;
    var_superClassName_4290 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 127)) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_hasRunAction_4423 = GGS_bool (false) ;
  GGS_bool var_hasEnabled_4458 = GGS_bool (false) ;
  GGS_bool var_hasHidden_4491 = GGS_bool (false) ;
  GGS_bool var_handlesTableViewBinding_4523 = GGS_bool (false) ;
  GGS_bool var_handlesGraphicControllerBinding_4569 = GGS_bool (false) ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    switch (select_easyBindings_5F_syntax_37 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_tableValue COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 136)) ;
      var_handlesTableViewBinding_4523 = GGS_bool (true) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 139)) ;
      var_hasRunAction_4423 = GGS_bool (true) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 142)) ;
      var_hasEnabled_4458 = GGS_bool (true) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 145)) ;
      var_hasHidden_4491 = GGS_bool (true) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 148)) ;
      var_handlesGraphicControllerBinding_4569 = GGS_bool (true) ;
    } break ;
    default:
      repeatFlag_1 = false ;
      break ;
    }
  }
  GGS_astAutoLayoutViewFunctionMap var_astAutoLayoutViewFunctionMap_4959 = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 152)) ;
  bool repeatFlag_2 = true ;
  while (repeatFlag_2) {
    switch (select_easyBindings_5F_syntax_38 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_func COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 155)) ;
      GGS_lstring var_functionName_5060 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 156)) ;
      GGS__5B_autoLayoutClassParameter_5D_ var_parameterList_5135 ;
      GGS_lstring var_mangledName_5155 ;
      nt_autolayout_5F_formal_5F_parameter_5F_list_ (var_functionName_5060, var_parameterList_5135, var_mangledName_5155, inCompiler) ;
      {
      var_astAutoLayoutViewFunctionMap_4959.setter_insertKey (var_mangledName_5155, var_parameterList_5135, inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 158)) ;
      }
    } break ;
    case 3: {
      nt_auto_5F_layout_5F_view_5F_binding_5F_specification_ (var_outletClassName_4080, ioArgument_ioDeclarationAST.mProperty_mAutoLayoutBindingSpecificationList, inCompiler) ;
    } break ;
    default:
      repeatFlag_2 = false ;
      break ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 162)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_autoLayoutViewClassDeclarationAST::init_21__21__21__21__21__21__21__21__21__21_ (var_outletClassName_4080, var_userDefined_3915, var_superClassName_4290, var_hasRunAction_4423, var_hasEnabled_4458, var_handlesTableViewBinding_4523, var_handlesGraphicControllerBinding_4569, var_hasHidden_4491, var_parameterList_4133, var_astAutoLayoutViewFunctionMap_4959, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 163)) ;
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
                                                                                                                 GGS__5B_autoLayoutClassParameter_5D_ & outArgument_ioParameterList,
                                                                                                                 GGS_lstring & outArgument_outMangledName,
                                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_ioParameterList.drop () ; // Release 'out' argument
  outArgument_outMangledName.drop () ; // Release 'out' argument
  GGS__5B_autoLayoutClassParameter_5D_ temp_0 = GGS__5B_autoLayoutClassParameter_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 183)) ;
  outArgument_ioParameterList = temp_0 ;
  GGS_string var_mangledName_6109 = constinArgument_inFunctionName.readProperty_string ().add_operation (GGS_string ("("), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 184)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 185)) ;
  switch (select_easyBindings_5F_syntax_39 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_6217 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 189)) ;
      var_mangledName_6109.plusAssignOperation(var_parameterName_6217.readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 190)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 190)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 191)) ;
      switch (select_easyBindings_5F_syntax_41 (inCompiler)) {
      case 1: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 193)) ;
        outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view-class.galgas4", 194)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 194)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 196)) ;
        outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view-class.galgas4", 197)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 197)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 199)) ;
        outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view-class.galgas4", 200)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 200)) ;
      } break ;
      case 4: {
        GGS_lstring var_parameterTypeName_6600 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 202)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6600.readProperty_string ().objectCompare (GGS_string ("String"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view-class.galgas4", 204)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 204)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6600.readProperty_string ().objectCompare (GGS_string ("StringArray"))).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view-class.galgas4", 206)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 206)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6600.readProperty_string ().objectCompare (GGS_string ("Int"))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view-class.galgas4", 208)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 208)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_parameterTypeName_6600.readProperty_string ().objectCompare (GGS_string ("Bool"))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view-class.galgas4", 210)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 210)) ;
                }
              }
              if (GalgasBool::boolFalse == test_5) {
                outArgument_ioParameterList.plusPlusAssignOperation (GGS_autoLayoutClassParameter::init_21__21_ (var_parameterName_6217, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_parameterTypeName_6600  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 212)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 212)) ;
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
  var_mangledName_6109.plusAssignOperation(GGS_string (")"), inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-class.galgas4", 220)) ;
  outArgument_outMangledName = GGS_lstring::init_21__21_ (var_mangledName_6109, constinArgument_inFunctionName.readProperty_location (), inCompiler COMMA_HERE) ;
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
                                                                                                                          GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & ioArgument_ioBindingList,
                                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_lstring var_bindingName_1030 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 22)) ;
  GGS__5B_outletClassBindingSpecificationModel_5D_ temp_0 = GGS__5B_outletClassBindingSpecificationModel_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 23)) ;
  GGS__5B_outletClassBindingSpecificationModel_5D_ var_outletClassBindingSpecificationModelList_1091 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1164 ;
    switch (select_easyBindings_5F_syntax_43 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 27)) ;
      var_modelShouldBeWritableProperty_1164 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 30)) ;
      var_modelShouldBeWritableProperty_1164 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1375 ;
    switch (select_easyBindings_5F_syntax_44 (inCompiler)) {
    case 1: {
      var_modelTypeName_1375 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 35)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 37)) ;
      var_modelTypeName_1375 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 38)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1091.plusPlusAssignOperation (GGS_outletClassBindingSpecificationModel::init_21__21_ (var_modelTypeName_1375, var_modelShouldBeWritableProperty_1164, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 40)) ;
    if (select_easyBindings_5F_syntax_42 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 42)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS__5B_controllerBindingOption_5D_ temp_2 = GGS__5B_controllerBindingOption_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 44)) ;
  GGS__5B_controllerBindingOption_5D_ var_bindingOptionList_1677 = temp_2 ;
  switch (select_easyBindings_5F_syntax_45 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 47)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_1777 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 49)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 50)) ;
      GGS_lstring var_optionType_1837 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 51)) ;
      var_bindingOptionList_1677.plusPlusAssignOperation (GGS_controllerBindingOption::init_21__21_ (var_optionName_1777, var_optionType_1837, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 52)) ;
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
  ioArgument_ioBindingList.plusPlusAssignOperation (GGS_autoLayoutViewClassBindingSpecification::init_21__21__21__21_ (constinArgument_inClassName, var_bindingName_1030, var_outletClassBindingSpecificationModelList_1091, var_bindingOptionList_1677, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view-binding-specification.galgas4", 58)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_binding_5F_specification_i21_ (GGS__5B_outletClassBindingSpecification_5D_ & ioArgument_ioControllerTemplateList,
                                                                                                          Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_binding COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 36)) ;
  GGS_lstring var_outletClassName_1373 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 37)) ;
  GGS_lstring var_bindingName_1423 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 38)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 39)) ;
  GGS__5B_outletClassBindingSpecificationModel_5D_ temp_0 = GGS__5B_outletClassBindingSpecificationModel_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 40)) ;
  GGS__5B_outletClassBindingSpecificationModel_5D_ var_outletClassBindingSpecificationModelList_1492 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_bool var_modelShouldBeWritableProperty_1565 ;
    switch (select_easyBindings_5F_syntax_48 (inCompiler)) {
    case 1: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 44)) ;
      var_modelShouldBeWritableProperty_1565 = GGS_bool (true) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 47)) ;
      var_modelShouldBeWritableProperty_1565 = GGS_bool (false) ;
    } break ;
    default:
      break ;
    }
    GGS_lstring var_modelTypeName_1776 ;
    switch (select_easyBindings_5F_syntax_49 (inCompiler)) {
    case 1: {
      var_modelTypeName_1776 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 52)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 54)) ;
      var_modelTypeName_1776 = GGS_lstring::init_21__21_ (GGS_string ("enum"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 55)), inCompiler COMMA_HERE) ;
    } break ;
    default:
      break ;
    }
    var_outletClassBindingSpecificationModelList_1492.plusPlusAssignOperation (GGS_outletClassBindingSpecificationModel::init_21__21_ (var_modelTypeName_1776, var_modelShouldBeWritableProperty_1565, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 57)) ;
    if (select_easyBindings_5F_syntax_47 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 59)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  GGS__5B_controllerBindingOption_5D_ temp_2 = GGS__5B_controllerBindingOption_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 61)) ;
  GGS__5B_controllerBindingOption_5D_ var_bindingOptionList_2078 = temp_2 ;
  switch (select_easyBindings_5F_syntax_50 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 64)) ;
    bool repeatFlag_3 = true ;
    while (repeatFlag_3) {
      GGS_lstring var_optionName_2178 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 66)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 67)) ;
      GGS_lstring var_optionType_2238 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 68)) ;
      var_bindingOptionList_2078.plusPlusAssignOperation (GGS_controllerBindingOption::init_21__21_ (var_optionName_2178, var_optionType_2238, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 69)) ;
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
  ioArgument_ioControllerTemplateList.plusPlusAssignOperation (GGS_outletClassBindingSpecification::init_21__21__21__21_ (var_outletClassName_1373, var_bindingName_1423, var_outletClassBindingSpecificationModelList_1492, var_bindingOptionList_2078, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-binding-specification.galgas4", 76)) ;
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
                                                                                                 GGS__5B_arrayControllerBindingAST_5D_ & ioArgument_ioArrayControllerBindingListAST,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_arrayController COMMA_SOURCE_FILE ("array-controller.galgas4", 61)) ;
  GGS_lstring var_controllerName_2687 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("array-controller.galgas4", 62)) ;
  GGS_arrayControllerBoundModelAST var_model_2754 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("array-controller.galgas4", 65)) ;
  switch (select_easyBindings_5F_syntax_52 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_root COMMA_SOURCE_FILE ("array-controller.galgas4", 67)) ;
    var_model_2754 = GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (constinArgument_inRootEntity  COMMA_SOURCE_FILE ("array-controller.galgas4", 68)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_self COMMA_SOURCE_FILE ("array-controller.galgas4", 70)) ;
    var_model_2754 = GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (SOURCE_FILE ("array-controller.galgas4", 71)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("array-controller.galgas4", 73)) ;
  GGS_lstring var_relationshipName_2968 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("array-controller.galgas4", 74)) ;
  switch (select_easyBindings_5F_syntax_53 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("array-controller.galgas4", 78)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_3136 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_3136, inCompiler) ;
    GGS_multipleBindingDescriptor var_hiddenSelectionViewBindingDescriptor_3165 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_3136  COMMA_SOURCE_FILE ("array-controller.galgas4", 80)) ;
    ioArgument_ioArrayControllerBindingListAST.plusPlusAssignOperation (GGS_arrayControllerBindingAST::init_21__21_ (var_controllerName_2687, var_hiddenSelectionViewBindingDescriptor_3165, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("array-controller.galgas4", 81)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("array-controller.galgas4", 86)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_arrayControllerDeclarationAST::init_21__21__21__21_ (constinArgument_inCurrentEntity, var_controllerName_2687, var_model_2754, var_relationshipName_2968, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.galgas4", 87)) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_3498 ;
      nt_booleanMultipleBindingComparison_ (var_binding_3498, inCompiler) ;
      outArgument_outBinding = GGS_andBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_3498, inCompiler COMMA_HERE) ;
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
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_3925 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_3925, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greater (SOURCE_FILE ("multiple-binding.galgas4", 101)), var_rightBinding_3925, inCompiler COMMA_HERE) ;
  } break ;
  case 3: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3E__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 103)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4094 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4094, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_greaterOrEqual (SOURCE_FILE ("multiple-binding.galgas4", 105)), var_rightBinding_4094, inCompiler COMMA_HERE) ;
  } break ;
  case 4: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 107)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4270 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4270, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lowerOrEqual (SOURCE_FILE ("multiple-binding.galgas4", 109)), var_rightBinding_4270, inCompiler COMMA_HERE) ;
  } break ;
  case 5: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3C_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 111)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4443 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4443, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_lower (SOURCE_FILE ("multiple-binding.galgas4", 113)), var_rightBinding_4443, inCompiler COMMA_HERE) ;
  } break ;
  case 6: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 115)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4610 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4610, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_equal (SOURCE_FILE ("multiple-binding.galgas4", 117)), var_rightBinding_4610, inCompiler COMMA_HERE) ;
  } break ;
  case 7: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__21__3D_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 119)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_rightBinding_4777 ;
    nt_booleanMultipleBindingTerm_ (var_rightBinding_4777, inCompiler) ;
    outArgument_outBinding = GGS_comparisonMultipleBindingExpressionAST::init_21__21__21_ (outArgument_outBinding, GGS_multipleBindingComparisonAST::class_func_notEqual (SOURCE_FILE ("multiple-binding.galgas4", 121)), var_rightBinding_4777, inCompiler COMMA_HERE) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5279 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5279, inCompiler) ;
      outArgument_outBinding = GGS_orBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5279, inCompiler COMMA_HERE) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5E_ COMMA_SOURCE_FILE ("multiple-binding.galgas4", 137)) ;
      GGS_abstractBooleanMultipleBindingExpressionAST var_binding_5478 ;
      nt_booleanMultipleBindingOperand_ (var_binding_5478, inCompiler) ;
      outArgument_outBinding = GGS_xorBooleanMultipleBindingExpressionAST::init_21__21_ (outArgument_outBinding, var_binding_5478, inCompiler COMMA_HERE) ;
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
  GGS_observablePropertyAST var_observablePropertyAST_5848 ;
  nt_observable_5F_property_ (var_observablePropertyAST_5848, inCompiler) ;
  outArgument_outBinding = GGS_observablePropertyInMultipleBindingExpressionAST::init_21_ (var_observablePropertyAST_5848, inCompiler COMMA_HERE) ;
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
  GGS_abstractBooleanMultipleBindingExpressionAST var_binding_6274 ;
  nt_booleanMultipleBindingOperand_ (var_binding_6274, inCompiler) ;
  outArgument_outBinding = GGS_negateBooleanMultipleBindingExpressionAST::init_21_ (var_binding_6274, inCompiler COMMA_HERE) ;
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
  GGS_luint var_value_6881 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas4", 177)) ;
  outArgument_outBinding = GGS_literalIntMultipleBindingExpressionAST::init_21_ (var_value_6881, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_booleanMultipleBindingOperand_i29_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("multiple-binding.galgas4", 177)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_controller_5F_declaration_i30_ (const GGS_lstring constinArgument_inCurrentEntity,
                                                                                                 const GGS_lstring /* constinArgument__5F_inRootEntity */,
                                                                                                 GGS__5B_arrayControllerBindingAST_5D_ & /* ioArgument__5F_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_selectionController COMMA_SOURCE_FILE ("selection-controller.galgas4", 41)) ;
  GGS_lstring var_selectionEntityName_2000 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 42)) ;
  GGS_lstring var_selectionControllerName_2057 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 43)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 44)) ;
  GGS_lstring var_modelControllerName_2117 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("selection-controller.galgas4", 45)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 46)) ;
  GGS_lstring var_propertyName_2178 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("selection-controller.galgas4", 47)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("selection-controller.galgas4", 48)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_selectionControllerDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, var_selectionControllerName_2057, var_modelControllerName_2117, var_propertyName_2178, var_selectionEntityName_2000, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.galgas4", 49)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_ (GGS__5B_astViewDeclaration_5D_ & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 186)) ;
  GGS_lstring var_viewName_8330 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 187)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 188)) ;
  GGS_bool var_hasVerticalScroller_8367 ;
  switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_8367 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 193)) ;
    var_hasVerticalScroller_8367 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_8519 ;
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
    var_configuratorName_8519 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 198)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 200)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 201)) ;
    var_configuratorName_8519 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 202)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 203)) ;
  } break ;
  default:
    break ;
  }
  GGS_stringset var_unusedSet_8686 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ var_functionCallList_8764 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_8686, var_functionCallList_8764, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 207)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ temp_0 = GGS__5B_astNewStackViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 208)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ var_astNewStackViewDeclarationList_8828 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 209)) ;
  GGS_stringset var_stackViewInstances_8883 = temp_1 ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ temp_2 = GGS__5B_astAbstractViewInstructionDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 210)) ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ var_instructionList_8915 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), var_stackViewInstances_8883, var_astNewStackViewDeclarationList_8828, var_instructionList_8915, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 217)) ;
  ioArgument_ioViewDeclarationList.plusPlusAssignOperation (GGS_astViewDeclaration::init_21__21_ (var_viewName_8330, GGS_astComputedVerticalViewDeclaration::init_21__21__21__21__21_ (var_hasVerticalScroller_8367, var_configuratorName_8519, var_functionCallList_8764, var_instructionList_8915, var_astNewStackViewDeclarationList_8828, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 218)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i31_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 186)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 187)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 188)) ;
  switch (select_easyBindings_5F_syntax_57 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 193)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_58 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 200)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 201)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 202)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 203)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 207)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 217)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_ (GGS__5B_astViewDeclaration_5D_ & ioArgument_ioViewDeclarationList,
                                                                                                    Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 233)) ;
  GGS_lstring var_viewName_9615 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 234)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 235)) ;
  GGS_stringset var_unusedSet_9646 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ var_functionCallList_9724 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (var_unusedSet_9646, var_functionCallList_9724, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 238)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ temp_0 = GGS__5B_astNewStackViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 239)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ var_astNewStackViewDeclarationList_9788 = temp_0 ;
  GGS_stringset temp_1 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 240)) ;
  GGS_stringset var_stackViewInstances_9843 = temp_1 ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ temp_2 = GGS__5B_astAbstractViewInstructionDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 241)) ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ var_instructionList_9875 = temp_2 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), var_stackViewInstances_9843, var_astNewStackViewDeclarationList_9788, var_instructionList_9875, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 243)) ;
  ioArgument_ioViewDeclarationList.plusPlusAssignOperation (GGS_astViewDeclaration::init_21__21_ (var_viewName_9615, GGS_astComputedHorizontalViewDeclaration::init_21__21__21_ (var_functionCallList_9724, var_instructionList_9875, var_astNewStackViewDeclarationList_9788, inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 244)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_stack_5F_view_5F_declaration_i32_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_stackView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 233)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 234)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 235)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 238)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 243)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_auto_5F_layout_5F_func_5F_call_5F_list_i33_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                              GGS__5B_astAutoLayoutViewFunctionCall_5D_ & outArgument_outFunctionCallList,
                                                                                                              Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outFunctionCallList.drop () ; // Release 'out' argument
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ temp_0 = GGS__5B_astAutoLayoutViewFunctionCall_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 254)) ;
  outArgument_outFunctionCallList = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_59 (inCompiler) == 2) {
      GGS_lstring var_functionName_10580 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 257)) ;
      GGS__5B_astAutoLayoutViewInstructionParameter_5D_ var_actualParameterList_10660 ;
      nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_actualParameterList_10660, inCompiler) ;
      outArgument_outFunctionCallList.plusPlusAssignOperation (GGS_astAutoLayoutViewFunctionCall::init_21__21_ (var_functionName_10580, var_actualParameterList_10660, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 259)) ;
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 257)) ;
      nt_view_5F_actual_5F_parameter_5F_list_indexing (inCompiler) ;
    }else{
      repeatFlag_0 = false ;
    }
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_5F_list_i34_ (const GGS_bool constinArgument_inHorizontal,
                                                                                                   GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                   GGS__5B_astNewStackViewDeclaration_5D_ & ioArgument_ioNewStackViewDeclarationList,
                                                                                                   GGS__5B_astAbstractViewInstructionDeclaration_5D_ & ioArgument_ioInstructionList,
                                                                                                   Lexique_easyBindings_5F_lexique * inCompiler) {
  bool repeatFlag_0 = true ;
  while (repeatFlag_0) {
    switch (select_easyBindings_5F_syntax_60 (inCompiler)) {
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 271)) ;
      GGS_lstring var_instancedStackViewName_11251 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 272)) ;
      {
      ioArgument_ioStackViewInstances.setter_insert (var_instancedStackViewName_11251.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 273)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 274)) ;
      GGS_lstring var_typeStackViewName_11369 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 275)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 276)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 277)) ;
      ioArgument_ioNewStackViewDeclarationList.plusPlusAssignOperation (GGS_astNewStackViewDeclaration::init_21__21_ (var_instancedStackViewName_11251, var_typeStackViewName_11369, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 278)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 280)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astSeparatorInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 281)) ;
      }
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 283)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astGutterInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 284)) ;
      }
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 286)) ;
      {
      ioArgument_ioInstructionList.setter_append (GGS_astDividerInstructionDeclaration::init_21_horizontal (constinArgument_inHorizontal, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 287)) ;
      }
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 289)) ;
      GGS_lstring var_localViewName_11912 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 290)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = ioArgument_ioStackViewInstances.getter_contains (var_localViewName_11912.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 291)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 291)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (var_localViewName_11912.readProperty_location (), GGS_string ("the view is not instancied"), fixItArray2  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 292)) ;
        }
      }
      {
      ioArgument_ioInstructionList.setter_append (GGS_astLocalViewInstruction::init_21_ (var_localViewName_11912, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 294)) ;
      }
    } break ;
    case 7: {
      GGS_astAbstractViewInstructionDeclaration var_instruction_12210 ;
      nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_12210, inCompiler) ;
      {
      ioArgument_ioInstructionList.setter_append (var_instruction_12210, inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 297)) ;
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
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_newView COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 271)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 272)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 274)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_viewName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 275)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 276)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 277)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_separator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 280)) ;
    } break ;
    case 4: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_gutter COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 283)) ;
    } break ;
    case 5: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_divider COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 286)) ;
    } break ;
    case 6: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 289)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 290)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i35_ (GGS_stringset & /* ioArgument__5F_ioStackViewInstances */,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 305)) ;
  outArgument_outInstruction = GGS_astSpaceViewInstruction::init (inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i35_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_space COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 305)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i36_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  GGS_astComputedViewInstruction var_instruction_12906 ;
  nt_computed_5F_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_12906, inCompiler) ;
  outArgument_outInstruction = var_instruction_12906 ;
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
  GGS_lstring var_viewClassName_13235 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 321)) ;
  GGS__5B_astAutoLayoutViewInstructionParameter_5D_ var_instanciationParameterList_13299 ;
  switch (select_easyBindings_5F_syntax_61 (inCompiler)) {
  case 1: {
    GGS__5B_astAutoLayoutViewInstructionParameter_5D_ temp_0 = GGS__5B_astAutoLayoutViewInstructionParameter_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 324)) ;
    var_instanciationParameterList_13299 = temp_0 ;
  } break ;
  case 2: {
    nt_view_5F_actual_5F_parameter_5F_list_ (ioArgument_ioStackViewInstances, var_instanciationParameterList_13299, inCompiler) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_13496 ;
  GGS_lstring var_outletName_13530 ;
  GGS_bool var_outletIsArray_13555 ;
  switch (select_easyBindings_5F_syntax_62 (inCompiler)) {
  case 1: {
    var_outletName_13530 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 332)) ;
    var_configuratorName_13496 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 333)) ;
    var_outletIsArray_13555 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 336)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
      var_outletName_13530 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 338)) ;
      var_outletIsArray_13555 = GGS_bool (false) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 341)) ;
      var_outletName_13530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 342)) ;
      var_outletIsArray_13555 = GGS_bool (false) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 345)) ;
      var_outletName_13530 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 346)) ;
      var_outletIsArray_13555 = GGS_bool (true) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
      var_configuratorName_13496 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 350)) ;
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 352)) ;
      var_configuratorName_13496 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 353)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 355)) ;
  } break ;
  default:
    break ;
  }
  GGS_tableValueBinding var_tableValueBinding_14141 ;
  GGS_runActionDescriptor var_runActionDescriptor_14188 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_14243 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_14303 ;
  GGS_graphicController var_graphicController_14354 ;
  GGS__5B_regularBinding_5D_ var_regularBindingList_14398 ;
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ var_autoLayoutViewFunctionCallList_14458 ;
  switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
  case 1: {
    var_tableValueBinding_14141 = GGS_tableValueBinding::class_func_noTableValueBinding (SOURCE_FILE ("auto-layout-view.galgas4", 365)) ;
    var_runActionDescriptor_14188 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.galgas4", 366)) ;
    var_enabledBindingDescriptor_14243 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 367)) ;
    var_hiddenBindingDescriptor_14303 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 368)) ;
    var_graphicController_14354 = GGS_graphicController::class_func_none (SOURCE_FILE ("auto-layout-view.galgas4", 369)) ;
    GGS__5B_regularBinding_5D_ temp_1 = GGS__5B_regularBinding_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 370)) ;
    var_regularBindingList_14398 = temp_1 ;
    GGS__5B_astAutoLayoutViewFunctionCall_5D_ temp_2 = GGS__5B_astAutoLayoutViewFunctionCall_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 371)) ;
    var_autoLayoutViewFunctionCallList_14458 = temp_2 ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 373)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_autoLayoutViewFunctionCallList_14458, inCompiler) ;
    nt_outlet_5F_binding_ (var_tableValueBinding_14141, var_runActionDescriptor_14188, var_enabledBindingDescriptor_14243, var_hiddenBindingDescriptor_14303, var_graphicController_14354, var_regularBindingList_14398, inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 381)) ;
  } break ;
  default:
    break ;
  }
  outArgument_outInstruction = GGS_astComputedViewInstruction::init_21__21__21__21__21__21__21__21__21__21__21__21_ (var_viewClassName_13235, var_instanciationParameterList_13299, var_autoLayoutViewFunctionCallList_14458, var_tableValueBinding_14141, var_runActionDescriptor_14188, var_enabledBindingDescriptor_14243, var_hiddenBindingDescriptor_14303, var_graphicController_14354, var_regularBindingList_14398, var_configuratorName_13496, var_outletName_13530, var_outletIsArray_13555, inCompiler COMMA_HERE) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_computed_5F_view_5F_instruction_i37_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 321)) ;
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
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 336)) ;
    switch (select_easyBindings_5F_syntax_63 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 341)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 342)) ;
    } break ;
    case 3: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outletArray COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 345)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 346)) ;
    } break ;
    default:
      break ;
    }
    switch (select_easyBindings_5F_syntax_64 (inCompiler)) {
    case 1: {
    } break ;
    case 2: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 352)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 353)) ;
    } break ;
    default:
      break ;
    }
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 355)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_65 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 373)) ;
    nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
    nt_outlet_5F_binding_indexing (inCompiler) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 381)) ;
  } break ;
  default:
    break ;
  }
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                                           GGS__5B_astAutoLayoutViewInstructionParameter_5D_ & outArgument_outParameterList,
                                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outParameterList.drop () ; // Release 'out' argument
  GGS__5B_astAutoLayoutViewInstructionParameter_5D_ temp_0 = GGS__5B_astAutoLayoutViewInstructionParameter_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 403)) ;
  outArgument_outParameterList = temp_0 ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 404)) ;
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_parameterName_15930 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 408)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 409)) ;
      switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
      case 1: {
        GGS_astAbstractViewInstructionDeclaration var_instruction_16070 ;
        nt_view_5F_instruction_ (ioArgument_ioStackViewInstances, var_instruction_16070, inCompiler) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.galgas4", 412)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_viewFunc (var_instruction_16070  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 412)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 412)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 414)) ;
        GGS_lstring var_entityName_16240 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 415)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_entity (SOURCE_FILE ("auto-layout-view.galgas4", 416)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_entity (var_entityName_16240  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 416)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 416)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 418)) ;
        GGS_lstring var_menuItemTitle_16408 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 419)) ;
        GGS_runActionDescriptor var_runActionDescriptor_16458 ;
        switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
        case 1: {
          var_runActionDescriptor_16458 = GGS_runActionDescriptor::class_func_noAction (SOURCE_FILE ("auto-layout-view.galgas4", 422)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 424)) ;
          GGS_lstring var_runTargetName_16595 ;
          switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
          case 1: {
            var_runTargetName_16595 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 427)), inCompiler COMMA_HERE) ;
          } break ;
          case 2: {
            var_runTargetName_16595 = inCompiler->synthetizedAttribute_tokenString () ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 429)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 430)) ;
          } break ;
          default:
            break ;
          }
          GGS_lstring var_runActionName_16820 = inCompiler->synthetizedAttribute_tokenString () ;
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 432)) ;
          var_runActionDescriptor_16458 = GGS_runActionDescriptor::class_func_action (var_runTargetName_16595, var_runActionName_16820  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 433)) ;
        } break ;
        default:
          break ;
        }
        GGS_multipleBindingDescriptor var_enabledBindingDescriptor_16979 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 435)) ;
        switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
        case 1: {
          var_enabledBindingDescriptor_16979 = GGS_multipleBindingDescriptor::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 437)) ;
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 439)) ;
          GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_17217 ;
          nt_booleanMultipleBindingExpression_ (var_bindingExpression_17217, inCompiler) ;
          var_enabledBindingDescriptor_16979 = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_17217  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 441)) ;
        } break ;
        default:
          break ;
        }
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_menuItem (SOURCE_FILE ("auto-layout-view.galgas4", 445)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_menuItem (var_menuItemTitle_16408.readProperty_string (), var_runActionDescriptor_16458, var_enabledBindingDescriptor_16979  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 446)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 443)) ;
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 449)) ;
        GGS_lstring var_viewName_17588 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 450)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = ioArgument_ioStackViewInstances.getter_contains (var_viewName_17588.readProperty_string () COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 451)).operator_not (SOURCE_FILE ("auto-layout-view.galgas4", 451)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            GenericArray <FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (var_viewName_17588.readProperty_location (), GGS_string ("view is not instancied"), fixItArray3  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 452)) ;
          }
        }
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeView (SOURCE_FILE ("auto-layout-view.galgas4", 454)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_viewName_17588.readProperty_string ()  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 454)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 454)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 456)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.galgas4", 457)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("true")  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 457)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 457)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 459)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeBool (SOURCE_FILE ("auto-layout-view.galgas4", 460)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("false")  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 460)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 460)) ;
      } break ;
      case 7: {
        GGS_luint var_uint_33__32__18101 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 462)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.galgas4", 463)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_uint_33__32__18101.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 463))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 463)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 463)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 465)) ;
        GGS_luint var_uint_33__32__18265 = inCompiler->synthetizedAttribute_uint_33__32_value () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 466)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-view.galgas4", 467)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string ("-").add_operation (var_uint_33__32__18265.readProperty_uint ().getter_string (SOURCE_FILE ("auto-layout-view.galgas4", 467)), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 467))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 467)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 467)) ;
      } break ;
      case 9: {
        GGS_lstring var_literalString_18419 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 469)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-view.galgas4", 470)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (var_literalString_18419.readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("auto-layout-view.galgas4", 470))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 470)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 470)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 472)) ;
        GGS_lstring var_enumConstantName_18608 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 473)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeEnum (var_enumConstantName_18608  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 474)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_string (GGS_string (".").add_operation (var_enumConstantName_18608.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 474))  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 474)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 474)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 476)) ;
        GGS_lstring var_enumTypeName_18810 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 477)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 478)) ;
        GGS_lstring var_enumFuncName_18867 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 479)) ;
        outArgument_outParameterList.plusPlusAssignOperation (GGS_astAutoLayoutViewInstructionParameter::init_21__21__21_ (var_parameterName_15930, GGS_autoLayoutClassParameterType::class_func_typeStringArray (SOURCE_FILE ("auto-layout-view.galgas4", 482)), GGS_astAutoLayoutViewInstructionParameterValue::class_func_enumFunc (var_enumTypeName_18810, var_enumFuncName_18867  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 483)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 480)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_67 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 487)) ;
      }else{
        repeatFlag_1 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_actual_5F_parameter_5F_list_i38_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 404)) ;
  switch (select_easyBindings_5F_syntax_66 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    bool repeatFlag_0 = true ;
    while (repeatFlag_0) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 408)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 409)) ;
      switch (select_easyBindings_5F_syntax_68 (inCompiler)) {
      case 1: {
        nt_view_5F_instruction_indexing (inCompiler) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 414)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 415)) ;
      } break ;
      case 3: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_menuItem COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 418)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 419)) ;
        switch (select_easyBindings_5F_syntax_69 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_run COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 424)) ;
          switch (select_easyBindings_5F_syntax_70 (inCompiler)) {
          case 1: {
          } break ;
          case 2: {
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 429)) ;
            inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 430)) ;
          } break ;
          default:
            break ;
          }
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 432)) ;
        } break ;
        default:
          break ;
        }
        switch (select_easyBindings_5F_syntax_71 (inCompiler)) {
        case 1: {
        } break ;
        case 2: {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enabled COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 439)) ;
          nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
        } break ;
        default:
          break ;
        }
      } break ;
      case 4: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_view COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 449)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 450)) ;
      } break ;
      case 5: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_yes COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 456)) ;
      } break ;
      case 6: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_no COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 459)) ;
      } break ;
      case 7: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 462)) ;
      } break ;
      case 8: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 465)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_integer COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 466)) ;
      } break ;
      case 9: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 469)) ;
      } break ;
      case 10: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 472)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 473)) ;
      } break ;
      case 11: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 476)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 477)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 478)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 479)) ;
      } break ;
      default:
        break ;
      }
      if (select_easyBindings_5F_syntax_67 (inCompiler) == 2) {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 487)) ;
      }else{
        repeatFlag_0 = false ;
      }
    }
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__29_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 490)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i39_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 497)) ;
  GGS_bool var_hasVerticalScroller_19406 ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
    var_hasVerticalScroller_19406 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 502)) ;
    var_hasVerticalScroller_19406 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_lstring var_configuratorName_19558 ;
  switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
  case 1: {
    var_configuratorName_19558 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("auto-layout-view.galgas4", 507)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 509)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 510)) ;
    var_configuratorName_19558 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 511)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 512)) ;
  } break ;
  default:
    break ;
  }
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ var_functionCallList_19780 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_19780, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_19829 ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_19829 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 517)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 519)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_20017 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_20017, inCompiler) ;
    var_optionalHiddenBinding_19829 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_20017  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 521)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 523)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ temp_0 = GGS__5B_astNewStackViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 524)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ var_astNewStackViewDeclarationList_20158 = temp_0 ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ temp_1 = GGS__5B_astAbstractViewInstructionDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 525)) ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ var_instructionList_20202 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (false), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_20158, var_instructionList_20202, inCompiler) ;
  outArgument_outInstruction = GGS_astVStackViewInstructionDeclaration::init_21__21__21__21__21__21_ (var_hasVerticalScroller_19406, var_configuratorName_19558, var_functionCallList_19780, var_instructionList_20202, var_optionalHiddenBinding_19829, var_astNewStackViewDeclarationList_20158, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 540)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i39_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_vStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 497)) ;
  switch (select_easyBindings_5F_syntax_72 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_withVScroller COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 502)) ;
  } break ;
  default:
    break ;
  }
  switch (select_easyBindings_5F_syntax_73 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 509)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_configurator COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 510)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 511)) ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__5D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 512)) ;
  } break ;
  default:
    break ;
  }
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_74 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 519)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 523)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 540)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i40_ (GGS_stringset & ioArgument_ioStackViewInstances,
                                                                                           GGS_astAbstractViewInstructionDeclaration & outArgument_outInstruction,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  outArgument_outInstruction.drop () ; // Release 'out' argument
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 547)) ;
  GGS__5B_astAutoLayoutViewFunctionCall_5D_ var_functionCallList_20986 ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_ (ioArgument_ioStackViewInstances, var_functionCallList_20986, inCompiler) ;
  GGS_optionalHiddenBinding var_optionalHiddenBinding_21035 ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
    var_optionalHiddenBinding_21035 = GGS_optionalHiddenBinding::class_func_noBinding (SOURCE_FILE ("auto-layout-view.galgas4", 551)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 553)) ;
    GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_21223 ;
    nt_booleanMultipleBindingExpression_ (var_bindingExpression_21223, inCompiler) ;
    var_optionalHiddenBinding_21035 = GGS_optionalHiddenBinding::class_func_binding (var_bindingExpression_21223  COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 555)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 557)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ temp_0 = GGS__5B_astNewStackViewDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 558)) ;
  GGS__5B_astNewStackViewDeclaration_5D_ var_astNewStackViewDeclarationList_21364 = temp_0 ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ temp_1 = GGS__5B_astAbstractViewInstructionDeclaration_5D_::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 559)) ;
  GGS__5B_astAbstractViewInstructionDeclaration_5D_ var_instructionList_21408 = temp_1 ;
  nt_view_5F_instruction_5F_list_ (GGS_bool (true), ioArgument_ioStackViewInstances, var_astNewStackViewDeclarationList_21364, var_instructionList_21408, inCompiler) ;
  outArgument_outInstruction = GGS_astHStackViewInstructionDeclaration::init_21__21__21__21_ (var_functionCallList_20986, var_instructionList_21408, var_optionalHiddenBinding_21035, var_astNewStackViewDeclarationList_21364, inCompiler COMMA_HERE) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 572)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_view_5F_instruction_i40_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hStack COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 547)) ;
  nt_auto_5F_layout_5F_func_5F_call_5F_list_indexing (inCompiler) ;
  switch (select_easyBindings_5F_syntax_75 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_hidden COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 553)) ;
    nt_booleanMultipleBindingExpression_indexing (inCompiler) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 557)) ;
  nt_view_5F_instruction_5F_list_indexing (inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("auto-layout-view.galgas4", 572)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_outlet_5F_declaration_i41_ (GGS__5B_outletDeclarationAST_5D_ & ioArgument_ioOutletDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_outlet COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 46)) ;
  GGS_lstring var_outletTypeName_1698 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 47)) ;
  GGS_lstring var_outletName_1737 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 48)) ;
  GGS_tableValueBinding var_tableValueBinding_1795 ;
  GGS_runActionDescriptor var_runActionDescriptor_1861 ;
  GGS_multipleBindingDescriptor var_enabledBindingDescriptor_1935 ;
  GGS_multipleBindingDescriptor var_hiddenBindingDescriptor_2014 ;
  GGS_graphicController var_graphicController_2084 ;
  GGS__5B_regularBinding_5D_ var_regularBindingList_2147 ;
  nt_outlet_5F_binding_ (var_tableValueBinding_1795, var_runActionDescriptor_1861, var_enabledBindingDescriptor_1935, var_hiddenBindingDescriptor_2014, var_graphicController_2084, var_regularBindingList_2147, inCompiler) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 55)) ;
  ioArgument_ioOutletDeclarationList.plusPlusAssignOperation (GGS_outletDeclarationAST::init_21__21__21__21__21__21__21__21_ (var_outletTypeName_1698, var_outletName_1737, var_tableValueBinding_1795, var_runActionDescriptor_1861, var_enabledBindingDescriptor_1935, var_hiddenBindingDescriptor_2014, var_regularBindingList_2147, var_graphicController_2084, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 56)) ;
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
                                                                                         GGS__5B_regularBinding_5D_ & outArgument_regularBindingList,
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
  GGS__5B_regularBinding_5D_ temp_0 = GGS__5B_regularBinding_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 82)) ;
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
      GGS_lstring var_controllerName_3474 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 89)) ;
      outArgument_tableValueBinding = GGS_tableValueBinding::class_func_tableValueBinding (var_controllerName_3474  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 90)) ;
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
      GGS_lstring var_runTargetName_3717 ;
      switch (select_easyBindings_5F_syntax_77 (inCompiler)) {
      case 1: {
        var_runTargetName_3717 = GGS_lstring::init_21__21_ (GGS_string ("self"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 98)), inCompiler COMMA_HERE) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_prefs COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 100)) ;
        var_runTargetName_3717 = GGS_lstring::init_21__21_ (GGS_string ("prefs"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 101)), inCompiler COMMA_HERE) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 102)) ;
      } break ;
      case 3: {
        var_runTargetName_3717 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 104)) ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 105)) ;
      } break ;
      default:
        break ;
      }
      GGS_lstring var_runActionName_3987 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 107)) ;
      outArgument_runActionDescriptor = GGS_runActionDescriptor::class_func_action (var_runTargetName_3717, var_runActionName_3987  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 108)) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4336 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4336, inCompiler) ;
      outArgument_enabledBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4336  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 116)) ;
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
      GGS_abstractBooleanMultipleBindingExpressionAST var_bindingExpression_4675 ;
      nt_booleanMultipleBindingExpression_ (var_bindingExpression_4675, inCompiler) ;
      outArgument_hiddenBindingDescriptor = GGS_multipleBindingDescriptor::class_func_binding (var_bindingExpression_4675  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 124)) ;
    } break ;
    case 6: {
      GGS_lstring var_bindingName_4835 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_bindingName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 127)) ;
      GGS__5B_observablePropertyAST_5D_ temp_10 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 128)) ;
      GGS__5B_observablePropertyAST_5D_ var_observablePropertyList_4883 = temp_10 ;
      bool repeatFlag_11 = true ;
      while (repeatFlag_11) {
        GGS_observablePropertyAST var_observableProperty_4983 ;
        nt_observable_5F_property_ (var_observableProperty_4983, inCompiler) ;
        {
        var_observablePropertyList_4883.setter_append (var_observableProperty_4983, inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 131)) ;
        }
        if (select_easyBindings_5F_syntax_78 (inCompiler) == 2) {
          inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 133)) ;
        }else{
          repeatFlag_11 = false ;
        }
      }
      GGS__5B_bindingOption_5D_ var_bindingOptions_5132 ;
      nt_binding_5F_option_5F_list_ (var_bindingOptions_5132, inCompiler) ;
      outArgument_regularBindingList.plusPlusAssignOperation (GGS_regularBinding::init_21__21__21_ (var_bindingName_4835, var_observablePropertyList_4883, var_bindingOptions_5132, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 136)) ;
    } break ;
    case 7: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphicController COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 143)) ;
      GGS_lstring var_graphicControllerName_5372 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_controllerName COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 144)) ;
      GGS_lstring var_propertyName_5414 ;
      switch (select_easyBindings_5F_syntax_79 (inCompiler)) {
      case 1: {
        var_propertyName_5414 = GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 147)) ;
      } break ;
      case 2: {
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 149)) ;
        var_propertyName_5414 = inCompiler->synthetizedAttribute_tokenString () ;
        inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 150)) ;
      } break ;
      default:
        break ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = outArgument_graphicController.getter_isNone (SOURCE_FILE ("outlet-declaration.galgas4", 152)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          outArgument_graphicController = GGS_graphicController::class_func_defined (var_graphicControllerName_5372, var_propertyName_5414  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 153)) ;
        }
      }
      if (GalgasBool::boolFalse == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (var_graphicControllerName_5372.readProperty_location (), GGS_string ("binding already defined"), fixItArray13  COMMA_SOURCE_FILE ("outlet-declaration.galgas4", 155)) ;
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
  GGS_lstring var_transientTypeName_5514 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 96)) ;
  GGS_lstring var_transientName_5565 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 97)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 98)) ;
  {
  GGS__5B_observablePropertyAST_5D_ temp_0 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 104)) ;
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5514, var_transientName_5565, temp_0, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 99)) ;
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
  GGS_bool var_isOverriding_6101 ;
  switch (select_easyBindings_5F_syntax_80 (inCompiler)) {
  case 1: {
    var_isOverriding_6101 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_override COMMA_SOURCE_FILE ("transient-property.galgas4", 119)) ;
    var_isOverriding_6101 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_transient COMMA_SOURCE_FILE ("transient-property.galgas4", 122)) ;
  GGS_lstring var_transientTypeName_6249 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 123)) ;
  GGS_lstring var_transientName_6300 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("transient-property.galgas4", 124)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("transient-property.galgas4", 125)) ;
  GGS__5B_observablePropertyAST_5D_ temp_0 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 126)) ;
  GGS__5B_observablePropertyAST_5D_ var_dependanceList_6366 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_6454 ;
    nt_observable_5F_property_ (var_observablePropertyAST_6454, inCompiler) ;
    {
    var_dependanceList_6366.setter_append (var_observablePropertyAST_6454, inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 129)) ;
    }
    if (select_easyBindings_5F_syntax_81 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("transient-property.galgas4", 131)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("transient-property.galgas4", 133)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_6249, var_transientName_6300, var_dependanceList_6366, var_isOverriding_6101, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("transient-property.galgas4", 134)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_ (GGS__5B_externSwiftFunction_5D_ & ioArgument_ioExternSwiftFunctionList,
                                                                                               Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 19)) ;
  GGS_lstring var_externFunctionName_809 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 21)) ;
  GGS_lstring var_callerName_876 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 23)) ;
  ioArgument_ioExternSwiftFunctionList.plusPlusAssignOperation (GGS_externSwiftFunction::init_21__21_ (var_externFunctionName_809, var_callerName_876, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 24)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_extern_5F_swift_5F_func_i45_indexing (Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_externFunc COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 19)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_calledBy COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 21)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 22)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("extern-swift-func.galgas4", 23)) ;
}

//------------------------------------------------------------------------------------------------

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_enum_5F_declaration_i46_ (GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                           Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_enum COMMA_SOURCE_FILE ("enumeration.galgas4", 39)) ;
  GGS_lstring var_enumName_1496 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 40)) ;
  GGS_bool var_caseIterable_1520 ;
  switch (select_easyBindings_5F_syntax_82 (inCompiler)) {
  case 1: {
    var_caseIterable_1520 = GGS_bool (false) ;
  } break ;
  case 2: {
    GGS_lstring var_attribute_1603 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__40_attribute COMMA_SOURCE_FILE ("enumeration.galgas4", 45)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, var_attribute_1603.readProperty_string ().objectCompare (GGS_string ("CaseIterable"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        appendFixItActions (fixItArray1, EnumFixItKind::fixItReplace, GGS_string ("@CaseIterable")) ;
        inCompiler->emitSemanticError (var_attribute_1603.readProperty_location (), GGS_string ("only @CaseIterable attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("enumeration.galgas4", 47)) ;
      }
    }
    var_caseIterable_1520 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 51)) ;
  GGS__5B_lstring_5D_ temp_2 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 52)) ;
  GGS__5B_lstring_5D_ var_enumConstants_1843 = temp_2 ;
  bool repeatFlag_3 = true ;
  while (repeatFlag_3) {
    GGS_lstring var_constantName_1907 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 54)) ;
    {
    var_enumConstants_1843.setter_append (var_constantName_1907, inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 55)) ;
    }
    if (select_easyBindings_5F_syntax_83 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("enumeration.galgas4", 57)) ;
    }else{
      repeatFlag_3 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 59)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_enumerationDeclarationAST::init_21__21__21_ (var_enumName_1496, var_enumConstants_1843, var_caseIterable_1520, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 60)) ;
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
  GGS_lstring var_enumName_2363 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 68)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("enumeration.galgas4", 69)) ;
  GGS_lstring var_funcName_2413 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 70)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 71)) ;
  GGS__5B__32_lstring_5D_ temp_0 = GGS__5B__32_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("enumeration.galgas4", 72)) ;
  GGS__5B__32_lstring_5D_ var_associationList_2451 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    if (select_easyBindings_5F_syntax_84 (inCompiler) == 2) {
      GGS_lstring var_constantName_2527 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("enumeration.galgas4", 75)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("enumeration.galgas4", 76)) ;
      GGS_lstring var_associatedString_2589 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_literal_5F_string COMMA_SOURCE_FILE ("enumeration.galgas4", 77)) ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("enumeration.galgas4", 78)) ;
      var_associationList_2451.plusPlusAssignOperation (GGS__32_lstring::init_21__21_ (var_constantName_2527, var_associatedString_2589, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("enumeration.galgas4", 79)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7D_ COMMA_SOURCE_FILE ("enumeration.galgas4", 81)) ;
  ioArgument_ioDeclarationAST.mProperty_mEnumerationFunctionListAST.plusPlusAssignOperation (GGS_enumerationFunctionAST::init_21__21__21_ (var_enumName_2363, var_funcName_2413, var_associationList_2451, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("enumeration.galgas4", 82)) ;
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
  GGS_bool var_isAbstract_1711 ;
  switch (select_easyBindings_5F_syntax_85 (inCompiler)) {
  case 1: {
    var_isAbstract_1711 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_abstract COMMA_SOURCE_FILE ("entity.galgas4", 46)) ;
    var_isAbstract_1711 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_graphicEntity_1828 ;
  switch (select_easyBindings_5F_syntax_86 (inCompiler)) {
  case 1: {
    var_graphicEntity_1828 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 53)) ;
    var_graphicEntity_1828 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  GGS_bool var_handlingOpposite_1953 ;
  switch (select_easyBindings_5F_syntax_87 (inCompiler)) {
  case 1: {
    var_handlingOpposite_1953 = GGS_bool (false) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_handlingOpposite COMMA_SOURCE_FILE ("entity.galgas4", 60)) ;
    var_handlingOpposite_1953 = GGS_bool (true) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_entity COMMA_SOURCE_FILE ("entity.galgas4", 63)) ;
  GGS_lstring var_entityName_2127 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 64)) ;
  GGS__5B_lstring_5D_ temp_0 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 65)) ;
  GGS__5B_lstring_5D_ var_obsoleteEntityNames_2158 = temp_0 ;
  switch (select_easyBindings_5F_syntax_88 (inCompiler)) {
  case 1: {
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__28_ COMMA_SOURCE_FILE ("entity.galgas4", 68)) ;
    bool repeatFlag_1 = true ;
    while (repeatFlag_1) {
      GGS_lstring var_obsoleteName_2260 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 70)) ;
      {
      var_obsoleteEntityNames_2158.setter_append (var_obsoleteName_2260, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 71)) ;
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
  GGS_lstring var_superEntityName_2395 ;
  switch (select_easyBindings_5F_syntax_90 (inCompiler)) {
  case 1: {
    var_superEntityName_2395 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 79)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("entity.galgas4", 81)) ;
    var_superEntityName_2395 = inCompiler->synthetizedAttribute_tokenString () ;
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("entity.galgas4", 82)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__7B_ COMMA_SOURCE_FILE ("entity.galgas4", 84)) ;
  GGS__5B_simpleStoredProperty_5D_ temp_2 = GGS__5B_simpleStoredProperty_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 85)) ;
  GGS__5B_simpleStoredProperty_5D_ var_simpleStoredPropertyList_2561 = temp_2 ;
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 86)) ;
  GGS_stringset var_signatureList_2610 = temp_3 ;
  GGS__5B_lstring_5D_ temp_4 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 87)) ;
  GGS__5B_lstring_5D_ var_actionDeclarationList_2648 = temp_4 ;
  GGS__5B_lstring_5D_ temp_5 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 88)) ;
  GGS__5B_lstring_5D_ var_externSwiftDelegateList_2694 = temp_5 ;
  GGS__5B_arrayControllerBindingAST_5D_ temp_6 = GGS__5B_arrayControllerBindingAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 89)) ;
  GGS__5B_arrayControllerBindingAST_5D_ var_arrayControllerBindingListAST_2760 = temp_6 ;
  GGS__5B_lstring_5D_ temp_7 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 90)) ;
  GGS__5B_lstring_5D_ var_graphicOptionArray_2814 = temp_7 ;
  bool repeatFlag_8 = true ;
  while (repeatFlag_8) {
    switch (select_easyBindings_5F_syntax_91 (inCompiler)) {
    case 2: {
      nt_simple_5F_stored_5F_declaration_ (var_entityName_2127, var_simpleStoredPropertyList_2561, var_signatureList_2610, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 3: {
      nt_transient_5F_declaration_ (var_entityName_2127, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 95)), ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 4: {
      nt_toMany_5F_relationship_ (var_entityName_2127, var_signatureList_2610, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 5: {
      nt_toOne_5F_relationship_ (var_entityName_2127, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 6: {
      nt_action_5F_declaration_ (var_actionDeclarationList_2648, inCompiler) ;
    } break ;
    case 7: {
      nt_controller_5F_declaration_ (var_entityName_2127, GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("entity.galgas4", 103)), var_arrayControllerBindingListAST_2760, ioArgument_ioDeclarationAST, inCompiler) ;
    } break ;
    case 8: {
      nt_extern_5F_swift_5F_delegate_ (var_externSwiftDelegateList_2694, inCompiler) ;
    } break ;
    case 9: {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_graphic COMMA_SOURCE_FILE ("entity.galgas4", 107)) ;
      GGS_lstring var_graphicOption_3517 = inCompiler->synthetizedAttribute_tokenString () ;
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("entity.galgas4", 108)) ;
      {
      var_graphicOptionArray_2814.setter_append (var_graphicOption_3517, inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 109)) ;
      }
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("entity.galgas4", 110)) ;
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = var_graphicEntity_1828.operator_not (SOURCE_FILE ("entity.galgas4", 111)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (var_graphicOption_3517.readProperty_location (), GGS_string ("only a graphic entity accepts a graphic option"), fixItArray10  COMMA_SOURCE_FILE ("entity.galgas4", 112)) ;
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
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_entityDeclarationAST::init_21__21__21__21__21__21__21__21__21__21__21_ (var_entityName_2127, var_isAbstract_1711, var_superEntityName_2395, var_handlingOpposite_1953, var_simpleStoredPropertyList_2561, var_signatureList_2610, var_actionDeclarationList_2648, var_obsoleteEntityNames_2158, var_graphicEntity_1828, var_externSwiftDelegateList_2694, var_graphicOptionArray_2814, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 116)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    GGS_bool test_12 = var_isAbstract_1711 ;
    if (GalgasBool::boolTrue == test_12.boolEnum ()) {
      test_12 = var_graphicEntity_1828 ;
    }
    test_11 = test_12.boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      {
      GGS__5B_observablePropertyAST_5D_ temp_13 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 136)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2127, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 133)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 134)), GGS_string ("selectionDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 135)), temp_13, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 131)) ;
      }
      {
      GGS__5B_observablePropertyAST_5D_ temp_14 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 145)) ;
      ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_transientDeclarationAST::init_21__21__21__21__21__21_ (var_entityName_2127, GGS_string::makeEmptyString ().getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 142)), GGS_string ("EBShape").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 143)), GGS_string ("objectDisplay").getter_here (inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 144)), temp_14, GGS_bool (false), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("entity.galgas4", 140)) ;
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
                                                                                                 const GGS_lstring /* constinArgument__5F_inRootEntity */,
                                                                                                 GGS__5B_arrayControllerBindingAST_5D_ & /* ioArgument__5F_ioArrayControllerBindingListAST */,
                                                                                                 GGS_astDeclarationStruct & ioArgument_ioDeclarationAST,
                                                                                                 Lexique_easyBindings_5F_lexique * inCompiler) {
  GGS_proxyKind var_proxyKind_1917 ;
  switch (select_easyBindings_5F_syntax_92 (inCompiler)) {
  case 1: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_property COMMA_SOURCE_FILE ("proxy.galgas4", 51)) ;
    var_proxyKind_1917 = GGS_proxyKind::class_func_propertyProxy (SOURCE_FILE ("proxy.galgas4", 52)) ;
  } break ;
  case 2: {
    inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_toMany COMMA_SOURCE_FILE ("proxy.galgas4", 54)) ;
    var_proxyKind_1917 = GGS_proxyKind::class_func_toManyProxy (SOURCE_FILE ("proxy.galgas4", 55)) ;
  } break ;
  default:
    break ;
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_proxy COMMA_SOURCE_FILE ("proxy.galgas4", 57)) ;
  GGS_lstring var_proxyTypeName_2093 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("proxy.galgas4", 58)) ;
  GGS_lstring var_proxyName_2140 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 59)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3A_ COMMA_SOURCE_FILE ("proxy.galgas4", 60)) ;
  GGS_lstring var_toOnePropertyName_2191 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 61)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2E_ COMMA_SOURCE_FILE ("proxy.galgas4", 62)) ;
  GGS_lstring var_propertyName_2250 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("proxy.galgas4", 63)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("proxy.galgas4", 64)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_proxyDeclarationAST::init_21__21__21__21__21__21_ (constinArgument_inCurrentEntity, var_proxyKind_1917, var_proxyTypeName_2093, var_proxyName_2140, var_toOnePropertyName_2191, var_propertyName_2250, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("proxy.galgas4", 65)) ;
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
  GGS_lstring var_transientTypeName_5503 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_Identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 98)) ;
  GGS_lstring var_transientName_5554 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("computed-property.galgas4", 99)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_dependsFrom COMMA_SOURCE_FILE ("computed-property.galgas4", 100)) ;
  GGS__5B_observablePropertyAST_5D_ temp_0 = GGS__5B_observablePropertyAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 101)) ;
  GGS__5B_observablePropertyAST_5D_ var_dependanceList_5620 = temp_0 ;
  bool repeatFlag_1 = true ;
  while (repeatFlag_1) {
    GGS_observablePropertyAST var_observablePropertyAST_5708 ;
    nt_observable_5F_property_ (var_observablePropertyAST_5708, inCompiler) ;
    var_dependanceList_5620.plusPlusAssignOperation (var_observablePropertyAST_5708  COMMA_SOURCE_FILE ("computed-property.galgas4", 104)) ;
    if (select_easyBindings_5F_syntax_93 (inCompiler) == 2) {
      inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__2C_ COMMA_SOURCE_FILE ("computed-property.galgas4", 106)) ;
    }else{
      repeatFlag_1 = false ;
    }
  }
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("computed-property.galgas4", 108)) ;
  {
  ioArgument_ioDeclarationAST.mProperty_mUnifiedDeclarationList.setter_append (GGS_computedPropertyDeclarationAST::init_21__21__21__21__21_ (constinArgument_inCurrentEntity, constinArgument_inRootEntity, var_transientTypeName_5503, var_transientName_5554, var_dependanceList_5620, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("computed-property.galgas4", 109)) ;
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

void cParser_easyBindings_5F_syntax::rule_easyBindings_5F_syntax_action_5F_declaration_i52_ (GGS__5B_lstring_5D_ & ioArgument_ioActionDeclarationList,
                                                                                             Lexique_easyBindings_5F_lexique * inCompiler) {
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_action COMMA_SOURCE_FILE ("run-action.galgas4", 19)) ;
  GGS_lstring var_actionName_794 = inCompiler->synthetizedAttribute_tokenString () ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken_identifier COMMA_SOURCE_FILE ("run-action.galgas4", 20)) ;
  inCompiler->acceptTerminal (Lexique_easyBindings_5F_lexique::kToken__3B_ COMMA_SOURCE_FILE ("run-action.galgas4", 21)) ;
  {
  ioArgument_ioActionDeclarationList.setter_append (var_actionName_794, inCompiler COMMA_SOURCE_FILE ("run-action.galgas4", 22)) ;
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

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_outletClassBindingSpecification_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_::GGS__5B_outletClassBindingSpecification_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_::GGS__5B_outletClassBindingSpecification_5D_ (const GGS__5B_outletClassBindingSpecification_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_ & GGS__5B_outletClassBindingSpecification_5D_::operator = (const GGS__5B_outletClassBindingSpecification_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_ GGS__5B_outletClassBindingSpecification_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_outletClassBindingSpecification_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::plusPlusAssignOperation (const GGS_outletClassBindingSpecification & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_outletClassBindingSpecification_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_ GGS__5B_outletClassBindingSpecification_5D_::add_operation (const GGS__5B_outletClassBindingSpecification_5D_ & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecification_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@outletClassBindingSpecification], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::plusAssignOperation (const GGS__5B_outletClassBindingSpecification_5D_ inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_append (const GGS_outletClassBindingSpecification inValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_set (const GGS_outletClassBindingSpecification inValue,
                                                              const GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_insert (const GGS_outletClassBindingSpecification inValue,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_remove (GGS_outletClassBindingSpecification & outValue,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_removeFirst (GGS_outletClassBindingSpecification & outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecification_5D_::setter_removeLast (GGS_outletClassBindingSpecification & outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_ GGS__5B_outletClassBindingSpecification_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecification_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_outletClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecification_5D_ GGS__5B_outletClassBindingSpecification_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                         const GGS_uint & inLength,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecification_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_outletClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_outletClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification GGS__5B_outletClassBindingSpecification_5D_::getter_first (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecification result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification GGS__5B_outletClassBindingSpecification_5D_::getter_last (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecification result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification GGS__5B_outletClassBindingSpecification_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecification result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_outletClassBindingSpecification_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_outletClassBindingSpecification_5D_::DownEnumerator__5B_outletClassBindingSpecification_5D_ (const GGS__5B_outletClassBindingSpecification_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification DownEnumerator__5B_outletClassBindingSpecification_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification DownEnumerator__5B_outletClassBindingSpecification_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_outletClassBindingSpecification_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_outletClassBindingSpecification_5D_::UpEnumerator__5B_outletClassBindingSpecification_5D_ (const GGS__5B_outletClassBindingSpecification_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification UpEnumerator__5B_outletClassBindingSpecification_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecification UpEnumerator__5B_outletClassBindingSpecification_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[outletClassBindingSpecification] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletClassBindingSpecification_5D_ ("[outletClassBindingSpecification]",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_outletClassBindingSpecification_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_outletClassBindingSpecification_5D_ ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_autoLayoutViewClassBindingSpecification_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_::GGS__5B_autoLayoutViewClassBindingSpecification_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_::GGS__5B_autoLayoutViewClassBindingSpecification_5D_ (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & GGS__5B_autoLayoutViewClassBindingSpecification_5D_::operator = (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_ GGS__5B_autoLayoutViewClassBindingSpecification_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_autoLayoutViewClassBindingSpecification_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::plusPlusAssignOperation (const GGS_autoLayoutViewClassBindingSpecification & inValue
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_autoLayoutViewClassBindingSpecification_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_ GGS__5B_autoLayoutViewClassBindingSpecification_5D_::add_operation (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand,
                                                                                                                        Compiler * /* inCompiler */
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_autoLayoutViewClassBindingSpecification_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::description (String & ioString,
                                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@autoLayoutViewClassBindingSpecification], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::plusAssignOperation (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ inOperand,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_append (const GGS_autoLayoutViewClassBindingSpecification inValue,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_set (const GGS_autoLayoutViewClassBindingSpecification inValue,
                                                                      const GGS_uint inIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_insert (const GGS_autoLayoutViewClassBindingSpecification inValue,
                                                                         const GGS_uint inInsertionIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_remove (GGS_autoLayoutViewClassBindingSpecification & outValue,
                                                                         const GGS_uint inRemoveIndex,
                                                                         Compiler * inCompiler
                                                                         COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_removeFirst (GGS_autoLayoutViewClassBindingSpecification & outValue,
                                                                              Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_autoLayoutViewClassBindingSpecification_5D_::setter_removeLast (GGS_autoLayoutViewClassBindingSpecification & outValue,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_ GGS__5B_autoLayoutViewClassBindingSpecification_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_autoLayoutViewClassBindingSpecification_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_autoLayoutViewClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_autoLayoutViewClassBindingSpecification_5D_ GGS__5B_autoLayoutViewClassBindingSpecification_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                                         const GGS_uint & inLength,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_autoLayoutViewClassBindingSpecification_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_autoLayoutViewClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_autoLayoutViewClassBindingSpecification_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification GGS__5B_autoLayoutViewClassBindingSpecification_5D_::getter_first (Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecification result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification GGS__5B_autoLayoutViewClassBindingSpecification_5D_::getter_last (Compiler * inCompiler
                                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecification result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification GGS__5B_autoLayoutViewClassBindingSpecification_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewClassBindingSpecification result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_autoLayoutViewClassBindingSpecification_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification DownEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_autoLayoutViewClassBindingSpecification_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_ (const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewClassBindingSpecification UpEnumerator__5B_autoLayoutViewClassBindingSpecification_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[autoLayoutViewClassBindingSpecification] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_autoLayoutViewClassBindingSpecification_5D_ ("[autoLayoutViewClassBindingSpecification]",
                                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_autoLayoutViewClassBindingSpecification_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_autoLayoutViewClassBindingSpecification_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (void) :
mProperty_mUnifiedDeclarationList (),
mProperty_mBindingSpecificationListMap (),
mProperty_mAutoLayoutBindingSpecificationList (),
mProperty_mPreferences (),
mProperty_mXcodeProject (),
mProperty_mGraphvizList (),
mProperty_mAutoLayoutVStackFunctionMap (),
mProperty_mAutoLayoutHStackFunctionMap (),
mProperty_mEnumerationFunctionListAST () {
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (const GGS_astDeclarationStruct & inSource) :
mProperty_mUnifiedDeclarationList (inSource.mProperty_mUnifiedDeclarationList),
mProperty_mBindingSpecificationListMap (inSource.mProperty_mBindingSpecificationListMap),
mProperty_mAutoLayoutBindingSpecificationList (inSource.mProperty_mAutoLayoutBindingSpecificationList),
mProperty_mPreferences (inSource.mProperty_mPreferences),
mProperty_mXcodeProject (inSource.mProperty_mXcodeProject),
mProperty_mGraphvizList (inSource.mProperty_mGraphvizList),
mProperty_mAutoLayoutVStackFunctionMap (inSource.mProperty_mAutoLayoutVStackFunctionMap),
mProperty_mAutoLayoutHStackFunctionMap (inSource.mProperty_mAutoLayoutHStackFunctionMap),
mProperty_mEnumerationFunctionListAST (inSource.mProperty_mEnumerationFunctionListAST) {
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct & GGS_astDeclarationStruct::operator = (const GGS_astDeclarationStruct & inSource) {
  mProperty_mUnifiedDeclarationList = inSource.mProperty_mUnifiedDeclarationList ;
  mProperty_mBindingSpecificationListMap = inSource.mProperty_mBindingSpecificationListMap ;
  mProperty_mAutoLayoutBindingSpecificationList = inSource.mProperty_mAutoLayoutBindingSpecificationList ;
  mProperty_mPreferences = inSource.mProperty_mPreferences ;
  mProperty_mXcodeProject = inSource.mProperty_mXcodeProject ;
  mProperty_mGraphvizList = inSource.mProperty_mGraphvizList ;
  mProperty_mAutoLayoutVStackFunctionMap = inSource.mProperty_mAutoLayoutVStackFunctionMap ;
  mProperty_mAutoLayoutHStackFunctionMap = inSource.mProperty_mAutoLayoutHStackFunctionMap ;
  mProperty_mEnumerationFunctionListAST = inSource.mProperty_mEnumerationFunctionListAST ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_astDeclarationStruct GGS_astDeclarationStruct::init (Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astDeclarationStruct result ;
  result.setInitializedProperties (inCompiler) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::setInitializedProperties (Compiler * inCompiler) {
GGS__5B_abstractDeclarationAST_5D_ temp_0 = GGS__5B_abstractDeclarationAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 15)) ;
  mProperty_mUnifiedDeclarationList = temp_0 ;
GGS__5B_outletClassBindingSpecification_5D_ temp_1 = GGS__5B_outletClassBindingSpecification_5D_::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 16)) ;
  mProperty_mBindingSpecificationListMap = temp_1 ;
GGS__5B_autoLayoutViewClassBindingSpecification_5D_ temp_2 = GGS__5B_autoLayoutViewClassBindingSpecification_5D_::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 17)) ;
  mProperty_mAutoLayoutBindingSpecificationList = temp_2 ;
  mProperty_mPreferences = GGS_prefDeclaration::init (inCompiler COMMA_HERE) ;
  mProperty_mXcodeProject = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("grammar-syntax.galgas4", 19)) ;
GGS__5B_lstring_5D_ temp_3 = GGS__5B_lstring_5D_::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 20)) ;
  mProperty_mGraphvizList = temp_3 ;
  mProperty_mAutoLayoutVStackFunctionMap = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
  mProperty_mAutoLayoutHStackFunctionMap = GGS_astAutoLayoutViewFunctionMap::init (inCompiler COMMA_HERE) ;
GGS__5B_enumerationFunctionAST_5D_ temp_4 = GGS__5B_enumerationFunctionAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("grammar-syntax.galgas4", 23)) ;
  mProperty_mEnumerationFunctionListAST = temp_4 ;
}

//--------------------------------------------------------------------------------------------------

GGS_astDeclarationStruct::GGS_astDeclarationStruct (const GGS__5B_abstractDeclarationAST_5D_ & inOperand0,
                                                    const GGS__5B_outletClassBindingSpecification_5D_ & inOperand1,
                                                    const GGS__5B_autoLayoutViewClassBindingSpecification_5D_ & inOperand2,
                                                    const GGS_prefDeclaration & inOperand3,
                                                    const GGS_lstring & inOperand4,
                                                    const GGS__5B_lstring_5D_ & inOperand5,
                                                    const GGS_astAutoLayoutViewFunctionMap & inOperand6,
                                                    const GGS_astAutoLayoutViewFunctionMap & inOperand7,
                                                    const GGS__5B_enumerationFunctionAST_5D_ & inOperand8) :
mProperty_mUnifiedDeclarationList (inOperand0),
mProperty_mBindingSpecificationListMap (inOperand1),
mProperty_mAutoLayoutBindingSpecificationList (inOperand2),
mProperty_mPreferences (inOperand3),
mProperty_mXcodeProject (inOperand4),
mProperty_mGraphvizList (inOperand5),
mProperty_mAutoLayoutVStackFunctionMap (inOperand6),
mProperty_mAutoLayoutHStackFunctionMap (inOperand7),
mProperty_mEnumerationFunctionListAST (inOperand8) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_astDeclarationStruct::isValid (void) const {
  return mProperty_mUnifiedDeclarationList.isValid () && mProperty_mBindingSpecificationListMap.isValid () && mProperty_mAutoLayoutBindingSpecificationList.isValid () && mProperty_mPreferences.isValid () && mProperty_mXcodeProject.isValid () && mProperty_mGraphvizList.isValid () && mProperty_mAutoLayoutVStackFunctionMap.isValid () && mProperty_mAutoLayoutHStackFunctionMap.isValid () && mProperty_mEnumerationFunctionListAST.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::drop (void) {
  mProperty_mUnifiedDeclarationList.drop () ;
  mProperty_mBindingSpecificationListMap.drop () ;
  mProperty_mAutoLayoutBindingSpecificationList.drop () ;
  mProperty_mPreferences.drop () ;
  mProperty_mXcodeProject.drop () ;
  mProperty_mGraphvizList.drop () ;
  mProperty_mAutoLayoutVStackFunctionMap.drop () ;
  mProperty_mAutoLayoutHStackFunctionMap.drop () ;
  mProperty_mEnumerationFunctionListAST.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_astDeclarationStruct::description (String & ioString,
                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @astDeclarationStruct:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mUnifiedDeclarationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mBindingSpecificationListMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutBindingSpecificationList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mPreferences.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mXcodeProject.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mGraphvizList.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutVStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mAutoLayoutHStackFunctionMap.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mEnumerationFunctionListAST.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @astDeclarationStruct generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_astDeclarationStruct ("astDeclarationStruct",
                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_astDeclarationStruct::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_astDeclarationStruct ;
}

//--------------------------------------------------------------------------------------------------
// @atomicClassDeclarationAST reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST::objectCompare (const GGS_atomicClassDeclarationAST & inOperand) const {
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

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (void) :
GGS_abstractDeclarationAST () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_atomicClassDeclarationAST GGS_atomicClassDeclarationAST::
init_21__21_ (const GGS_lstring & in_mClassName,
              const GGS_typeKind & in_mKind,
              Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  cPtr_atomicClassDeclarationAST * object = nullptr ;
  macroMyNew (object, cPtr_atomicClassDeclarationAST (inCompiler COMMA_THERE)) ;
  object->atomicClassDeclarationAST_init_21__21_ (in_mClassName, in_mKind, inCompiler) ;
  const GGS_atomicClassDeclarationAST result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_atomicClassDeclarationAST::
atomicClassDeclarationAST_init_21__21_ (const GGS_lstring & in_mClassName,
                                        const GGS_typeKind & in_mKind,
                                        Compiler * /* inCompiler */) {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST::GGS_atomicClassDeclarationAST (const cPtr_atomicClassDeclarationAST * inSourcePtr) :
GGS_abstractDeclarationAST (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_atomicClassDeclarationAST) ;
}
//--------------------------------------------------------------------------------------------------

GGS_typeKind GGS_atomicClassDeclarationAST::readProperty_mKind (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_typeKind () ;
  }else{
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    return p->mProperty_mKind ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_atomicClassDeclarationAST::setProperty_mKind (const GGS_typeKind & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_atomicClassDeclarationAST * p = (cPtr_atomicClassDeclarationAST *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_atomicClassDeclarationAST) ;
    p->mProperty_mKind = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @atomicClassDeclarationAST class
//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (inCompiler COMMA_THERE),
mProperty_mKind () {
}

//--------------------------------------------------------------------------------------------------

cPtr_atomicClassDeclarationAST::cPtr_atomicClassDeclarationAST (const GGS_lstring & in_mClassName,
                                                                const GGS_typeKind & in_mKind,
                                                                Compiler * inCompiler
                                                                COMMA_LOCATION_ARGS) :
cPtr_abstractDeclarationAST (in_mClassName, inCompiler COMMA_THERE),
mProperty_mKind () {
  mProperty_mClassName = in_mClassName ;
  mProperty_mKind = in_mKind ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_atomicClassDeclarationAST::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

void cPtr_atomicClassDeclarationAST::description (String & ioString,
                                                  const int32_t inIndentation) const {
  ioString.appendCString ("[@atomicClassDeclarationAST:") ;
  mProperty_mClassName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mKind.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_atomicClassDeclarationAST::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_atomicClassDeclarationAST (mProperty_mClassName, mProperty_mKind, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_atomicClassDeclarationAST::printNonNullClassInstanceProperties (void) const {
    cPtr_abstractDeclarationAST::printNonNullClassInstanceProperties () ;
    mProperty_mKind.printNonNullClassInstanceProperties ("mKind") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @atomicClassDeclarationAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_atomicClassDeclarationAST ("atomicClassDeclarationAST",
                                                                              & kTypeDescriptor_GALGAS_abstractDeclarationAST) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_atomicClassDeclarationAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_atomicClassDeclarationAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_atomicClassDeclarationAST_2E_weak::objectCompare (const GGS_atomicClassDeclarationAST_2E_weak & inOperand) const {
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

GGS_atomicClassDeclarationAST_2E_weak::GGS_atomicClassDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_atomicClassDeclarationAST_2E_weak & GGS_atomicClassDeclarationAST_2E_weak::operator = (const GGS_atomicClassDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
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
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
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
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
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
//'@entityStrongReferenceGraph' graph
//--------------------------------------------------------------------------------------------------

class GraphNode_entityStrongReferenceGraph final {
  public: GraphNode_entityStrongReferenceGraph * mInfPtr ;
  public: GraphNode_entityStrongReferenceGraph * mSupPtr ;
  public: int32_t mBalance ;
  public: const String mKey ;
  public: const uint32_t mNodeID ;
  public: GGS_string mElement ;
  public: GGS_location mDefinitionLocation ;
  public: GenericUniqueArray <GGS_location> mReferenceLocationArray ;
  public: bool mIsDefined ;

//--- Constructors
  public: GraphNode_entityStrongReferenceGraph (const String & inKey,
                                        const uint32_t inNodeID) ;

  public: GraphNode_entityStrongReferenceGraph (GraphNode_entityStrongReferenceGraph * inNode) ;

  public: void accumulateNodes (GGS__5B_string_5D_ & outNodeList) const ;

//--- Destructor
  public: ~ GraphNode_entityStrongReferenceGraph (void) ;

//--- No copy
  private: GraphNode_entityStrongReferenceGraph (const GraphNode_entityStrongReferenceGraph &) = delete ;
  private: GraphNode_entityStrongReferenceGraph & operator = (const GraphNode_entityStrongReferenceGraph &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

GraphNode_entityStrongReferenceGraph::~ GraphNode_entityStrongReferenceGraph (void) {
  macroMyDelete (mInfPtr) ;
  macroMyDelete (mSupPtr) ;
}

//--------------------------------------------------------------------------------------------------

class SharedGraph_entityStrongReferenceGraph : public SharedObject {
//--------------------------------- Attributes
  private: GraphNode_entityStrongReferenceGraph * mRoot ;
  public: inline const GraphNode_entityStrongReferenceGraph * root (void) const { return mRoot ; }
  private: DirectedGraph mDirectedGraph ;
  private: GenericUniqueArray <GraphNode_entityStrongReferenceGraph *> mNodeArray ;

//--- Constructor
  public: SharedGraph_entityStrongReferenceGraph (LOCATION_ARGS) ;

//--- Destructor
  public: virtual ~ SharedGraph_entityStrongReferenceGraph (void) ;

//--- Count
  public: inline uint32_t allNodeCount (void) const { return (uint32_t) mNodeArray.count () ; }

//--- isNodeDefined
  public: bool isNodeDefined (const String & inKey) const ;

//--- locationForKey
  public: GGS_location locationForKey (const String & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const ;

//--- Internal methods
  public: void description (String & ioString,
                            const int32_t inIndentation) const ;

  public: void copyFrom (const SharedGraph_entityStrongReferenceGraph * inSource) ;

  public: void copyReversedGraphFrom (const SharedGraph_entityStrongReferenceGraph * inSource) ;

  public: int32_t graphCompare (const SharedGraph_entityStrongReferenceGraph * inOperand) const ;

  public: GraphNode_entityStrongReferenceGraph * findOrAddNodeForKey (const String & inKey) ;

  protected: GraphNode_entityStrongReferenceGraph * internalInsert (GraphNode_entityStrongReferenceGraph * & ioRootPtr,
                                          const String & inKey,
                                          bool & ioExtension) ;

  public: void internalAddNode (const GGS_lstring & inKey,
                                const char * inErrorMessage,
                                const GGS_string & inElement,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) ;

  public: void addEdge (const String & inSourceNodeKey,
                        const GGS_location & inSourceNodeLocation,
                        const String & inTargetNodeKey,
                        const GGS_location & inTargetNodeLocation) ;

  public: void removeEdgesToDominators (LOCATION_ARGS) ;

  public: void removeEdgesToNode (const String & inNodeName,
                                  Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

  public: void internalTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                        GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                        GGS__5B_string_5D_ & outUnsortedList,
                                        GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const ;


  public: void internalFindCircularities (GGS__5B_string_5D_ & outInfoList,
                                          GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalNodesWithNoPredecessor (GGS__5B_string_5D_ & outInfoList,
                                               GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalNodesWithNoSuccessor (GGS__5B_string_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList) const ;

  public: void internalDepthFirstTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                  GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                  GGS__5B_string_5D_ & outUnsortedList,
                                                  GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const ;

  public: void subGraph (GGS_entityStrongReferenceGraph & outResultingGraph,
                         const GGS__5B_lstring_5D_ & inStartNodes,
                         const GGS_stringset & inNodesToExclude,
                         Compiler * inCompiler
                         COMMA_LOCATION_ARGS) const ;

  public: void graph (GGS__5B_string_5D_ & outNodeList) const ;

  public: GGS__5B_string_5D_ keyList (void) const ;

  public: GGS__5B_lstring_5D_ lkeyList (void) const ;

  public: String getter_graphviz (void) const ;

  public: void edges (GGS__32_stringlist & ioList) const ;

  #ifndef DO_NOT_GENERATE_CHECKINGS
    public: void checkGraph (LOCATION_ARGS) const ;
  #endif

//--- No copy
  private: SharedGraph_entityStrongReferenceGraph (const SharedGraph_entityStrongReferenceGraph &) = delete ;
  private: SharedGraph_entityStrongReferenceGraph & operator = (const SharedGraph_entityStrongReferenceGraph &) = delete ;
} ;

//--------------------------------------------------------------------------------------------------

SharedGraph_entityStrongReferenceGraph::SharedGraph_entityStrongReferenceGraph (LOCATION_ARGS) :
SharedObject (THERE),
mRoot (nullptr),
mDirectedGraph (),
mNodeArray () {
}

//--------------------------------------------------------------------------------------------------

SharedGraph_entityStrongReferenceGraph::~ SharedGraph_entityStrongReferenceGraph (void) {
  macroMyDelete (mRoot) ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Copy
#endif

//--------------------------------------------------------------------------------------------------

GraphNode_entityStrongReferenceGraph::GraphNode_entityStrongReferenceGraph (GraphNode_entityStrongReferenceGraph * inNode) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (inNode->mBalance),
mKey (inNode->mKey),
mNodeID (inNode->mNodeID),
mElement (inNode->mElement),
mDefinitionLocation (inNode->mDefinitionLocation),
mReferenceLocationArray (),
mIsDefined (inNode->mIsDefined) {
  mReferenceLocationArray.setCapacity (inNode->mReferenceLocationArray.count ()) ;
  for (int32_t i=0 ; i<inNode->mReferenceLocationArray.count () ; i++) {
    mReferenceLocationArray.appendObject (inNode->mReferenceLocationArray (i COMMA_HERE)) ;
  }
  if (nullptr != inNode->mInfPtr) {
    macroMyNew (mInfPtr, GraphNode_entityStrongReferenceGraph (inNode->mInfPtr)) ;
  }
  if (nullptr != inNode->mSupPtr) {
    macroMyNew (mSupPtr, GraphNode_entityStrongReferenceGraph (inNode->mSupPtr)) ;
  }
}

//--------------------------------------------------------------------------------------------------

static void buildNodeArray (GraphNode_entityStrongReferenceGraph * inNode,
                            GenericUniqueArray <GraphNode_entityStrongReferenceGraph *> & ioNodeArray) {
  if (nullptr != inNode) {
    macroAssert (ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) == nullptr, "ioNodeArray (%lld COMMA_HERE) != nullptr", inNode->mNodeID, 0) ;
    ioNodeArray ((int32_t) inNode->mNodeID COMMA_HERE) = inNode ;
    buildNodeArray (inNode->mInfPtr, ioNodeArray) ;
    buildNodeArray (inNode->mSupPtr, ioNodeArray) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::copyFrom (const SharedGraph_entityStrongReferenceGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, GraphNode_entityStrongReferenceGraph (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::description (String & ioString,
                                const int32_t /* inIndentation */) const {
  ioString.appendCString (" (") ;
  ioString.appendUnsigned (mDirectedGraph.nodeCount ()) ;
  ioString.appendCString (" node") ;
  ioString.appendCString ((mDirectedGraph.nodeCount () > 1) ? "s" : "") ;
  ioString.appendCString (", ") ;
  ioString.appendUnsigned (mDirectedGraph.edgeCount ()) ;
  ioString.appendCString (" edge") ;
  ioString.appendCString ((mDirectedGraph.edgeCount () > 1) ? "s" : "") ;
  ioString.appendCString (")") ;
}

//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void SharedGraph_entityStrongReferenceGraph::checkGraph (LOCATION_ARGS) const {
    GenericUniqueArray <GraphNode_entityStrongReferenceGraph *> nodeArray (mNodeArray.count () COMMA_HERE) ;
    nodeArray.appendObjects (mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, nodeArray) ;
    macroAssertThere (nodeArray.count() == mNodeArray.count (), "nodeArray.count() == %lld != mNodeArray.count () %lld", nodeArray.count(), mNodeArray.count ()) ;
    for (int32_t i=0 ; i<nodeArray.count() ; i++) {
      macroAssertThere (nodeArray (i COMMA_HERE) == mNodeArray (i COMMA_HERE), "nodeArray.(%lld) != mNodeArray.(%lld)", i, i) ;
      macroAssertThere (mDirectedGraph.isNodeDefined ((uint32_t) i), "! mDirectedGraph.isNodeDefined (i) : %lld != 0", i, 0) ;
    }
  }
#endif

//--------------------------------------------------------------------------------------------------
//    GGS_entityStrongReferenceGraph
//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::GGS_entityStrongReferenceGraph (void) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::~ GGS_entityStrongReferenceGraph (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph::GGS_entityStrongReferenceGraph (const GGS_entityStrongReferenceGraph & inSource) :
AC_GALGAS_root (),
mSharedGraph (nullptr) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph & GGS_entityStrongReferenceGraph::operator = (const GGS_entityStrongReferenceGraph & inSource) {
  macroAssignSharedObject (mSharedGraph, inSource.mSharedGraph) ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::makeNewEmptyGraph (LOCATION_ARGS) {
  macroMyNew (mSharedGraph, SharedGraph_entityStrongReferenceGraph (THERE)) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<graph @entityStrongReferenceGraph") ;
  if (isValid ()) {
    mSharedGraph->description (ioString, inIndentation) ;
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

uint32_t GGS_entityStrongReferenceGraph::count () const {
  uint32_t result = 0 ;
  if (isValid ()) {
    result = mSharedGraph->allNodeCount () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_entityStrongReferenceGraph::getter_count (UNUSED_LOCATION_ARGS) const {
  return GGS_uint (count ()) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::drop (void) {
  macroDetachSharedObject (mSharedGraph) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::insulateGraph (LOCATION_ARGS) {
  if ((mSharedGraph != nullptr) && !mSharedGraph->isUniquelyReferenced ()) {
    SharedGraph_entityStrongReferenceGraph * p = nullptr ;
    macroMyNew (p, SharedGraph_entityStrongReferenceGraph (THERE)) ;
    p->copyFrom (mSharedGraph) ;
    macroAssignSharedObject (mSharedGraph, p) ;
    macroDetachSharedObject (p) ;
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_hasKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_entityStrongReferenceGraph::getter_isNodeDefined (const GGS_string & inKey
                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->isNodeDefined (inKey.stringValue ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool SharedGraph_entityStrongReferenceGraph::isNodeDefined (const String & inKey) const {
  bool result = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !result ; i++) {
    const GraphNode_entityStrongReferenceGraph * p = mNodeArray (i COMMA_HERE) ;
    result = p->mIsDefined && (p->mKey == inKey) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_locationForKey
#endif

//--------------------------------------------------------------------------------------------------

GGS_location GGS_entityStrongReferenceGraph::getter_locationForKey (const GGS_string & inKey,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    result = mSharedGraph->locationForKey (inKey.stringValue (), inCompiler COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location SharedGraph_entityStrongReferenceGraph::locationForKey (const String & inKey,
                                          Compiler * inCompiler
                                          COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  bool found = false ;
  bool ok = false ;
  for (int32_t i=0 ; (i<mNodeArray.count ()) && !found ; i++) {
    const GraphNode_entityStrongReferenceGraph * p = mNodeArray (i COMMA_HERE) ;
    found = p->mKey == inKey ;
    if (found && p->mIsDefined) {
      ok = true ;
      result = p->mDefinitionLocation ;
    }
  }
  if (!ok) {
    inCompiler->emitSemanticError (
      GGS_location (),
      String ("graph locationForKey: node '") + inKey + String ("' is undefined"),
      GenericArray <FixItDescription> ()
      COMMA_THERE
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_keyList
#endif

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ SharedGraph_entityStrongReferenceGraph::keyList (void) const {
  GGS__5B_string_5D_ result = GGS__5B_string_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    result.plusPlusAssignOperation (mNodeArray (i COMMA_HERE)->mKey COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_entityStrongReferenceGraph::getter_keyList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
  if (isValid ()) {
    result = mSharedGraph->keyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_lkeyList
#endif

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ SharedGraph_entityStrongReferenceGraph::lkeyList (void) const {
  GGS__5B_lstring_5D_ result = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    const GraphNode_entityStrongReferenceGraph * p = mNodeArray (i COMMA_HERE) ;
    GGS_location loc = p->mDefinitionLocation ;
    if (! loc.isValid ()) {
      loc = GGS_location::class_func_nowhere (HERE) ;
    }
    result.plusPlusAssignOperation (GGS_lstring (p->mKey, loc) COMMA_HERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_entityStrongReferenceGraph::getter_lkeyList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = mSharedGraph->lkeyList () ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalFindNode
#endif

//--------------------------------------------------------------------------------------------------

static const GraphNode_entityStrongReferenceGraph * findNode (const String & inKey,
                                   const GraphNode_entityStrongReferenceGraph * inNode) {
  const GraphNode_entityStrongReferenceGraph * result = nullptr ;
  while ((nullptr != inNode) && (result == nullptr)) {
    const int32_t r = inKey.compare (inNode->mKey) ;
    if (r < 0) {
      inNode = inNode->mInfPtr ;
    }else if (r > 0) {
      inNode = inNode->mSupPtr ;
    }else{
      result = inNode ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark graph
#endif

//--------------------------------------------------------------------------------------------------

void GraphNode_entityStrongReferenceGraph::accumulateNodes (GGS__5B_string_5D_ & outNodeList) const {
  outNodeList.plusPlusAssignOperation (mElement COMMA_HERE) ;
  if (mInfPtr != nullptr) {
    mInfPtr->accumulateNodes (outNodeList) ;
  }
  if (mSupPtr != nullptr) {
    mSupPtr->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::graph (GGS__5B_string_5D_ & outNodeList) const {
  if (mRoot != nullptr) {
    mRoot->accumulateNodes (outNodeList) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_entityStrongReferenceGraph::graph (void) const {
  GGS__5B_string_5D_ result ;
  if (isValid ()) {
    mSharedGraph->graph (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark subGraph
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::subGraph (GGS_entityStrongReferenceGraph & outResultingGraph,
                            const GGS__5B_lstring_5D_ & inStartNodes,
                            const GGS_stringset & inNodesToExclude,
                            Compiler * inCompiler
                            COMMA_LOCATION_ARGS) const {
//--- Build start node set
  UInt32Set startNodeSet ;
  UpEnumerator__5B_lstring_5D_ enumerator1 (inStartNodes) ;
  while (enumerator1.hasCurrentObject ()) {
    const GraphNode_entityStrongReferenceGraph * nodePtr = findNode (enumerator1.current (THERE).mProperty_string.stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator1.current (THERE).mProperty_string.stringValue()) ;
      message.appendCString ("' is not a declared node, cannot start from it") ;
      inCompiler->emitSemanticError (
        enumerator1.current (THERE).mProperty_location,
        message,
        GenericArray <FixItDescription> ()
        COMMA_THERE
      ) ;
    }else{
      startNodeSet.add (nodePtr->mNodeID) ;
    }
    enumerator1.gotoNextObject () ;
  }
//--- Build node to exclude set
  UInt32Set nodesToExcludeSet ;
  UpEnumerator_stringset enumerator2 (inNodesToExclude) ;
  while (enumerator2.hasCurrentObject ()) {
    const GraphNode_entityStrongReferenceGraph * nodePtr = findNode (enumerator2.current_key (THERE).stringValue(), root()) ;
    if (nullptr == nodePtr) {
      String message ("subgraphFromNodes: '") ;
      message.appendString (enumerator2.current_key (THERE).stringValue()) ;
      message.appendCString ("' is not a declared node, cannot be excluded") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      nodesToExcludeSet.add (nodePtr->mNodeID) ;
    }
    enumerator2.gotoNextObject () ;
  }
//--- Build sub graph
  const DirectedGraph theSubGraph = mDirectedGraph.subGraphFromNodes (
    startNodeSet,
    nodesToExcludeSet
  ) ;
//--- Enter nodes
  GenericUniqueArray <uint32_t> nodeArray ; theSubGraph.getNodeValueArray (nodeArray) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_THERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_string = nodePtr->mKey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    outResultingGraph.internalAddNode (
      lkey,
      "subgraphFromNodes Internal error",
      nodePtr->mElement,
      inCompiler
      COMMA_THERE
    ) ;
  }
//--- Enter edges
  GenericUniqueArray <GraphEdge> edgeArray ; theSubGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const uint32_t sourceNodeIndex = edgeArray (i COMMA_HERE).mSource ;
    const GraphNode_entityStrongReferenceGraph * sourceNodePtr = mNodeArray ((int32_t) sourceNodeIndex COMMA_THERE) ;
    GGS_lstring source ;
    source.mProperty_string = sourceNodePtr->mKey ;
    source.mProperty_location = sourceNodePtr->mDefinitionLocation ;
    const uint32_t targetNodeIndex = edgeArray (i COMMA_HERE).mTarget ;
    const GraphNode_entityStrongReferenceGraph * targetNodePtr = mNodeArray ((int32_t) targetNodeIndex COMMA_THERE) ;
    GGS_lstring target ;
    target.mProperty_string = targetNodePtr->mKey ;
    target.mProperty_location = targetNodePtr->mDefinitionLocation ;
    outResultingGraph.setter_addEdge (source, target COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::subGraph (GGS_entityStrongReferenceGraph & outResultingGraph,
                                const GGS__5B_lstring_5D_ & inStartNodes,
                                const GGS_stringset & inNodesToExclude,
                                Compiler * inCompiler
                                COMMA_LOCATION_ARGS) const {
  if (isValid () && inStartNodes.isValid () && inNodesToExclude.isValid ()) {
    outResultingGraph.makeNewEmptyGraph (THERE) ;
    mSharedGraph->subGraph (
      outResultingGraph,
      inStartNodes,
      inNodesToExclude,
      inCompiler
      COMMA_THERE
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Reversed Graph
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::copyReversedGraphFrom (const SharedGraph_entityStrongReferenceGraph * inSource) {
  macroUniqueSharedObject (this) ;
  if (nullptr != inSource->mRoot) {
    macroMyNew (mRoot, GraphNode_entityStrongReferenceGraph (inSource->mRoot)) ;
    mNodeArray.appendObjects (inSource->mNodeArray.count (), nullptr) ;
    buildNodeArray (mRoot, mNodeArray) ;
    mDirectedGraph = inSource->mDirectedGraph.reversedGraph () ;
  }
  #ifndef DO_NOT_GENERATE_CHECKINGS
    checkGraph (HERE) ;
  #endif
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::reversedGraphFromGraph (const GGS_entityStrongReferenceGraph & inGraph
                                              COMMA_LOCATION_ARGS) {
  macroDetachSharedObject (mSharedGraph) ;
  if (inGraph.isValid ()) {
    macroMyNew (mSharedGraph, SharedGraph_entityStrongReferenceGraph (THERE)) ;
    mSharedGraph->copyReversedGraphFrom (inGraph.mSharedGraph) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Object Compare
#endif

//--------------------------------------------------------------------------------------------------

int32_t SharedGraph_entityStrongReferenceGraph::graphCompare (const SharedGraph_entityStrongReferenceGraph * inOperand) const {
  const int32_t r = int32_t (allNodeCount ()) - int32_t (inOperand->allNodeCount ()) ;
  return r ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_entityStrongReferenceGraph::objectCompare (const GGS_entityStrongReferenceGraph & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    const int32_t r = mSharedGraph->graphCompare (inOperand.mSharedGraph) ;
    if (r < 0) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (r > 0) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      result = ComparisonResult::operandEqual ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Node Insertion
#endif

//--------------------------------------------------------------------------------------------------

static void rotateLeft (GraphNode_entityStrongReferenceGraph * & ioRootPtr) {
  GraphNode_entityStrongReferenceGraph * b = ioRootPtr->mSupPtr ;
  ioRootPtr->mSupPtr = b->mInfPtr ;
  b->mInfPtr = ioRootPtr;

  if (b->mBalance >= 0) {
    ioRootPtr->mBalance += 1 ;
  }else{
    ioRootPtr->mBalance += 1 - b->mBalance ;
  }

  if (ioRootPtr->mBalance > 0) {
    b->mBalance += ioRootPtr->mBalance + 1 ;
  }else{
    b->mBalance += 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

static void rotateRight (GraphNode_entityStrongReferenceGraph * & ioRootPtr) {
  GraphNode_entityStrongReferenceGraph * b = ioRootPtr->mInfPtr ;
  ioRootPtr->mInfPtr = b->mSupPtr ;
  b->mSupPtr = ioRootPtr ;

  if (b->mBalance > 0) {
    ioRootPtr->mBalance += -b->mBalance - 1 ;
  }else{
    ioRootPtr->mBalance -= 1 ;
  }
  if (ioRootPtr->mBalance >= 0) {
    b->mBalance -= 1 ;
  }else{
    b->mBalance += ioRootPtr->mBalance - 1 ;
  }
  ioRootPtr = b ;
}

//--------------------------------------------------------------------------------------------------

GraphNode_entityStrongReferenceGraph::GraphNode_entityStrongReferenceGraph (const String & inKey,
                                                            const uint32_t inNodeID) :
mInfPtr (nullptr),
mSupPtr (nullptr),
mBalance (0),
mKey (inKey),
mNodeID (inNodeID),
mElement (),
mDefinitionLocation (),
mReferenceLocationArray (),
mIsDefined (false) {
}

//--------------------------------------------------------------------------------------------------

GraphNode_entityStrongReferenceGraph * SharedGraph_entityStrongReferenceGraph::internalInsert (GraphNode_entityStrongReferenceGraph * & ioRootPtr,
                                         const String & inKey,
                                         bool & ioExtension) {
  GraphNode_entityStrongReferenceGraph * matchingEntry = nullptr ;
  if (ioRootPtr == nullptr) {
    macroMyNew (ioRootPtr, GraphNode_entityStrongReferenceGraph (inKey, (uint32_t) mNodeArray.count ())) ;
    mDirectedGraph.addNode ((uint32_t) mNodeArray.count ()) ;
    mNodeArray.appendObject (ioRootPtr) ;
    ioExtension = true ;
    matchingEntry = ioRootPtr ;
  }else{
    macroValidPointer (ioRootPtr) ;
    const int32_t comparaison = ioRootPtr->mKey.compare (inKey) ;
    if (comparaison > 0) {
      matchingEntry = internalInsert (ioRootPtr->mInfPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance += 1 ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false;
        }else if (ioRootPtr->mBalance == 2) {
          if (ioRootPtr->mInfPtr->mBalance == -1) {
            rotateLeft (ioRootPtr->mInfPtr) ;
          }
          rotateRight (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else if (comparaison < 0) {
      matchingEntry = internalInsert (ioRootPtr->mSupPtr, inKey, ioExtension) ;
      if (ioExtension) {
        ioRootPtr->mBalance-- ;
        if (ioRootPtr->mBalance == 0) {
          ioExtension = false ;
        }else if (ioRootPtr->mBalance == -2) {
          if (ioRootPtr->mSupPtr->mBalance == 1) {
            rotateRight (ioRootPtr->mSupPtr) ;
          }
          rotateLeft (ioRootPtr) ;
          ioExtension = false;
        }
      }
    }else{ // Entry already exists
      matchingEntry = ioRootPtr ;
      ioExtension = false ;
    }
  }
  return matchingEntry ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark internalAddNode
#endif

//--------------------------------------------------------------------------------------------------

GraphNode_entityStrongReferenceGraph * SharedGraph_entityStrongReferenceGraph::findOrAddNodeForKey (const String & inKey) {
  bool extension = false ; // Unused here
  return internalInsert (mRoot, inKey, extension) ;
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalAddNode (const GGS_lstring & inKey,
                                   const char * inErrorMessage,
                                   const GGS_string & inElement,
                                   Compiler * inCompiler
                                   COMMA_LOCATION_ARGS) {
  GraphNode_entityStrongReferenceGraph * node = findOrAddNodeForKey (inKey.mProperty_string.stringValue ()) ;
  if (!node->mIsDefined) { // Node exists, but is undefined
    node->mElement = inElement ;
    node->mDefinitionLocation = inKey.mProperty_location ;
    node->mIsDefined = true ;
  }else{ // Error : node redefinition
    GGS_lstring existingKey ;
    existingKey.mProperty_location = node->mDefinitionLocation ;
    existingKey.mProperty_string = GGS_string (node->mKey) ;
    inCompiler->semanticErrorWith_K_L_message (existingKey, inErrorMessage, inKey.mProperty_location COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalAddNode (const GGS_lstring & inKey,
                                       const char * inErrorMessage,
                                       const GGS_string & inElement,
                                       Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid () && inElement.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->internalAddNode (inKey, inErrorMessage, inElement, inCompiler COMMA_THERE) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark modifier noteNode
#endif

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_noteNode (const GGS_lstring & inKey
                                       COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    insulateGraph (THERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    GraphNode_entityStrongReferenceGraph * node = (nullptr == mSharedGraph)
      ? nullptr
      : mSharedGraph->findOrAddNodeForKey (inKey.mProperty_string.stringValue ())
    ;
    if (nullptr != node) {
      node->mReferenceLocationArray.appendObject (inKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier addEdge
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::addEdge (const String & inSourceNodeKey,
                           const GGS_location & inSourceNodeLocation,
                           const String & inTargetNodeKey,
                           const GGS_location & inTargetNodeLocation) {
  GraphNode_entityStrongReferenceGraph * sourceNode = findOrAddNodeForKey (inSourceNodeKey) ;
  macroValidPointer (sourceNode) ;
  GraphNode_entityStrongReferenceGraph * targetNode = findOrAddNodeForKey (inTargetNodeKey) ;
  macroValidPointer (targetNode) ;
  sourceNode->mReferenceLocationArray.appendObject (inSourceNodeLocation) ;
  targetNode->mReferenceLocationArray.appendObject (inTargetNodeLocation) ;
  mDirectedGraph.addEdge (sourceNode->mNodeID, targetNode->mNodeID) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_addEdge (const GGS_lstring & inSourceNodeKey,
                                      const GGS_lstring & inTargetNodeKey
                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inSourceNodeKey.isValid () && inTargetNodeKey.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->addEdge (inSourceNodeKey.mProperty_string.stringValue (),
                             inSourceNodeKey.mProperty_location,
                             inTargetNodeKey.mProperty_string.stringValue (),
                             inTargetNodeKey.mProperty_location) ;
    }
    #ifndef DO_NOT_GENERATE_CHECKINGS
      mSharedGraph->checkGraph (HERE) ;
    #endif
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output graphviz text
#endif

//--------------------------------------------------------------------------------------------------

String SharedGraph_entityStrongReferenceGraph::getter_graphviz (void) const {
  GenericUniqueArray <String> nodeNameArray ;
  for (int32_t i=0 ; i<mNodeArray.count () ; i++) {
    nodeNameArray.appendObject (mNodeArray (i COMMA_HERE)->mKey) ;
  }
  return mDirectedGraph.graphvizString (nodeNameArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_entityStrongReferenceGraph::getter_graphviz (UNUSED_LOCATION_ARGS) const {
  GGS_string result ;
  if (isValid ()) {
    result = GGS_string (mSharedGraph->getter_graphviz ()) ;
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Output arc list
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::edges (GGS__32_stringlist & ioList) const {
  GenericUniqueArray <GraphEdge> edgeArray ; mDirectedGraph.getEdges (edgeArray) ;
  for (int32_t i=0 ; i<edgeArray.count () ; i++) {
    const GraphEdge edge = edgeArray (i COMMA_HERE) ;
    ioList.addAssignOperation (
      mNodeArray ((int32_t) edge.mSource COMMA_HERE)->mKey,
      mNodeArray ((int32_t) edge.mTarget COMMA_HERE)->mKey
      COMMA_HERE
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__32_stringlist GGS_entityStrongReferenceGraph::getter_edges (LOCATION_ARGS) const {
  GGS__32_stringlist result ;
  if (isValid ()) {
    result = GGS__32_stringlist::init (nullptr COMMA_THERE) ;
    mSharedGraph->edges (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeCount
#endif

//--------------------------------------------------------------------------------------------------

static void countUndefinedNodeCount (const GraphNode_entityStrongReferenceGraph * inNode, uint32_t & ioCount) {
  if (nullptr != inNode) {
    countUndefinedNodeCount (inNode->mInfPtr, ioCount) ;
    if (! inNode->mIsDefined) {
      ioCount += 1 ;
    }
    countUndefinedNodeCount (inNode->mSupPtr, ioCount) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_entityStrongReferenceGraph::getter_undefinedNodeCount (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    result = GGS_uint (undefinedNodeCount) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeKeyList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeKeyList (const GraphNode_entityStrongReferenceGraph * inNode, GGS__5B_string_5D_ & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeKeyList (inNode->mInfPtr, ioResult) ;
    if (!inNode->mIsDefined) {
      ioResult.plusPlusAssignOperation (GGS_string (inNode->mKey) COMMA_HERE) ;
    }
    buildUndefinedNodeKeyList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_entityStrongReferenceGraph::getter_undefinedNodeKeyList (LOCATION_ARGS) const {
  GGS__5B_string_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_string_5D_::init (nullptr COMMA_THERE) ;
    buildUndefinedNodeKeyList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Find circularities
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalFindCircularities (GGS__5B_string_5D_ & outInfoList,
                                             GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesInvolvedInCircularities (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalFindCircularities (GGS__5B_string_5D_ & outInfoList,
                                                 GGS__5B_lstring_5D_ & outNodeKeyList
                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalFindCircularities (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no predecessor
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalNodesWithNoPredecessor (GGS__5B_string_5D_ & outInfoList,
                                                  GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoPredecessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalNodesWithNoPredecessor (GGS__5B_string_5D_ & outInfoList,
                                                      GGS__5B_lstring_5D_ & outNodeKeyList
                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoPredecessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Nodes with no successor
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalNodesWithNoSuccessor (GGS__5B_string_5D_ & outInfoList,
                                                GGS__5B_lstring_5D_ & outNodeKeyList) const {
  GenericUniqueArray <uint32_t> nodeArray ; mDirectedGraph.getNodesWithNoSuccessor (nodeArray) ;
//--- Add nodes
  outInfoList.removeAll () ;
  outNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<nodeArray.count () ; i++) {
    const uint32_t nodeIndex = nodeArray (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outInfoList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalNodesWithNoSuccessor (GGS__5B_string_5D_ & outInfoList,
                                                    GGS__5B_lstring_5D_ & outNodeKeyList
                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  outNodeKeyList.drop () ;
  if (isValid ()) {
    mSharedGraph->internalNodesWithNoSuccessor (outInfoList, outNodeKeyList) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Breath First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                           GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                           GGS__5B_string_5D_ & outUnsortedList,
                                           GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const {
  GenericUniqueArray <uint32_t> sortedNodes ;
  GenericUniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.topologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAll () ;
  outSortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAll () ;
  outUnsortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                               GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                               GGS__5B_string_5D_ & outUnsortedList,
                                               GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                               Compiler * inCompiler
                                               COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Depth First Topological sort
#endif

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::internalDepthFirstTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                     GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                     GGS__5B_string_5D_ & outUnsortedList,
                                                     GGS__5B_lstring_5D_ & outUnsortedNodeKeyList) const {
  GenericUniqueArray <uint32_t> sortedNodes ;
  GenericUniqueArray <uint32_t> unsortedNodes ;
  mDirectedGraph.depthFirstTopologicalSort (sortedNodes, unsortedNodes) ;
//--- Add sorted nodes
  outSortedList.removeAll () ;
  outSortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<sortedNodes.count () ; i++) {
    const uint32_t nodeIndex = sortedNodes (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outSortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outSortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
//--- Add unsorted nodes
  outUnsortedList.removeAll () ;
  outUnsortedNodeKeyList = GGS__5B_lstring_5D_::init (nullptr COMMA_HERE) ;
  for (int32_t i=0 ; i<unsortedNodes.count () ; i++) {
    const uint32_t nodeIndex = unsortedNodes (i COMMA_HERE) ;
    const GraphNode_entityStrongReferenceGraph * nodePtr = mNodeArray ((int32_t) nodeIndex COMMA_HERE) ;
    outUnsortedList.plusPlusAssignOperation (nodePtr->mElement COMMA_HERE) ;
    GGS_lstring lkey ;
    lkey.mProperty_location = nodePtr->mDefinitionLocation ;
    lkey.mProperty_string = GGS_string (nodePtr->mKey) ;
    outUnsortedNodeKeyList.plusPlusAssignOperation (lkey COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::internalDepthFirstTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                         GGS__5B_lstring_5D_ & outSortedNodeKeyList,
                                                         GGS__5B_string_5D_ & outUnsortedList,
                                                         GGS__5B_lstring_5D_ & outUnsortedNodeKeyList,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) const {
  outSortedNodeKeyList.drop () ;
  outUnsortedNodeKeyList.drop () ;
  if (isValid ()) {
    uint32_t undefinedNodeCount = 0 ;
    countUndefinedNodeCount (mSharedGraph->root (), undefinedNodeCount) ;
    if (0 != undefinedNodeCount) {
      String s ("Cannot apply graph topologicalSort: there ") ;
      if (undefinedNodeCount > 1) {
        s.appendCString ("are ") ;
        s.appendUnsigned (undefinedNodeCount) ;
        s.appendCString (" undefined nodes") ;
      }else{
        s.appendCString ("is 1 undefined node") ;
      }
      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
    }else{
      mSharedGraph->internalDepthFirstTopologicalSort (outSortedList, outSortedNodeKeyList, outUnsortedList, outUnsortedNodeKeyList) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark getter_undefinedNodeReferenceList
#endif

//--------------------------------------------------------------------------------------------------

static void buildUndefinedNodeReferenceList (const GraphNode_entityStrongReferenceGraph * inNode,
                                             GGS__5B_lstring_5D_ & ioResult) {
  if (nullptr != inNode) {
    buildUndefinedNodeReferenceList (inNode->mInfPtr, ioResult) ;
    if (!inNode->mIsDefined) {
      GGS_lstring lkey ;
      lkey.mProperty_string = GGS_string (inNode->mKey) ;
      for (int32_t i=0 ; i < inNode->mReferenceLocationArray.count () ; i++) {
        lkey.mProperty_location = inNode->mReferenceLocationArray (i COMMA_HERE) ;
        ioResult.plusPlusAssignOperation (lkey COMMA_HERE) ;
      }
    }
    buildUndefinedNodeReferenceList (inNode->mSupPtr, ioResult) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_entityStrongReferenceGraph::getter_undefinedNodeReferenceList (LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (nullptr COMMA_THERE) ;
    buildUndefinedNodeReferenceList (mSharedGraph->root (), result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToNode
#endif

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_removeEdgesToNode (const GGS_string & inNodeName,
                                                Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) {
  if (isValid () && inNodeName.isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToNode (inNodeName.stringValue (), inCompiler COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::removeEdgesToNode (const String & inNodeName,
                                     Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) {
//--- Find node
  const GraphNode_entityStrongReferenceGraph * node = findNode (inNodeName, mRoot) ;
  if (nullptr == node) {
    String s ("graph removeEdgesToNode: node '") ;
    s.appendString (inNodeName) ;
    s.appendCString ("' does not exist") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const uint32_t nodeIndex = node->mNodeID ;
    mDirectedGraph.removeEdgesToNode (nodeIndex COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

#ifdef PRAGMA_MARK_ALLOWED
  #pragma mark Modifier removeEdgesToDominators
#endif

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_removeEdgesToDominators (LOCATION_ARGS) {
  if (isValid ()) {
    insulateGraph (HERE) ;
    macroAssert (nullptr != mSharedGraph, "mSharedGraph == nullptr", 0, 0) ;
    if (nullptr != mSharedGraph) {
      mSharedGraph->removeEdgesToDominators (THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void SharedGraph_entityStrongReferenceGraph::removeEdgesToDominators (LOCATION_ARGS) {
//--- Find start nodes
  GenericUniqueArray <uint32_t> startNodes ; mDirectedGraph.getNodesWithNoPredecessor (startNodes) ;
//--- Add a dummy start node for handling case where there several start nodes
  const uint32_t dummyNodeIndex = mDirectedGraph.unusedNodeIndex () ;
//--- Add edges from dummy node to start nodes
  for (int32_t i=0 ; i<startNodes.count () ; i++) {
    mDirectedGraph.addEdge (dummyNodeIndex, startNodes (i COMMA_HERE)) ;
  }
//--- Remove edge to dominator
  mDirectedGraph.removeEdgesToDominator (THERE) ;
//--- Remove dummy node
  mDirectedGraph.removeNode (dummyNodeIndex) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_entityStrongReferenceGraph result ;
  result.makeNewEmptyGraph (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::setter_addNode (GGS_lstring inKey,
                                                     GGS_string inElement,
                                                     Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) {
  const char * kErrorMessage = "the '%K' entity is already declared at %L" ;
  internalAddNode (inKey, kErrorMessage, inElement, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_topologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                             GGS__5B_lstring_5D_ & outSortedKeyList,
                                                             GGS__5B_string_5D_ & outUnsortedList,
                                                             GGS__5B_lstring_5D_ & outUnsortedKeyList,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ sortedList ;
  GGS__5B_string_5D_ unsortedList ;
  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS__5B_string_5D_ (sortedList) ;
  outUnsortedList = GGS__5B_string_5D_ (unsortedList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_depthFirstTopologicalSort (GGS__5B_string_5D_ & outSortedList,
                                                                       GGS__5B_lstring_5D_ & outSortedKeyList,
                                                                       GGS__5B_string_5D_ & outUnsortedList,
                                                                       GGS__5B_lstring_5D_ & outUnsortedKeyList,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ sortedList ;
  GGS__5B_string_5D_ unsortedList ;
  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;
  outSortedList = GGS__5B_string_5D_ (sortedList) ;
  outUnsortedList = GGS__5B_string_5D_ (unsortedList) ;
}


//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_reversedGraph (LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  result.reversedGraphFromGraph (*this COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_circularities (GGS__5B_string_5D_ & outInfoList,
                                                           GGS__5B_lstring_5D_ & outKeyList
                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ infoList ;
  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_string_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoSuccessor (GGS__5B_string_5D_ & outInfoList,
                                                                  GGS__5B_lstring_5D_ & outKeyList
                                                                  COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ infoList ;
  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_string_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_entityStrongReferenceGraph::method_nodesWithNoPredecessor (GGS__5B_string_5D_ & outInfoList,
                                                                    GGS__5B_lstring_5D_ & outKeyList
                                                                    COMMA_LOCATION_ARGS) const {
  GGS__5B_string_5D_ infoList ;
  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;
  outInfoList = GGS__5B_string_5D_ (infoList) ;
}

//--------------------------------------------------------------------------------------------------

GGS_entityStrongReferenceGraph GGS_entityStrongReferenceGraph::getter_subgraphFromNodes (const GGS__5B_lstring_5D_ & inStartKeyList,
                                                                                         const GGS_stringset & inKeysToExclude,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_entityStrongReferenceGraph result ;
  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_string_5D_ GGS_entityStrongReferenceGraph::getter_nodeList (UNUSED_LOCATION_ARGS) const {
  GGS__5B_string_5D_ resultingList ;
  if (isValid ()) {
    resultingList = graph () ;
  }
  return resultingList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_lstring_5D_ GGS_entityStrongReferenceGraph::getter_accessibleNodesFrom (const GGS__5B_lstring_5D_ & inStartKeyList,
                                                                                const GGS_stringset & inNodesToExclude,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  GGS_entityStrongReferenceGraph resultingGraph ;
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
//     @entityStrongReferenceGraph generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_entityStrongReferenceGraph ("entityStrongReferenceGraph",
                                                                               nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_entityStrongReferenceGraph::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_entityStrongReferenceGraph ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_outletClassBindingSpecificationModel_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_::GGS__5B_outletClassBindingSpecificationModel_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_::GGS__5B_outletClassBindingSpecificationModel_5D_ (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_ & GGS__5B_outletClassBindingSpecificationModel_5D_::operator = (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_ GGS__5B_outletClassBindingSpecificationModel_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_outletClassBindingSpecificationModel_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::plusPlusAssignOperation (const GGS_outletClassBindingSpecificationModel & inValue
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_outletClassBindingSpecificationModel_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_ GGS__5B_outletClassBindingSpecificationModel_5D_::add_operation (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecificationModel_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::description (String & ioString,
                                                                    const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@outletClassBindingSpecificationModel], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::plusAssignOperation (const GGS__5B_outletClassBindingSpecificationModel_5D_ inOperand,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_append (const GGS_outletClassBindingSpecificationModel inValue,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_set (const GGS_outletClassBindingSpecificationModel inValue,
                                                                   const GGS_uint inIndex,
                                                                   Compiler * inCompiler
                                                                   COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_insert (const GGS_outletClassBindingSpecificationModel inValue,
                                                                      const GGS_uint inInsertionIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_remove (GGS_outletClassBindingSpecificationModel & outValue,
                                                                      const GGS_uint inRemoveIndex,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_removeFirst (GGS_outletClassBindingSpecificationModel & outValue,
                                                                           Compiler * inCompiler
                                                                           COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletClassBindingSpecificationModel_5D_::setter_removeLast (GGS_outletClassBindingSpecificationModel & outValue,
                                                                          Compiler * inCompiler
                                                                          COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_ GGS__5B_outletClassBindingSpecificationModel_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecificationModel_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_outletClassBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletClassBindingSpecificationModel_5D_ GGS__5B_outletClassBindingSpecificationModel_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                                   const GGS_uint & inLength,
                                                                                                                   Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_outletClassBindingSpecificationModel_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_outletClassBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_outletClassBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel GGS__5B_outletClassBindingSpecificationModel_5D_::getter_first (Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModel result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel GGS__5B_outletClassBindingSpecificationModel_5D_::getter_last (Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModel result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel GGS__5B_outletClassBindingSpecificationModel_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_outletClassBindingSpecificationModel result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_outletClassBindingSpecificationModel_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_outletClassBindingSpecificationModel_5D_::DownEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel DownEnumerator__5B_outletClassBindingSpecificationModel_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel DownEnumerator__5B_outletClassBindingSpecificationModel_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_outletClassBindingSpecificationModel_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_outletClassBindingSpecificationModel_5D_::UpEnumerator__5B_outletClassBindingSpecificationModel_5D_ (const GGS__5B_outletClassBindingSpecificationModel_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel UpEnumerator__5B_outletClassBindingSpecificationModel_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel UpEnumerator__5B_outletClassBindingSpecificationModel_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[outletClassBindingSpecificationModel] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletClassBindingSpecificationModel_5D_ ("[outletClassBindingSpecificationModel]",
                                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_outletClassBindingSpecificationModel_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_outletClassBindingSpecificationModel_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel::GGS_outletClassBindingSpecificationModel (void) :
mProperty_mModelTypeName (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel::GGS_outletClassBindingSpecificationModel (const GGS_outletClassBindingSpecificationModel & inSource) :
mProperty_mModelTypeName (inSource.mProperty_mModelTypeName),
mProperty_mModelShouldBeWritableProperty (inSource.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel & GGS_outletClassBindingSpecificationModel::operator = (const GGS_outletClassBindingSpecificationModel & inSource) {
  mProperty_mModelTypeName = inSource.mProperty_mModelTypeName ;
  mProperty_mModelShouldBeWritableProperty = inSource.mProperty_mModelShouldBeWritableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel GGS_outletClassBindingSpecificationModel::init_21__21_ (const GGS_lstring & in_mModelTypeName,
                                                                                                 const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletClassBindingSpecificationModel result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelTypeName = in_mModelTypeName ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModel::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletClassBindingSpecificationModel::GGS_outletClassBindingSpecificationModel (const GGS_lstring & inOperand0,
                                                                                    const GGS_bool & inOperand1) :
mProperty_mModelTypeName (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletClassBindingSpecificationModel::isValid (void) const {
  return mProperty_mModelTypeName.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModel::drop (void) {
  mProperty_mModelTypeName.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletClassBindingSpecificationModel::description (String & ioString,
                                                            const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletClassBindingSpecificationModel:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mModelTypeName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mModelShouldBeWritableProperty.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @outletClassBindingSpecificationModel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletClassBindingSpecificationModel ("outletClassBindingSpecificationModel",
                                                                                         nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletClassBindingSpecificationModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletClassBindingSpecificationModel ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_controllerBindingOption_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_::GGS__5B_controllerBindingOption_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_::GGS__5B_controllerBindingOption_5D_ (const GGS__5B_controllerBindingOption_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_ & GGS__5B_controllerBindingOption_5D_::operator = (const GGS__5B_controllerBindingOption_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_ GGS__5B_controllerBindingOption_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_controllerBindingOption_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::plusPlusAssignOperation (const GGS_controllerBindingOption & inValue
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_controllerBindingOption_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_ GGS__5B_controllerBindingOption_5D_::add_operation (const GGS__5B_controllerBindingOption_5D_ & inOperand,
                                                                                        Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOption_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::description (String & ioString,
                                                       const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@controllerBindingOption], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::plusAssignOperation (const GGS__5B_controllerBindingOption_5D_ inOperand,
                                                               Compiler * /* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_append (const GGS_controllerBindingOption inValue,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_set (const GGS_controllerBindingOption inValue,
                                                      const GGS_uint inIndex,
                                                      Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_insert (const GGS_controllerBindingOption inValue,
                                                         const GGS_uint inInsertionIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_remove (GGS_controllerBindingOption & outValue,
                                                         const GGS_uint inRemoveIndex,
                                                         Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_removeFirst (GGS_controllerBindingOption & outValue,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOption_5D_::setter_removeLast (GGS_controllerBindingOption & outValue,
                                                             Compiler * inCompiler
                                                             COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_ GGS__5B_controllerBindingOption_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOption_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_controllerBindingOption_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOption_5D_ GGS__5B_controllerBindingOption_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                         const GGS_uint & inLength,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOption_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_controllerBindingOption_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_controllerBindingOption_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption GGS__5B_controllerBindingOption_5D_::getter_first (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOption result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption GGS__5B_controllerBindingOption_5D_::getter_last (Compiler * inCompiler
                                                                              COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOption result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption GGS__5B_controllerBindingOption_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOption result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_controllerBindingOption_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_controllerBindingOption_5D_::DownEnumerator__5B_controllerBindingOption_5D_ (const GGS__5B_controllerBindingOption_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption DownEnumerator__5B_controllerBindingOption_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption DownEnumerator__5B_controllerBindingOption_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_controllerBindingOption_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_controllerBindingOption_5D_::UpEnumerator__5B_controllerBindingOption_5D_ (const GGS__5B_controllerBindingOption_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption UpEnumerator__5B_controllerBindingOption_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption UpEnumerator__5B_controllerBindingOption_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[controllerBindingOption] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_controllerBindingOption_5D_ ("[controllerBindingOption]",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_controllerBindingOption_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_controllerBindingOption_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption::GGS_controllerBindingOption (void) :
mProperty_mOptionName (),
mProperty_mOptionTypeName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption::GGS_controllerBindingOption (const GGS_controllerBindingOption & inSource) :
mProperty_mOptionName (inSource.mProperty_mOptionName),
mProperty_mOptionTypeName (inSource.mProperty_mOptionTypeName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption & GGS_controllerBindingOption::operator = (const GGS_controllerBindingOption & inSource) {
  mProperty_mOptionName = inSource.mProperty_mOptionName ;
  mProperty_mOptionTypeName = inSource.mProperty_mOptionTypeName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controllerBindingOption GGS_controllerBindingOption::init_21__21_ (const GGS_lstring & in_mOptionName,
                                                                       const GGS_lstring & in_mOptionTypeName,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOption result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionName = in_mOptionName ;
  result.mProperty_mOptionTypeName = in_mOptionTypeName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOption::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOption::GGS_controllerBindingOption (const GGS_lstring & inOperand0,
                                                          const GGS_lstring & inOperand1) :
mProperty_mOptionName (inOperand0),
mProperty_mOptionTypeName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_controllerBindingOption::isValid (void) const {
  return mProperty_mOptionName.isValid () && mProperty_mOptionTypeName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOption::drop (void) {
  mProperty_mOptionName.drop () ;
  mProperty_mOptionTypeName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOption::description (String & ioString,
                                               const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controllerBindingOption:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionTypeName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controllerBindingOption generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOption ("controllerBindingOption",
                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOption::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOption ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::GGS_autoLayoutViewBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::~ GGS_autoLayoutViewBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap::GGS_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap & GGS_autoLayoutViewBindingSpecificationMap::operator = (const GGS_autoLayoutViewBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewBindingSpecificationMap::getter_contains (const GGS_string & inKey
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_autoLayoutViewBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                          const GGS_uint & inLevel
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_autoLayoutViewBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_autoLayoutViewBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                               Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_autoLayoutViewBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_autoLayoutViewBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::performInsert (const GGS_autoLayoutViewBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>
GGS_autoLayoutViewBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_autoLayoutViewBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>
GGS_autoLayoutViewBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_autoLayoutViewBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ GGS_autoLayoutViewBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_autoLayoutViewBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_autoLayoutViewBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = info->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = info->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_autoLayoutViewBindingSpecificationMap & inMapToOverride
                                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap GGS_autoLayoutViewBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_autoLayoutViewBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                                  GGS__5B_outletBindingSpecificationModel_5D_ inArgument0,
                                                                  GGS__5B_controllerBindingOptionDecorated_5D_ inArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  const GGS_autoLayoutViewBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                                  GGS__5B_outletBindingSpecificationModel_5D_ & outArgument0,
                                                                  GGS__5B_controllerBindingOptionDecorated_5D_ & outArgument1,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = info->mProperty_mControllerBindingOptionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS_autoLayoutViewBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                                          Compiler * inCompiler
                                                                                                                                          COMMA_LOCATION_ARGS) const {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletBindingSpecificationModelList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS_autoLayoutViewBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                                   Compiler * inCompiler
                                                                                                                                   COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControllerBindingOptionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS__5B_outletBindingSpecificationModel_5D_ inValue,
                                                                                                      GGS_string inKey,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletBindingSpecificationModelList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS__5B_controllerBindingOptionDecorated_5D_ inValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControllerBindingOptionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_autoLayoutViewBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletBindingSpecificationModelList:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControllerBindingOptionList:") ;
    inArray (i COMMA_HERE)->mProperty_mControllerBindingOptionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_autoLayoutViewBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @autoLayoutViewBindingSpecificationMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_autoLayoutViewBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_autoLayoutViewBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_autoLayoutViewBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_autoLayoutViewBindingSpecificationMap::DownEnumerator_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element DownEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ DownEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ DownEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @autoLayoutViewBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_autoLayoutViewBindingSpecificationMap::UpEnumerator_autoLayoutViewBindingSpecificationMap (const GGS_autoLayoutViewBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_autoLayoutViewBindingSpecificationMap_2E_element UpEnumerator_autoLayoutViewBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_autoLayoutViewBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ UpEnumerator_autoLayoutViewBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ UpEnumerator_autoLayoutViewBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @autoLayoutViewBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ("autoLayoutViewBindingSpecificationMap",
                                                                                          nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_autoLayoutViewBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_autoLayoutViewBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_outletBindingSpecificationModel_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_::GGS__5B_outletBindingSpecificationModel_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_::GGS__5B_outletBindingSpecificationModel_5D_ (const GGS__5B_outletBindingSpecificationModel_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ & GGS__5B_outletBindingSpecificationModel_5D_::operator = (const GGS__5B_outletBindingSpecificationModel_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS__5B_outletBindingSpecificationModel_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::plusPlusAssignOperation (const GGS_outletBindingSpecificationModel & inValue
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_outletBindingSpecificationModel_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS__5B_outletBindingSpecificationModel_5D_::add_operation (const GGS__5B_outletBindingSpecificationModel_5D_ & inOperand,
                                                                                                        Compiler * /* inCompiler */
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::description (String & ioString,
                                                               const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@outletBindingSpecificationModel], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::plusAssignOperation (const GGS__5B_outletBindingSpecificationModel_5D_ inOperand,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_append (const GGS_outletBindingSpecificationModel inValue,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_set (const GGS_outletBindingSpecificationModel inValue,
                                                              const GGS_uint inIndex,
                                                              Compiler * inCompiler
                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_insert (const GGS_outletBindingSpecificationModel inValue,
                                                                 const GGS_uint inInsertionIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_remove (GGS_outletBindingSpecificationModel & outValue,
                                                                 const GGS_uint inRemoveIndex,
                                                                 Compiler * inCompiler
                                                                 COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_removeFirst (GGS_outletBindingSpecificationModel & outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_outletBindingSpecificationModel_5D_::setter_removeLast (GGS_outletBindingSpecificationModel & outValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS__5B_outletBindingSpecificationModel_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_LOCATION_ARGS) const {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_outletBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS__5B_outletBindingSpecificationModel_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                         const GGS_uint & inLength,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) const {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_outletBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_outletBindingSpecificationModel_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel GGS__5B_outletBindingSpecificationModel_5D_::getter_first (Compiler * inCompiler
                                                                                               COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModel result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel GGS__5B_outletBindingSpecificationModel_5D_::getter_last (Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModel result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel GGS__5B_outletBindingSpecificationModel_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationModel result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_outletBindingSpecificationModel_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_outletBindingSpecificationModel_5D_::DownEnumerator__5B_outletBindingSpecificationModel_5D_ (const GGS__5B_outletBindingSpecificationModel_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel DownEnumerator__5B_outletBindingSpecificationModel_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel DownEnumerator__5B_outletBindingSpecificationModel_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_outletBindingSpecificationModel_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_outletBindingSpecificationModel_5D_::UpEnumerator__5B_outletBindingSpecificationModel_5D_ (const GGS__5B_outletBindingSpecificationModel_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel UpEnumerator__5B_outletBindingSpecificationModel_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel UpEnumerator__5B_outletBindingSpecificationModel_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[outletBindingSpecificationModel] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_outletBindingSpecificationModel_5D_ ("[outletBindingSpecificationModel]",
                                                                                            nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_outletBindingSpecificationModel_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_outletBindingSpecificationModel_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel::GGS_outletBindingSpecificationModel (void) :
mProperty_mModelType (),
mProperty_mModelShouldBeWritableProperty () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel::GGS_outletBindingSpecificationModel (const GGS_outletBindingSpecificationModel & inSource) :
mProperty_mModelType (inSource.mProperty_mModelType),
mProperty_mModelShouldBeWritableProperty (inSource.mProperty_mModelShouldBeWritableProperty) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel & GGS_outletBindingSpecificationModel::operator = (const GGS_outletBindingSpecificationModel & inSource) {
  mProperty_mModelType = inSource.mProperty_mModelType ;
  mProperty_mModelShouldBeWritableProperty = inSource.mProperty_mModelShouldBeWritableProperty ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_outletBindingSpecificationModel GGS_outletBindingSpecificationModel::init_21__21_ (const GGS_typeKind & in_mModelType,
                                                                                       const GGS_bool & in_mModelShouldBeWritableProperty,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_outletBindingSpecificationModel result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mModelType = in_mModelType ;
  result.mProperty_mModelShouldBeWritableProperty = in_mModelShouldBeWritableProperty ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModel::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationModel::GGS_outletBindingSpecificationModel (const GGS_typeKind & inOperand0,
                                                                          const GGS_bool & inOperand1) :
mProperty_mModelType (inOperand0),
mProperty_mModelShouldBeWritableProperty (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationModel::isValid (void) const {
  return mProperty_mModelType.isValid () && mProperty_mModelShouldBeWritableProperty.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModel::drop (void) {
  mProperty_mModelType.drop () ;
  mProperty_mModelShouldBeWritableProperty.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationModel::description (String & ioString,
                                                       const int32_t inIndentation) const {
  ioString.appendCString ("<struct @outletBindingSpecificationModel:") ;
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
//     @outletBindingSpecificationModel generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationModel ("outletBindingSpecificationModel",
                                                                                    nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationModel::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationModel ;
}

//--------------------------------------------------------------------------------------------------
//Class for element of '@_5B_controllerBindingOptionDecorated_5D_' array
//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_::GGS__5B_controllerBindingOptionDecorated_5D_ (void) :
AC_GALGAS_root (),
mSharedArray (),
mIsValid (false) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_::GGS__5B_controllerBindingOptionDecorated_5D_ (const GGS__5B_controllerBindingOptionDecorated_5D_ & inSource) :
AC_GALGAS_root (),
mSharedArray (inSource.mSharedArray),
mIsValid (inSource.mIsValid) {
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ & GGS__5B_controllerBindingOptionDecorated_5D_::operator = (const GGS__5B_controllerBindingOptionDecorated_5D_ & inSource)  {
  mSharedArray = inSource.mSharedArray ;
  mIsValid = inSource.mIsValid ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS__5B_controllerBindingOptionDecorated_5D_::init (Compiler * COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  result.mIsValid = true ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::drop (void) {
  mSharedArray.removeAll () ;
  mIsValid = false ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::removeAll (void) {
  mSharedArray.removeAll () ;
  mIsValid = true ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::plusPlusAssignOperation (const GGS_controllerBindingOptionDecorated & inValue
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  mSharedArray.appendObject (inValue) ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS__5B_controllerBindingOptionDecorated_5D_::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedArray.count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS__5B_controllerBindingOptionDecorated_5D_::add_operation (const GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand,
                                                                                                          Compiler * /* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  if (isValid () && inOperand.isValid ()) {
    result = *this ;
    result.mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::description (String & ioString,
                                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<array [@controllerBindingOptionDecorated], ") ;
  ioString.appendSigned (mSharedArray.count ()) ;
  ioString.appendCString (" object") ;
  ioString.appendString ((mSharedArray.count () > 1) ? "s" : "") ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::plusAssignOperation (const GGS__5B_controllerBindingOptionDecorated_5D_ inOperand,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid () && inOperand.isValid ()) {
    mSharedArray.appendDataFromPointer (
      inOperand.mSharedArray.unsafeArrayPointer (),
      inOperand.mSharedArray.count ()
    ) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_append (const GGS_controllerBindingOptionDecorated inValue,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  if (isValid ()) {
    mSharedArray.appendObject (inValue) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_removeAll (Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  removeAll () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_set (const GGS_controllerBindingOptionDecorated inValue,
                                                               const GGS_uint inIndex,
                                                               Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) {
  if (isValid () && inIndex.isValid ()) {
    const int32_t idx = int32_t (inIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'set' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray (idx COMMA_THERE) = inValue ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_insert (const GGS_controllerBindingOptionDecorated inValue,
                                                                  const GGS_uint inInsertionIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  if (isValid () && inInsertionIndex.isValid ()) {
    const int32_t idx = int32_t (inInsertionIndex.uintValue ()) ;
    if (idx > mSharedArray.count ()) {
      String errorMessage = "'insert' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      mSharedArray.insertObjectAtIndex (inValue, idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_remove (GGS_controllerBindingOptionDecorated & outValue,
                                                                  const GGS_uint inRemoveIndex,
                                                                  Compiler * inCompiler
                                                                  COMMA_LOCATION_ARGS) {
  outValue.drop () ;
  if (isValid () && inRemoveIndex.isValid ()) {
    const int32_t idx = int32_t (inRemoveIndex.uintValue ()) ;
    if (idx >= mSharedArray.count ()) {
      String errorMessage = "'remove' setter call with index " ;
      errorMessage.appendSigned (idx) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      outValue = mSharedArray (idx COMMA_THERE) ;
      mSharedArray.removeObjectAtIndex (idx COMMA_THERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_removeFirst (GGS_controllerBindingOptionDecorated & outValue,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeFirst' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (0 COMMA_THERE) ;
    mSharedArray.removeObjectAtIndex (0 COMMA_THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS__5B_controllerBindingOptionDecorated_5D_::setter_removeLast (GGS_controllerBindingOptionDecorated & outValue,
                                                                      Compiler * inCompiler
                                                                      COMMA_LOCATION_ARGS) {
  if (!isValid ()) {
    outValue.drop () ;
  }else if (count () == 0) {
    const String errorMessage = "'removeLast' setter call on an empty array" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    outValue.drop () ;
  }else{
    outValue = mSharedArray (mSharedArray.count () - 1 COMMA_THERE) ;
    mSharedArray.removeLastObject (THERE) ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS__5B_controllerBindingOptionDecorated_5D_::getter_removingFirst (const GGS_uint & inIndex,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  if (isValid () && inIndex.isValid ()) {
    const int32_t startIndex = int32_t (inIndex.uintValue ()) ;
    if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'removingFirst' getter call with argument ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = int32_t (count ()) - 1 ;
      result = GGS__5B_controllerBindingOptionDecorated_5D_::init (inCompiler COMMA_THERE) ;
      result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS__5B_controllerBindingOptionDecorated_5D_::getter_sublist (const GGS_uint & inStartIndex,
                                                                                                           const GGS_uint & inLength,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  if (isValid () && inStartIndex.isValid () && inLength.isValid ()) {
    const int32_t startIndex = int32_t (inStartIndex.uintValue ()) ;
    const int32_t length = int32_t (inLength.uintValue ()) ;
    if ((startIndex == 0) && (length == 0) && (count () == 0)) {
      result = GGS__5B_controllerBindingOptionDecorated_5D_::init (inCompiler COMMA_THERE) ;
    }else if (startIndex >= int32_t (count ())) {
      String errorMessage ;
      errorMessage.appendCString ("'sublist' getter call with start index ") ;
      errorMessage.appendSigned (startIndex) ;
      errorMessage.appendCString (" too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }else{
      const int32_t lastIndex = startIndex + length - 1 ;
      if (lastIndex >= int32_t (count ())) {
        String errorMessage ;
        errorMessage.appendCString ("'sublist' getter call with last index ") ;
        errorMessage.appendSigned (lastIndex) ;
        errorMessage.appendCString (" too large (array size is") ;
        errorMessage.appendSigned (mSharedArray.count ()) ;
        errorMessage.appendCString (")") ;
        inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
      }else{
        result = GGS__5B_controllerBindingOptionDecorated_5D_::init (inCompiler COMMA_THERE) ;
        result.mSharedArray = mSharedArray.subList (startIndex, lastIndex) ;
      }
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated GGS__5B_controllerBindingOptionDecorated_5D_::getter_first (Compiler * inCompiler
                                                                                                 COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecorated result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'first' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray (0 COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated GGS__5B_controllerBindingOptionDecorated_5D_::getter_last (Compiler * inCompiler
                                                                                                COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecorated result ;
  if (!isValid ()) {
  }else if (mSharedArray.count () == 0) {
    const String errorMessage = "'last' getter call on an empty array'" ;
    inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
  }else{
    result = mSharedArray.lastObject (THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated GGS__5B_controllerBindingOptionDecorated_5D_::readSubscript__3F_ (const GGS_uint & inIndex,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_LOCATION_ARGS) const {
  GGS_controllerBindingOptionDecorated result ;
  if (isValid () && inIndex.isValid ()) {
    const uint32_t idx = inIndex.uintValue () ;
    if (idx < uint32_t (mSharedArray.count ())) {
      result = mSharedArray (int32_t (idx) COMMA_HERE) ;
    }else{
      String errorMessage ;
      errorMessage.appendCString ("subscript value (") ;
      errorMessage.appendUnsigned (idx) ;
      errorMessage.appendCString (") too large (array size is") ;
      errorMessage.appendSigned (mSharedArray.count ()) ;
      errorMessage.appendCString (")") ;
      inCompiler->onTheFlyRunTimeError (errorMessage COMMA_THERE) ;
    }
  }
  return result ;
}


//--------------------------------------------------------------------------------------------------
// Down Enumerator for @_5B_controllerBindingOptionDecorated_5D_
//--------------------------------------------------------------------------------------------------

DownEnumerator__5B_controllerBindingOptionDecorated_5D_::DownEnumerator__5B_controllerBindingOptionDecorated_5D_ (const GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (inOperand.mSharedArray.count () - 1) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated DownEnumerator__5B_controllerBindingOptionDecorated_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated DownEnumerator__5B_controllerBindingOptionDecorated_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
// Up Enumerator for @_5B_controllerBindingOptionDecorated_5D_
//--------------------------------------------------------------------------------------------------

UpEnumerator__5B_controllerBindingOptionDecorated_5D_::UpEnumerator__5B_controllerBindingOptionDecorated_5D_ (const GGS__5B_controllerBindingOptionDecorated_5D_ & inOperand) :
mSharedArray (inOperand.mSharedArray),
mCurrent (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated UpEnumerator__5B_controllerBindingOptionDecorated_5D_::current (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated UpEnumerator__5B_controllerBindingOptionDecorated_5D_::current_entry (LOCATION_ARGS) const {
  return mSharedArray (mCurrent COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------
//     @[controllerBindingOptionDecorated] generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__5B_controllerBindingOptionDecorated_5D_ ("[controllerBindingOptionDecorated]",
                                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__5B_controllerBindingOptionDecorated_5D_::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__5B_controllerBindingOptionDecorated_5D_ ;
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated::GGS_controllerBindingOptionDecorated (void) :
mProperty_mOptionType (),
mProperty_mOptionName () {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated::GGS_controllerBindingOptionDecorated (const GGS_controllerBindingOptionDecorated & inSource) :
mProperty_mOptionType (inSource.mProperty_mOptionType),
mProperty_mOptionName (inSource.mProperty_mOptionName) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated & GGS_controllerBindingOptionDecorated::operator = (const GGS_controllerBindingOptionDecorated & inSource) {
  mProperty_mOptionType = inSource.mProperty_mOptionType ;
  mProperty_mOptionName = inSource.mProperty_mOptionName ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS_controllerBindingOptionDecorated GGS_controllerBindingOptionDecorated::init_21__21_ (const GGS_typeKind & in_mOptionType,
                                                                                         const GGS_lstring & in_mOptionName,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_controllerBindingOptionDecorated result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mOptionType = in_mOptionType ;
  result.mProperty_mOptionName = in_mOptionName ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecorated::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS_controllerBindingOptionDecorated::GGS_controllerBindingOptionDecorated (const GGS_typeKind & inOperand0,
                                                                            const GGS_lstring & inOperand1) :
mProperty_mOptionType (inOperand0),
mProperty_mOptionName (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS_controllerBindingOptionDecorated::isValid (void) const {
  return mProperty_mOptionType.isValid () && mProperty_mOptionName.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecorated::drop (void) {
  mProperty_mOptionType.drop () ;
  mProperty_mOptionName.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_controllerBindingOptionDecorated::description (String & ioString,
                                                        const int32_t inIndentation) const {
  ioString.appendCString ("<struct @controllerBindingOptionDecorated:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mOptionType.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mOptionName.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @controllerBindingOptionDecorated generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_controllerBindingOptionDecorated ("controllerBindingOptionDecorated",
                                                                                     nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_controllerBindingOptionDecorated::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_controllerBindingOptionDecorated ;
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstring::GGS__32_lstring (void) :
mProperty_mValue_30_ (),
mProperty_mValue_31_ () {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstring::GGS__32_lstring (const GGS__32_lstring & inSource) :
mProperty_mValue_30_ (inSource.mProperty_mValue_30_),
mProperty_mValue_31_ (inSource.mProperty_mValue_31_) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstring & GGS__32_lstring::operator = (const GGS__32_lstring & inSource) {
  mProperty_mValue_30_ = inSource.mProperty_mValue_30_ ;
  mProperty_mValue_31_ = inSource.mProperty_mValue_31_ ;
  return *this ;
}

//---Synthetized initializer -----------------------------------------------------------------------

GGS__32_lstring GGS__32_lstring::init_21__21_ (const GGS_lstring & in_mValue_30_,
                                               const GGS_lstring & in_mValue_31_,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS__32_lstring result ;
  result.setInitializedProperties (inCompiler) ;
  result.mProperty_mValue_30_ = in_mValue_30_ ;
  result.mProperty_mValue_31_ = in_mValue_31_ ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstring::setInitializedProperties (Compiler * /* inCompiler */) {
}

//--------------------------------------------------------------------------------------------------

GGS__32_lstring::GGS__32_lstring (const GGS_lstring & inOperand0,
                                  const GGS_lstring & inOperand1) :
mProperty_mValue_30_ (inOperand0),
mProperty_mValue_31_ (inOperand1) {
}

//--------------------------------------------------------------------------------------------------

bool GGS__32_lstring::isValid (void) const {
  return mProperty_mValue_30_.isValid () && mProperty_mValue_31_.isValid () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstring::drop (void) {
  mProperty_mValue_30_.drop () ;
  mProperty_mValue_31_.drop () ;
}

//--------------------------------------------------------------------------------------------------

void GGS__32_lstring::description (String & ioString,
                                   const int32_t inIndentation) const {
  ioString.appendCString ("<struct @2lstring:") ;
  if (! isValid ()) {
    ioString.appendCString (" not built") ;
  }else{
    mProperty_mValue_30_.description (ioString, inIndentation+1) ;
    ioString.appendCString (", ") ;
    mProperty_mValue_31_.description (ioString, inIndentation+1) ;
  }
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------
//     @2lstring generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS__32_lstring ("2lstring",
                                                                nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS__32_lstring::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS__32_lstring ;
}

//--------------------------------------------------------------------------------------------------
//  Map type @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

#include "GALGAS_GenericMapRoot.h"

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (void) :
mSharedRoot () {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::~ GGS_outletBindingSpecificationMap (void) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap::GGS_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inSource) :
mSharedRoot (inSource.mSharedRoot) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap & GGS_outletBindingSpecificationMap::operator = (const GGS_outletBindingSpecificationMap & inSource) {
  mSharedRoot = inSource.mSharedRoot ;
  return * this ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::init (Compiler * COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  result.build (THERE) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_contains (const GGS_string & inKey
                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), 0)) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_outletBindingSpecificationMap::getter_hasKeyAtLevel (const GGS_string & inKey,
                                                                  const GGS_uint & inLevel
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ;
  if (isValid () && inKey.isValid ()) {
    result = GGS_bool (mSharedRoot->hasKey (inKey.stringValue (), inLevel.uintValue ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_count (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (uint32_t (mSharedRoot->count ())) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_uint GGS_outletBindingSpecificationMap::getter_levels (UNUSED_LOCATION_ARGS) const {
  GGS_uint result ;
  if (isValid ()) {
    result = GGS_uint (mSharedRoot->levels ()) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_location GGS_outletBindingSpecificationMap::getter_locationForKey (const GGS_string & inKey,
                                                                       Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS_location result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
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

GGS__5B_lstring_5D_ GGS_outletBindingSpecificationMap::getter_keyList (Compiler * inCompiler
                                                                       COMMA_LOCATION_ARGS) const {
  GGS__5B_lstring_5D_ result ;
  if (isValid ()) {
    result = GGS__5B_lstring_5D_::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeyList (result) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

bool GGS_outletBindingSpecificationMap::isValid (void) const {
  return mSharedRoot.isNotNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::drop (void)  {
  mSharedRoot.setToNil () ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::build (LOCATION_ARGS) {
  mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::performInsert (const GGS_outletBindingSpecificationMap_2E_element & inElement,
                                 const char * inInsertErrorMessage,
                                 const char * inShadowErrorMessage,
                                 Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) {
  if (isValid () && inElement.mProperty_lkey.isValid ()) {
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> existingNode ;
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

const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>
GGS_outletBindingSpecificationMap::infoForKey (const String & inKey) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->infoForKey (inKey) ;
  }else{
    return SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> () ;
  }
}

//--------------------------------------------------------------------------------------------------

int32_t GGS_outletBindingSpecificationMap::count (void) const  {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->count () ;
  }else{
    return 0 ;
  }
}

//--------------------------------------------------------------------------------------------------

GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>>
GGS_outletBindingSpecificationMap::sortedInfoArray (void) const {
  if (mSharedRoot.isNotNil ()) {
    return mSharedRoot->sortedInfoArray () ;
  }else{
    return GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> () ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_stringset GGS_outletBindingSpecificationMap::getter_keySet (Compiler * inCompiler
                                                       COMMA_LOCATION_ARGS) const {
  GGS_stringset result ;
  if (isValid ()) {
    result = GGS_stringset::init (inCompiler COMMA_THERE) ;
    mSharedRoot->populateKeySet (result, inCompiler) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::findNearestKey (const String & inKey,
                                  GenericUniqueArray <String> & outNearestKeyArray) const {
  mSharedRoot->findNearestKey (inKey, outNearestKeyArray) ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element_3F_ GGS_outletBindingSpecificationMap
::readSubscript__3F_ (const class GGS_string & inKey,
                      Compiler * /* inCompiler */
                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap_2E_element_3F_ result ;
  if (isValid () && inKey.isValid ()) {
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (inKey.stringValue ()) ;
    if (info.isNil ()) {
      result = GGS_outletBindingSpecificationMap_2E_element_3F_::init_nil () ;
    }else{
      GGS_outletBindingSpecificationMap_2E_element element ;
      element.mProperty_lkey = info->mProperty_lkey ;
      element.mProperty_mOutletBindingSpecificationModelList = info->mProperty_mOutletBindingSpecificationModelList ;
      element.mProperty_mControllerBindingOptionList = info->mProperty_mControllerBindingOptionList ;
      result = element ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::class_func_mapWithMapToOverride (const GGS_outletBindingSpecificationMap & inMapToOverride
                                                                                                      COMMA_LOCATION_ARGS) {
  GGS_outletBindingSpecificationMap result ;
  if (inMapToOverride.isValid ()) {
    result.mSharedRoot = OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>>::make (inMapToOverride.mSharedRoot COMMA_THERE) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap GGS_outletBindingSpecificationMap::getter_overriddenMap (Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) const {
  GGS_outletBindingSpecificationMap result ;
  if (isValid ()) {
    result.mSharedRoot = mSharedRoot->overriddenRoot () ;
    if (result.mSharedRoot.isNil ()) {
      inCompiler->onTheFlySemanticError ("getter 'overriddenMap': no overriden map" COMMA_THERE) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_insertKey (GGS_lstring inLKey,
                                                          GGS__5B_outletBindingSpecificationModel_5D_ inArgument0,
                                                          GGS__5B_controllerBindingOptionDecorated_5D_ inArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) {
  const GGS_outletBindingSpecificationMap_2E_element element (inLKey, inArgument0, inArgument1) ;
  const char * kInsertErrorMessage = "the '%K' binding is already declared in %L" ;
  const char * kShadowErrorMessage = nullptr ;
  performInsert (element, kInsertErrorMessage, kShadowErrorMessage, inCompiler COMMA_THERE) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::method_searchKey (GGS_lstring inLKey,
                                                          GGS__5B_outletBindingSpecificationModel_5D_ & outArgument0,
                                                          GGS__5B_controllerBindingOptionDecorated_5D_ & outArgument1,
                                                          Compiler * inCompiler
                                                          COMMA_LOCATION_ARGS) const {
  SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info ;
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
    outArgument0 = info->mProperty_mOutletBindingSpecificationModelList ;
    outArgument1 = info->mProperty_mControllerBindingOptionList ;
  }
}
//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ GGS_outletBindingSpecificationMap::getter_mOutletBindingSpecificationModelListForKey (const GGS_string & inKey,
                                                                                                                                  Compiler * inCompiler
                                                                                                                                  COMMA_LOCATION_ARGS) const {
  GGS__5B_outletBindingSpecificationModel_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mOutletBindingSpecificationModelList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ GGS_outletBindingSpecificationMap::getter_mControllerBindingOptionListForKey (const GGS_string & inKey,
                                                                                                                           Compiler * inCompiler
                                                                                                                           COMMA_LOCATION_ARGS) const {
  GGS__5B_controllerBindingOptionDecorated_5D_ result ;
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    const SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element> info = infoForKey (key) ;
    if (info.isNil ()) {
      String message = "cannot read property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      result = info->mProperty_mControllerBindingOptionList ;
    }
  }
  return result ;
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMOutletBindingSpecificationModelListForKey (GGS__5B_outletBindingSpecificationModel_5D_ inValue,
                                                                                              GGS_string inKey,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mOutletBindingSpecificationModelList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::setter_setMControllerBindingOptionListForKey (GGS__5B_controllerBindingOptionDecorated_5D_ inValue,
                                                                                      GGS_string inKey,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_LOCATION_ARGS) {
  if (isValid () && inKey.isValid ()) {
    const String key = inKey.stringValue () ;
    mSharedRoot.insulate (HERE) ;
    OptionalSharedRef <GenericMapNode <GGS_outletBindingSpecificationMap_2E_element>> node = mSharedRoot->searchNode (key) ;
    if (node.isNil ()) {
      String message = "cannot write property in map: the '" ;
      message.appendString (key) ;
      message.appendCString ("' key does not exist") ;
      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;
    }else{
      node->mSharedInfo->mProperty_mControllerBindingOptionList = inValue ;
    }
  }
}
//--------------------------------------------------------------------------------------------------

static void GGS_outletBindingSpecificationMap_internalDescription (const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> & inArray,
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
    ioString.appendString ("mOutletBindingSpecificationModelList:") ;
    inArray (i COMMA_HERE)->mProperty_mOutletBindingSpecificationModelList.description (ioString, inIndentation + 1) ;
    ioString.appendNewLine () ;
    ioString.appendStringMultiple ("| ", inIndentation + 2) ;
    ioString.appendString ("mControllerBindingOptionList:") ;
    inArray (i COMMA_HERE)->mProperty_mControllerBindingOptionList.description (ioString, inIndentation + 1) ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_outletBindingSpecificationMap::description (String & ioString,
                                          const int32_t inIndentation) const {
  ioString.appendCString ("<map @outletBindingSpecificationMap") ;
  if (isValid ()) {
    const GenericArray <SharedGenericPtrWithValueSemantics <GGS_outletBindingSpecificationMap_2E_element>> array = sortedInfoArray () ;
    GGS_outletBindingSpecificationMap_internalDescription (array, ioString, inIndentation) ;
    OptionalSharedRef <GenericMapRoot <GGS_outletBindingSpecificationMap_2E_element>> subRoot = mSharedRoot->overriddenRoot () ;
    uint32_t idx = 0 ;
    while (subRoot.isNotNil ()) {
     idx += 1 ;
     ioString.appendNewLine () ;
     ioString.appendStringMultiple ("| ", inIndentation + 1) ;
     ioString.appendString (" override #") ;
     ioString.appendUnsigned (idx) ;
     const auto subRootArray = subRoot->sortedInfoArray () ;
     GGS_outletBindingSpecificationMap_internalDescription (subRootArray, ioString, inIndentation) ;
     subRoot = subRoot->overriddenRoot () ;
    }
  }else{
    ioString.appendCString (" not built") ;
  }
  ioString.appendCString (">") ;
}



//--------------------------------------------------------------------------------------------------
//  Down Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

DownEnumerator_outletBindingSpecificationMap::DownEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
  mIndex = mInfoArray.count () - 1 ;
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element DownEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring DownEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ DownEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ DownEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}

//--------------------------------------------------------------------------------------------------
//  Up Enumerator for @outletBindingSpecificationMap
//--------------------------------------------------------------------------------------------------

UpEnumerator_outletBindingSpecificationMap::UpEnumerator_outletBindingSpecificationMap (const GGS_outletBindingSpecificationMap & inMap) :
mInfoArray (inMap.sortedInfoArray ()),
mIndex (0) {
}

//--------------------------------------------------------------------------------------------------

GGS_outletBindingSpecificationMap_2E_element UpEnumerator_outletBindingSpecificationMap::current (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE).value () ;
}

//--------------------------------------------------------------------------------------------------

GGS_lstring UpEnumerator_outletBindingSpecificationMap::current_lkey (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_lkey ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_outletBindingSpecificationModel_5D_ UpEnumerator_outletBindingSpecificationMap::current_mOutletBindingSpecificationModelList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mOutletBindingSpecificationModelList ;
}

//--------------------------------------------------------------------------------------------------

GGS__5B_controllerBindingOptionDecorated_5D_ UpEnumerator_outletBindingSpecificationMap::current_mControllerBindingOptionList (LOCATION_ARGS) const {
  return mInfoArray (mIndex COMMA_THERE)->mProperty_mControllerBindingOptionList ;
}


//--------------------------------------------------------------------------------------------------
//     @outletBindingSpecificationMap generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_outletBindingSpecificationMap ("outletBindingSpecificationMap",
                                                                                  nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_outletBindingSpecificationMap::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_outletBindingSpecificationMap ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerBoundModelAST
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST::GGS_arrayControllerBoundModelAST (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_rootToManyRelationship (const GGS_lstring & inAssociatedValue0
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_rootToManyRelationship ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST GGS_arrayControllerBoundModelAST::class_func_selfToManyRelationship (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerBoundModelAST result ;
  result.mEnum = Enumeration::enum_selfToManyRelationship ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::method_extractRootToManyRelationship (GGS_lstring & outAssociatedValue_rootEntityName,
                                                                             Compiler * inCompiler
                                                                             COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_rootToManyRelationship) {
    outAssociatedValue_rootEntityName.drop () ;
    String s ;
    s.appendCString ("proc @arrayControllerBoundModelAST.rootToManyRelationship invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_rootEntityName = ptr->mProperty_rootEntityName ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ GGS_arrayControllerBoundModelAST::getter_getRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship_3F_ result ;
  if (mEnum == Enumeration::enum_rootToManyRelationship) {
    const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::getAssociatedValuesFor_rootToManyRelationship (GGS_lstring & out_rootEntityName) const {
  const auto ptr = (const GGS_arrayControllerBoundModelAST_2E_rootToManyRelationship *) mAssociatedValues.associatedValuesPointer () ;
  out_rootEntityName = ptr->mProperty_rootEntityName ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerBoundModelAST [3] = {
  "(not built)",
  "rootToManyRelationship",
  "selfToManyRelationship"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isRootToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_rootToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerBoundModelAST::getter_isSelfToManyRelationship (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_selfToManyRelationship == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerBoundModelAST::description (String & ioString,
                                                    const int32_t inIndentation) const {
  ioString.appendCString ("<enum @arrayControllerBoundModelAST: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerBoundModelAST [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @arrayControllerBoundModelAST generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ("arrayControllerBoundModelAST",
                                                                                 nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerBoundModelAST::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerBoundModelAST ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerDeclarationAST_2E_weak::objectCompare (const GGS_arrayControllerDeclarationAST_2E_weak & inOperand) const {
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

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (void) :
GGS_abstractDeclarationAST_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak & GGS_arrayControllerDeclarationAST_2E_weak::operator = (const GGS_arrayControllerDeclarationAST & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak::GGS_arrayControllerDeclarationAST_2E_weak (const GGS_arrayControllerDeclarationAST & inSource) :
GGS_abstractDeclarationAST_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST_2E_weak GGS_arrayControllerDeclarationAST_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerDeclarationAST_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerDeclarationAST result ;
  if (isValid ()) {
    const cPtr_arrayControllerDeclarationAST * p = (cPtr_arrayControllerDeclarationAST *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerDeclarationAST (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerDeclarationAST GGS_arrayControllerDeclarationAST_2E_weak::bang_arrayControllerDeclarationAST_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerDeclarationAST result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerDeclarationAST) ;
      result = GGS_arrayControllerDeclarationAST ((cPtr_arrayControllerDeclarationAST *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerDeclarationAST.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ("arrayControllerDeclarationAST.weak",
                                                                                          & kTypeDescriptor_GALGAS_abstractDeclarationAST_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerDeclarationAST_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerDeclarationAST_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Enum multipleBindingDescriptor
//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor::GGS_multipleBindingDescriptor (void) :
mAssociatedValues (),
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_multipleBindingDescriptor::class_func_noBinding (UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor result ;
  result.mEnum = Enumeration::enum_noBinding ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor GGS_multipleBindingDescriptor::class_func_binding (const GGS_abstractBooleanMultipleBindingExpressionAST & inAssociatedValue0
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_multipleBindingDescriptor result ;
  result.mEnum = Enumeration::enum_binding ;
  AC_GALGAS_root * p = nullptr ;
  macroMyNew (p, GGS_multipleBindingDescriptor_2E_binding (inAssociatedValue0)) ;
  EnumerationAssociatedValues * eav = nullptr ;
  macroMyNew (eav, EnumerationAssociatedValues (p COMMA_HERE)) ;
  result.mAssociatedValues.assignPointer (eav) ; // Ownership is transfered to mAssociatedValues
  macroDetachSharedObject (eav) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::method_extractBinding (GGS_abstractBooleanMultipleBindingExpressionAST & outAssociatedValue_expression,
                                                           Compiler * inCompiler
                                                           COMMA_LOCATION_ARGS) const {
  if (mEnum != Enumeration::enum_binding) {
    outAssociatedValue_expression.drop () ;
    String s ;
    s.appendCString ("proc @multipleBindingDescriptor.binding invoked with an invalid enum value") ;
    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;
  }else{
    const auto ptr = (GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    outAssociatedValue_expression = ptr->mProperty_expression ;
  }
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

GGS_multipleBindingDescriptor_2E_binding_3F_ GGS_multipleBindingDescriptor::getter_getBinding (UNUSED_LOCATION_ARGS) const {
  GGS_multipleBindingDescriptor_2E_binding_3F_ result ;
  if (mEnum == Enumeration::enum_binding) {
    const auto ptr = (const GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
    result = GGS_multipleBindingDescriptor_2E_binding (*ptr) ;
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::getAssociatedValuesFor_binding (GGS_abstractBooleanMultipleBindingExpressionAST & out_expression) const {
  const auto ptr = (const GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
  out_expression = ptr->mProperty_expression ;
}

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_multipleBindingDescriptor [3] = {
  "(not built)",
  "noBinding",
  "binding"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingDescriptor::getter_isNoBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_noBinding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_multipleBindingDescriptor::getter_isBinding (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_binding == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_multipleBindingDescriptor::description (String & ioString,
                                                 const int32_t inIndentation) const {
  ioString.appendCString ("<enum @multipleBindingDescriptor: ") ;
  ioString.appendCString (gEnumNameArrayFor_multipleBindingDescriptor [size_t (mEnum)]) ;
  mAssociatedValues.description (ioString, inIndentation) ;
  ioString.appendCString (">") ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_multipleBindingDescriptor::objectCompare (const GGS_multipleBindingDescriptor & inOperand) const {
  ComparisonResult result = ComparisonResult::invalid ;
  if (isValid () && inOperand.isValid ()) {
    if (mEnum < inOperand.mEnum) {
      result = ComparisonResult::firstOperandLowerThanSecond ;
    }else if (mEnum > inOperand.mEnum) {
      result = ComparisonResult::firstOperandGreaterThanSecond ;
    }else{
      switch (mEnum) {
      case Enumeration::enum_binding: {
        const auto left = (GGS_multipleBindingDescriptor_2E_binding *) mAssociatedValues.associatedValuesPointer () ;
        const auto right = (GGS_multipleBindingDescriptor_2E_binding *) inOperand.mAssociatedValues.associatedValuesPointer () ;
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
//     @multipleBindingDescriptor generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_multipleBindingDescriptor ("multipleBindingDescriptor",
                                                                              nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_multipleBindingDescriptor::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_multipleBindingDescriptor ;
}

//--------------------------------------------------------------------------------------------------
// @arrayControllerPropertyGeneration reference class
//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration::objectCompare (const GGS_arrayControllerPropertyGeneration & inOperand) const {
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

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (void) :
GGS_propertyGeneration () {
}

//--- Synthetized initializer ----------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration::
init_21__21__21_ (const GGS_string & in_mPropertyName,
                  const GGS_string & in_mModelString,
                  const GGS_string & in_mOwnerName,
                  Compiler * inCompiler
                  COMMA_LOCATION_ARGS) {
  cPtr_arrayControllerPropertyGeneration * object = nullptr ;
  macroMyNew (object, cPtr_arrayControllerPropertyGeneration (inCompiler COMMA_THERE)) ;
  object->arrayControllerPropertyGeneration_init_21__21__21_ (in_mPropertyName, in_mModelString, in_mOwnerName, inCompiler) ;
  const GGS_arrayControllerPropertyGeneration result (object) ;
  macroDetachSharedObject (object) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerPropertyGeneration::
arrayControllerPropertyGeneration_init_21__21__21_ (const GGS_string & in_mPropertyName,
                                                    const GGS_string & in_mModelString,
                                                    const GGS_string & in_mOwnerName,
                                                    Compiler * /* inCompiler */) {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration::GGS_arrayControllerPropertyGeneration (const cPtr_arrayControllerPropertyGeneration * inSourcePtr) :
GGS_propertyGeneration (inSourcePtr) {
  macroNullOrValidSharedObject (inSourcePtr, cPtr_arrayControllerPropertyGeneration) ;
}
//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mModelString (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mModelString ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mModelString (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mModelString = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------

GGS_string GGS_arrayControllerPropertyGeneration::readProperty_mOwnerName (void) const {
  if (nullptr == mObjectPtr) {
    return GGS_string () ;
  }else{
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    return p->mProperty_mOwnerName ;
  }
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerPropertyGeneration::setProperty_mOwnerName (const GGS_string & inValue) {
  if (nullptr != mObjectPtr) {
    cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) mObjectPtr ;
    macroValidSharedObject (p, cPtr_arrayControllerPropertyGeneration) ;
    p->mProperty_mOwnerName = inValue ;
  }
}

//--------------------------------------------------------------------------------------------------
//Pointer class for @arrayControllerPropertyGeneration class
//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (Compiler * inCompiler COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
}

//--------------------------------------------------------------------------------------------------

cPtr_arrayControllerPropertyGeneration::cPtr_arrayControllerPropertyGeneration (const GGS_string & in_mPropertyName,
                                                                                const GGS_string & in_mModelString,
                                                                                const GGS_string & in_mOwnerName,
                                                                                Compiler * inCompiler
                                                                                COMMA_LOCATION_ARGS) :
cPtr_propertyGeneration (in_mPropertyName, inCompiler COMMA_THERE),
mProperty_mModelString (),
mProperty_mOwnerName () {
  mProperty_mPropertyName = in_mPropertyName ;
  mProperty_mModelString = in_mModelString ;
  mProperty_mOwnerName = in_mOwnerName ;
}

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * cPtr_arrayControllerPropertyGeneration::classDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

void cPtr_arrayControllerPropertyGeneration::description (String & ioString,
                                                          const int32_t inIndentation) const {
  ioString.appendCString ("[@arrayControllerPropertyGeneration:") ;
  mProperty_mPropertyName.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mModelString.description (ioString, inIndentation+1) ;
  ioString.appendCString (", ") ;
  mProperty_mOwnerName.description (ioString, inIndentation+1) ;
  ioString.appendCString ("]") ;
}

//--------------------------------------------------------------------------------------------------

AbstractPtrClass * cPtr_arrayControllerPropertyGeneration::duplicate (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  AbstractPtrClass * ptr = nullptr ;
  macroMyNew (ptr, cPtr_arrayControllerPropertyGeneration (mProperty_mPropertyName, mProperty_mModelString, mProperty_mOwnerName, inCompiler COMMA_THERE)) ;
  return ptr ;
}


//--------------------------------------------------------------------------------------------------

#ifndef DO_NOT_GENERATE_CHECKINGS
  void cPtr_arrayControllerPropertyGeneration::printNonNullClassInstanceProperties (void) const {
    cPtr_propertyGeneration::printNonNullClassInstanceProperties () ;
    mProperty_mModelString.printNonNullClassInstanceProperties ("mModelString") ;
    mProperty_mOwnerName.printNonNullClassInstanceProperties ("mOwnerName") ;
  }
#endif

//--------------------------------------------------------------------------------------------------
//     @arrayControllerPropertyGeneration generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ("arrayControllerPropertyGeneration",
                                                                                      & kTypeDescriptor_GALGAS_propertyGeneration) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerPropertyGeneration::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration ;
}

//--------------------------------------------------------------------------------------------------

ComparisonResult GGS_arrayControllerPropertyGeneration_2E_weak::objectCompare (const GGS_arrayControllerPropertyGeneration_2E_weak & inOperand) const {
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

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (void) :
GGS_propertyGeneration_2E_weak () {
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak & GGS_arrayControllerPropertyGeneration_2E_weak::operator = (const GGS_arrayControllerPropertyGeneration & inSource) {
  PtrWeakReferenceProxy * proxyPtr = nullptr ;
  AbstractStrongPtrClass * p = (AbstractStrongPtrClass *) inSource.ptr () ;
  if (p != nullptr) {
    proxyPtr = p->getProxy () ;
  }
  macroAssignSharedObject (mProxyPtr, proxyPtr) ;
  return *this ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak::GGS_arrayControllerPropertyGeneration_2E_weak (const GGS_arrayControllerPropertyGeneration & inSource) :
GGS_propertyGeneration_2E_weak (inSource) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration_2E_weak GGS_arrayControllerPropertyGeneration_2E_weak::class_func_nil (LOCATION_ARGS) {
  GGS_arrayControllerPropertyGeneration_2E_weak result ;
  macroMyNew (result.mProxyPtr, PtrWeakReferenceProxy (THERE)) ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::unwrappedValue (void) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (isValid ()) {
    const cPtr_arrayControllerPropertyGeneration * p = (cPtr_arrayControllerPropertyGeneration *) ptr () ;
    if (nullptr != p) {
      result = GGS_arrayControllerPropertyGeneration (p) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerPropertyGeneration GGS_arrayControllerPropertyGeneration_2E_weak::bang_arrayControllerPropertyGeneration_2E_weak (Compiler * inCompiler COMMA_LOCATION_ARGS) const {
  GGS_arrayControllerPropertyGeneration result ;
  if (mProxyPtr != nullptr) {
    AbstractStrongPtrClass * strongPtr = mProxyPtr->strongObject () ;
    if (strongPtr == nullptr) {
      inCompiler->onTheFlySemanticError ("weak reference is nil" COMMA_THERE) ;
    }else{
      macroValidSharedObject (strongPtr, cPtr_arrayControllerPropertyGeneration) ;
      result = GGS_arrayControllerPropertyGeneration ((cPtr_arrayControllerPropertyGeneration *) strongPtr) ;
    }
  }
  return result ;
}

//--------------------------------------------------------------------------------------------------
//     @arrayControllerPropertyGeneration.weak generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ("arrayControllerPropertyGeneration.weak",
                                                                                              & kTypeDescriptor_GALGAS_propertyGeneration_2E_weak) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerPropertyGeneration_2E_weak::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerPropertyGeneration_2E_weak ;
}

//--------------------------------------------------------------------------------------------------
//  Enum arrayControllerModelKind
//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind::GGS_arrayControllerModelKind (void) :
mEnum (Enumeration::invalid) {
}


//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_entityArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_entityArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

GGS_arrayControllerModelKind GGS_arrayControllerModelKind::class_func_transientArray (UNUSED_LOCATION_ARGS) {
  GGS_arrayControllerModelKind result ;
  result.mEnum = Enumeration::enum_transientArray ;
  return result ;
}

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------

static const char * gEnumNameArrayFor_arrayControllerModelKind [3] = {
  "(not built)",
  "entityArray",
  "transientArray"
} ;

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isEntityArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_entityArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

GGS_bool GGS_arrayControllerModelKind::getter_isTransientArray (UNUSED_LOCATION_ARGS) const {
  return GGS_bool (Enumeration::invalid != mEnum, Enumeration::enum_transientArray == mEnum) ;
}

//--------------------------------------------------------------------------------------------------

void GGS_arrayControllerModelKind::description (String & ioString,
                                                const int32_t /* inIndentation */) const {
  ioString.appendCString ("<enum @arrayControllerModelKind: ") ;
  ioString.appendCString (gEnumNameArrayFor_arrayControllerModelKind [size_t (mEnum)]) ;
  ioString.appendCString (">") ;
}


//--------------------------------------------------------------------------------------------------
//     @arrayControllerModelKind generic code implementation
//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor kTypeDescriptor_GALGAS_arrayControllerModelKind ("arrayControllerModelKind",
                                                                             nullptr) ;

//--------------------------------------------------------------------------------------------------

const GALGAS_TypeDescriptor * GGS_arrayControllerModelKind::staticTypeDescriptor (void) const {
  return & kTypeDescriptor_GALGAS_arrayControllerModelKind ;
}

