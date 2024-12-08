#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-9.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@toManyPropertyGeneration resetToManyRelationships'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_toManyPropertyGeneration::getter_resetToManyRelationships (Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GGS_toManyPropertyGeneration temp_1 = this ;
    test_0 = temp_1.readProperty_mOption ().getter_isHasDependance (SOURCE_FILE ("to-many-relationship.ggs", 351)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GGS_toManyPropertyGeneration temp_2 = this ;
    result_result = GGS_string ("  //--- To many property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 354)) ;
    const GGS_toManyPropertyGeneration temp_3 = this ;
    result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)).add_operation (GGS_string ("_property.setProp ([])\n"), inCompiler COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)), inCompiler  COMMA_SOURCE_FILE ("to-many-relationship.ggs", 355)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'validationStubExtension'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_validationStubExtension (
  "controllers",
  0,
  gWrapperAllFiles_validationStubExtension_3,
  0,
  gWrapperAllDirectories_validationStubExtension_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_validationStubExtension (
  "standard-properties",
  0,
  gWrapperAllFiles_validationStubExtension_1,
  0,
  gWrapperAllDirectories_validationStubExtension_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_validationStubExtension (
  "xcode-project",
  0,
  gWrapperAllFiles_validationStubExtension_2,
  0,
  gWrapperAllDirectories_validationStubExtension_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_validationStubExtension_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_validationStubExtension_0 [4] = {
  & gWrapperDirectory_3_validationStubExtension,
  & gWrapperDirectory_1_validationStubExtension,
  & gWrapperDirectory_2_validationStubExtension,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_validationStubExtension (
  "",
  0,
  gWrapperAllFiles_validationStubExtension_0,
  3,
  gWrapperAllDirectories_validationStubExtension_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'validationStubExtension actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_validationStubExtension_actionGeneration (Compiler * /* inCompiler */,
                                                                         const GGS_string & in_OBJECT_5F_TYPE_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_NAME,
                                                                         const GGS_string & in_MODEL_5F_TYPE_5F_NAME
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  uint32_t columnMarker = 0 ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_OBJECT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  func validate_") ;
  result.appendString (in_MODEL_5F_NAME.stringValue ()) ;
  result.appendString (" (") ;
  columnMarker = result.currentColumn () ;
  result.appendString ("currentValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (",\n                 ") ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result.appendString ("proposedValue : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> EBValidationResult <") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateValidationRoutineStubs??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateValidationRoutineStubs_3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_validationStubRoutineListForGeneration constinArgument_inValidationStubRoutineListForGeneration,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_validationStubRoutineListForGeneration enumerator_1212 (constinArgument_inValidationStubRoutineListForGeneration, EnumerationOrder::up) ;
  while (enumerator_1212.hasCurrentObject ()) {
    GGS_string var_s_1283 = GGS_string (filewrapperTemplate_validationStubExtension_actionGeneration (inCompiler, enumerator_1212.current_mObjectTypeName (HERE), enumerator_1212.current_mModelName (HERE), enumerator_1212.current_mModelTypeName (HERE) COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 33))) ;
    GGS_string var_fileName_1418 = GGS_string ("validation-").add_operation (enumerator_1212.current_mObjectTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (enumerator_1212.current_mModelName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 38)) ;
    {
    ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_1418, inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 39)) ;
    }
    GGS_string var_defaultUserZone_32__1542 = GGS_string ("    var result : EBValidationResult <").add_operation (enumerator_1212.current_mModelTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string (">\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    let validates = false // Add your validation condition here\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 41)).add_operation (GGS_string ("    if validates {\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 42)).add_operation (GGS_string ("      result = .ok (proposedValue)\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 43)).add_operation (GGS_string ("    }else{\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 44)).add_operation (GGS_string ("      result = .rejectWithAlert (\"Rejected in \\(#file), line \\(#line)\")\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 45)).add_operation (GGS_string ("    }\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 46)).add_operation (GGS_string ("    return result\n"), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 47)) ;
    {
    GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_1418, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_1283, var_defaultUserZone_32__1542, GGS_string ("  }\n},\n\n//---------------------------------------------------------------------------------------------------------------------*\n"), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("property-validation-stub-routine.ggs", 49)) ;
    }
    enumerator_1212.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildActionMap?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildActionMap_3F__21_ (const GGS_lstringlist constinArgument_inActionDeclarationList,
                                     GGS_actionMap & outArgument_outActionMap,
                                     Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActionMap.drop () ; // Release 'out' argument
  GGS_actionMap temp_0 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 46)) ;
  outArgument_outActionMap = temp_0 ;
  cEnumerator_lstringlist enumerator_1740 (constinArgument_inActionDeclarationList, EnumerationOrder::up) ;
  while (enumerator_1740.hasCurrentObject ()) {
    {
    outArgument_outActionMap.setter_insertKey (enumerator_1740.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 48)) ;
    }
    enumerator_1740.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@actionFileGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_actionFileGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                     const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                     GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                     Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_actionFileGeneration temp_0 = this ;
  const GGS_actionFileGeneration temp_1 = this ;
  GGS_string var_s_2468 = GGS_string (filewrapperTemplate_actionGenerationTemplate_actionGeneration (inCompiler, temp_0.readProperty_mClassName (), temp_1.readProperty_mActionName () COMMA_SOURCE_FILE ("run-action.ggs", 67))) ;
  const GGS_actionFileGeneration temp_2 = this ;
  const GGS_actionFileGeneration temp_3 = this ;
  GGS_string var_fileName_2580 = GGS_string ("action-").add_operation (temp_2.readProperty_mClassName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (temp_3.readProperty_mActionName (), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 71)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_2580, inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 72)) ;
  }
  {
  GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_2580, GGS_string ("//"), GGS_string::makeEmptyString (), GGS_string ("\n\n"), var_s_2468, GGS_string ("    ENTER USER CODE HERE\n"), GGS_string ("  }\n}\n\n//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (45)), GGS_uint (uint32_t (98U))  COMMA_SOURCE_FILE ("run-action.ggs", 81)), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 81)), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("run-action.ggs", 73)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'actionGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of 'controllers' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- All sub-directories of 'controllers' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_3 [1] = {
  nullptr
} ;

//--- Directory 'controllers'

const cDirectoryWrapper gWrapperDirectory_3_actionGenerationTemplate (
  "controllers",
  0,
  gWrapperAllFiles_actionGenerationTemplate_3,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_3
) ;

//--- All files of 'standard-properties' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- All sub-directories of 'standard-properties' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_1 [1] = {
  nullptr
} ;

//--- Directory 'standard-properties'

const cDirectoryWrapper gWrapperDirectory_1_actionGenerationTemplate (
  "standard-properties",
  0,
  gWrapperAllFiles_actionGenerationTemplate_1,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_1
) ;

//--- All files of 'xcode-project' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- All sub-directories of 'xcode-project' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_2 [1] = {
  nullptr
} ;

//--- Directory 'xcode-project'

const cDirectoryWrapper gWrapperDirectory_2_actionGenerationTemplate (
  "xcode-project",
  0,
  gWrapperAllFiles_actionGenerationTemplate_2,
  0,
  gWrapperAllDirectories_actionGenerationTemplate_2
) ;

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_actionGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_actionGenerationTemplate_0 [4] = {
  & gWrapperDirectory_3_actionGenerationTemplate,
  & gWrapperDirectory_1_actionGenerationTemplate,
  & gWrapperDirectory_2_actionGenerationTemplate,
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_actionGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_actionGenerationTemplate_0,
  3,
  gWrapperAllDirectories_actionGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'actionGenerationTemplate actionGeneration'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_actionGenerationTemplate_actionGeneration (Compiler * /* inCompiler */,
                                                                          const GGS_string & in_EXTENDED_5F_CLASS_5F_NAME,
                                                                          const GGS_string & in_ACTION_5F_NAME
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS REGENERATED BY EASY BINDINGS, ONLY MODIFY IT WITHIN USER ZONES\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n\nextension ") ;
  result.appendString (in_EXTENDED_5F_CLASS_5F_NAME.stringValue ()) ;
  result.appendString (" {\n  @objc func ") ;
  result.appendString (in_ACTION_5F_NAME.stringValue ()) ;
  result.appendString (" (_ inSender : NSObject\?) {\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@literalIntMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_literalIntMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool /* constinArgument_inPreferences */,
                                                                                              const GGS_propertyMap /* constinArgument_inRootObservablePropertyMap */,
                                                                                              const GGS_semanticContext /* constinArgument_inSemanticContext */,
                                                                                              const GGS_propertyMap /* constinArgument_inCurrentObservablePropertyMap */,
                                                                                              const GGS_propertyMap /* constinArgument_inPreferencesObservablePropertyMap */,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_literalIntMultipleBindingExpressionAST temp_0 = this ;
  outArgument_outEnableExpression = GGS_booleanMultipleBindingLiteralIntForGeneration::init_21_ (temp_0.readProperty_mValue ().readProperty_uint (), inCompiler COMMA_HERE) ;
  outArgument_outType = GGS_typeKind::class_func_integerType (SOURCE_FILE ("multiple-binding.ggs", 274)) ;
  const GGS_literalIntMultipleBindingExpressionAST temp_1 = this ;
  outArgument_outErrorLocation = temp_1.readProperty_mValue ().readProperty_location () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@observablePropertyInMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_observablePropertyInMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                        const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                        const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                        GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                        GGS_typeKind & outArgument_outType,
                                                                                                        GGS_location & outArgument_outErrorLocation,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12373 ;
  GGS_string var_swiftTypeStringForTransientFunctionArgument_12403 ;
  GGS_string var_defaultValueAsString_12472 ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_0 = this ;
  GGS_propertyMap temp_1 ;
  const enumGalgasBool test_2 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = constinArgument_inPreferencesObservablePropertyMap ;
  }else if (kBoolFalse == test_2) {
    temp_1 = constinArgument_inCurrentObservablePropertyMap ;
  }
  extensionMethod_analyzeObservableProperty (temp_0.readProperty_mProperty (), constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, temp_1, var_kind_12373, var_swiftTypeStringForTransientFunctionArgument_12403, var_defaultValueAsString_12472, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 290)) ;
  switch (var_kind_12373.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_12528_type_0 ;
      GGS_propertyAccessibility extractedValue_12534__1 ;
      var_kind_12373.getAssociatedValuesFor_property (extractedValue_12528_type_0, extractedValue_12534__1) ;
      outArgument_outType = extractedValue_12528_type_0 ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_12574__0 ;
      GGS_propertyAccessibility extractedValue_12574__1 ;
      GGS_bool extractedValue_12574__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_12574__3 ;
      var_kind_12373.getAssociatedValuesFor_toMany (extractedValue_12574__0, extractedValue_12574__1, extractedValue_12574__2, extractedValue_12574__3) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_3.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)), GGS_string ("only an atomic property can be observed"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 302)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_12688__0 ;
      GGS_propertyAccessibility extractedValue_12688__1 ;
      GGS_bool extractedValue_12688__2 ;
      GGS_toOneOppositeRelationship extractedValue_12688__3 ;
      GGS_bool extractedValue_12688__4 ;
      var_kind_12373.getAssociatedValuesFor_toOne (extractedValue_12688__0, extractedValue_12688__1, extractedValue_12688__2, extractedValue_12688__3, extractedValue_12688__4) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_5.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)), GGS_string ("only an atomic property can be observed"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 304)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_12812__0 ;
      GGS_bool extractedValue_12812__1 ;
      var_kind_12373.getAssociatedValuesFor_arrayController (extractedValue_12812__0, extractedValue_12812__1) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_7.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)), GGS_string ("only an atomic property can be observed"), fixItArray8  COMMA_SOURCE_FILE ("multiple-binding.ggs", 306)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_12939__0 ;
      var_kind_12373.getAssociatedValuesFor_selectionController (extractedValue_12939__0) ;
      const GGS_observablePropertyInMultipleBindingExpressionAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (extensionGetter_location (temp_9.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)), GGS_string ("only an atomic property can be observed"), fixItArray10  COMMA_SOURCE_FILE ("multiple-binding.ggs", 308)) ;
      outArgument_outType.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_11 = this ;
  GGS_string temp_12 ;
  const enumGalgasBool test_13 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GGS_string ("self.") ;
  }
  outArgument_outEnableExpression = GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::init_21_ (extensionGetter_modelStringForSelf (temp_11.readProperty_mProperty (), temp_12, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 311)), inCompiler COMMA_HERE) ;
  const GGS_observablePropertyInMultipleBindingExpressionAST temp_14 = this ;
  outArgument_outErrorLocation = extensionGetter_location (temp_14.readProperty_mProperty (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 313)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@negateBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_negateBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                 const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                                 const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                                 GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                                 GGS_typeKind & outArgument_outType,
                                                                                                 GGS_location & outArgument_outErrorLocation,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_expression_14118 ;
  const GGS_negateBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_expression_14118, outArgument_outType, outArgument_outErrorLocation, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 328)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outType.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 338)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 338)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (outArgument_outErrorLocation, GGS_string ("cannot apply negation: operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 339)) ;
    }
  }
  outArgument_outEnableExpression = GGS_negateBooleanMultipleBindingExpressionForGeneration::init_21_ (var_expression_14118, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@orBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_orBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                             const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                             const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                             const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                             const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                             GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                             GGS_typeKind & outArgument_outType,
                                                                                             GGS_location & outArgument_outErrorLocation,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_15214 ;
  GGS_typeKind var_outLeftType_15239 ;
  GGS_location var_outLeftLocation_15261 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_15214, var_outLeftType_15239, var_outLeftLocation_15261, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 356)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_15239.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 366)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 366)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_15261, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 367)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_15682 ;
  GGS_typeKind var_outRightType_15708 ;
  GGS_location var_outRightLocation_15731 ;
  const GGS_orBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_15682, var_outRightType_15708, var_outRightLocation_15731, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 369)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_15708.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 379)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 379)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_15731, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 380)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 382)) ;
  outArgument_outErrorLocation = var_outRightLocation_15731 ;
  outArgument_outEnableExpression = GGS_orBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_15214, var_rightExpression_15682, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@xorBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_xorBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_16881 ;
  GGS_typeKind var_outLeftType_16906 ;
  GGS_location var_outLeftLocation_16928 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_16881, var_outLeftType_16906, var_outLeftLocation_16928, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 399)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_16906.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 409)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 409)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_16928, GGS_string ("cannot apply 'or': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 410)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_17349 ;
  GGS_typeKind var_outRightType_17375 ;
  GGS_location var_outRightLocation_17398 ;
  const GGS_xorBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_17349, var_outRightType_17375, var_outRightLocation_17398, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 412)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_17375.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 422)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 422)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_17398, GGS_string ("cannot apply 'or': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 423)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 425)) ;
  outArgument_outErrorLocation = var_outRightLocation_17398 ;
  outArgument_outEnableExpression = GGS_xorBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_16881, var_rightExpression_17349, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@andBooleanMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_andBooleanMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_18549 ;
  GGS_typeKind var_outLeftType_18574 ;
  GGS_location var_outLeftLocation_18596 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_18549, var_outLeftType_18574, var_outLeftLocation_18596, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 442)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_outLeftType_18574.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 452)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 452)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (var_outLeftLocation_18596, GGS_string ("cannot apply 'and': left operand is not boolean"), fixItArray2  COMMA_SOURCE_FILE ("multiple-binding.ggs", 453)) ;
    }
  }
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_19018 ;
  GGS_typeKind var_outRightType_19044 ;
  GGS_location var_outRightLocation_19067 ;
  const GGS_andBooleanMultipleBindingExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_3.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_19018, var_outRightType_19044, var_outRightLocation_19067, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 455)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_outRightType_19044.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 465)).operator_not (SOURCE_FILE ("multiple-binding.ggs", 465)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (var_outRightLocation_19067, GGS_string ("cannot apply 'and': right operand is not boolean"), fixItArray5  COMMA_SOURCE_FILE ("multiple-binding.ggs", 466)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 468)) ;
  outArgument_outErrorLocation = var_outRightLocation_19067 ;
  outArgument_outEnableExpression = GGS_andBooleanMultipleBindingExpressionForGeneration::init_21__21_ (var_leftExpression_18549, var_rightExpression_19018, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@comparisonMultipleBindingExpressionAST analyzeExpressionForMultipleBinding'
//
//--------------------------------------------------------------------------------------------------

void cPtr_comparisonMultipleBindingExpressionAST::method_analyzeExpressionForMultipleBinding (const GGS_bool constinArgument_inPreferences,
                                                                                              const GGS_propertyMap constinArgument_inRootObservablePropertyMap,
                                                                                              const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                              const GGS_propertyMap constinArgument_inCurrentObservablePropertyMap,
                                                                                              const GGS_propertyMap constinArgument_inPreferencesObservablePropertyMap,
                                                                                              GGS_abstractBooleanMultipleBindingExpressionForGeneration & outArgument_outEnableExpression,
                                                                                              GGS_typeKind & outArgument_outType,
                                                                                              GGS_location & outArgument_outErrorLocation,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_leftExpression_20219 ;
  GGS_typeKind var_outLeftType_20244 ;
  GGS_location var_outLeftLocation_20266 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_0 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_0.readProperty_mLeftBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_leftExpression_20219, var_outLeftType_20244, var_outLeftLocation_20266, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 485)) ;
  GGS_abstractBooleanMultipleBindingExpressionForGeneration var_rightExpression_20567 ;
  GGS_typeKind var_outRightType_20593 ;
  GGS_location var_outRightLocation_20616 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_1 = this ;
  callExtensionMethod_analyzeExpressionForMultipleBinding ((cPtr_abstractBooleanMultipleBindingExpressionAST *) temp_1.readProperty_mRightBinding ().ptr (), constinArgument_inPreferences, constinArgument_inRootObservablePropertyMap, constinArgument_inSemanticContext, constinArgument_inCurrentObservablePropertyMap, constinArgument_inPreferencesObservablePropertyMap, var_rightExpression_20567, var_outRightType_20593, var_outRightLocation_20616, inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 495)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GGS_bool test_3 = var_outLeftType_20244.getter_isBoolType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    if (kBoolTrue != test_3.boolEnum ()) {
      test_3 = var_outLeftType_20244.getter_isIntegerType (SOURCE_FILE ("multiple-binding.ggs", 505)) ;
    }
    test_2 = test_3.operator_not (SOURCE_FILE ("multiple-binding.ggs", 505)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_outLeftLocation_20266, GGS_string ("cannot compare: left operand is neither boolean nor integer"), fixItArray4  COMMA_SOURCE_FILE ("multiple-binding.ggs", 506)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::notEqual, var_outRightType_20593.objectCompare (var_outLeftType_20244)).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (var_outRightLocation_20616, GGS_string ("cannot compare: right operand type is different than left operand type"), fixItArray6  COMMA_SOURCE_FILE ("multiple-binding.ggs", 509)) ;
    }
  }
  outArgument_outType = GGS_typeKind::class_func_boolType (SOURCE_FILE ("multiple-binding.ggs", 511)) ;
  outArgument_outErrorLocation = var_outRightLocation_20616 ;
  const GGS_comparisonMultipleBindingExpressionAST temp_7 = this ;
  outArgument_outEnableExpression = GGS_comparisonMultipleBindingExpressionForGeneration::init_21__21__21_ (var_leftExpression_20219, temp_7.readProperty_mOperator (), var_rightExpression_20567, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@booleanMultipleBindingLiteralIntForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_booleanMultipleBindingLiteralIntForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_booleanMultipleBindingLiteralIntForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".literalInt (").add_operation (temp_0.readProperty_mValue ().getter_string (SOURCE_FILE ("multiple-binding.ggs", 528)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 528)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 528)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@observablePropertyAsBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_observablePropertyAsBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_observablePropertyAsBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".prop (").add_operation (temp_0.readProperty_mObservedModelString (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 535)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 535)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@negateBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_negateBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_negateBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".not (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 542)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 542)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 542)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@orBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_orBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_orBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)).add_operation (GGS_string (", .or, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 549)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@xorBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_xorBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_xorBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)).add_operation (GGS_string (", .xor, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 556)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@andBooleanMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_andBooleanMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_0 = this ;
  const GGS_andBooleanMultipleBindingExpressionForGeneration temp_1 = this ;
  result_outExpressionString = GGS_string (".boolcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)).add_operation (GGS_string (", .and, "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)).add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_1.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 563)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@comparisonMultipleBindingExpressionForGeneration expressionString'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_comparisonMultipleBindingExpressionForGeneration::getter_expressionString (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outExpressionString ; // Returned variable
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_0 = this ;
  result_outExpressionString = GGS_string (".intcmp (").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_0.readProperty_mLeftBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 570)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 570)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 570)) ;
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_1 = this ;
  switch (temp_1.readProperty_mOperator ().enumValue ()) {
  case GGS_multipleBindingComparisonAST::Enumeration::invalid:
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_equal:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".eq"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 572)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_notEqual:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".ne"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 573)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lower:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".lt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 574)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_lowerOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".le"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 575)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greater:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".gt"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 576)) ;
    }
    break ;
  case GGS_multipleBindingComparisonAST::Enumeration::enum_greaterOrEqual:
    {
      result_outExpressionString.plusAssign_operation(GGS_string (".ge"), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 577)) ;
    }
    break ;
  }
  const GGS_comparisonMultipleBindingExpressionForGeneration temp_2 = this ;
  result_outExpressionString.plusAssign_operation(GGS_string (", ").add_operation (callExtensionGetter_expressionString ((const cPtr_abstractBooleanMultipleBindingExpressionForGeneration *) temp_2.readProperty_mRightBinding ().ptr (), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 579)), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 579)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("multiple-binding.ggs", 579)), inCompiler  COMMA_SOURCE_FILE ("multiple-binding.ggs", 579)) ;
//---
  return result_outExpressionString ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1105 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 28)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_arrayControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1105, temp_3, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 29)) ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1105, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("array-controller.ggs", 30)) ;
  }
  const GGS_arrayControllerDeclarationAST temp_5 = this ;
  switch (temp_5.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_1345_rootEntityName_0 ;
      temp_5.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_1345_rootEntityName_0) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, extractedValue_1345_rootEntityName_0.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          const GGS_arrayControllerDeclarationAST temp_7 = this ;
          const GGS_arrayControllerDeclarationAST temp_8 = this ;
          ioArgument_ioGraph.setter_addEdge (var_node_1105, GGS_lstring::init_21__21_ (extractedValue_1345_rootEntityName_0.readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)).add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 34)), temp_8.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 34)) ;
          }
        }
      }
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      {
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      const GGS_arrayControllerDeclarationAST temp_10 = this ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1105, GGS_lstring::init_21__21_ (temp_9.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)).add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 37)), temp_11.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("array-controller.ggs", 37)) ;
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_arrayControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  const GGS_arrayControllerDeclarationAST temp_1 = this ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 44)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_4085 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("array-controller.ggs", 108)) ;
  if (nullptr != objectArray_4085) {
    macroValidSharedObject (objectArray_4085, cMapElement_classMap) ;
    GGS_actionMap temp_1 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 111)) ;
    temp_1.enterElement (GGS_actionMap_2E_element::init_21_ (GGS_string ("add").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 111)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 111)) ;
    temp_1.enterElement (GGS_actionMap_2E_element::init_21_ (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("array-controller.ggs", 111)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 111)) ;
    GGS_actionMap var_controllerActions_4192 = temp_1 ;
    const GGS_arrayControllerDeclarationAST temp_2 = this ;
    switch (temp_2.readProperty_mModel ().enumValue ()) {
    case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
      break ;
    case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
      {
        GGS_lstring extractedValue_4317_rootEntityName_0 ;
        temp_2.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_4317_rootEntityName_0) ;
        GGS_propertyMap var_rootProperties_4405 ;
        GGS_classKind joker_4396 ; // Joker input parameter
        GGS_actionMap joker_4421_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_4421_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_4317_rootEntityName_0, joker_4396, var_rootProperties_4405, joker_4421_2, joker_4421_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 114)) ;
        GGS_propertyKind var_classKind_4489 ;
        const GGS_arrayControllerDeclarationAST temp_3 = this ;
        GGS_actionMap joker_4500_2 ; // Joker input parameter
        GGS_bool joker_4500_1 ; // Joker input parameter
        var_rootProperties_4405.method_searchKey (temp_3.readProperty_mToManyPropertyName (), var_classKind_4489, joker_4500_2, joker_4500_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 115)) ;
        switch (var_classKind_4489.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_4550__0 ;
            GGS_propertyAccessibility extractedValue_4550__1 ;
            var_classKind_4489.getAssociatedValuesFor_property (extractedValue_4550__0, extractedValue_4550__1) ;
            TC_Array <FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (extractedValue_4317_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 118)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_4646_typeName_0 ;
            GGS_propertyAccessibility extractedValue_4656__1 ;
            GGS_bool extractedValue_4659_graphic_2 ;
            GGS_toManyRelationshipOptionAST extractedValue_4668__3 ;
            var_classKind_4489.getAssociatedValuesFor_toMany (extractedValue_4646_typeName_0, extractedValue_4656__1, extractedValue_4659_graphic_2, extractedValue_4668__3) ;
            GGS_propertyKind var_kind_4685 = GGS_propertyKind::class_func_arrayController (extractedValue_4646_typeName_0, extractedValue_4659_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 120)) ;
            {
            const GGS_arrayControllerDeclarationAST temp_5 = this ;
            objectArray_4085->mProperty_mPropertyMap.setter_insertKey (temp_5.readProperty_mControllerName (), var_kind_4685, var_controllerActions_4192, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 124)) ;
            }
            {
            const GGS_arrayControllerDeclarationAST temp_6 = this ;
            const GGS_arrayControllerDeclarationAST temp_7 = this ;
            const GGS_arrayControllerDeclarationAST temp_8 = this ;
            objectArray_4085->mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_6.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_7.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 128)), temp_8.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 126)) ;
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_5129__0 ;
            GGS_propertyAccessibility extractedValue_5129__1 ;
            GGS_bool extractedValue_5129__2 ;
            GGS_toOneOppositeRelationship extractedValue_5129__3 ;
            GGS_bool extractedValue_5129__4 ;
            var_classKind_4489.getAssociatedValuesFor_toOne (extractedValue_5129__0, extractedValue_5129__1, extractedValue_5129__2, extractedValue_5129__3, extractedValue_5129__4) ;
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (extractedValue_4317_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray9  COMMA_SOURCE_FILE ("array-controller.ggs", 133)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_5235__0 ;
            GGS_bool extractedValue_5235__1 ;
            var_classKind_4489.getAssociatedValuesFor_arrayController (extractedValue_5235__0, extractedValue_5235__1) ;
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (extractedValue_4317_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 135)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_5344__0 ;
            var_classKind_4489.getAssociatedValuesFor_selectionController (extractedValue_5344__0) ;
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (extractedValue_4317_rootEntityName_0.readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray11  COMMA_SOURCE_FILE ("array-controller.ggs", 137)) ;
          }
          break ;
        }
      }
      break ;
    case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
      {
        GGS_propertyKind var_classKind_5526 ;
        const GGS_arrayControllerDeclarationAST temp_12 = this ;
        GGS_actionMap joker_5537_2 ; // Joker input parameter
        GGS_bool joker_5537_1 ; // Joker input parameter
        objectArray_4085->mProperty_mPropertyMap.method_searchKey (temp_12.readProperty_mToManyPropertyName (), var_classKind_5526, joker_5537_2, joker_5537_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 140)) ;
        switch (var_classKind_5526.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_5587__0 ;
            GGS_propertyAccessibility extractedValue_5587__1 ;
            var_classKind_5526.getAssociatedValuesFor_property (extractedValue_5587__0, extractedValue_5587__1) ;
            const GGS_arrayControllerDeclarationAST temp_13 = this ;
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray14  COMMA_SOURCE_FILE ("array-controller.ggs", 143)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_5693_typeName_0 ;
            GGS_propertyAccessibility extractedValue_5703__1 ;
            GGS_bool extractedValue_5706_graphic_2 ;
            GGS_toManyRelationshipOptionAST extractedValue_5715__3 ;
            var_classKind_5526.getAssociatedValuesFor_toMany (extractedValue_5693_typeName_0, extractedValue_5703__1, extractedValue_5706_graphic_2, extractedValue_5715__3) ;
            GGS_propertyKind var_kind_5732 = GGS_propertyKind::class_func_arrayController (extractedValue_5693_typeName_0, extractedValue_5706_graphic_2  COMMA_SOURCE_FILE ("array-controller.ggs", 145)) ;
            {
            const GGS_arrayControllerDeclarationAST temp_15 = this ;
            objectArray_4085->mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mControllerName (), var_kind_5732, var_controllerActions_4192, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 149)) ;
            }
            {
            const GGS_arrayControllerDeclarationAST temp_16 = this ;
            const GGS_arrayControllerDeclarationAST temp_17 = this ;
            const GGS_arrayControllerDeclarationAST temp_18 = this ;
            objectArray_4085->mProperty_mPropertyGenerationList.setter_append (GGS_arrayControllerPropertyGeneration::init_21__21__21_ (temp_16.readProperty_mControllerName ().readProperty_string (), temp_17.readProperty_mToManyPropertyName ().readProperty_string (), temp_18.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 151)) ;
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_6160__0 ;
            GGS_propertyAccessibility extractedValue_6160__1 ;
            GGS_bool extractedValue_6160__2 ;
            GGS_toOneOppositeRelationship extractedValue_6160__3 ;
            GGS_bool extractedValue_6160__4 ;
            var_classKind_5526.getAssociatedValuesFor_toOne (extractedValue_6160__0, extractedValue_6160__1, extractedValue_6160__2, extractedValue_6160__3, extractedValue_6160__4) ;
            const GGS_arrayControllerDeclarationAST temp_19 = this ;
            TC_Array <FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (temp_19.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray20  COMMA_SOURCE_FILE ("array-controller.ggs", 158)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_6276__0 ;
            GGS_bool extractedValue_6276__1 ;
            var_classKind_5526.getAssociatedValuesFor_arrayController (extractedValue_6276__0, extractedValue_6276__1) ;
            const GGS_arrayControllerDeclarationAST temp_21 = this ;
            TC_Array <FixItDescription> fixItArray22 ;
            inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray22  COMMA_SOURCE_FILE ("array-controller.ggs", 160)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_6395__0 ;
            var_classKind_5526.getAssociatedValuesFor_selectionController (extractedValue_6395__0) ;
            const GGS_arrayControllerDeclarationAST temp_23 = this ;
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray24  COMMA_SOURCE_FILE ("array-controller.ggs", 162)) ;
          }
          break ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                    GGS_generationStruct & ioArgument_ioGeneration,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_boundModelPropertyMap_6907 ;
  const GGS_arrayControllerDeclarationAST temp_0 = this ;
  switch (temp_0.readProperty_mModel ().enumValue ()) {
  case GGS_arrayControllerBoundModelAST::Enumeration::invalid:
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_rootToManyRelationship:
    {
      GGS_lstring extractedValue_6990_rootEntityName_0 ;
      temp_0.readProperty_mModel ().getAssociatedValuesFor_rootToManyRelationship (extractedValue_6990_rootEntityName_0) ;
      GGS_classKind joker_7081 ; // Joker input parameter
      GGS_actionMap joker_7123_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7123_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_6990_rootEntityName_0, joker_7081, var_boundModelPropertyMap_6907, joker_7123_2, joker_7123_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 179)) ;
    }
    break ;
  case GGS_arrayControllerBoundModelAST::Enumeration::enum_selfToManyRelationship:
    {
      const GGS_arrayControllerDeclarationAST temp_1 = this ;
      GGS_classKind joker_7239 ; // Joker input parameter
      GGS_actionMap joker_7281_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_7281_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_1.readProperty_mClassName (), joker_7239, var_boundModelPropertyMap_6907, joker_7281_2, joker_7281_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 186)) ;
    }
    break ;
  }
  GGS_propertyKind var_boundModelClassKind_7376 ;
  const GGS_arrayControllerDeclarationAST temp_2 = this ;
  GGS_actionMap joker_7402_2 ; // Joker input parameter
  GGS_bool joker_7402_1 ; // Joker input parameter
  var_boundModelPropertyMap_6907.method_searchKey (temp_2.readProperty_mToManyPropertyName (), var_boundModelClassKind_7376, joker_7402_2, joker_7402_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 193)) ;
  GGS_arrayControllerModelKind var_arrayControllerModelKind_7529 ;
  GGS_bool var_graphic_7566 ;
  GGS_string var_elementTypeName_7588 ;
  switch (var_boundModelClassKind_7376.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_7651__0 ;
      GGS_propertyAccessibility extractedValue_7651__1 ;
      var_boundModelClassKind_7376.getAssociatedValuesFor_property (extractedValue_7651__0, extractedValue_7651__1) ;
      const GGS_arrayControllerDeclarationAST temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray4  COMMA_SOURCE_FILE ("array-controller.ggs", 204)) ;
      var_graphic_7566.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7529.drop () ; // Release error dropped variable
      var_elementTypeName_7588.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_7816_typeName_0 ;
      GGS_propertyAccessibility extractedValue_7826_accessibility_1 ;
      GGS_bool extractedValue_7841_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_7852__3 ;
      var_boundModelClassKind_7376.getAssociatedValuesFor_toMany (extractedValue_7816_typeName_0, extractedValue_7826_accessibility_1, extractedValue_7841_isGraphic_2, extractedValue_7852__3) ;
      var_elementTypeName_7588 = extractedValue_7816_typeName_0.readProperty_string () ;
      var_graphic_7566 = extractedValue_7841_isGraphic_2 ;
      GGS_arrayControllerModelKind temp_5 ;
      const enumGalgasBool test_6 = extractedValue_7826_accessibility_1.getter_isTransient (SOURCE_FILE ("array-controller.ggs", 210)).boolEnum () ;
      if (kBoolTrue == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_transientArray (SOURCE_FILE ("array-controller.ggs", 211)) ;
      }else if (kBoolFalse == test_6) {
        temp_5 = GGS_arrayControllerModelKind::class_func_entityArray (SOURCE_FILE ("array-controller.ggs", 212)) ;
      }
      var_arrayControllerModelKind_7529 = temp_5 ;
      GGS_classKind joker_8084 ; // Joker input parameter
      GGS_propertyMap joker_8088_3 ; // Joker input parameter
      GGS_actionMap joker_8088_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_8088_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_7816_typeName_0, joker_8084, joker_8088_3, joker_8088_2, joker_8088_1, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 214)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_8108__0 ;
      GGS_propertyAccessibility extractedValue_8108__1 ;
      GGS_bool extractedValue_8108__2 ;
      GGS_toOneOppositeRelationship extractedValue_8108__3 ;
      GGS_bool extractedValue_8108__4 ;
      var_boundModelClassKind_7376.getAssociatedValuesFor_toOne (extractedValue_8108__0, extractedValue_8108__1, extractedValue_8108__2, extractedValue_8108__3, extractedValue_8108__4) ;
      const GGS_arrayControllerDeclarationAST temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray8  COMMA_SOURCE_FILE ("array-controller.ggs", 216)) ;
      var_graphic_7566.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7529.drop () ; // Release error dropped variable
      var_elementTypeName_7588.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_8283__0 ;
      GGS_bool extractedValue_8283__1 ;
      var_boundModelClassKind_7376.getAssociatedValuesFor_arrayController (extractedValue_8283__0, extractedValue_8283__1) ;
      const GGS_arrayControllerDeclarationAST temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray10  COMMA_SOURCE_FILE ("array-controller.ggs", 220)) ;
      var_graphic_7566.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7529.drop () ; // Release error dropped variable
      var_elementTypeName_7588.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_8461__0 ;
      var_boundModelClassKind_7376.getAssociatedValuesFor_selectionController (extractedValue_8461__0) ;
      const GGS_arrayControllerDeclarationAST temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray12  COMMA_SOURCE_FILE ("array-controller.ggs", 224)) ;
      var_graphic_7566.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_7529.drop () ; // Release error dropped variable
      var_elementTypeName_7588.drop () ; // Release error dropped variable
    }
    break ;
  }
  {
  const GGS_arrayControllerDeclarationAST temp_13 = this ;
  const GGS_arrayControllerDeclarationAST temp_14 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_arrayControllerGeneration::init_21__21__21__21__21__21_ (temp_13.readProperty_mClassName ().readProperty_string (), temp_14.readProperty_mControllerName (), GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_7588, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 232)), var_arrayControllerModelKind_7529, var_elementTypeName_7588, var_graphic_7566, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 229)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_7588, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 238)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                   const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                   const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 257)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 257)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 257)) ;
      const GGS_arrayControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssign_operation(GGS_string ("//   Array controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 258)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 258)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 258)) ;
      result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 259)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 259)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 259)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 259)) ;
      const GGS_arrayControllerPropertyGeneration temp_2 = this ;
      const GGS_arrayControllerPropertyGeneration temp_3 = this ;
      const GGS_arrayControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string ("@MainAction let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 260)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 260)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 262)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 262)) ;
    const GGS_arrayControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 263)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 263)) ;
    result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("array-controller.ggs", 264)), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 264)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 264)) ;
    const GGS_arrayControllerPropertyGeneration temp_6 = this ;
    const GGS_arrayControllerPropertyGeneration temp_7 = this ;
    const GGS_arrayControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 265)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 265)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 278)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 278)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 279)).add_operation (GGS_string (".bind_model (self."), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 279)).add_operation (temp_2.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 279)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 279)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 279)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayControllerPropertyGeneration populateExplorerWindowCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_arrayControllerPropertyGeneration::getter_populateExplorerWindowCode (Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_arrayControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("    //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 285)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 285)) ;
  const GGS_arrayControllerPropertyGeneration temp_1 = this ;
  const GGS_arrayControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 286)).add_operation (GGS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 286)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 286)).add_operation (GGS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 286)), inCompiler  COMMA_SOURCE_FILE ("array-controller.ggs", 286)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'arrayControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_arrayControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_arrayControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_arrayControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_arrayControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'arrayControllerGenerationTemplate arrayControllerImplementationInSwift'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (Compiler * inCompiler,
                                                                                                       const GGS_string & in_OWNER_5F_NAME,
                                                                                                       const GGS_string & in_ARRAY_5F_CONTROLLER_5F_NAME,
                                                                                                       const GGS_arrayControllerModelKind & in_MODEL_5F_KIND,
                                                                                                       const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                       const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                       const GGS_bool & in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    ") ;
  result.appendString (GGS_string ("Array controller ").add_operation (in_OWNER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).add_operation (in_ARRAY_5F_CONTROLLER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("array-controller.swift.galgasTemplate", 8)).stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_ARRAY_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : EBReadOnlyAbstractGenericRelationshipProperty") ;
  const enumGalgasBool test_0 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString (", EBGraphicViewControllerProtocol") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString (", HiddenEBProtocol {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    set {\n") ;
  const enumGalgasBool test_1 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("    //--- Add observers to newly selected set\n      for object in newValue.subtracting (self.mPrivateSelectedSet).values {\n        object.selectionDisplay_property.startsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n    //--- Remove observers to deselected set\n      let deselectedSet = self.mPrivateSelectedSet.subtracting (newValue)\n      for object in deselectedSet.values {\n        object.selectionDisplay_property.stopsBeingObserved (by: self.mObjectSelectionObserver)\n      }\n      if deselectedSet.count > 0 {\n        self.mObjectSelectionObserver.observedObjectDidChange () // Required, as removing observer does not post event\n      }\n    //---\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("      self.mPrivateSelectedSet = newValue\n    }\n    get {\n      return self.selectedArray_property.propset\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mPrivateSelectedSet = EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> () {\n    didSet {\n      self.selectedArray_property.observedObjectDidChange ()\n      self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (self.mPrivateSelectedSet.values)))\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StoredArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (usedForSignature: false, key: nil)\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArrayDidChange_property : EBObservedObserver { return self.mInternalSelectedArrayProperty } // EBGraphicViewControllerProtocol\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n") ;
  const enumGalgasBool test_2 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_2) {
  case kBoolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Init\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override init () {\n    super.init ()\n   //--- Selection observers\n    self.canBringForward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringForward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canBringToFront_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canBringToFront)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canBringToFront_property)\n  //---\n    self.canSendBackward_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendBackward)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendBackward_property)\n  //---\n    self.canSendToBack_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canSendToBack)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canSendToBack_property)\n  //---\n    self.canFlipHorizontally_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipHorizontally)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipHorizontally_property)\n  //---\n    self.canFlipVertically_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canFlipVertically)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canFlipVertically_property)\n  //---\n    self.canRotate90_property.mReadModelFunction = { [weak self] in\n      if let me = self {\n        return .single (me.canRotate90)\n      }else{\n        return .empty\n      }\n    }\n    self.selectedArray_property.startsBeingObserved (by: self.canRotate90_property)\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objectCount : Int {\n    if let n = self.mModel\?.propval.count {\n      return n\n    }else{\n      return 0\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    inModel.attachClient (self)\n") ;
  const enumGalgasBool test_3 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_3) {
  case kBoolTrue : {
    result.appendString ("    self.startObservingObjectShape ()\n    self.startObservingSelectionShape ()\n    self.inspectorViewManagerStartsObservingSelection ()\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func unbind_model () {\n") ;
  const enumGalgasBool test_4 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_4) {
  case kBoolTrue : {
    result.appendString ("    self.stopObservingObjectShape ()\n    self.stopObservingSelectionShape ()\n    self.inspectorViewManagerStopsObservingSelection ()\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("    self.mModel\?.detachClient (self)\n    self.selectedSet = EBReferenceSet ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  override func notifyModelDidChange () {\n    super.notifyModelDidChange ()\n    let currentSelectedSet = self.selectedSet\n    let objectArray = self.objectArray\n    let newSelectedSet = currentSelectedSet.intersection (objectArray.values)\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (Array (newSelectedSet.values)))\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var objectArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n     if let values = self.mModel\?.propval {\n       return values\n     }else{\n       return EBReferenceArray ()\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   SELECTION\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    var result = Set <Int> ()\n    var idx = 0\n    for object in self.objectArray.values {\n      if self.selectedArray_property.propset.contains (object) {\n        result.insert (idx)\n      }\n      idx += 1\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.selectedSet = EBReferenceSet (inObjects)\n  }\n") ;
  const enumGalgasBool test_5 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_5) {
  case kBoolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  Graphic view interface\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedGraphicObjectSet : EBReferenceSet <EBGraphicManagedObject> {\n    var result = EBReferenceSet <EBGraphicManagedObject> (minimumCapacity: self.selectedArray_property.propval.count)\n    for object in self.selectedArray_property.propval.values {\n      result.insert (object)\n    }\n    return result\n  }\n\n   // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   var graphicObjectArray : [EBGraphicManagedObject] {\n     if let v = self.mModel\?.propval {\n       return v.values\n     }else{\n       return []\n     }\n   }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute selection shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectSelectionObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StartsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = { [weak self] in self\?.computeSelectionShape () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func computeSelectionShape () {\n    var selectionDisplayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if !self.selectedArray_property.propset.contains (object) {\n        selectionDisplayArray.append (EBShape ())\n      }else if let shape = object.selectionDisplay {\n        selectionDisplayArray.append (shape)\n      }else{\n        selectionDisplayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateSelectionShape (selectionDisplayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingSelectionShape () {\n    self.mModel\?.toMany_selectionDisplay_StopsBeingObserved (by: self.mObjectSelectionObserver)\n    self.mObjectSelectionObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // Compute object shape\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mObjectDisplayObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func startObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StartsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = { [weak self] in self\?.updateObjectDisplay () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func stopObservingObjectShape () {\n    self.mModel\?.toMany_objectDisplay_StopsBeingObserved (by: self.mObjectDisplayObserver)\n    self.mObjectDisplayObserver.mEventCallBack = nil\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func updateObjectDisplay () {\n    var displayArray = [EBShape] ()\n    for object in self.objectArray.values {\n      if let shape = object.objectDisplay {\n        displayArray.append (shape)\n      }else{\n        displayArray.append (EBShape ())\n      }\n    }\n    for view in self.mEBGraphicViews {\n      view.updateObjectDisplay (displayArray)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func alignmentPointSetArray () -> [Set<CanariPoint>] {\n    var result = [Set<CanariPoint>] ()\n    for object in self.objectArray.values {\n      result.append (object.alignmentPoints ())\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // EBGraphicViews\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mEBGraphicViews = Set <EBGraphicView> ()\n  private var mPasteboardTypes = Set <NSPasteboard.PasteboardType> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addPasteBoardType (_ inType : NSPasteboard.PasteboardType) {\n    if !self.mPasteboardTypes.contains (inType) {\n      self.mPasteboardTypes.insert (inType)\n      for ebView in self.mEBGraphicViews {\n        ebView.register (draggedTypes: [inType])\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func boundViews () -> [EBGraphicView] {\n    return Array (self.mEBGraphicViews)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setBackgroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mBackgroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func setForegroundImageAffineTransform (_ inAffineTransform : NSAffineTransform) {\n     for ebView in self.mEBGraphicViews {\n       ebView.mForegroundImageAffineTransform = inAffineTransform\n     }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.register (draggedTypes: Array (self.mPasteboardTypes))\n      self.mEBGraphicViews.insert (ebView)\n      ebView.set (controller: self)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_ebView (_ inEBView : EBGraphicView\?) {\n    if let ebView = inEBView {\n      ebView.updateObjectDisplay ([])\n      ebView.updateSelectionShape ([])\n      self.mEBGraphicViews.remove (ebView)\n    }\n  } */\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectedObjectIndexSet () -> NSIndexSet {\n    let modelObjects = self.objectArray\n    let selectedObjects = self.selectedArray_property.propset\n    let indexSet = NSMutableIndexSet ()\n    for object in selectedObjects.values {\n      if let index = modelObjects.firstIndex (of: object) {\n        indexSet.add (index)\n      }\n    }\n    return indexSet\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_arrayControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_arrayControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    select\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func select (object inObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let objectArray) :\n       let array = EBReferenceArray (objectArray)\n       if array.contains (inObject) {\n           self.selectedSet = EBReferenceSet (inObject)\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    add\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   @objc func add (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n      //--- New object is the selection\n        self.selectedSet = EBReferenceSet ([newObject])\n        model.setProp (array)\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n        var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n        if (newSelectionIndex >= 0) && (newSelectionIndex < model_prop.count) {\n          newSelectedObject = model_prop [newSelectionIndex]\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new selection\n        var newSelectionSet = EBReferenceSet <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("> ()\n        if let object = newSelectedObject {\n          newSelectionSet.insert (object)\n        }\n        self.selectedSet = newSelectionSet\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  const enumGalgasBool test_6 = in_ELEMENT_5F_TYPE_5F_IS_5F_GRAPHIC.boolEnum () ;
  switch (test_6) {
  case kBoolTrue : {
    result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  DOCUMENT  \n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private final weak var mDocument : EBAutoLayoutManagedDocument\? = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func set (document inDocument : EBAutoLayoutManagedDocument) {\n    self.mDocument = inDocument\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //  SELECTION OPERATIONS\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func sortedIndexArrayOfSelectedObjects () -> [Int] {\n    var result = [Int] ()\n    let objects = self.objectArray\n    for object in self.selectedArray_property.propset.values {\n      let idx = objects.firstIndex (of: object)!\n      result.append (idx)\n    }\n    return result.sorted ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCut (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if (inPasteboardType == nil) || (self.selectedArray_property.propset.count == 0) {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canCopyAndPaste () || !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func cutSelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, pasteOffset : CanariPoint) {\n    self.copySelectedObjectsIntoPasteboard (inPasteboardType, pasteOffset: pasteOffset)\n    self.deleteSelectedObjects ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canCopy (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    return self.canCut (inPasteboardType)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func copySelectedObjectsIntoPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?,\n                                          pasteOffset : CanariPoint) {\n    if let pasteboardType = inPasteboardType {\n    //--- Declare pasteboard types\n      let pb = NSPasteboard.general\n      pb.declareTypes ([pasteboardType, .pdf], owner: self)\n    //--- Build PDF representation\n      let indexArray = self.sortedIndexArrayOfSelectedObjects ()\n      let objects = self.objectArray\n      var shape = EBShape ()\n      for idx in indexArray {\n        let object = objects [idx]\n        if let s = object.objectDisplay {\n          shape.add (s)\n        }\n      }\n      let pdfData = buildPDFimageData (frame: shape.boundingBox, shape: shape)\n      pb.setData (pdfData, forType: .pdf)\n   //--- Build private representation\n      var objectDictionaryArray = [[String : Any]] ()\n      var objectAdditionalDictionaryArray = [[String : Any]] ()\n      for idx in indexArray {\n        let object = objects [idx]\n        var dict = [String : Any] ()\n        object.savePropertiesIntoDictionary (&dict)\n        objectDictionaryArray.append (dict)\n        var additionalDict = [String : Any] ()\n        object.saveIntoAdditionalDictionary (&additionalDict)\n        objectAdditionalDictionaryArray.append (additionalDict)\n      }\n    //--- Copy private representation\n      let dataDictionary : [String : Any] = [\n        OBJECT_DICTIONARY_KEY : objectDictionaryArray,\n        OBJECT_ADDITIONAL_DICTIONARY_KEY : objectAdditionalDictionaryArray,\n        X_KEY : pasteOffset.x,\n        Y_KEY : pasteOffset.y\n      ]\n      pb.setPropertyList (dataDictionary, forType: pasteboardType)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canPaste (_ inPasteboardType : NSPasteboard.PasteboardType\?) -> Bool {\n    if let pasteboardType = inPasteboardType {\n      let pb = NSPasteboard.general\n      return pb.availableType (from: [pasteboardType]) != nil\n    }else{\n      return false\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   func pasteFromPasteboard (_ inPasteboardType : NSPasteboard.PasteboardType\?, _ inWindow : NSWindow) {\n    let pb = NSPasteboard.general\n    if let pasteboardType = inPasteboardType,\n           pb.availableType (from: [pasteboardType]) != nil,\n           let dataDictionary = pb.propertyList (forType: pasteboardType) as\? [String : Any],\n           let dictionaryArray = dataDictionary [OBJECT_DICTIONARY_KEY] as\? [[String : Any]],\n           let additionalDictionaryArray = dataDictionary [OBJECT_ADDITIONAL_DICTIONARY_KEY] as\? [[String : Any]],\n           let X = dataDictionary [X_KEY] as\? Int,\n           let Y = dataDictionary [Y_KEY] as\? Int {\n      var newObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n      var userSet = EBReferenceSet <EBManagedObject> ()\n      var idx = -1\n      var errorMessage = \"\"\n      for dictionary in dictionaryArray {\n        idx += 1\n        if let object = makeManagedObjectFromDictionary (self.undoManager, dictionary) as\? ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (" {\n          if errorMessage.isEmpty {\n            errorMessage = object.operationAfterPasting (additionalDictionary: additionalDictionaryArray [idx],\n                                                         optionalDocument: self.mDocument,\n                                                         objectArray: self.objectArray.values)\n          }\n          if errorMessage.isEmpty {\n            object.translate (xBy: X, yBy: Y, userSet: &userSet)\n            newObjects.append (object)\n          }\n        }\n      }\n      if errorMessage.isEmpty {\n        var objects = self.objectArray\n        objects.append (objects: newObjects)\n        self.mModel\?.setProp (objects)\n        self.selectedSet = EBReferenceSet (newObjects)\n      }else{\n         let alert = NSAlert ()\n         alert.messageText = errorMessage\n         _ = alert.addButton (withTitle: \"Ok\")\n         alert.beginSheetModal (for: inWindow) { (inReturnCode : NSApplication.ModalResponse) in }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canDelete () -> Bool {\n    if self.selectedArray_property.propset.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray_property.propset.values {\n        if !object.canBeDeleted () {\n          return false\n        }\n      }\n      return true\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final var mAfterObjectRemovingCallback : Optional < () -> Void > = nil\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func deleteSelectedObjects () {\n    if self.canDelete (), let model = self.mModel {\n    //--- Remove selected objects\n      let objectsToRemove = self.selectedArray_property.propset\n      for object in objectsToRemove.values {\n        object.operationBeforeRemoving ()\n        var objects = model.propval\n        if let idx = objects.firstIndex (of: object) {\n          objects.remove (at: idx)\n          model.setProp (objects)\n        }\n      }\n    //---\n      self.mAfterObjectRemovingCallback\? ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func selectAllObjects () {\n    self.selectedSet = EBReferenceSet (self.objectArray.values)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING FORWARD\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringForward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray.last! < (objects.count - 1)\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringForward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n       let object = objects [idx]\n       objects.remove (at: idx)\n       objects.insert (object, at: idx+1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // BRING TO FRONT\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canBringToFront : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var top = objects.count - 1\n      for idx in sortedIndexArray.reversed () {\n        if idx < top {\n          return true\n        }\n        top -= 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func bringToFront () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.append (object)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND BACKWARD\n   // MARK: -\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendBackward : Bool {\n    let objects = self.objectArray\n    var result = (objects.count > 1) && (self.selectedArray_property.propset.count > 0)\n    if result {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      result = sortedIndexArray [0] > 0\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendBackward () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      objects.insert (object, at: idx-1)\n    }\n    self.mModel\?.setProp (objects)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SEND TO BACK\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func sendToBack () {\n    var objects = self.objectArray\n    let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n    var newObjectArray = EBReferenceArray <") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("> ()\n    for idx in sortedIndexArray.reversed () {\n      let object = objects [idx]\n      objects.remove (at: idx)\n      newObjectArray.append (object)\n    }\n    newObjectArray.reverse ()\n    newObjectArray.append (objects: objects)\n    self.mModel\?.setProp (newObjectArray)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canSendToBack : Bool {\n    let objects = self.objectArray\n    if (objects.count > 1) && (self.selectedArray_property.propset.count > 0) {\n      let sortedIndexArray = self.sortedIndexArrayOfSelectedObjects ()\n      var bottom = 0\n      for idx in sortedIndexArray {\n        if idx > bottom {\n          return true\n        }\n        bottom += 1\n      }\n    }\n    return false\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // SNAP TO GRID\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func snapToGrid (_ inGrid : Int) {\n    for object in self.selectedArray_property.propset.values {\n      object.snapToGrid (inGrid)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func canSnapToGrid (_ inGrid : Int) -> Bool {\n    for object in self.selectedArray_property.propset.values {\n      if object.canSnapToGrid (inGrid) {\n        return true\n      }\n    }\n    return false\n  }\n\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // HORIZONTAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipHorizontally () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipHorizontally ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipHorizontally : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipHorizontally () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // VERTICAL FLIP\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically_property = EBTransientProperty <Bool> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func flipVertically () {\n    for object in self.selectedArray_property.propset.values {\n      object.flipVertically ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canFlipVertically : Bool {\n    for object in self.selectedArray_property.propset.values {\n      if !object.canFlipVertically () {\n        return false\n      }\n    }\n    return self.selectedArray_property.propset.count > 0\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // ROTATE 90\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90_property = EBTransientProperty <Bool> ()\n  private var mRotate90PointSet = Set <CanariPoint> ()\n\n // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var canRotate90 : Bool {\n    self.mRotate90PointSet.removeAll ()\n    if self.selectedArray.count == 0 {\n      return false\n    }else{\n      for object in self.selectedArray.values {\n        if !object.canRotate90 (accumulatedPoints: &self.mRotate90PointSet) {\n          return false\n        }\n      }\n      return !self.mRotate90PointSet.isEmpty\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90Clockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90Clockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func rotate90CounterClockwise () {\n    let r = CanariRect (points: Array (self.mRotate90PointSet))\n    var userSet = EBReferenceSet <EBManagedObject> ()\n    for object in self.selectedArray.values {\n      object.rotate90CounterClockwise (from: r.center, userSet: &userSet)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func addToSelection (objects inObjects : [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("]) {\n    if let objectSet = self.mModel\?.propset {\n      var newSelectedSet = self.selectedArray_property.propset\n      for object in inObjects {\n        if objectSet.contains (object) {\n          newSelectedSet.insert (object)\n        }\n      }\n      self.selectedSet = newSelectedSet\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n /* func addToSelection (objectsWithIndex inIndexes : [Int]) {\n    let objects = self.objectArray\n    var newSelectedSet = self.selectedArray_property.propset\n    for idx in inIndexes {\n      let newSelectedObject = objects [idx]\n      newSelectedSet.insert (newSelectedObject)\n    }\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n/*  func removeFromSelection (objectWithIndex inIndex : Int) {\n    let objects = self.objectArray\n    let object = objects [inIndex]\n    var newSelectedSet = self.selectedArray_property.propset\n    newSelectedSet.remove (object)\n    self.selectedSet = newSelectedSet\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func clearSelection () {\n    self.selectedSet = EBReferenceSet ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (objectsWithIndexes inIndexes : [Int]) {\n    let objects = self.objectArray\n    var selectedObjects = [") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString ("] ()\n    for index in inIndexes {\n      let newSelectedObject = objects [index]\n      selectedObjects.append (newSelectedObject)\n    }\n    self.selectedSet = EBReferenceSet (selectedObjects)\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // MARK: -\n  //  INSPECTOR\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mInspectorReceivingView : NSView\? = nil\n  private var mCurrentAttachedView : NSView\? = nil\n  private var mInspectorDictionary = [ObjectIdentifier : NSView] ()\n  private var mInspectorObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorReceivingView : NSView\?) {\n    self.mInspectorReceivingView = inspectorReceivingView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func register (inspectorView : NSView\?, for inEntity : EBGraphicManagedObject.Type) {\n    self.mInspectorDictionary [ObjectIdentifier (inEntity)] = inspectorView\n    self.updateInspectorViews ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStartsObservingSelection () {\n    self.selectedArray_property.startsBeingObserved (by: self.mInspectorObserver)\n    self.mInspectorObserver.mEventCallBack = { [weak self] in self\?.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func inspectorViewManagerStopsObservingSelection () {\n    self.mInspectorObserver.mEventCallBack = nil\n    self.selectedArray_property.stopsBeingObserved (by: self.mInspectorObserver)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func updateInspectorViews () {\n    if let inspectorView = self.mInspectorReceivingView {\n    //--- Remove current attached view\n      self.mCurrentAttachedView\?.removeFromSuperview ()\n    //--- Add the new attached view\n      if self.mViewIsHidden {\n        self.mCurrentAttachedView = nil\n      }else if self.selectedArray.count == 0 {\n        let tf = self.textField (\"Empty Selection\", inspectorView.frame)\n        inspectorView.addSubview (tf)\n        self.mCurrentAttachedView = tf\n      }else{\n        var selectionTypes = Set <ObjectIdentifier> ()\n        for object in self.selectedArray.values {\n          let T = ObjectIdentifier (type (of: object))\n          selectionTypes.insert (T)\n        }\n        if selectionTypes.count > 1 {\n          let tf = self.textField (\"Multiple Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }else if let selectionInspectorView = self.mInspectorDictionary [selectionTypes.first!] {\n          selectionInspectorView.autoresizingMask = [.width, .minYMargin]\n          selectionInspectorView.frame = inspectorView.frame\n          inspectorView.addSubview (selectionInspectorView)\n          self.mCurrentAttachedView = selectionInspectorView\n        }else{\n          let tf = self.textField (\"No Inspector for this Selection\", inspectorView.frame)\n          inspectorView.addSubview (tf)\n          self.mCurrentAttachedView = tf\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private func textField (_ inString : String, _ inspectorFrame : NSRect) -> NSTextField {\n    let textHeight : CGFloat = 30.0\n    let r = NSRect (\n      x: 0.0,\n      y: inspectorFrame.origin.y + (inspectorFrame.size.height - textHeight) / 2.0,\n      width: inspectorFrame.size.width,\n      height: textHeight\n    )\n    let tf = NSTextField (frame: r)\n    tf.alignment = .center\n    tf.isBezeled = false\n    tf.isBordered = false\n    tf.drawsBackground = false\n    tf.isEnabled = true\n    tf.isEditable = false\n    tf.autoresizingMask = [.width, .minYMargin, .maxYMargin]\n    tf.stringValue = inString\n    tf.font = NSFont.boldSystemFont (ofSize: NSFont.systemFontSize * 1.25)\n    tf.textColor = NSColor.lightGray\n    return tf\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mViewIsHidden = false {\n    didSet { self.updateInspectorViews () }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var isHidden : Bool {\n    get { return self.mViewIsHidden }\n    set { self.mViewIsHidden = newValue }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayControllerGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_arrayControllerGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                          const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                          GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_arrayControllerGeneration temp_0 = this ;
  const GGS_arrayControllerGeneration temp_1 = this ;
  const GGS_arrayControllerGeneration temp_2 = this ;
  const GGS_arrayControllerGeneration temp_3 = this ;
  const GGS_arrayControllerGeneration temp_4 = this ;
  const GGS_arrayControllerGeneration temp_5 = this ;
  GGS_string var_s_13211 = GGS_string (filewrapperTemplate_arrayControllerGenerationTemplate_arrayControllerImplementationInSwift (inCompiler, temp_0.readProperty_mOwnerName (), temp_1.readProperty_mControllerName ().readProperty_string (), temp_2.readProperty_mArrayControllerModelKind (), temp_3.readProperty_mModelTypeName (), temp_4.readProperty_mElementTypeName (), temp_5.readProperty_mElementTypeIsGraphic () COMMA_SOURCE_FILE ("array-controller.ggs", 333))) ;
  {
  const GGS_arrayControllerGeneration temp_6 = this ;
  const GGS_arrayControllerGeneration temp_7 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-array-").add_operation (temp_6.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 343)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 343)).add_operation (temp_7.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 343)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 343)), var_s_13211, inCompiler COMMA_SOURCE_FILE ("array-controller.ggs", 341)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_1449 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 33)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_1449, temp_3, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 34)) ;
  }
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_1449, temp_4.readProperty_mClassName () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 35)) ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
    test_5 = temp_6.readProperty_mIsRoot ().operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 36)).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_7 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
      ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_7.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)).add_operation (temp_8.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)), temp_9.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 37)) ;
      }
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
      test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mRootEntityName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_10) {
        {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
        ioArgument_ioGraph.setter_addEdge (var_node_1449, GGS_lstring::init_21__21_ (temp_12.readProperty_mRootEntityName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)).add_operation (temp_13.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)), temp_14.readProperty_mToManyPropertyName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 39)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_autoLayoutTableViewControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_1 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)).add_operation (temp_1.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 46)), temp_2.readProperty_mControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_5209 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 145)) ;
  if (nullptr != objectArray_5209) {
    macroValidSharedObject (objectArray_5209, cMapElement_classMap) ;
    GGS_actionMap temp_1 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
    temp_1.enterElement (GGS_actionMap_2E_element::init_21_ (GGS_string ("add").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
    temp_1.enterElement (GGS_actionMap_2E_element::init_21_ (GGS_string ("remove").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 148)) ;
    GGS_actionMap var_controllerActions_5316 = temp_1 ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_3 = this ;
      test_2 = temp_3.readProperty_mIsRoot ().boolEnum () ;
      if (kBoolTrue == test_2) {
        GGS_propertyMap var_rootProperties_5477 ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
        GGS_classKind joker_5468 ; // Joker input parameter
        GGS_actionMap joker_5493_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_5493_1 ; // Joker input parameter
        ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_4.readProperty_mRootEntityName (), joker_5468, var_rootProperties_5477, joker_5493_2, joker_5493_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 150)) ;
        GGS_propertyKind var_classKind_5561 ;
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_5 = this ;
        GGS_actionMap joker_5572_2 ; // Joker input parameter
        GGS_bool joker_5572_1 ; // Joker input parameter
        var_rootProperties_5477.method_searchKey (temp_5.readProperty_mToManyPropertyName (), var_classKind_5561, joker_5572_2, joker_5572_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 151)) ;
        switch (var_classKind_5561.enumValue ()) {
        case GGS_propertyKind::Enumeration::invalid:
          break ;
        case GGS_propertyKind::Enumeration::enum_property:
          {
            GGS_typeKind extractedValue_5622__0 ;
            GGS_propertyAccessibility extractedValue_5622__1 ;
            var_classKind_5561.getAssociatedValuesFor_property (extractedValue_5622__0, extractedValue_5622__1) ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_6 = this ;
            TC_Array <FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (temp_6.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray7  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 154)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toMany:
          {
            GGS_lstring extractedValue_5724_typeName_0 ;
            GGS_propertyAccessibility extractedValue_5734__1 ;
            GGS_bool extractedValue_5737_graphic_2 ;
            GGS_toManyRelationshipOptionAST extractedValue_5746__3 ;
            var_classKind_5561.getAssociatedValuesFor_toMany (extractedValue_5724_typeName_0, extractedValue_5734__1, extractedValue_5737_graphic_2, extractedValue_5746__3) ;
            GGS_propertyKind var_kind_5763 = GGS_propertyKind::class_func_arrayController (extractedValue_5724_typeName_0, extractedValue_5737_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 156)) ;
            {
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_8 = this ;
            objectArray_5209->mProperty_mPropertyMap.setter_insertKey (temp_8.readProperty_mControllerName (), var_kind_5763, var_controllerActions_5316, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 160)) ;
            }
            {
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_9 = this ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_11 = this ;
            objectArray_5209->mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_9.readProperty_mControllerName ().readProperty_string (), GGS_string ("rootObject.").add_operation (temp_10.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 164)), temp_11.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 162)) ;
            }
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_toOne:
          {
            GGS_lstring extractedValue_6221__0 ;
            GGS_propertyAccessibility extractedValue_6221__1 ;
            GGS_bool extractedValue_6221__2 ;
            GGS_toOneOppositeRelationship extractedValue_6221__3 ;
            GGS_bool extractedValue_6221__4 ;
            var_classKind_5561.getAssociatedValuesFor_toOne (extractedValue_6221__0, extractedValue_6221__1, extractedValue_6221__2, extractedValue_6221__3, extractedValue_6221__4) ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_12 = this ;
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray13  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 169)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_arrayController:
          {
            GGS_lstring extractedValue_6333__0 ;
            GGS_bool extractedValue_6333__1 ;
            var_classKind_5561.getAssociatedValuesFor_arrayController (extractedValue_6333__0, extractedValue_6333__1) ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
            TC_Array <FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (temp_14.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray15  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 171)) ;
          }
          break ;
        case GGS_propertyKind::Enumeration::enum_selectionController:
          {
            GGS_string extractedValue_6448__0 ;
            var_classKind_5561.getAssociatedValuesFor_selectionController (extractedValue_6448__0) ;
            const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
            TC_Array <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray17  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 173)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_2) {
      GGS_propertyKind var_classKind_6611 ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_18 = this ;
      GGS_actionMap joker_6622_2 ; // Joker input parameter
      GGS_bool joker_6622_1 ; // Joker input parameter
      objectArray_5209->mProperty_mPropertyMap.method_searchKey (temp_18.readProperty_mToManyPropertyName (), var_classKind_6611, joker_6622_2, joker_6622_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 176)) ;
      switch (var_classKind_6611.enumValue ()) {
      case GGS_propertyKind::Enumeration::invalid:
        break ;
      case GGS_propertyKind::Enumeration::enum_property:
        {
          GGS_typeKind extractedValue_6672__0 ;
          GGS_propertyAccessibility extractedValue_6672__1 ;
          var_classKind_6611.getAssociatedValuesFor_property (extractedValue_6672__0, extractedValue_6672__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_19.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray20  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 179)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toMany:
        {
          GGS_lstring extractedValue_6774_typeName_0 ;
          GGS_propertyAccessibility extractedValue_6784__1 ;
          GGS_bool extractedValue_6787_graphic_2 ;
          GGS_toManyRelationshipOptionAST extractedValue_6796__3 ;
          var_classKind_6611.getAssociatedValuesFor_toMany (extractedValue_6774_typeName_0, extractedValue_6784__1, extractedValue_6787_graphic_2, extractedValue_6796__3) ;
          GGS_propertyKind var_kind_6813 = GGS_propertyKind::class_func_arrayController (extractedValue_6774_typeName_0, extractedValue_6787_graphic_2  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 181)) ;
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
          objectArray_5209->mProperty_mPropertyMap.setter_insertKey (temp_21.readProperty_mControllerName (), var_kind_6813, var_controllerActions_5316, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 185)) ;
          }
          {
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_22 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_24 = this ;
          objectArray_5209->mProperty_mPropertyGenerationList.setter_append (GGS_autoLayoutTableViewControllerPropertyGeneration::init_21__21__21_ (temp_22.readProperty_mControllerName ().readProperty_string (), temp_23.readProperty_mToManyPropertyName ().readProperty_string (), temp_24.readProperty_mClassName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 187)) ;
          }
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_toOne:
        {
          GGS_lstring extractedValue_7255__0 ;
          GGS_propertyAccessibility extractedValue_7255__1 ;
          GGS_bool extractedValue_7255__2 ;
          GGS_toOneOppositeRelationship extractedValue_7255__3 ;
          GGS_bool extractedValue_7255__4 ;
          var_classKind_6611.getAssociatedValuesFor_toOne (extractedValue_7255__0, extractedValue_7255__1, extractedValue_7255__2, extractedValue_7255__3, extractedValue_7255__4) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 194)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_arrayController:
        {
          GGS_lstring extractedValue_7367__0 ;
          GGS_bool extractedValue_7367__1 ;
          var_classKind_6611.getAssociatedValuesFor_arrayController (extractedValue_7367__0, extractedValue_7367__1) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_27 = this ;
          TC_Array <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray28  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 196)) ;
        }
        break ;
      case GGS_propertyKind::Enumeration::enum_selectionController:
        {
          GGS_string extractedValue_7482__0 ;
          var_classKind_6611.getAssociatedValuesFor_selectionController (extractedValue_7482__0) ;
          const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
          TC_Array <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mRootEntityName ().readProperty_location (), GGS_string ("a toMany relationship is required here"), fixItArray30  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 198)) ;
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerDeclarationAST thirdAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerDeclarationAST::method_thirdAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  GGS_generationStruct & ioArgument_ioGeneration,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyMap var_preferencesPropertyMap_8081 ;
  GGS_classKind joker_8068 ; // Joker input parameter
  GGS_actionMap joker_8109_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_8109_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 213)), GGS_location::class_func_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 213)), inCompiler COMMA_HERE), joker_8068, var_preferencesPropertyMap_8081, joker_8109_2, joker_8109_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 212)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 219)) ;
  temp_0.enterElement (GGS_string ("allowsEmptySelection"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 219)) ;
  temp_0.enterElement (GGS_string ("allowsMultipleSelection"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 219)) ;
  GGS_stringset var_attributes_8219 = temp_0 ;
  GGS_typeKindList temp_1 = GGS_typeKindList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 220)) ;
  temp_1.enterElement (GGS_typeKindList_2E_element::init_21_ (GGS_typeKind::class_func_boolType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 220)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 220)) ;
  GGS_typeKindList var_allowedTypes_8301 = temp_1 ;
  GGS_stringset temp_2 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 221)) ;
  GGS_stringset var_definedAttributes_8362 = temp_2 ;
  GGS__32_stringlist temp_3 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 222)) ;
  GGS__32_stringlist var_attributeListForGeneration_8404 = temp_3 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_4 = this ;
  cEnumerator_autoLayoutTableViewControllerAttributListAST enumerator_8449 (temp_4.readProperty_mTableViewControllerAttributListAST (), EnumerationOrder::up) ;
  while (enumerator_8449.hasCurrentObject ()) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_attributes_8219.getter_hasKey (enumerator_8449.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 224)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 224)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_8449.current_mAttributeName (HERE).readProperty_location (), GGS_string ("unknown attribute"), fixItArray6  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 225)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_definedAttributes_8362.getter_hasKey (enumerator_8449.current_mAttributeName (HERE).readProperty_string () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 226)).boolEnum () ;
        if (kBoolTrue == test_7) {
          TC_Array <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (enumerator_8449.current_mAttributeName (HERE).readProperty_location (), GGS_string ("attribute multiply defined"), fixItArray8  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 227)) ;
        }
      }
      if (kBoolFalse == test_7) {
        {
        var_definedAttributes_8362.setter_insert (enumerator_8449.current_mAttributeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 229)) ;
        }
      }
    }
    GGS_string var_valueAsString_8834 ;
    callExtensionMethod_analyzeDefaultValueType ((cPtr_abstractDefaultValue *) enumerator_8449.current_mAttributeValue (HERE).ptr (), var_allowedTypes_8301, var_preferencesPropertyMap_8081, var_valueAsString_8834, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 231)) ;
    {
    var_attributeListForGeneration_8404.setter_append (enumerator_8449.current_mAttributeName (HERE).readProperty_string (), var_valueAsString_8834, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 232)) ;
    }
    enumerator_8449.gotoNextObject () ;
  }
  cEnumerator_stringset enumerator_8935 (var_attributes_8219, EnumerationOrder::up) ;
  while (enumerator_8935.hasCurrentObject ()) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_definedAttributes_8362.getter_hasKey (enumerator_8935.current (HERE) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 235)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 235)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GGS_autoLayoutTableViewControllerDeclarationAST temp_10 = this ;
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (temp_10.readProperty_mControllerName ().readProperty_location (), GGS_string ("attribute '").add_operation (enumerator_8935.current (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 236)).add_operation (GGS_string ("' not defined"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 236)), fixItArray11  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 236)) ;
      }
    }
    enumerator_8935.gotoNextObject () ;
  }
  GGS_propertyMap var_boundModelPropertyMap_9106 ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_13 = this ;
    test_12 = temp_13.readProperty_mIsRoot ().boolEnum () ;
    if (kBoolTrue == test_12) {
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_14 = this ;
      GGS_classKind joker_9230 ; // Joker input parameter
      GGS_actionMap joker_9272_2 ; // Joker input parameter
      GGS_propertyGenerationList joker_9272_1 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_14.readProperty_mRootEntityName (), joker_9230, var_boundModelPropertyMap_9106, joker_9272_2, joker_9272_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 242)) ;
    }
  }
  if (kBoolFalse == test_12) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_15 = this ;
    GGS_classKind joker_9364 ; // Joker input parameter
    GGS_actionMap joker_9406_2 ; // Joker input parameter
    GGS_propertyGenerationList joker_9406_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_15.readProperty_mClassName (), joker_9364, var_boundModelPropertyMap_9106, joker_9406_2, joker_9406_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 249)) ;
  }
  GGS_propertyKind var_boundModelClassKind_9515 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_16 = this ;
  GGS_actionMap joker_9541_2 ; // Joker input parameter
  GGS_bool joker_9541_1 ; // Joker input parameter
  var_boundModelPropertyMap_9106.method_searchKey (temp_16.readProperty_mToManyPropertyName (), var_boundModelClassKind_9515, joker_9541_2, joker_9541_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 256)) ;
  GGS_propertyMap var_propertyMap_9655 ;
  GGS_autoLayoutTableViewControllerModelKind var_arrayControllerModelKind_9713 ;
  GGS_bool var_graphic_9750 ;
  GGS_string var_elementTypeName_9772 ;
  switch (var_boundModelClassKind_9515.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_9835__0 ;
      GGS_propertyAccessibility extractedValue_9835__1 ;
      var_boundModelClassKind_9515.getAssociatedValuesFor_property (extractedValue_9835__0, extractedValue_9835__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_17 = this ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray18  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 268)) ;
      var_graphic_9750.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9713.drop () ; // Release error dropped variable
      var_propertyMap_9655.drop () ; // Release error dropped variable
      var_elementTypeName_9772.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_10013_typeName_0 ;
      GGS_propertyAccessibility extractedValue_10023_accessibility_1 ;
      GGS_bool extractedValue_10038_isGraphic_2 ;
      GGS_toManyRelationshipOptionAST extractedValue_10049__3 ;
      var_boundModelClassKind_9515.getAssociatedValuesFor_toMany (extractedValue_10013_typeName_0, extractedValue_10023_accessibility_1, extractedValue_10038_isGraphic_2, extractedValue_10049__3) ;
      var_elementTypeName_9772 = extractedValue_10013_typeName_0.readProperty_string () ;
      var_graphic_9750 = extractedValue_10038_isGraphic_2 ;
      GGS_autoLayoutTableViewControllerModelKind temp_19 ;
      const enumGalgasBool test_20 = extractedValue_10023_accessibility_1.getter_isTransient (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 274)).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_transientArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 275)) ;
      }else if (kBoolFalse == test_20) {
        temp_19 = GGS_autoLayoutTableViewControllerModelKind::class_func_entityArray (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 276)) ;
      }
      var_arrayControllerModelKind_9713 = temp_19 ;
      GGS_classKind joker_10281 ; // Joker input parameter
      GGS_actionMap joker_10299 ; // Joker input parameter
      GGS_propertyGenerationList joker_10303 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (extractedValue_10013_typeName_0, joker_10281, var_propertyMap_9655, joker_10299, joker_10303, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 278)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_10322__0 ;
      GGS_propertyAccessibility extractedValue_10322__1 ;
      GGS_bool extractedValue_10322__2 ;
      GGS_toOneOppositeRelationship extractedValue_10322__3 ;
      GGS_bool extractedValue_10322__4 ;
      var_boundModelClassKind_9515.getAssociatedValuesFor_toOne (extractedValue_10322__0, extractedValue_10322__1, extractedValue_10322__2, extractedValue_10322__3, extractedValue_10322__4) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_21 = this ;
      TC_Array <FixItDescription> fixItArray22 ;
      inCompiler->emitSemanticError (temp_21.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray22  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 280)) ;
      var_graphic_9750.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9713.drop () ; // Release error dropped variable
      var_propertyMap_9655.drop () ; // Release error dropped variable
      var_elementTypeName_9772.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_10510__0 ;
      GGS_bool extractedValue_10510__1 ;
      var_boundModelClassKind_9515.getAssociatedValuesFor_arrayController (extractedValue_10510__0, extractedValue_10510__1) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_23 = this ;
      TC_Array <FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray24  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 284)) ;
      var_graphic_9750.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9713.drop () ; // Release error dropped variable
      var_propertyMap_9655.drop () ; // Release error dropped variable
      var_elementTypeName_9772.drop () ; // Release error dropped variable
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_10701__0 ;
      var_boundModelClassKind_9515.getAssociatedValuesFor_selectionController (extractedValue_10701__0) ;
      const GGS_autoLayoutTableViewControllerDeclarationAST temp_25 = this ;
      TC_Array <FixItDescription> fixItArray26 ;
      inCompiler->emitSemanticError (temp_25.readProperty_mToManyPropertyName ().readProperty_location (), GGS_string ("a toMany property is required here"), fixItArray26  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 288)) ;
      var_graphic_9750.drop () ; // Release error dropped variable
      var_arrayControllerModelKind_9713.drop () ; // Release error dropped variable
      var_propertyMap_9655.drop () ; // Release error dropped variable
      var_elementTypeName_9772.drop () ; // Release error dropped variable
    }
    break ;
  }
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration temp_27 = GGS_autoLayoutTableViewControllerBoundColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 292)) ;
  GGS_autoLayoutTableViewControllerBoundColumnListForGeneration var_arrayControllerBoundColumnListForGeneration_10935 = temp_27 ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration temp_28 = GGS_autoLayoutTableViewControllerSortedColumnListForGeneration::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 293)) ;
  GGS_autoLayoutTableViewControllerSortedColumnListForGeneration var_arrayControllerSortedColumnListForGeneration_11050 = temp_28 ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_29 = this ;
  cEnumerator_autoLayoutTableViewControllerBoundColumnListAST enumerator_11152 (temp_29.readProperty_mTableViewControllerBoundColumnListAST (), EnumerationOrder::up) ;
  while (enumerator_11152.hasCurrentObject ()) {
    GGS_autoLayoutClassParameterList temp_30 = GGS_autoLayoutClassParameterList::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 296)) ;
    GGS_autoLayoutClassParameterList var_formalArgumentList_11280 = temp_30 ;
    {
    var_formalArgumentList_11280.setter_append (GGS_string ("title").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 297)), GGS_autoLayoutClassParameterType::class_func_typeString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 297)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 297)) ;
    }
    {
    var_formalArgumentList_11280.setter_append (GGS_string ("minWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 298)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 298)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 298)) ;
    }
    {
    var_formalArgumentList_11280.setter_append (GGS_string ("maxWidth").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), GGS_autoLayoutClassParameterType::class_func_typeInt (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 299)) ;
    }
    {
    var_formalArgumentList_11280.setter_append (GGS_string ("headerAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 300)) ;
    }
    {
    var_formalArgumentList_11280.setter_append (GGS_string ("contentAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), GGS_autoLayoutClassParameterType::class_func_typeEnum (GGS_string ("TextAlignment").getter_nowhere (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 301)) ;
    }
    GGS__32_stringlist temp_31 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 302)) ;
    GGS__32_stringlist var_actualParameterList_11730 = temp_31 ;
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      test_32 = GGS_bool (ComparisonKind::notEqual, var_formalArgumentList_11280.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)).objectCompare (enumerator_11152.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 303)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        TC_Array <FixItDescription> fixItArray33 ;
        inCompiler->emitSemanticError (enumerator_11152.current_mPropertyName (HERE).readProperty_location (), enumerator_11152.current_mColumnParameterListAST (HERE).getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)).add_operation (GGS_string (" parameter(s), "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)).add_operation (var_formalArgumentList_11280.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)).getter_string (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)).add_operation (GGS_string (" required"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)), fixItArray33  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 304)) ;
      }
    }
    if (kBoolFalse == test_32) {
      cEnumerator_autoLayoutClassParameterList enumerator_11975 (var_formalArgumentList_11280, EnumerationOrder::up) ;
      cEnumerator_astAutoLayoutViewInstructionParameterList enumerator_12035 (enumerator_11152.current_mColumnParameterListAST (HERE), EnumerationOrder::up) ;
      while (enumerator_11975.hasCurrentObject () && enumerator_12035.hasCurrentObject ()) {
        enumGalgasBool test_34 = kBoolTrue ;
        if (kBoolTrue == test_34) {
          test_34 = GGS_bool (ComparisonKind::notEqual, enumerator_11975.current_mParameterName (HERE).readProperty_string ().objectCompare (enumerator_12035.current_mParameterName (HERE).readProperty_string ())).boolEnum () ;
          if (kBoolTrue == test_34) {
            TC_Array <FixItDescription> fixItArray35 ;
            inCompiler->emitSemanticError (enumerator_12035.current_mParameterName (HERE).readProperty_location (), GGS_string ("required argument name: ").add_operation (enumerator_11975.current_mParameterName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 308)), fixItArray35  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 308)) ;
          }
        }
        enumGalgasBool test_36 = kBoolTrue ;
        if (kBoolTrue == test_36) {
          const GGS_autoLayoutClassParameterType_2E_typeEnum var_formalTypeEnum_12229 = enumerator_11975.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)).unwrappedValue () ;
          if (!enumerator_11975.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)).isValuated ()) {
            test_36 = kBoolFalse ;
          }
          if (kBoolTrue == test_36) {
            const GGS_autoLayoutClassParameterType_2E_typeEnum var_actualTypeEnum_12274 = enumerator_12035.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)).unwrappedValue () ;
            if (!enumerator_12035.current_mParameterType (HERE).getter_getTypeEnum (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 310)).isValuated ()) {
              test_36 = kBoolFalse ;
            }
            if (kBoolTrue == test_36) {
              GGS_classKind var_typeKind_12394 ;
              GGS_propertyMap joker_12404_3 ; // Joker input parameter
              GGS_actionMap joker_12404_2 ; // Joker input parameter
              GGS_propertyGenerationList joker_12404_1 ; // Joker input parameter
              ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (var_formalTypeEnum_12229.readProperty_name (), var_typeKind_12394, joker_12404_3, joker_12404_2, joker_12404_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 311)) ;
              enumGalgasBool test_37 = kBoolTrue ;
              if (kBoolTrue == test_37) {
                const GGS_classKind_2E_atomic var_atomicTypeKind_12426 = var_typeKind_12394.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
                if (!var_typeKind_12394.getter_getAtomic (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
                  test_37 = kBoolFalse ;
                }
                if (kBoolTrue == test_37) {
                  const GGS_typeKind_2E_enumType var_atomicEnumType_12467 = var_atomicTypeKind_12426.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).unwrappedValue () ;
                  if (!var_atomicTypeKind_12426.readProperty_kind ().getter_getEnumType (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 312)).isValuated ()) {
                    test_37 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_37) {
                    GGS_uint joker_12592 ; // Joker input parameter
                    var_atomicEnumType_12467.readProperty_constantMap ().method_searchKey (var_actualTypeEnum_12274.readProperty_name (), joker_12592, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 313)) ;
                  }
                }
              }
              if (kBoolFalse == test_37) {
                TC_Array <FixItDescription> fixItArray38 ;
                inCompiler->emitSemanticError (var_formalTypeEnum_12229.readProperty_name ().readProperty_location (), GGS_string ("this type name is not an enum"), fixItArray38  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 315)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_36) {
          enumGalgasBool test_39 = kBoolTrue ;
          if (kBoolTrue == test_39) {
            test_39 = GGS_bool (ComparisonKind::notEqual, enumerator_12035.current_mParameterType (HERE).objectCompare (enumerator_11975.current_mParameterType (HERE))).boolEnum () ;
            if (kBoolTrue == test_39) {
              TC_Array <FixItDescription> fixItArray40 ;
              inCompiler->emitSemanticError (enumerator_12035.current_mParameterName (HERE).readProperty_location (), GGS_string ("the formal parameter requires ").add_operation (extensionGetter_string (enumerator_11975.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)).add_operation (GGS_string (", actual parameter is "), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)).add_operation (extensionGetter_string (enumerator_12035.current_mParameterType (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)), fixItArray40  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 318)) ;
            }
          }
        }
        enumGalgasBool test_41 = kBoolTrue ;
        if (kBoolTrue == test_41) {
          const GGS_astAutoLayoutViewInstructionParameterValue_2E_string var_actualString_12883 = enumerator_12035.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).unwrappedValue () ;
          if (!enumerator_12035.current_mParameter (HERE).getter_getString (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 320)).isValuated ()) {
            test_41 = kBoolFalse ;
          }
          if (kBoolTrue == test_41) {
            {
            var_actualParameterList_11730.setter_append (enumerator_11975.current_mParameterName (HERE).readProperty_string (), var_actualString_12883.readProperty_value (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 321)) ;
            }
          }
        }
        if (kBoolFalse == test_41) {
          TC_Array <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (enumerator_12035.current_mParameterName (HERE).readProperty_location (), GGS_string ("parameter value is not string convertible"), fixItArray42  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 323)) ;
        }
        enumerator_11975.gotoNextObject () ;
        enumerator_12035.gotoNextObject () ;
      }
    }
    enumGalgasBool test_43 = kBoolTrue ;
    if (kBoolTrue == test_43) {
      test_43 = GGS_bool (ComparisonKind::notEqual, enumerator_11152.current_mSortPropertyName (HERE).readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_43) {
        GGS_propertyKind var_sortPropertyKind_13249 ;
        GGS_actionMap joker_13275_2 ; // Joker input parameter
        GGS_bool joker_13275_1 ; // Joker input parameter
        var_propertyMap_9655.method_searchKey (enumerator_11152.current_mSortPropertyName (HERE), var_sortPropertyKind_13249, joker_13275_2, joker_13275_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 329)) ;
        enumGalgasBool test_44 = kBoolTrue ;
        if (kBoolTrue == test_44) {
          test_44 = extensionGetter_isComparable (var_sortPropertyKind_13249, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 334)).operator_not (SOURCE_FILE ("auto-layout-table-view-controller.ggs", 334)).boolEnum () ;
          if (kBoolTrue == test_44) {
            TC_Array <FixItDescription> fixItArray45 ;
            inCompiler->emitSemanticError (enumerator_11152.current_mSortPropertyName (HERE).readProperty_location (), GGS_string ("this property is not comparable"), fixItArray45  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 335)) ;
          }
        }
        {
        var_arrayControllerSortedColumnListForGeneration_11050.setter_append (enumerator_11152.current_mPropertyName (HERE).readProperty_string (), var_sortPropertyKind_13249, enumerator_11152.current_mSortPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 337)) ;
        }
      }
    }
    GGS_propertyKind var_propertyKind_13671 ;
    GGS_actionMap joker_13691_2 ; // Joker input parameter
    GGS_bool joker_13691_1 ; // Joker input parameter
    var_propertyMap_9655.method_searchKey (enumerator_11152.current_mPropertyName (HERE), var_propertyKind_13671, joker_13691_2, joker_13691_1, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 344)) ;
    {
    var_arrayControllerBoundColumnListForGeneration_10935.setter_append (enumerator_11152.current_mEditable (HERE), enumerator_11152.current_mSortPropertyName (HERE).readProperty_string (), enumerator_11152.current_mPropertyName (HERE).readProperty_string (), extensionGetter_swiftTypeName (var_propertyKind_13671, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 353)), GGS_string::makeEmptyString (), var_actualParameterList_11730, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 349)) ;
    }
    enumerator_11152.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_46 = this ;
  GGS_string temp_47 ;
  const enumGalgasBool test_48 = temp_46.readProperty_mIsRoot ().boolEnum () ;
  if (kBoolTrue == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_49 = this ;
    temp_47 = GGS_string ("self.rootObject.").add_operation (temp_49.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 364)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 364)) ;
  }else if (kBoolFalse == test_48) {
    const GGS_autoLayoutTableViewControllerDeclarationAST temp_50 = this ;
    temp_47 = GGS_string ("self.").add_operation (temp_50.readProperty_mToManyPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 365)).add_operation (GGS_string ("_property"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 365)) ;
  }
  GGS_string var_modelString_14270 = temp_47 ;
  {
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_51 = this ;
  const GGS_autoLayoutTableViewControllerDeclarationAST temp_52 = this ;
  ioArgument_ioGeneration.mProperty_mFileGenerationList.setter_append (GGS_autoLayoutTableViewControllerGeneration::init_21__21__21__21__21__21__21__21__21__21_ (temp_51.readProperty_mClassName ().readProperty_string (), temp_52.readProperty_mControllerName (), var_modelString_14270, var_arrayControllerBoundColumnListForGeneration_10935, var_arrayControllerSortedColumnListForGeneration_11050, GGS_string ("ReadWriteArrayOf_").add_operation (var_elementTypeName_9772, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 374)), var_arrayControllerModelKind_9713, var_elementTypeName_9772, var_graphic_9750, var_attributeListForGeneration_8404, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 368)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_StoredArrayOf_5F_.setter_insert (var_elementTypeName_9772, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 381)) ;
  }
  {
  ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOf_5F_.setter_insert (var_elementTypeName_9772, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 382)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool constinArgument_inPreferences,
                                                                                                 const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                                 const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inPreferences.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 403)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 403)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 403)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
      result_result.plusAssign_operation(GGS_string ("//   Table View controller: ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 404)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 404)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 404)) ;
      result_result.plusAssign_operation(GGS_string ("//").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 405)) ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
      const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
      result_result.plusAssign_operation(GGS_string ("@MainActor let preferences_").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (temp_3.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (temp_4.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 406)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 408)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_5 = this ;
    result_result.plusAssign_operation(GGS_string ("  //   Array controller: ").add_operation (temp_5.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 409)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 409)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 409)) ;
    result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 410)) ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_6 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_7 = this ;
    const GGS_autoLayoutTableViewControllerPropertyGeneration temp_8 = this ;
    result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_6.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (GGS_string (" = Controller_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (temp_7.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (temp_8.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 411)) ;
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_configurationCode (const GGS_bool constinArgument_inPreferences,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  GGS_string temp_0 ;
  const enumGalgasBool test_1 = constinArgument_inPreferences.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GGS_string ("preferences_") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GGS_string ("self.") ;
  }
  GGS_string var_prefix_16697 = temp_0 ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result = GGS_string ("  //--- Array controller property: ").add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 419)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 419)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_4 = this ;
  result_result.plusAssign_operation(GGS_string ("    ").add_operation (var_prefix_16697, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (GGS_string (".bind_model ("), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (var_prefix_16697, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (temp_4.readProperty_mModelString (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)).add_operation (GGS_string ("_property, self.undoManager)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 420)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@autoLayoutTableViewControllerPropertyGeneration populateExplorerWindowCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_autoLayoutTableViewControllerPropertyGeneration::getter_populateExplorerWindowCode (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("    //--- Array controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 432)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 432)) ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_1 = this ;
  const GGS_autoLayoutTableViewControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 433)).add_operation (GGS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 433)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 433)).add_operation (GGS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 433)), inCompiler  COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 433)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'autoLayoutTableViewControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_autoLayoutTableViewControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_autoLayoutTableViewControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_autoLayoutTableViewControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'autoLayoutTableViewControllerGenerationTemplate autoLayoutTableViewControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (Compiler * /* inCompiler */,
                                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                                            const GGS_string & in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME,
                                                                                                                            const GGS_string & /* in_MODEL_5F_STRING */,
                                                                                                                            const GGS_autoLayoutTableViewControllerModelKind & in_MODEL_5F_KIND,
                                                                                                                            const GGS_string & in_MODEL_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_autoLayoutTableViewControllerBoundColumnListForGeneration & in_BOUND_5F_COLUMNS,
                                                                                                                            const GGS_autoLayoutTableViewControllerSortedColumnListForGeneration & in_SORTED_5F_COLUMNS,
                                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                                            const GGS_stringset & in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING,
                                                                                                                            const GGS__32_stringlist & in_ATTRIBUTE_5F_VALUES
                                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Auto Layout Table View Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\nfinal class Controller_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_TABLE_5F_VIEW_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" : NSObject, AutoLayoutTableViewDelegate {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Constant properties\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  GGS_uint index_952_ (0) ;
  if (in_ATTRIBUTE_5F_VALUES.isValid ()) {
    cEnumerator__32_stringlist enumerator_952 (in_ATTRIBUTE_5F_VALUES, EnumerationOrder::up) ;
    while (enumerator_952.hasCurrentObject ()) {
      result.appendString ("  private let ") ;
      result.appendString (enumerator_952.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = ") ;
      result.appendString (enumerator_952.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString ("\n") ;
      index_952_.increment () ;
      enumerator_952.gotoNextObject () ;
    }
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Undo manager\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mUndoManager : UndoManager\? = nil // SHOULD BE WEAK\n  var undoManager : UndoManager\? { return self.mUndoManager }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Sorted Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  let sortedArray_property = TransientArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortDescriptorArray = [(") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", ") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") -> ComparisonResult] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    Model\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var objects : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> {\n    if let objects = self.mModel\?.propval {\n      return objects\n    }else{\n      return EBReferenceArray ()\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_model (_ inModel : ") ;
  result.appendString (in_MODEL_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (", _ inUndoManager : UndoManager\?) {\n    self.mModel = inModel\n    self.mUndoManager = inUndoManager\n    self.sortedArray_property.setDataProvider (\n      inModel,\n") ;
  const enumGalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 62)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("      sortCallback: { [weak self] (left, right) in self\?.isOrderedBefore (left, right) \?\? true },\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("      sortCallback: nil,\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("      addSortObserversCallback: { (observer) in\n") ;
  GGS_uint index_3030_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    cEnumerator_stringset enumerator_3030 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING, EnumerationOrder::up) ;
    while (enumerator_3030.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3030.current_key (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: observer)\n") ;
      index_3030_.increment () ;
      enumerator_3030.gotoNextObject () ;
    }
  }
  result.appendString ("      },\n      removeSortObserversCallback: {(observer) in\n") ;
  GGS_uint index_3214_ (0) ;
  if (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING.isValid ()) {
    cEnumerator_stringset enumerator_3214 (in_OBSERVED_5F_PROPERTIES_5F_FOR_5F_SORTING, EnumerationOrder::up) ;
    while (enumerator_3214.hasCurrentObject ()) {
      result.appendString ("        inModel.toMany_") ;
      result.appendString (enumerator_3214.current_key (HERE).stringValue ()) ;
      result.appendString ("_StopsBeingObserved (by: observer)\n") ;
      index_3214_.increment () ;
      enumerator_3214.gotoNextObject () ;
    }
  }
  result.appendString ("      }\n    )\n  }\n\n") ;
  const enumGalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, in_SORTED_5F_COLUMNS.getter_count (SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 81)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func isOrderedBefore (_ left : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (", _ right : ") ;
    result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
    result.appendString (") -> Bool {\n    var order = ComparisonResult.orderedSame\n    for sortDescriptor in self.mSortDescriptorArray.reversed () {\n      order = sortDescriptor (left, right)\n      if order != .orderedSame {\n        break // Exit from for loop\n      }\n    }\n    return order == .orderedAscending\n  }\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_model () {\n    self.sortedArray_property.resetDataProvider ()\n    self.mModel = nil\n    self.mUndoManager = nil\n  } */\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected Array\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private let mInternalSelectedArrayProperty = StoredArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" (usedForSignature: false, key: nil)\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray_property : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" { return self.mInternalSelectedArrayProperty }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedSet : EBReferenceSet <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return EBReferenceSet (self.selectedArray_property.propval.values) }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedIndexesSet : Set <Int> {\n    let selectedObjectSet = self.selectedSet\n    var result = Set <Int> ()\n    var idx = 0\n    if let model = self.mModel {\n      for object in model.propval.values {\n        if selectedObjectSet.contains (object) {\n          result.insert (idx)\n        }\n        idx += 1\n      }\n    }\n    return result\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  func setSelection (_ inObjects : [") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("]) {\n    self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObjects))\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    sorted array observer\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mSortedArrayValuesObserver = EBOutletEvent ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @MainActor override init () {\n    super.init ()\n    self.sortedArray_property.startsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
  GGS_uint index_6453_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_6453 (in_BOUND_5F_COLUMNS, EnumerationOrder::up) ;
    while (enumerator_6453.hasCurrentObject ()) {
      result.appendString ("  //--- Observe '") ;
      result.appendString (enumerator_6453.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    self.sortedArray_property.toMany_") ;
      result.appendString (enumerator_6453.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
      const enumGalgasBool test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_6453.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_6453.current_mSortPropertyName (HERE).objectCompare (enumerator_6453.current_mDisplayedPropertyName (HERE))) COMMA_SOURCE_FILE ("auto-layout-table-view-controller.swift.galgasTemplate", 161)).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("     self.sortedArray_property.toMany_") ;
        result.appendString (enumerator_6453.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.mSortedArrayValuesObserver)\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_6453_.increment () ;
      enumerator_6453.gotoNextObject () ;
    }
  }
  result.appendString ("  //---\n    self.mSortedArrayValuesObserver.mEventCallBack = { [weak self] in\n       for tableView in self\?.mTableViewArray \?\? [] {\n        tableView.sortAndReloadData ()\n      }\n    }\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    bind_tableView\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private var mTableViewArray = [AutoLayoutTableView] ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_tableView (_ inTableView : AutoLayoutTableView) {\n    inTableView.configure (\n      allowsEmptySelection: allowsEmptySelection,\n      allowsMultipleSelection: allowsMultipleSelection,\n      rowCountCallBack: { [weak self] in self\?.sortedArray_property.propval.count \?\? 0 },\n      delegate: self\n    )\n") ;
  GGS_uint index_8053_ (0) ;
  if (in_BOUND_5F_COLUMNS.isValid ()) {
    cEnumerator_autoLayoutTableViewControllerBoundColumnListForGeneration enumerator_8053 (in_BOUND_5F_COLUMNS, EnumerationOrder::up) ;
    while (enumerator_8053.hasCurrentObject ()) {
      result.appendString ("  //--- Configure '") ;
      result.appendString (enumerator_8053.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString ("' column\n    inTableView.addColumn_") ;
      result.appendString (enumerator_8053.current_mColumnObjectTypeName (HERE).stringValue ()) ;
      result.appendString (" (\n      valueGetterDelegate: { [weak self] in return self\?.sortedArray_property.propval [$0].") ;
      result.appendString (enumerator_8053.current_mDisplayedPropertyName (HERE).stringValue ()) ;
      result.appendString (" },\n      valueSetterDelegate: ") ;
      const enumGalgasBool test_3 = enumerator_8053.current_mEditable (HERE).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("{ [weak self] (inRowIndex, inNewValue) in self\?.sortedArray_property.propval [inRowIndex].") ;
        result.appendString (enumerator_8053.current_mDisplayedPropertyName (HERE).stringValue ()) ;
        result.appendString (" = inNewValue }") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("nil") ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n      sortDelegate: ") ;
      const enumGalgasBool test_4 = GGS_bool (ComparisonKind::notEqual, enumerator_8053.current_mSortPropertyName (HERE).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      switch (test_4) {
      case kBoolTrue : {
        result.appendString ("{ [weak self] (ascending) in\n        self\?.mSortDescriptorArray.append ({ (_ left : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (", _ right : ") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") in return compare_") ;
        result.appendString (enumerator_8053.current_mColumnObjectTypeName (HERE).stringValue ()) ;
        result.appendString ("_properties (left.") ;
        result.appendString (enumerator_8053.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property, ascending, right.") ;
        result.appendString (enumerator_8053.current_mSortPropertyName (HERE).stringValue ()) ;
        result.appendString ("_property) })\n      }") ;
        } break ;
      case kBoolFalse : {
        result.appendString ("nil") ;
        } break ;
      default :
        break ;
      }
      result.appendString (",\n") ;
      GGS_uint index_8908_ (0) ;
      if (enumerator_8053.current_mActualParameterList (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8908 (enumerator_8053.current_mActualParameterList (HERE), EnumerationOrder::up) ;
        while (enumerator_8908.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8908.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (": ") ;
          result.appendString (enumerator_8908.current_mValue_31_ (HERE).stringValue ()) ;
          if (enumerator_8908.hasNextObject ()) {
            result.appendString (",\n") ;
          }
          index_8908_.increment () ;
          enumerator_8908.gotoNextObject () ;
        }
      }
      result.appendString ("\n    )\n") ;
      index_8053_.increment () ;
      enumerator_8053.gotoNextObject () ;
    }
  }
  result.appendString ("  //---\n    self.mTableViewArray.append (inTableView)\n    inTableView.sortAndReloadData ()\n  }\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Select a single object\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func select (object inObject: ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (") {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let objectArray) :\n        let array = EBReferenceArray (objectArray)\n        if array.contains (inObject) {\n          self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (inObject))\n        }\n      }\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //    remove\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  @objc func remove (_ _ : Any) {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        break\n      case .single (let model_prop) :\n      //------------- Find the object to be selected after selected object removing\n      //--- Dictionary of object sorted indexes\n        var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          sortedObjectDictionary [object] = index\n        }\n        var indexArrayOfSelectedObjects = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = sortedObjectDictionary [object]\n          if let idx = index {\n            indexArrayOfSelectedObjects.append (idx)\n          }\n        }\n      //--- Sort\n        indexArrayOfSelectedObjects.sort { $0 < $1 }\n      //--- Find the first index of a non selected object\n        var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n        for index in indexArrayOfSelectedObjects {\n          if newSelectionIndex < index {\n            break\n          }else{\n            newSelectionIndex = index + 1\n          }\n        }\n      //----------------------------------------- Remove selected object\n      //--- Dictionary of object absolute indexes\n        var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n        for (index, object) in model_prop.enumerated () {\n          objectDictionary [object] = index\n        }\n      //--- Build selected objects index array\n        var selectedObjectIndexArray = [Int] ()\n        for object in self.selectedArray_property.propset.values {\n          let index = objectDictionary [object]\n          if let idx = index {\n            selectedObjectIndexArray.append (idx)\n          }\n        }\n      //--- Sort in reverse order\n        selectedObjectIndexArray.sort { $1 < $0 }\n      //--- Remove objects, in reverse of order of their index\n        var newObjectArray = EBReferenceArray (model_prop)\n        for index in selectedObjectIndexArray {\n          newObjectArray.remove (at: index)\n        }\n      //----------------------------------------- Set new object array\n        model.setProp (newObjectArray)\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  // IMPLEMENTATION OF AutoLayoutTableViewDelegate\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  \n  final func tableViewDelegate_selectionDidChange (selectedRows inSelectedRows : IndexSet) {\n    switch self.sortedArray_property.selection {\n    case .empty, .multiple :\n      ()\n    case .single (let v) :\n      var newSelectedObjects = EBReferenceArray <") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n      for index in inSelectedRows {\n        newSelectedObjects.append (v [index])\n      }\n      self.mInternalSelectedArrayProperty.setProp (newSelectedObjects)\n    }\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_indexesOfSelectedObjects () -> IndexSet {\n    var indexSet = IndexSet ()\n    var idx = 0\n    let selectedObjectSet = EBReferenceSet (self.selectedArray_property.propval.values)\n    for object in self.sortedArray_property.propval.values {\n      if selectedObjectSet.contains (object) {\n        indexSet.insert (idx)\n      }\n      idx += 1\n    }\n    return indexSet\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () { // Transient array cannot add entry\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_addEntry () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let v) :\n        let newObject = ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (" (self.undoManager)\n        var array = EBReferenceArray (v)\n        array.append (newObject)\n        model.setProp (array)\n      //--- New object is the selection\n        self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (newObject))\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
  switch (in_MODEL_5F_KIND.enumValue ()) {
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::invalid :
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_transientArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () { // Transient array cannot remove entries\n  }\n") ;
    }
    break ;
  case GGS_autoLayoutTableViewControllerModelKind::Enumeration::enum_entityArray :
    {
      result.appendString ("  final func tableViewDelegate_removeSelectedEntries () {\n    if let model = self.mModel {\n      switch model.selection {\n      case .empty, .multiple :\n        ()\n      case .single (let model_prop) :\n        switch self.sortedArray_property.selection {\n        case .empty, .multiple :\n          ()\n        case .single (let sortedArray_prop) :\n        //------------- Find the object to be selected after selected object removing\n        //--- Dictionary of object sorted indexes\n          var sortedObjectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in sortedArray_prop.enumerated () {\n            sortedObjectDictionary [object] = index\n          }\n          var indexArrayOfSelectedObjects = [Int] ()\n          for object in self.selectedSet.values {\n            let index = sortedObjectDictionary [object]\n            if let idx = index {\n              indexArrayOfSelectedObjects.append (idx)\n            }\n          }\n        //--- Sort\n          indexArrayOfSelectedObjects.sort { $0 < $1 }\n        //--- Find the first index of a non selected object\n          var newSelectionIndex = indexArrayOfSelectedObjects [0] + 1\n          for index in indexArrayOfSelectedObjects {\n            if newSelectionIndex < index {\n              ()\n            }else{\n              newSelectionIndex = index + 1\n            }\n          }\n          var newSelectedObject : ") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString ("\? = nil\n          if (newSelectionIndex >= 0) && (newSelectionIndex < sortedArray_prop.count) {\n            newSelectedObject = sortedArray_prop [newSelectionIndex]\n          }\n        //----------------------------------------- Remove selected object\n        //--- Dictionary of object absolute indexes\n          var objectDictionary = EBReferenceDictionary <") ;
      result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
      result.appendString (", Int> ()\n          for (index, object) in model_prop.enumerated () {\n            objectDictionary [object] = index\n          }\n        //--- Build selected objects index array\n          var selectedObjectIndexArray = [Int] ()\n          for object in self.selectedSet.values {\n            let index = objectDictionary [object]\n            if let idx = index {\n              selectedObjectIndexArray.append (idx)\n            }\n          }\n        //--- Sort in reverse order\n          selectedObjectIndexArray.sort { $1 < $0 }\n        //--- Remove objects, in reverse of order of their index\n          var newObjectArray = EBReferenceArray (model_prop)\n          for index in selectedObjectIndexArray {\n            newObjectArray.remove (at: index)\n          }\n        //----------------------------------------- Set new object array\n          model.setProp (newObjectArray)\n        //----------------------------------------- Set new selection\n          if let object = newSelectedObject {\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray (object))\n          }else{\n            self.mInternalSelectedArrayProperty.setProp (EBReferenceArray ())\n          }\n        }\n      }\n    }\n  }\n") ;
    }
    break ;
  }
  result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_beginSorting () {\n    self.mSortDescriptorArray.removeAll ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func tableViewDelegate_endSorting () {\n    self.sortedArray_property.notifyModelDidChange ()\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@autoLayoutTableViewControllerGeneration generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_autoLayoutTableViewControllerGeneration::method_generateCode (const GGS_string constinArgument_inOutputDirectory,
                                                                        const GGS_generationStruct /* constinArgument_inGenerationStruct */,
                                                                        GGS_stringset & /* ioArgument_ioGeneratedFileSet */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 508)) ;
  GGS_stringset var_observedProperties_20722 = temp_0 ;
  const GGS_autoLayoutTableViewControllerGeneration temp_1 = this ;
  cEnumerator_autoLayoutTableViewControllerSortedColumnListForGeneration enumerator_20757 (temp_1.readProperty_mTableViewControllerSortedColumnListForGeneration (), EnumerationOrder::up) ;
  while (enumerator_20757.hasCurrentObject ()) {
    {
    var_observedProperties_20722.setter_insert (enumerator_20757.current_mObservablePropertyForSorting (HERE), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 510)) ;
    }
    enumerator_20757.gotoNextObject () ;
  }
  const GGS_autoLayoutTableViewControllerGeneration temp_2 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_3 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_4 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_5 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_6 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_7 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_8 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_9 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_10 = this ;
  GGS_string var_s_20925 = GGS_string (filewrapperTemplate_autoLayoutTableViewControllerGenerationTemplate_autoLayoutTableViewControllerImplementation (inCompiler, temp_2.readProperty_mOwnerName (), temp_3.readProperty_mControllerName ().readProperty_string (), temp_4.readProperty_mModelString (), temp_5.readProperty_mTableViewControllerModelKind (), temp_6.readProperty_mModelTypeName (), temp_7.readProperty_mTableViewControllerBoundColumnListForGeneration (), temp_8.readProperty_mTableViewControllerSortedColumnListForGeneration (), temp_9.readProperty_mElementTypeName (), var_observedProperties_20722, temp_10.readProperty_mAttributeListForGeneration () COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 512))) ;
  {
  const GGS_autoLayoutTableViewControllerGeneration temp_11 = this ;
  const GGS_autoLayoutTableViewControllerGeneration temp_12 = this ;
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, GGS_string ("controller-table-view-").add_operation (temp_11.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 526)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 526)).add_operation (temp_12.readProperty_mControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 526)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 526)), var_s_20925, inCompiler COMMA_SOURCE_FILE ("auto-layout-table-view-controller.ggs", 524)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST enterInPrecedenceGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_enterInPrecedenceGraph (GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  GGS_lstring var_node_687 = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 16)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_selectionControllerDeclarationAST temp_3 = this ;
  ioArgument_ioGraph.setter_addNode (var_node_687, temp_3, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 19)) ;
  }
  {
  const GGS_selectionControllerDeclarationAST temp_4 = this ;
  const GGS_selectionControllerDeclarationAST temp_5 = this ;
  const GGS_selectionControllerDeclarationAST temp_6 = this ;
  ioArgument_ioGraph.setter_addEdge (var_node_687, GGS_lstring::init_21__21_ (temp_4.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)).add_operation (temp_5.readProperty_mModelControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 20)), temp_6.readProperty_mModelControllerName ().readProperty_location (), inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 20)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerDeclarationAST nodeKey'
//
//--------------------------------------------------------------------------------------------------

GGS_lstring cPtr_selectionControllerDeclarationAST::getter_nodeKey (Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_lstring result_result ; // Returned variable
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  const GGS_selectionControllerDeclarationAST temp_2 = this ;
  result_result = GGS_lstring::init_21__21_ (temp_0.readProperty_mClassName ().readProperty_string ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)).add_operation (temp_1.readProperty_mSelectionControllerName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 26)), temp_2.readProperty_mSelectionControllerName ().readProperty_location (), inCompiler COMMA_HERE) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST firstAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_firstAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                        GGS_generationStruct & /* ioArgument_ioGeneration */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  cMapElement_classMap * objectArray_3007 = (cMapElement_classMap *) ioArgument_ioSemanticContext.mProperty_mClassMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, temp_0.readProperty_mClassName (), kSearchErrorMessage_classMap_searchKey  COMMA_SOURCE_FILE ("selection-controller.ggs", 69)) ;
  if (nullptr != objectArray_3007) {
    macroValidSharedObject (objectArray_3007, cMapElement_classMap) ;
    GGS_propertyKind var_propertyKind_3155 ;
    const GGS_selectionControllerDeclarationAST temp_1 = this ;
    GGS_actionMap joker_3169_2 ; // Joker input parameter
    GGS_bool joker_3169_1 ; // Joker input parameter
    objectArray_3007->mProperty_mPropertyMap.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_3155, joker_3169_2, joker_3169_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 72)) ;
    switch (var_propertyKind_3155.enumValue ()) {
    case GGS_propertyKind::Enumeration::invalid:
      break ;
    case GGS_propertyKind::Enumeration::enum_property:
      {
        GGS_typeKind extractedValue_3218__0 ;
        GGS_propertyAccessibility extractedValue_3218__1 ;
        var_propertyKind_3155.getAssociatedValuesFor_property (extractedValue_3218__0, extractedValue_3218__1) ;
        const GGS_selectionControllerDeclarationAST temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray3  COMMA_SOURCE_FILE ("selection-controller.ggs", 75)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toMany:
      {
        GGS_lstring extractedValue_3320__0 ;
        GGS_propertyAccessibility extractedValue_3320__1 ;
        GGS_bool extractedValue_3320__2 ;
        GGS_toManyRelationshipOptionAST extractedValue_3320__3 ;
        var_propertyKind_3155.getAssociatedValuesFor_toMany (extractedValue_3320__0, extractedValue_3320__1, extractedValue_3320__2, extractedValue_3320__3) ;
        const GGS_selectionControllerDeclarationAST temp_4 = this ;
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (temp_4.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray5  COMMA_SOURCE_FILE ("selection-controller.ggs", 77)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_toOne:
      {
        GGS_lstring extractedValue_3421__0 ;
        GGS_propertyAccessibility extractedValue_3421__1 ;
        GGS_bool extractedValue_3421__2 ;
        GGS_toOneOppositeRelationship extractedValue_3421__3 ;
        GGS_bool extractedValue_3421__4 ;
        var_propertyKind_3155.getAssociatedValuesFor_toOne (extractedValue_3421__0, extractedValue_3421__1, extractedValue_3421__2, extractedValue_3421__3, extractedValue_3421__4) ;
        const GGS_selectionControllerDeclarationAST temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray7  COMMA_SOURCE_FILE ("selection-controller.ggs", 79)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_selectionController:
      {
        GGS_string extractedValue_3535__0 ;
        var_propertyKind_3155.getAssociatedValuesFor_selectionController (extractedValue_3535__0) ;
        const GGS_selectionControllerDeclarationAST temp_8 = this ;
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_8.readProperty_mModelControllerName ().readProperty_location (), GGS_string ("an array controller is required here"), fixItArray9  COMMA_SOURCE_FILE ("selection-controller.ggs", 81)) ;
      }
      break ;
    case GGS_propertyKind::Enumeration::enum_arrayController:
      {
        GGS_lstring extractedValue_3646__0 ;
        GGS_bool extractedValue_3646__1 ;
        var_propertyKind_3155.getAssociatedValuesFor_arrayController (extractedValue_3646__0, extractedValue_3646__1) ;
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          test_10 = GGS_bool (ComparisonKind::notEqual, temp_11.readProperty_mModelControllerPropertyName ().readProperty_string ().objectCompare (GGS_string ("selectedArray"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            const GGS_selectionControllerDeclarationAST temp_12 = this ;
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (temp_12.readProperty_mModelControllerPropertyName ().readProperty_location (), GGS_string ("'selectedArray' is required here"), fixItArray13  COMMA_SOURCE_FILE ("selection-controller.ggs", 84)) ;
          }
        }
        const GGS_selectionControllerDeclarationAST temp_14 = this ;
        GGS_propertyKind var_kind_3830 = GGS_propertyKind::class_func_selectionController (temp_14.readProperty_mSelectionEntityName ().readProperty_string ()  COMMA_SOURCE_FILE ("selection-controller.ggs", 86)) ;
        {
        const GGS_selectionControllerDeclarationAST temp_15 = this ;
        GGS_actionMap temp_16 = GGS_actionMap::init (inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 87)) ;
        objectArray_3007->mProperty_mPropertyMap.setter_insertKey (temp_15.readProperty_mSelectionControllerName (), var_kind_3830, temp_16, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 87)) ;
        }
        {
        const GGS_selectionControllerDeclarationAST temp_17 = this ;
        const GGS_selectionControllerDeclarationAST temp_18 = this ;
        const GGS_selectionControllerDeclarationAST temp_19 = this ;
        const GGS_selectionControllerDeclarationAST temp_20 = this ;
        objectArray_3007->mProperty_mPropertyGenerationList.setter_append (GGS_selectionControllerPropertyGeneration::init_21__21__21__21_ (temp_17.readProperty_mSelectionControllerName ().readProperty_string (), temp_18.readProperty_mClassName ().readProperty_string (), temp_19.readProperty_mModelControllerName ().readProperty_string (), temp_20.readProperty_mModelControllerPropertyName ().readProperty_string (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 88)) ;
        }
      }
      break ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@selectionControllerDeclarationAST fourthAnalysisPhase'
//
//--------------------------------------------------------------------------------------------------

void cPtr_selectionControllerDeclarationAST::method_fourthAnalysisPhase (GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                         GGS_generationStruct & ioArgument_ioGeneration,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_classKind var_superClassKind_4587 ;
  GGS_propertyMap var_propertyMap_4608 ;
  const GGS_selectionControllerDeclarationAST temp_0 = this ;
  GGS_actionMap joker_4621_2 ; // Joker input parameter
  GGS_propertyGenerationList joker_4621_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_0.readProperty_mClassName (), var_superClassKind_4587, var_propertyMap_4608, joker_4621_2, joker_4621_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 104)) ;
  GGS_propertyKind var_propertyKind_4683 ;
  const GGS_selectionControllerDeclarationAST temp_1 = this ;
  GGS_actionMap joker_4697_2 ; // Joker input parameter
  GGS_bool joker_4697_1 ; // Joker input parameter
  var_propertyMap_4608.method_searchKey (temp_1.readProperty_mModelControllerName (), var_propertyKind_4683, joker_4697_2, joker_4697_1, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 105)) ;
  switch (var_propertyKind_4683.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_4851_typeName_0 ;
      GGS_bool extractedValue_4861__1 ;
      var_propertyKind_4683.getAssociatedValuesFor_arrayController (extractedValue_4851_typeName_0, extractedValue_4861__1) ;
      GGS_propertyMap var_selectionObservablePropertyMap_4967 ;
      GGS_propertyGenerationList var_selectionGenerationList_5022 ;
      const GGS_selectionControllerDeclarationAST temp_2 = this ;
      GGS_classKind joker_4951 ; // Joker input parameter
      GGS_actionMap joker_5006 ; // Joker input parameter
      ioArgument_ioSemanticContext.readProperty_mClassMap ().method_searchKey (temp_2.readProperty_mSelectionEntityName (), joker_4951, var_selectionObservablePropertyMap_4967, joker_5006, var_selectionGenerationList_5022, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 112)) ;
      {
      const GGS_selectionControllerDeclarationAST temp_3 = this ;
      const GGS_selectionControllerDeclarationAST temp_4 = this ;
      const GGS_selectionControllerDeclarationAST temp_5 = this ;
      const GGS_selectionControllerDeclarationAST temp_6 = this ;
      const GGS_selectionControllerDeclarationAST temp_7 = this ;
      ioArgument_ioGeneration.mProperty_mSelectionControllerListForGeneration.setter_append (temp_3.readProperty_mClassName ().readProperty_string (), temp_4.readProperty_mSelectionControllerName ().readProperty_string (), temp_5.readProperty_mModelControllerName ().readProperty_string (), temp_6.readProperty_mModelControllerPropertyName ().readProperty_string (), extractedValue_4851_typeName_0.readProperty_string (), temp_7.readProperty_mSelectionEntityName ().readProperty_string (), var_selectionObservablePropertyMap_4967, var_selectionGenerationList_5022, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 119)) ;
      }
      {
      ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (extractedValue_4851_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 129)) ;
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GGS_selectionControllerDeclarationAST temp_9 = this ;
        test_8 = GGS_bool (ComparisonKind::notEqual, extractedValue_4851_typeName_0.readProperty_string ().objectCompare (temp_9.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          const GGS_selectionControllerDeclarationAST temp_10 = this ;
          ioArgument_ioGeneration.mProperty_mToManyClassImplementations.setter_insert (temp_10.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 131)) ;
          }
          {
          const GGS_selectionControllerDeclarationAST temp_11 = this ;
          ioArgument_ioGeneration.mProperty_mGenerateClass_5F_TransientArrayOfSuperOf_5F_.setter_insert (temp_11.readProperty_mSelectionEntityName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 132)) ;
          }
        }
      }
      const GGS_selectionControllerDeclarationAST temp_12 = this ;
      GGS_string var_testedTypeName_5781 = temp_12.readProperty_mSelectionEntityName ().readProperty_string () ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 135)).isValid ()) {
        uint32_t variant_5836 = GGS_uint::class_func_max (SOURCE_FILE ("selection-controller.ggs", 135)).uintValue () ;
        bool loop_5836 = true ;
        while (loop_5836) {
          loop_5836 = GGS_bool (ComparisonKind::notEqual, extractedValue_4851_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_5781)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_5781.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 135)).isValid () ;
          if (loop_5836) {
            loop_5836 = GGS_bool (ComparisonKind::notEqual, extractedValue_4851_typeName_0.readProperty_string ().objectCompare (var_testedTypeName_5781)).operator_and (GGS_bool (ComparisonKind::notEqual, var_testedTypeName_5781.objectCompare (GGS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("selection-controller.ggs", 135)).boolValue () ;
          }
          if (loop_5836 && (0 == variant_5836)) {
            loop_5836 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("selection-controller.ggs", 135)) ;
          }
          if (loop_5836) {
            variant_5836 -- ;
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              const GGS_selectionControllerDeclarationAST temp_14 = this ;
              test_13 = GGS_bool (ComparisonKind::notEqual, extractedValue_4851_typeName_0.readProperty_string ().objectCompare (temp_14.readProperty_mSelectionEntityName ().readProperty_string ())).boolEnum () ;
              if (kBoolTrue == test_13) {
                switch (var_superClassKind_4587.enumValue ()) {
                case GGS_classKind::Enumeration::invalid:
                  break ;
                case GGS_classKind::Enumeration::enum_prefs:
                  {
                    var_testedTypeName_5781 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_atomic:
                  {
                    GGS_typeKind extractedValue_6096__0 ;
                    var_superClassKind_4587.getAssociatedValuesFor_atomic (extractedValue_6096__0) ;
                    var_testedTypeName_5781 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_document:
                  {
                    GGS_lstring extractedValue_6156__0 ;
                    var_superClassKind_4587.getAssociatedValuesFor_document (extractedValue_6156__0) ;
                    var_testedTypeName_5781 = GGS_string::makeEmptyString () ;
                  }
                  break ;
                case GGS_classKind::Enumeration::enum_entity:
                  {
                    GGS_string extractedValue_6222_superOfSuperEntity_0 ;
                    GGS_bool extractedValue_6243__1 ;
                    GGS_bool extractedValue_6243__2 ;
                    GGS_bool extractedValue_6243__3 ;
                    var_superClassKind_4587.getAssociatedValuesFor_entity (extractedValue_6222_superOfSuperEntity_0, extractedValue_6243__1, extractedValue_6243__2, extractedValue_6243__3) ;
                    var_testedTypeName_5781 = extractedValue_6222_superOfSuperEntity_0 ;
                    enumGalgasBool test_15 = kBoolTrue ;
                    if (kBoolTrue == test_15) {
                      test_15 = GGS_bool (ComparisonKind::equal, var_testedTypeName_5781.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                      if (kBoolTrue == test_15) {
                        const GGS_selectionControllerDeclarationAST temp_16 = this ;
                        TC_Array <FixItDescription> fixItArray17 ;
                        inCompiler->emitSemanticError (temp_16.readProperty_mSelectionEntityName ().readProperty_location (), GGS_string ("This entity is not descendant of ").add_operation (extractedValue_4851_typeName_0.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 147)), fixItArray17  COMMA_SOURCE_FILE ("selection-controller.ggs", 147)) ;
                      }
                    }
                  }
                  break ;
                }
              }
            }
          }
        }
      }
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration propertyDeclarationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_propertyDeclarationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                       const GGS_bool /* constinArgument_inGenerationDirectAccess */,
                                                                                       const GGS_stringset /* constinArgument_inOverriddenTransients */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 171)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 171)) ;
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result.plusAssign_operation(GGS_string ("  //   Selection controller: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 172)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 172)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 172)) ;
  result_result.plusAssign_operation(GGS_string ("  //").add_operation (GGS_string::class_func_stringWithSequenceOfCharacters (GGS_char (TO_UNICODE (183)), GGS_uint (uint32_t (96U))  COMMA_SOURCE_FILE ("selection-controller.ggs", 173)), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 173)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 173)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 173)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("  final var ").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)).add_operation (GGS_string (" = SelectionController_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)).add_operation (temp_2.readProperty_mOwnerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)).add_operation (temp_3.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)).add_operation (GGS_string (" ()\n\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 174)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 174)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration configurationCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_configurationCode (const GGS_bool /* constinArgument_inPreferences */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("  //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 180)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 180)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  const GGS_selectionControllerPropertyGeneration temp_3 = this ;
  result_result.plusAssign_operation(GGS_string ("    self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 181)).add_operation (GGS_string (".bind_selection (model: self."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 181)).add_operation (temp_2.readProperty_mModelControllerName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 181)).add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 181)).add_operation (temp_3.readProperty_mModelControllerPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 182)).add_operation (GGS_string ("_property)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 182)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 181)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration initCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_initCode (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@selectionControllerPropertyGeneration populateExplorerWindowCode'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_selectionControllerPropertyGeneration::getter_populateExplorerWindowCode (Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_result ; // Returned variable
  const GGS_selectionControllerPropertyGeneration temp_0 = this ;
  result_result = GGS_string ("    //--- Selection controller property: ").add_operation (temp_0.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 194)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 194)) ;
  const GGS_selectionControllerPropertyGeneration temp_1 = this ;
  const GGS_selectionControllerPropertyGeneration temp_2 = this ;
  result_result.plusAssign_operation(GGS_string ("      self.").add_operation (temp_1.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 195)).add_operation (GGS_string (".addExplorer (name: \""), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 195)).add_operation (temp_2.readProperty_mPropertyName (), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 195)).add_operation (GGS_string ("\", y:&y, view:view)\n"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 195)), inCompiler  COMMA_SOURCE_FILE ("selection-controller.ggs", 195)) ;
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'selectionControllerGenerationTemplate'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_selectionControllerGenerationTemplate_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_selectionControllerGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_selectionControllerGenerationTemplate_0,
  0,
  gWrapperAllDirectories_selectionControllerGenerationTemplate_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate baseSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                            const GGS_string & in_OWNER_5F_NAME,
                                                                                                            const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                            const GGS_string & in_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                            const GGS_propertyMap & in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Base Selection Controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_1030_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_1030 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_1030.hasCurrentObject ()) {
      result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selection observable property: ") ;
      result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
      result.appendString ("\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n") ;
      const enumGalgasBool test_0 = extensionGetter_isEntityType (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 29)).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        const enumGalgasBool test_1 = extensionGetter_isTransient (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 30)).boolEnum () ;
        switch (test_1) {
        case kBoolTrue : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBTransientProperty <") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 31)).stringValue ()) ;
          result.appendString ("> ()\n\n") ;
          } break ;
        case kBoolFalse : {
          result.appendString ("  var ") ;
          result.appendString (enumerator_1030.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property = EBComputedProperty_") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_1030.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 33)).stringValue ()) ;
          result.appendString (" ()\n\n") ;
          } break ;
        default :
          break ;
        }
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_1030_.increment () ;
      enumerator_1030.gotoNextObject () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  private weak var mModel : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("\? = nil // SHOULD BE WEAK\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.mModel = model\n") ;
  GGS_uint index_2181_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2181 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_2181.hasCurrentObject ()) {
      const enumGalgasBool test_2 = extensionGetter_isEntityType (enumerator_2181.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_2) {
      case kBoolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2181.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model: model)\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2181_.increment () ;
      enumerator_2181.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n") ;
  GGS_uint index_2644_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_2644 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_2644.hasCurrentObject ()) {
      const enumGalgasBool test_3 = extensionGetter_isEntityType (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 61)).boolEnum () ;
      switch (test_3) {
      case kBoolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const enumGalgasBool test_4 = extensionGetter_isTransient (enumerator_2644.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
        switch (test_4) {
        case kBoolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        result.appendString ("    self.mModel\?.toMany_") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2644.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2644_.increment () ;
      enumerator_2644.gotoNextObject () ;
    }
  }
  result.appendString ("  //---\n    self.mModel = nil\n  } */\n\n") ;
  GGS_uint index_3143_ (0) ;
  if (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP.isValid ()) {
    cEnumerator_propertyMap enumerator_3143 (in_SELECTION_5F_OBSERVABLE_5F_PROPERTY_5F_MAP, EnumerationOrder::up) ;
    while (enumerator_3143.hasCurrentObject ()) {
      const enumGalgasBool test_5 = extensionGetter_isEntityType (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 75)).boolEnum () ;
      switch (test_5) {
      case kBoolTrue : {
        result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -···················*\n\n  private final func bind_property_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString (" (model : ReadOnlyArrayOf_") ;
        result.appendString (in_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
        result.appendString (") {\n    model.toMany_") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_StartsBeingObserved (by: self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property)\n    self.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = { [weak self] in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty :\n          return .empty\n        case .multiple :\n          return .multiple\n        case .single (let v) :\n          var s = Set <") ;
        result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 87)).stringValue ()) ;
        result.appendString ("> ()\n          var isMultipleSelection = false\n          for object in v {\n            switch object.") ;
        result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
        result.appendString ("_property.selection {\n            case .empty :\n              return .empty\n            case .multiple :\n              isMultipleSelection = true\n            case .single (let vProp) :\n              s.insert (vProp)\n            }\n          }\n          if isMultipleSelection {\n            return .multiple\n          }else if s.count == 0 {\n            return .empty\n          }else if s.count == 1 {\n            return .single (s.first!)\n          }else{\n            return .multiple\n          }\n        }\n      }else{\n        return .empty\n      }\n    }\n") ;
        const enumGalgasBool test_6 = extensionGetter_isTransient (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).operator_not (SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 113)).boolEnum () ;
        switch (test_6) {
        case kBoolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = { [weak self] (inValue : ") ;
          result.appendString (extensionGetter_swiftTypeName (enumerator_3143.current_mKind (HERE), inCompiler COMMA_SOURCE_FILE ("base-selection-controller.swift.galgasTemplate", 114)).stringValue ()) ;
          result.appendString (") in\n      if let model = self\?.mModel {\n        switch model.selection {\n        case .empty, .multiple :\n          break\n        case .single (let v) :\n          for object in v {\n            object.") ;
          result.appendString (enumerator_3143.current_lkey (HERE).readProperty_string ().stringValue ()) ;
          result.appendString ("_property.setProp (inValue)\n          }\n        }\n      }\n    }\n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        result.appendString ("  }\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_3143_.increment () ;
      enumerator_3143.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'selectionControllerGenerationTemplate derivedSelectionControllerImplementation'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (Compiler * inCompiler,
                                                                                                               const GGS_string & in_OWNER_5F_NAME,
                                                                                                               const GGS_string & in_SELECTION_5F_CONTROLLER_5F_NAME,
                                                                                                               const GGS_string & in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_string & in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME,
                                                                                                               const GGS_propertyGenerationList & in_PROPERTY_5F_GENERATION_5F_LIST,
                                                                                                               const GGS_bool & /* in_HAS_5F_ATOMIC_5F_PROPERTIES */
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//    Derived selection controller ") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString (" ") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n@MainActor final class SelectionController_") ;
  result.appendString (in_OWNER_5F_NAME.stringValue ()) ;
  result.appendString ("_") ;
  result.appendString (in_SELECTION_5F_CONTROLLER_5F_NAME.stringValue ()) ;
  result.appendString (" {\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  init () {\n    noteObjectAllocation (self)\n  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  deinit {\n    noteObjectDeallocation (self)\n  }\n\n") ;
  GGS_uint index_998_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_998 (in_PROPERTY_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_998.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_declarationInSelectionControllerCode ((const cPtr_propertyGeneration *) enumerator_998.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 26)).stringValue ()) ;
      index_998_.increment () ;
      enumerator_998.gotoNextObject () ;
    }
  }
  result.appendString ("  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   Selected array (not observable)\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  var selectedArray : EBReferenceArray <") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> { return self.selectedArray_property.propval }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   BIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n   let selectedArray_property = TransientArrayOfSuperOf_") ;
  result.appendString (in_DERIVED_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (" <") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString ("> ()\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  final func bind_selection (model : ReadOnlyArrayOf_") ;
  result.appendString (in_BASE_5F_ELEMENT_5F_TYPE_5F_NAME.stringValue ()) ;
  result.appendString (") {\n    self.selectedArray_property.setDataProvider (model)\n") ;
  GGS_uint index_2048_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2048 (in_PROPERTY_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2048.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 46)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 47)).operator_or (GGS_bool (enumerator_2048.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicProxyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 48)).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("    self.bind_property_") ;
        result.appendString (enumerator_2048.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString (" ()\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2048_.increment () ;
      enumerator_2048.gotoNextObject () ;
    }
  }
  result.appendString ("  }\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n  //   UNBIND SELECTION\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n  /* final func unbind_selection () {\n    self.selectedArray_property.setDataProvider (nil)\n") ;
  GGS_uint index_2712_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_2712 (in_PROPERTY_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2712.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 63)).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_transientPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 64)).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("  //--- ") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("\n    self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property.mReadModelFunction = nil \n") ;
        const enumGalgasBool test_2 = GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_atomicPropertyGeneration).operator_or (GGS_bool (enumerator_2712.current_mProperty (HERE).dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_computedPropertyGeneration) COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 68)).boolEnum () ;
        switch (test_2) {
        case kBoolTrue : {
          result.appendString ("    self.") ;
          result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
          result.appendString ("_property.mWriteModelFunction = nil \n") ;
          } break ;
        case kBoolFalse : {
          } break ;
        default :
          break ;
        }
        result.appendString ("    self.selectedArray_property.toMany_") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_StopsBeingObserved (by: self.") ;
        result.appendString (enumerator_2712.current_mProperty (HERE).readProperty_mPropertyName ().stringValue ()) ;
        result.appendString ("_property)\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_2712_.increment () ;
      enumerator_2712.gotoNextObject () ;
    }
  }
  result.appendString ("  } */\n\n") ;
  GGS_uint index_3416_ (0) ;
  if (in_PROPERTY_5F_GENERATION_5F_LIST.isValid ()) {
    cEnumerator_propertyGenerationList enumerator_3416 (in_PROPERTY_5F_GENERATION_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3416.hasCurrentObject ()) {
      result.appendString (callExtensionGetter_bindPropertyInSelectionController ((const cPtr_propertyGeneration *) enumerator_3416.current_mProperty (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("derived-selection-controller.swift.galgasTemplate", 77)).stringValue ()) ;
      index_3416_.increment () ;
      enumerator_3416.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -\n\n}\n\n//--------------------------------------------------------------------------------------------------\n\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateSelectionControllers??&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateSelectionControllers_3F__3F__26_ (const GGS_selectionControllerForGeneration constinArgument_inArrayControllerListForGeneration,
                                                       const GGS_string constinArgument_inOutputDirectory,
                                                       GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_selectionControllerForGeneration enumerator_10702 (constinArgument_inArrayControllerListForGeneration, EnumerationOrder::up) ;
  while (enumerator_10702.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, enumerator_10702.current_mBaseTypeName (HERE).objectCompare (enumerator_10702.current_mSelectionTypeName (HERE))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GGS_string var_s_10823 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_baseSelectionControllerImplementation (inCompiler, enumerator_10702.current_mOwnerName (HERE), enumerator_10702.current_mSelectionControllerName (HERE), enumerator_10702.current_mBaseTypeName (HERE), enumerator_10702.current_mSelectionObservablePropertyMap (HERE) COMMA_SOURCE_FILE ("selection-controller.ggs", 245))) ;
        GGS_string var_fileName_11048 = GGS_string ("selectionController-").add_operation (enumerator_10702.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 251)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 251)).add_operation (enumerator_10702.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 251)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 251)) ;
        {
        ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11048, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 252)) ;
        }
        {
        GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11048, var_s_10823, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 253)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      GGS_bool var_hasAtomicStoredProperties_11294 = GGS_bool (false) ;
      cEnumerator_propertyGenerationList enumerator_11339 (enumerator_10702.current_mPropertyGenerationList (HERE), EnumerationOrder::up) ;
      bool bool_1 = var_hasAtomicStoredProperties_11294.operator_not (SOURCE_FILE ("selection-controller.ggs", 260)).isValidAndTrue () ;
      if (enumerator_11339.hasCurrentObject () && bool_1) {
        while (enumerator_11339.hasCurrentObject () && bool_1) {
          var_hasAtomicStoredProperties_11294 = GGS_bool (nullptr != dynamic_cast <const cPtr_atomicPropertyGeneration *> (enumerator_11339.current_mProperty (HERE).ptr ())) ;
          enumerator_11339.gotoNextObject () ;
          if (enumerator_11339.hasCurrentObject ()) {
            bool_1 = var_hasAtomicStoredProperties_11294.operator_not (SOURCE_FILE ("selection-controller.ggs", 260)).isValidAndTrue () ;
          }
        }
      }
      GGS_string var_s_11508 = GGS_string (filewrapperTemplate_selectionControllerGenerationTemplate_derivedSelectionControllerImplementation (inCompiler, enumerator_10702.current_mOwnerName (HERE), enumerator_10702.current_mSelectionControllerName (HERE), enumerator_10702.current_mBaseTypeName (HERE), enumerator_10702.current_mSelectionTypeName (HERE), enumerator_10702.current_mPropertyGenerationList (HERE), var_hasAtomicStoredProperties_11294 COMMA_SOURCE_FILE ("selection-controller.ggs", 263))) ;
      GGS_string var_fileName_11790 = GGS_string ("selectionController-").add_operation (enumerator_10702.current_mOwnerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (enumerator_10702.current_mSelectionControllerName (HERE), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 271)) ;
      {
      ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_11790, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 272)) ;
      }
      {
      GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_11790, var_s_11508, inCompiler COMMA_SOURCE_FILE ("selection-controller.ggs", 273)) ;
      }
    }
    enumerator_10702.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_boolAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                              const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                              GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_3875 = GGS_bool (false) ;
  cEnumerator_typeKindList enumerator_3896 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
  bool bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
  if (enumerator_3896.hasCurrentObject () && bool_0) {
    while (enumerator_3896.hasCurrentObject () && bool_0) {
      switch (enumerator_3896.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_boolAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mValue ().readProperty_bool ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GGS_string ("true") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GGS_string ("false") ;
          }
          outArgument_outSwiftDefaultValueAsString = temp_2 ;
          var_found_3875 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_3896.gotoNextObject () ;
      if (enumerator_3896.hasCurrentObject ()) {
        bool_0 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 113)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_found_3875.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 126)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GGS_boolAsDefaultValue temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mValue ().readProperty_location (), GGS_string ("only a boolean attribute can be initialized by YES or NO"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 127)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@integerAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_integerAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                 const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                 GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_4847 = GGS_bool (false) ;
  cEnumerator_typeKindList enumerator_4868 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
  bool bool_0 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
  if (enumerator_4868.hasCurrentObject () && bool_0) {
    while (enumerator_4868.hasCurrentObject () && bool_0) {
      switch (enumerator_4868.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_integerAsDefaultValue temp_1 = this ;
          GGS_string temp_2 ;
          const enumGalgasBool test_3 = temp_1.readProperty_mNegative ().boolEnum () ;
          if (kBoolTrue == test_3) {
            temp_2 = GGS_string ("-") ;
          }else if (kBoolFalse == test_3) {
            temp_2 = GGS_string::makeEmptyString () ;
          }
          const GGS_integerAsDefaultValue temp_4 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_2.add_operation (temp_4.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 144)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 144)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GGS_integerAsDefaultValue temp_6 = this ;
            test_5 = temp_6.readProperty_mNegative ().boolEnum () ;
            if (kBoolTrue == test_5) {
              const GGS_integerAsDefaultValue temp_7 = this ;
              TC_Array <FixItDescription> fixItArray8 ;
              inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("Uint32 value should be ≥ 0"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 148)) ;
            }
          }
          const GGS_integerAsDefaultValue temp_9 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_9.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 150)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_integerAsDefaultValue temp_10 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("NSFont.systemFont (ofSize: ").add_operation (temp_10.readProperty_mValue ().readProperty_uint ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 153)), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)).add_operation (GGS_string (".0)"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 153)) ;
          var_found_4847 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_4868.gotoNextObject () ;
      if (enumerator_4868.hasCurrentObject ()) {
        bool_0 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 141)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_found_4847.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 162)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GGS_integerAsDefaultValue temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mValue ().readProperty_location (), GGS_string ("only an integer attribute can be initialized by an integer constant"), fixItArray13  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 163)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doubleAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_doubleAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_6145 = GGS_bool (false) ;
  cEnumerator_typeKindList enumerator_6166 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
  bool bool_0 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
  if (enumerator_6166.hasCurrentObject () && bool_0) {
    while (enumerator_6166.hasCurrentObject () && bool_0) {
      switch (enumerator_6166.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_doubleAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = temp_1.readProperty_mValue ().readProperty_double ().getter_string (SOURCE_FILE ("explicit-default-value.ggs", 180)) ;
          var_found_6145 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_stringType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_6166.gotoNextObject () ;
      if (enumerator_6166.hasCurrentObject ()) {
        bool_0 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 177)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_6145.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 190)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_doubleAsDefaultValue temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a double attribute can be initialized by a floating point constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 191)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_stringAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_7108 = GGS_bool (false) ;
  cEnumerator_typeKindList enumerator_7129 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
  bool bool_0 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
  if (enumerator_7129.hasCurrentObject () && bool_0) {
    while (enumerator_7129.hasCurrentObject () && bool_0) {
      switch (enumerator_7129.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_stringAsDefaultValue temp_1 = this ;
          outArgument_outSwiftDefaultValueAsString = GGS_string ("\"").add_operation (temp_1.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)).add_operation (GGS_string ("\""), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 208)) ;
          var_found_7108 = GGS_bool (true) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
      case GGS_typeKind::Enumeration::enum_dateType:
      case GGS_typeKind::Enumeration::enum_dataType:
      case GGS_typeKind::Enumeration::enum_integerType:
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
      case GGS_typeKind::Enumeration::enum_doubleType:
      case GGS_typeKind::Enumeration::enum_fontType:
      case GGS_typeKind::Enumeration::enum_colorType:
      case GGS_typeKind::Enumeration::enum_bezierPathType:
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        break ;
      }
      enumerator_7129.gotoNextObject () ;
      if (enumerator_7129.hasCurrentObject ()) {
        bool_0 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 205)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_found_7108.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 218)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GGS_stringAsDefaultValue temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mValue ().readProperty_location (), GGS_string ("only a string attribute can be initialized by a string constant"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 219)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedDates'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedDates (Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 227)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("now"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 228)) ;
  }
  {
  result_result.setter_insert (GGS_string ("distantPast"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 229)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedDates = false ;
static GGS_stringset gOnceFunctionResult_predefinedDates ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedDates (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedDates) {
    gOnceFunctionResult_predefinedDates = onceFunction_predefinedDates (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedDates = true ;
  }
  return gOnceFunctionResult_predefinedDates ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedDates (void) {
  gOnceFunctionResult_predefinedDates.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedDates (nullptr,
                                                           releaseOnceFunctionResult_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedDates [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedDates (Compiler * inCompiler,
                                                             const cObjectArray & /* inEffectiveParameterArray */,
                                                             const GGS_location & /* inErrorLocation */
                                                             COMMA_LOCATION_ARGS) {
  return function_predefinedDates (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedDates ("predefinedDates",
                                                                 functionWithGenericHeader_predefinedDates,
                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                 0,
                                                                 functionArgs_predefinedDates) ;

//--------------------------------------------------------------------------------------------------
//
//Once function 'predefinedColors'
//
//--------------------------------------------------------------------------------------------------

static GGS_stringset onceFunction_predefinedColors (Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_result ; // Returned variable
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 235)) ;
  result_result = temp_0 ;
  {
  result_result.setter_insert (GGS_string ("black"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 236)) ;
  }
  {
  result_result.setter_insert (GGS_string ("blue"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 237)) ;
  }
  {
  result_result.setter_insert (GGS_string ("brown"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 238)) ;
  }
  {
  result_result.setter_insert (GGS_string ("clear"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 239)) ;
  }
  {
  result_result.setter_insert (GGS_string ("control"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 240)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlDarkShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 241)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 242)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlLightHighlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 243)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlShadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 244)) ;
  }
  {
  result_result.setter_insert (GGS_string ("controlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 245)) ;
  }
  {
  result_result.setter_insert (GGS_string ("cyan"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 246)) ;
  }
  {
  result_result.setter_insert (GGS_string ("darkGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 247)) ;
  }
  {
  result_result.setter_insert (GGS_string ("disabledControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 248)) ;
  }
  {
  result_result.setter_insert (GGS_string ("gray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 249)) ;
  }
  {
  result_result.setter_insert (GGS_string ("green"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 250)) ;
  }
  {
  result_result.setter_insert (GGS_string ("grid"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 251)) ;
  }
  {
  result_result.setter_insert (GGS_string ("header"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 252)) ;
  }
  {
  result_result.setter_insert (GGS_string ("headerText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 253)) ;
  }
  {
  result_result.setter_insert (GGS_string ("highlight"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 254)) ;
  }
  {
  result_result.setter_insert (GGS_string ("keyboardFocusIndicator"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 255)) ;
  }
  {
  result_result.setter_insert (GGS_string ("knob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 256)) ;
  }
  {
  result_result.setter_insert (GGS_string ("lightGray"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 257)) ;
  }
  {
  result_result.setter_insert (GGS_string ("magenta"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 258)) ;
  }
  {
  result_result.setter_insert (GGS_string ("orange"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 259)) ;
  }
  {
  result_result.setter_insert (GGS_string ("purple"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 260)) ;
  }
  {
  result_result.setter_insert (GGS_string ("red"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 261)) ;
  }
  {
  result_result.setter_insert (GGS_string ("scrollBar"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 262)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControl"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 263)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedControlText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 264)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedKnob"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 265)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItem"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 266)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedMenuItemText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 267)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedTextBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 268)) ;
  }
  {
  result_result.setter_insert (GGS_string ("selectedText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 269)) ;
  }
  {
  result_result.setter_insert (GGS_string ("shadow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 270)) ;
  }
  {
  result_result.setter_insert (GGS_string ("textBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 271)) ;
  }
  {
  result_result.setter_insert (GGS_string ("white"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 272)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowBackground"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 273)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrame"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 274)) ;
  }
  {
  result_result.setter_insert (GGS_string ("windowFrameText"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 275)) ;
  }
  {
  result_result.setter_insert (GGS_string ("yellow"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 276)) ;
  }
//---
  return result_result ;
}



//--------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//--------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_predefinedColors = false ;
static GGS_stringset gOnceFunctionResult_predefinedColors ;

//--------------------------------------------------------------------------------------------------

GGS_stringset function_predefinedColors (class Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_predefinedColors) {
    gOnceFunctionResult_predefinedColors = onceFunction_predefinedColors (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_predefinedColors = true ;
  }
  return gOnceFunctionResult_predefinedColors ;
}

//--------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_predefinedColors (void) {
  gOnceFunctionResult_predefinedColors.drop () ;
}

//--------------------------------------------------------------------------------------------------

PrologueEpilogue gEpilogueForOnceFunction_predefinedColors (nullptr,
                                                            releaseOnceFunctionResult_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_predefinedColors [1] = {
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_predefinedColors (Compiler * inCompiler,
                                                              const cObjectArray & /* inEffectiveParameterArray */,
                                                              const GGS_location & /* inErrorLocation */
                                                              COMMA_LOCATION_ARGS) {
  return function_predefinedColors (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_predefinedColors ("predefinedColors",
                                                                  functionWithGenericHeader_predefinedColors,
                                                                  & kTypeDescriptor_GALGAS_stringset,
                                                                  0,
                                                                  functionArgs_predefinedColors) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@identifierAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_identifierAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                                    const GGS_propertyMap /* constinArgument_inPreferencesPropertyMap */,
                                                                    GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSwiftDefaultValueAsString = GGS_string::makeEmptyString () ;
  GGS_bool var_found_9828 = GGS_bool (false) ;
  cEnumerator_typeKindList enumerator_9849 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
  bool bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
  if (enumerator_9849.hasCurrentObject () && bool_0) {
    while (enumerator_9849.hasCurrentObject () && bool_0) {
      switch (enumerator_9849.current_mType (HERE).enumValue ()) {
      case GGS_typeKind::Enumeration::invalid:
        break ;
      case GGS_typeKind::Enumeration::enum_dateType:
        {
          var_found_9828 = GGS_bool (true) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            const GGS_identifierAsDefaultValue temp_2 = this ;
            test_1 = function_predefinedDates (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).getter_hasKey (temp_2.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 291)).boolEnum () ;
            if (kBoolTrue == test_1) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                const GGS_identifierAsDefaultValue temp_4 = this ;
                test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("now"))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  outArgument_outSwiftDefaultValueAsString = GGS_string ("Date ()") ;
                }
              }
              if (kBoolFalse == test_3) {
                enumGalgasBool test_5 = kBoolTrue ;
                if (kBoolTrue == test_5) {
                  const GGS_identifierAsDefaultValue temp_6 = this ;
                  test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("distantPast"))).boolEnum () ;
                  if (kBoolTrue == test_5) {
                    outArgument_outSwiftDefaultValueAsString = GGS_string ("Date.distantPast") ;
                  }
                }
                if (kBoolFalse == test_5) {
                  const GGS_identifierAsDefaultValue temp_7 = this ;
                  TC_Array <FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (temp_7.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 297)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_1) {
            const GGS_identifierAsDefaultValue temp_9 = this ;
            TC_Array <FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (temp_9.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined date"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 300)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathType:
        {
          var_found_9828 = GGS_bool (true) ;
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            const GGS_identifierAsDefaultValue temp_12 = this ;
            test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSBezierPath ()") ;
            }
          }
          if (kBoolFalse == test_11) {
            const GGS_identifierAsDefaultValue temp_13 = this ;
            TC_Array <FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (temp_13.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default NSBezierPath"), fixItArray14  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 307)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_bezierPathArrayType:
        {
          var_found_9828 = GGS_bool (true) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            const GGS_identifierAsDefaultValue temp_16 = this ;
            test_15 = GGS_bool (ComparisonKind::equal, temp_16.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_15) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("BezierPathArray ()") ;
            }
          }
          if (kBoolFalse == test_15) {
            const GGS_identifierAsDefaultValue temp_17 = this ;
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default BezierPathArray"), fixItArray18  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 314)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_enumType:
        {
          GGS_string extractedValue_10926_enumTypeName_0 ;
          GGS_enumConstantMap extractedValue_10957_constantMap_1 ;
          GGS_enumFuncMap extractedValue_10970__2 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_enumType (extractedValue_10926_enumTypeName_0, extractedValue_10957_constantMap_1, extractedValue_10970__2) ;
          var_found_9828 = GGS_bool (true) ;
          enumGalgasBool test_19 = kBoolTrue ;
          if (kBoolTrue == test_19) {
            const GGS_identifierAsDefaultValue temp_20 = this ;
            test_19 = extractedValue_10957_constantMap_1.getter_hasKey (temp_20.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 318)).boolEnum () ;
            if (kBoolTrue == test_19) {
              const GGS_identifierAsDefaultValue temp_21 = this ;
              outArgument_outSwiftDefaultValueAsString = extractedValue_10926_enumTypeName_0.add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)).add_operation (temp_21.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 319)) ;
            }
          }
          if (kBoolFalse == test_19) {
            const GGS_identifierAsDefaultValue temp_22 = this ;
            const GGS_identifierAsDefaultValue temp_23 = this ;
            TC_Array <FixItDescription> fixItArray24 ;
            inCompiler->emitSemanticError (temp_22.readProperty_mValue ().readProperty_location (), GGS_string ("the '").add_operation (extractedValue_10926_enumTypeName_0, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' enumeration does not define '"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (temp_23.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)).add_operation (GGS_string ("' constant"), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 322)), fixItArray24  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 321)) ;
            outArgument_outSwiftDefaultValueAsString.drop () ; // Release error dropped variable
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_entityType:
        {
          GGS_string extractedValue_11341__0 ;
          GGS_bool extractedValue_11341__1 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_entityType (extractedValue_11341__0, extractedValue_11341__1) ;
          const GGS_identifierAsDefaultValue temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_25.readProperty_mValue ().readProperty_location (), GGS_string ("invalid entity type"), fixItArray26  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 326)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_classType:
        {
          GGS_string extractedValue_11416__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_classType (extractedValue_11416__0) ;
          const GGS_identifierAsDefaultValue temp_27 = this ;
          TC_Array <FixItDescription> fixItArray28 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mValue ().readProperty_location (), GGS_string ("invalid class type"), fixItArray28  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 328)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_boolType:
        {
          const GGS_identifierAsDefaultValue temp_29 = this ;
          TC_Array <FixItDescription> fixItArray30 ;
          inCompiler->emitSemanticError (temp_29.readProperty_mValue ().readProperty_location (), GGS_string ("invalid bool type"), fixItArray30  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 330)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_dataType:
        {
          var_found_9828 = GGS_bool (true) ;
          enumGalgasBool test_31 = kBoolTrue ;
          if (kBoolTrue == test_31) {
            const GGS_identifierAsDefaultValue temp_32 = this ;
            test_31 = GGS_bool (ComparisonKind::equal, temp_32.readProperty_mValue ().readProperty_string ().objectCompare (GGS_string ("empty"))).boolEnum () ;
            if (kBoolTrue == test_31) {
              outArgument_outSwiftDefaultValueAsString = GGS_string ("Data ()") ;
            }
          }
          if (kBoolFalse == test_31) {
            const GGS_identifierAsDefaultValue temp_33 = this ;
            TC_Array <FixItDescription> fixItArray34 ;
            inCompiler->emitSemanticError (temp_33.readProperty_mValue ().readProperty_location (), GGS_string ("only 'empty' is accepted as default Data"), fixItArray34  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 336)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_doubleType:
        {
          const GGS_identifierAsDefaultValue temp_35 = this ;
          TC_Array <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticError (temp_35.readProperty_mValue ().readProperty_location (), GGS_string ("invalid double type"), fixItArray36  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 339)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_integerType:
        {
          const GGS_identifierAsDefaultValue temp_37 = this ;
          TC_Array <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mValue ().readProperty_location (), GGS_string ("invalid integer type"), fixItArray38  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 341)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_uint_33__32_Type:
        {
          const GGS_identifierAsDefaultValue temp_39 = this ;
          TC_Array <FixItDescription> fixItArray40 ;
          inCompiler->emitSemanticError (temp_39.readProperty_mValue ().readProperty_location (), GGS_string ("invalid UInt32 type"), fixItArray40  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 343)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_stringType:
        {
          const GGS_identifierAsDefaultValue temp_41 = this ;
          TC_Array <FixItDescription> fixItArray42 ;
          inCompiler->emitSemanticError (temp_41.readProperty_mValue ().readProperty_location (), GGS_string ("invalid string type"), fixItArray42  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 345)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_fontType:
        {
          const GGS_identifierAsDefaultValue temp_43 = this ;
          TC_Array <FixItDescription> fixItArray44 ;
          inCompiler->emitSemanticError (temp_43.readProperty_mValue ().readProperty_location (), GGS_string ("invalid font type"), fixItArray44  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 347)) ;
        }
        break ;
      case GGS_typeKind::Enumeration::enum_colorType:
        {
          enumGalgasBool test_45 = kBoolTrue ;
          if (kBoolTrue == test_45) {
            const GGS_identifierAsDefaultValue temp_46 = this ;
            test_45 = function_predefinedColors (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).getter_hasKey (temp_46.readProperty_mValue ().readProperty_string () COMMA_SOURCE_FILE ("explicit-default-value.ggs", 349)).boolEnum () ;
            if (kBoolTrue == test_45) {
              const GGS_identifierAsDefaultValue temp_47 = this ;
              outArgument_outSwiftDefaultValueAsString = GGS_string ("NSColor.").add_operation (temp_47.readProperty_mValue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 350)) ;
              var_found_9828 = GGS_bool (true) ;
            }
          }
          if (kBoolFalse == test_45) {
            const GGS_identifierAsDefaultValue temp_48 = this ;
            TC_Array <FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (temp_48.readProperty_mValue ().readProperty_location (), GGS_string ("unknown predefined color"), fixItArray49  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 353)) ;
          }
        }
        break ;
      case GGS_typeKind::Enumeration::enum_transientPropertyExternType:
        {
          GGS_string extractedValue_12411__0 ;
          enumerator_9849.current_mType (HERE).getAssociatedValuesFor_transientPropertyExternType (extractedValue_12411__0) ;
          const GGS_identifierAsDefaultValue temp_50 = this ;
          TC_Array <FixItDescription> fixItArray51 ;
          inCompiler->emitSemanticError (temp_50.readProperty_mValue ().readProperty_location (), GGS_string ("invalid image type"), fixItArray51  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 356)) ;
        }
        break ;
      }
      enumerator_9849.gotoNextObject () ;
      if (enumerator_9849.hasCurrentObject ()) {
        bool_0 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 287)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_52 = kBoolTrue ;
  if (kBoolTrue == test_52) {
    test_52 = var_found_9828.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 359)).boolEnum () ;
    if (kBoolTrue == test_52) {
      const GGS_identifierAsDefaultValue temp_53 = this ;
      TC_Array <FixItDescription> fixItArray54 ;
      inCompiler->emitSemanticError (temp_53.readProperty_mValue ().readProperty_location (), GGS_string ("unknow type for this identifier"), fixItArray54  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 360)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue analyzeDefaultValueType'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_analyzeDefaultValueType (const GGS_typeKindList constinArgument_inAttributeActualTypeList,
                                                               const GGS_propertyMap constinArgument_inPreferencesPropertyMap,
                                                               GGS_string & outArgument_outSwiftDefaultValueAsString,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_propertyKind var_kind_12950 ;
  const GGS_prefsAsDefaultValue temp_0 = this ;
  GGS_actionMap joker_12956_2 ; // Joker input parameter
  GGS_bool joker_12956_1 ; // Joker input parameter
  constinArgument_inPreferencesPropertyMap.method_searchKey (temp_0.readProperty_mPrefPropertyName (), var_kind_12950, joker_12956_2, joker_12956_1, inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 372)) ;
  switch (var_kind_12950.enumValue ()) {
  case GGS_propertyKind::Enumeration::invalid:
    break ;
  case GGS_propertyKind::Enumeration::enum_property:
    {
      GGS_typeKind extractedValue_13002_type_0 ;
      GGS_propertyAccessibility extractedValue_13008__1 ;
      var_kind_12950.getAssociatedValuesFor_property (extractedValue_13002_type_0, extractedValue_13008__1) ;
      GGS_bool var_found_13021 = GGS_bool (false) ;
      cEnumerator_typeKindList enumerator_13044 (constinArgument_inAttributeActualTypeList, EnumerationOrder::up) ;
      bool bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
      if (enumerator_13044.hasCurrentObject () && bool_1) {
        while (enumerator_13044.hasCurrentObject () && bool_1) {
          var_found_13021 = GGS_bool (ComparisonKind::equal, extractedValue_13002_type_0.objectCompare (enumerator_13044.current_mType (HERE))) ;
          enumerator_13044.gotoNextObject () ;
          if (enumerator_13044.hasCurrentObject ()) {
            bool_1 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 376)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_found_13021.operator_not (SOURCE_FILE ("explicit-default-value.ggs", 379)).boolEnum () ;
        if (kBoolTrue == test_2) {
          const GGS_prefsAsDefaultValue temp_3 = this ;
          TC_Array <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (temp_3.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("the atomic property type is not compatible"), fixItArray4  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 380)) ;
        }
      }
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toMany:
    {
      GGS_lstring extractedValue_13255__0 ;
      GGS_propertyAccessibility extractedValue_13255__1 ;
      GGS_bool extractedValue_13255__2 ;
      GGS_toManyRelationshipOptionAST extractedValue_13255__3 ;
      var_kind_12950.getAssociatedValuesFor_toMany (extractedValue_13255__0, extractedValue_13255__1, extractedValue_13255__2, extractedValue_13255__3) ;
      const GGS_prefsAsDefaultValue temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray6  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 383)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_toOne:
    {
      GGS_lstring extractedValue_13348__0 ;
      GGS_propertyAccessibility extractedValue_13348__1 ;
      GGS_bool extractedValue_13348__2 ;
      GGS_toOneOppositeRelationship extractedValue_13348__3 ;
      GGS_bool extractedValue_13348__4 ;
      var_kind_12950.getAssociatedValuesFor_toOne (extractedValue_13348__0, extractedValue_13348__1, extractedValue_13348__2, extractedValue_13348__3, extractedValue_13348__4) ;
      const GGS_prefsAsDefaultValue temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray8  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 385)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_arrayController:
    {
      GGS_lstring extractedValue_13451__0 ;
      GGS_bool extractedValue_13451__1 ;
      var_kind_12950.getAssociatedValuesFor_arrayController (extractedValue_13451__0, extractedValue_13451__1) ;
      const GGS_prefsAsDefaultValue temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray10  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 387)) ;
    }
    break ;
  case GGS_propertyKind::Enumeration::enum_selectionController:
    {
      GGS_string extractedValue_13557__0 ;
      var_kind_12950.getAssociatedValuesFor_selectionController (extractedValue_13557__0) ;
      const GGS_prefsAsDefaultValue temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mPrefPropertyName ().readProperty_location (), GGS_string ("an atomic property is required here"), fixItArray12  COMMA_SOURCE_FILE ("explicit-default-value.ggs", 389)) ;
    }
    break ;
  }
  const GGS_prefsAsDefaultValue temp_13 = this ;
  outArgument_outSwiftDefaultValueAsString = GGS_string ("preferences_").add_operation (temp_13.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 391)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@prefsAsDefaultValue enterDefaultValuePrecedence'
//
//--------------------------------------------------------------------------------------------------

void cPtr_prefsAsDefaultValue::method_enterDefaultValuePrecedence (const GGS_lstring constinArgument_inNode,
                                                                   GGS_declarationPrecedenceGraph & ioArgument_ioGraph,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_prefsAsDefaultValue temp_0 = this ;
  const GGS_prefsAsDefaultValue temp_1 = this ;
  GGS_lstring var_p_13955 = GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)).add_operation (temp_0.readProperty_mPrefPropertyName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("explicit-default-value.ggs", 400)), temp_1.readProperty_mPrefPropertyName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioGraph.setter_addEdge (constinArgument_inNode, var_p_13955 COMMA_SOURCE_FILE ("explicit-default-value.ggs", 401)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'generateCode???'
//
//--------------------------------------------------------------------------------------------------

void routine_generateCode_3F__3F__3F_ (const GGS_string constinArgument_inXcodeProjectString,
                                       const GGS_generationStruct constinArgument_inGeneration,
                                       const GGS_string constinArgument_inSourceFile,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_outputDirectory_2519 = constinArgument_inSourceFile.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("code-generation.ggs", 62)) ;
  GGS_string var_projectName_2590 = constinArgument_inSourceFile.getter_lastPathComponent (SOURCE_FILE ("code-generation.ggs", 63)).getter_stringByDeletingPathExtension (SOURCE_FILE ("code-generation.ggs", 63)) ;
  GGS_string var_fileOutputDirectory_2672 = var_outputDirectory_2519.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 64)).add_operation (var_projectName_2590, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 64)) ;
  GGS_stringset temp_0 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 65)) ;
  GGS_stringset var_generatedFileSet_2747 = temp_0 ;
  cEnumerator_fileGenerationList enumerator_2776 (constinArgument_inGeneration.readProperty_mFileGenerationList (), EnumerationOrder::up) ;
  while (enumerator_2776.hasCurrentObject ()) {
    callExtensionMethod_generateCode ((cPtr_abstractFileGeneration *) enumerator_2776.current_mFileGeneration (HERE).ptr (), var_fileOutputDirectory_2672, constinArgument_inGeneration, var_generatedFileSet_2747, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 67)) ;
    enumerator_2776.gotoNextObject () ;
  }
  {
  routine_generateEBManagedObjectContext_3F__3F__26_ (constinArgument_inGeneration.readProperty_mEntityListForGeneration (), var_fileOutputDirectory_2672, var_generatedFileSet_2747, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 73)) ;
  }
  {
  routine_generateSelectionControllers_3F__3F__26_ (constinArgument_inGeneration.readProperty_mSelectionControllerListForGeneration (), var_fileOutputDirectory_2672, var_generatedFileSet_2747, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 78)) ;
  }
  {
  routine_generateValidationRoutineStubs_3F__3F__26_ (var_fileOutputDirectory_2672, constinArgument_inGeneration.readProperty_mValidationStubRoutineListForGeneration (), var_generatedFileSet_2747, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 83)) ;
  }
  {
  routine_generateStandardProperties_3F__3F__3F__26_ (var_fileOutputDirectory_2672, constinArgument_inGeneration.readProperty_mPropertyClassList (), constinArgument_inGeneration.readProperty_mTransientPropertyTypeList (), var_generatedFileSet_2747, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 88)) ;
  }
  {
  routine_generateXcodeProject_3F__3F__3F__3F_ (var_outputDirectory_2519, constinArgument_inXcodeProjectString, var_generatedFileSet_2747, var_projectName_2590, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 94)) ;
  }
  {
  routine_generateTestFile_3F__3F__3F__3F_ (constinArgument_inXcodeProjectString, var_projectName_2590, constinArgument_inGeneration.readProperty_mMainXibDescriptorList (), var_outputDirectory_2519, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 100)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'standard_properties'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_standard_5F_properties_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_standard_5F_properties (
  "",
  0,
  gWrapperAllFiles_standard_5F_properties_0,
  0,
  gWrapperAllDirectories_standard_5F_properties_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties scalarProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_scalarProperty (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_TYPE,
                                                                      const GGS_bool & in_TRANSIENT,
                                                                      const GGS_string & /* in_COMPARISON_5F_METHOD */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n//   Scalar property ") ;
  result.appendString (in_TYPE.stringValue ()) ;
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_0 = in_TRANSIENT.operator_not (SOURCE_FILE ("scalar-standard-property.swift.galgasTemplate", 11)).boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBObservableMutableProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("   = EBComputedProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString ("     = EBStoredProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (" = EBStandAloneProperty <") ;
    result.appendString (in_TYPE.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n//--------------------------------------------------------------------------------------------------\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'standard_properties classProperty'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_standard_5F_properties_classProperty (Compiler * /* inCompiler */,
                                                                     const GGS_string & in_CLASS_5F_NAME,
                                                                     const GGS_bool & in_TRANSIENT
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//--------------------------------------------------------------------------------------------------\n//  THIS FILE IS GENERATED BY EASY BINDINGS, DO NOT MODIFY IT\n//--------------------------------------------------------------------------------------------------\n\nimport AppKit\n\n//--------------------------------------------------------------------------------------------------\n") ;
  const enumGalgasBool test_0 = in_TRANSIENT.boolEnum () ;
  switch (test_0) {
  case kBoolTrue : {
    result.appendString ("//   Transient property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  case kBoolFalse : {
    result.appendString ("//   Property class ") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("\n") ;
    } break ;
  default :
    break ;
  }
  result.appendString ("//--------------------------------------------------------------------------------------------------\n\n") ;
  const enumGalgasBool test_1 = in_TRANSIENT.operator_not (SOURCE_FILE ("class-standard-property.swift.galgasTemplate", 17)).boolEnum () ;
  switch (test_1) {
  case kBoolTrue : {
    result.appendString ("typealias EBReadWriteProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("   = EBObservableMutableProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBComputedProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("    = EBComputedProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStoredProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("      = EBStoredProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\ntypealias EBStandAloneProperty_") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString ("  = EBStandAloneProperty <") ;
    result.appendString (in_CLASS_5F_NAME.stringValue ()) ;
    result.appendString (">\n") ;
    } break ;
  case kBoolFalse : {
    } break ;
  default :
    break ;
  }
  result.appendString ("\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateStandardProperties???&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateStandardProperties_3F__3F__3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                         const GGS_stringlist constinArgument_inPropertyClassList,
                                                         const GGS_transientExternTypeList constinArgument_inTransientPropertyExternTypeList,
                                                         GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("UInt32"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 133)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Int"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 134)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Bool"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 135)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Double"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 136)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("String"), GGS_bool (false), GGS_string ("localizedStandardCompare"), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 137)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Data"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 138)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("Date"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 139)) ;
  }
  {
  routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, GGS_string ("BezierPathArray"), GGS_bool (false), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 140)) ;
  }
  cEnumerator_stringlist enumerator_5564 (constinArgument_inPropertyClassList, EnumerationOrder::up) ;
  while (enumerator_5564.hasCurrentObject ()) {
    {
    routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_5564.current_mValue (HERE), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 143)) ;
    }
    enumerator_5564.gotoNextObject () ;
  }
  cEnumerator_transientExternTypeList enumerator_5734 (constinArgument_inTransientPropertyExternTypeList, EnumerationOrder::up) ;
  while (enumerator_5734.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_5734.current_mIsClass (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, enumerator_5734.current_mTypeName (HERE), GGS_bool (true), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 147)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (constinArgument_inOutputDirectory, enumerator_5734.current_mTypeName (HERE), GGS_bool (true), GGS_string::makeEmptyString (), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 149)) ;
      }
    }
    enumerator_5734.gotoNextObject () ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSBezierPath"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 152)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSFont"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 153)) ;
  }
  {
  routine_generateClassProperty_3F__3F__3F_transient_26_ (constinArgument_inOutputDirectory, GGS_string ("NSColor"), GGS_bool (false), ioArgument_ioGeneratedFileSet, inCompiler  COMMA_SOURCE_FILE ("code-generation.ggs", 154)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateClassProperty???transient&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateClassProperty_3F__3F__3F_transient_26_ (const GGS_string constinArgument_inOutputDirectory,
                                                             const GGS_string constinArgument_inClassPropertyTypeName,
                                                             const GGS_bool constinArgument_inTransient,
                                                             GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_6721 = GGS_string (filewrapperTemplate_standard_5F_properties_classProperty (inCompiler, constinArgument_inClassPropertyTypeName, constinArgument_inTransient COMMA_SOURCE_FILE ("code-generation.ggs", 163))) ;
  GGS_string var_fileName_6843 = GGS_string ("property-").add_operation (constinArgument_inClassPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 165)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 165)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_6843, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 166)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_6843, var_contents_6721, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 167)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateScalarProperty???transient?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateScalarProperty_3F__3F__3F_transient_3F__26_ (const GGS_string constinArgument_inOutputDirectory,
                                                                  const GGS_string constinArgument_inScalarPropertyTypeName,
                                                                  const GGS_bool constinArgument_inTransient,
                                                                  const GGS_string constinArgument_inComparisonMethod,
                                                                  GGS_stringset & ioArgument_ioGeneratedFileSet,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_contents_7484 = GGS_string (filewrapperTemplate_standard_5F_properties_scalarProperty (inCompiler, constinArgument_inScalarPropertyTypeName, constinArgument_inTransient, constinArgument_inComparisonMethod COMMA_SOURCE_FILE ("code-generation.ggs", 181))) ;
  GGS_string var_fileName_7628 = GGS_string ("property-").add_operation (constinArgument_inScalarPropertyTypeName, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 183)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 183)) ;
  {
  ioArgument_ioGeneratedFileSet.setter_insert (var_fileName_7628, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 184)) ;
  }
  {
  GGS_string::class_method_generateFile (constinArgument_inOutputDirectory, var_fileName_7628, var_contents_7484, inCompiler COMMA_SOURCE_FILE ("code-generation.ggs", 185)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProject????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProject_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                   const GGS_string constinArgument_inXcodeProjectString,
                                                   const GGS_stringset constinArgument_inGeneratedFileSet,
                                                   const GGS_string constinArgument_projectName,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inXcodeProjectString.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (constinArgument_inOutputDirectory, constinArgument_inXcodeProjectString, constinArgument_inGeneratedFileSet, constinArgument_projectName, inCompiler  COMMA_SOURCE_FILE ("xcode-project.ggs", 39)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateXcodeProjectInternal????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateXcodeProjectInternal_3F__3F__3F__3F_ (const GGS_string constinArgument_inOutputDirectory,
                                                           const GGS_string constinArgument_inXcodeProjectString,
                                                           const GGS_stringset constinArgument_inGeneratedFileSet,
                                                           const GGS_string constinArgument_projectName,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_XcodeProjectDescriptor var_xcodeProject_1552 = GGS_XcodeProjectDescriptor::init (inCompiler COMMA_HERE) ;
  GGS_string var_SDK_1633 = GGS_string ("macosx") ;
  GGS_string var_DEPLOYMENT_1654 = GGS_string ("10.10") ;
  {
  GGS_stringlist temp_0 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("ALWAYS_SEARCH_USER_PATHS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 56)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("ARCHS = \"$(ARCHS_STANDARD_64_BIT)\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 57)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_ENABLE_OBJC_ARC = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 58)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_GENERATE_DEBUGGING_SYMBOLS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 59)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PRECOMPILE_PREFIX_HEADER = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 60)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_THREADSAFE_STATICS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 61)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_IMPLICIT_FUNCTION_DECLARATIONS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 62)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_TREAT_WARNINGS_AS_ERRORS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 63)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_64_TO_32_BIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 64)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 65)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 66)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 67)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_NEWLINE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 68)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_MISSING_PROTOTYPES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 69)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_ABOUT_RETURN_TYPE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 70)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_CHECK_SWITCH_STATEMENTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 71)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_FOUR_CHARACTER_CONSTANTS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 72)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 73)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INHIBIT_ALL_WARNINGS = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 74)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 75)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_MISSING_PARENTHESES = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 76)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_NON_VIRTUAL_DESTRUCTOR = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 77)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_PEDANTIC = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 78)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SHADOW = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 79)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_SIGN_COMPARE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 80)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_TYPECHECK_CALLS_TO_PRINTF = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 81)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNINITIALIZED_AUTOS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 82)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNKNOWN_PRAGMAS = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 83)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_FUNCTION = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 84)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_LABEL = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 85)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VALUE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 86)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_WARN_UNUSED_VARIABLE = YES"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 87)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("HEADER_SEARCH_PATHS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 88)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("MACOSX_DEPLOYMENT_TARGET = ").add_operation (var_DEPLOYMENT_1654, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 89)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 89)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("SDKROOT = ").add_operation (var_SDK_1633, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 90)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 90)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("COPY_PHASE_STRIP = NO"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 91)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("SWIFT_VERSION = 4.2"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 92)) ;
  temp_0.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("LD_RUNPATH_SEARCH_PATHS = \"$(inherited) @executable_path/../Frameworks\""), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 93)) ;
  extensionSetter_addSettingsToDefaultConfiguration (var_xcodeProject_1552, temp_0, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 55)) ;
  }
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 96)) ;
  GGS_stringlist var_swiftFileRefList_3525 = temp_1 ;
  GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 97)) ;
  GGS_stringlist var_resourceFileRefList_3565 = temp_2 ;
  GGS_stringset var_generatedFileSet_3596 = constinArgument_inGeneratedFileSet ;
  {
  var_generatedFileSet_3596.setter_insert (GGS_string ("MainMenu.xib"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 99)) ;
  }
  GGS_stringlist var_cppFileRefs_3686 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_3722 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_3756 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_3791 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_string var_groupRef_4188 ;
  {
  extensionSetter_addGroupWithFiles (var_xcodeProject_1552, GGS_string ("Sources"), constinArgument_projectName, var_generatedFileSet_3596, var_cppFileRefs_3686, var_mFileRefs_3722, var_mmFileRefs_3756, var_swiftFileRefList_3525, var_frameworkFileRefs_3791, var_resourceFileRefList_3565, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 104)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1552, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 116)) ;
  }
  GGS_stringlist var_cppFileRefs_32__4268 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mFileRefs_32__4305 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_mmFileRefs_32__4340 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  GGS_stringlist var_frameworkFileRefs_32__4376 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
  {
  GGS_stringset temp_3 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  temp_3.enterElement (GGS_string ("Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 124)) ;
  extensionSetter_addGroupWithFiles (var_xcodeProject_1552, GGS_string ("Resources"), constinArgument_projectName, temp_3, var_cppFileRefs_32__4268, var_mFileRefs_32__4305, var_mmFileRefs_32__4340, var_swiftFileRefList_3525, var_frameworkFileRefs_32__4376, var_resourceFileRefList_3565, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 121)) ;
  }
  {
  extensionSetter_placeGroupAsMainGroup (var_xcodeProject_1552, var_groupRef_4188, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 133)) ;
  }
  {
  GGS_stringlist temp_4 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 139)) ;
  GGS_stringlist temp_5 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  temp_5.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_OPTIMIZATION_LEVEL = 0"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 142)) ;
  temp_5.enterElement (GGS_stringlist_2E_element::init_21_ (GGS_string ("GCC_PREPROCESSOR_DEFINITIONS = ()"), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 143)) ;
  GGS_stringlist temp_6 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 145)) ;
  GGS__32_stringlist temp_7 = GGS__32_stringlist::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 146)) ;
  GGS_string joker_5293 ; // Joker input parameter
  extensionSetter_addAppTarget (var_xcodeProject_1552, constinArgument_projectName, constinArgument_projectName, var_swiftFileRefList_3525, temp_4, var_resourceFileRefList_3565, temp_5, temp_6, temp_7, constinArgument_projectName.add_operation (GGS_string ("/Info.plist"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 147)), joker_5293, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 135)) ;
  }
  GGS_string var_sourceDir_5343 = constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)).add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 151)) ;
  extensionMethod_generateAtPath (var_xcodeProject_1552, constinArgument_inOutputDirectory.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)).add_operation (GGS_string (".xcodeproj"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 153)), var_sourceDir_5343.add_operation (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)).add_operation (GGS_string (".xcodeproj.txt"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 154)), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 152)) ;
  GGS_stringset temp_8 = GGS_stringset::init (inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  temp_8.enterElement (constinArgument_projectName, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 161)) ;
  GGS_string var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_info_5F_plist (inCompiler, constinArgument_projectName, constinArgument_inXcodeProjectString, GGS_string ("1.0.0"), temp_8 COMMA_SOURCE_FILE ("xcode-project.ggs", 157))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5343, GGS_string ("Info.plist"), var_s_5606, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 163)) ;
  }
  var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_main_5F_xib (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 168))) ;
  {
  GGS_string::class_method_generateFile (var_sourceDir_5343, GGS_string ("MainMenu.xib"), var_s_5606, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 171)) ;
  }
  var_s_5606 = GGS_string (filewrapperTemplate_additionalXcodeFiles_build_5F_command (inCompiler, constinArgument_projectName COMMA_SOURCE_FILE ("xcode-project.ggs", 176))) ;
  GGS_bool joker_6099 ; // Joker input parameter
  var_s_5606.method_writeToExecutableFileWhenDifferentContents (constinArgument_inOutputDirectory.add_operation (GGS_string ("/build.py"), inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 178)), joker_6099, inCompiler COMMA_SOURCE_FILE ("xcode-project.ggs", 177)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'additionalXcodeFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_additionalXcodeFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_additionalXcodeFiles (
  "",
  0,
  gWrapperAllFiles_additionalXcodeFiles_0,
  0,
  gWrapperAllDirectories_additionalXcodeFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles main_xib'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_main_5F_xib (Compiler * /* inCompiler */,
                                                                 const GGS_string & in_PROJECT_5F_NAME
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"\?>\n<document type=\"com.apple.InterfaceBuilder3.Cocoa.XIB\" version=\"3.0\" toolsVersion=\"7528.3\" systemVersion=\"14C1514\" targetRuntime=\"MacOSX.Cocoa\" propertyAccessControl=\"none\">\n    <dependencies>\n        <deployment version=\"1090\" identifier=\"macosx\"/>\n        <plugIn identifier=\"com.apple.InterfaceBuilder.CocoaPlugin\" version=\"7528.3\"/>\n    </dependencies>\n    <objects>\n        <customObject id=\"-2\" userLabel=\"File's Owner\" customClass=\"NSApplication\"/>\n        <customObject id=\"-1\" userLabel=\"First Responder\" customClass=\"FirstResponder\"/>\n        <customObject id=\"-3\" userLabel=\"Application\" customClass=\"NSObject\"/>\n        <menu title=\"AMainMenu\" systemMenu=\"main\" id=\"29\">\n            <items>\n                <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"56\">\n                    <menu key=\"submenu\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" systemMenu=\"apple\" id=\"57\">\n                        <items>\n                            <menuItem title=\"About ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" id=\"58\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"orderFrontStandardAboutPanel:\" target=\"-2\" id=\"142\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"236\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Preferences…\" keyEquivalent=\",\" id=\"129\"/>\n                            <menuItem isSeparatorItem=\"YES\" id=\"143\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Services\" id=\"131\">\n                                <menu key=\"submenu\" title=\"Services\" systemMenu=\"services\" id=\"130\"/>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"144\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Hide ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"h\" id=\"134\">\n                                <connections>\n                                    <action selector=\"hide:\" target=\"-1\" id=\"367\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Hide Others\" keyEquivalent=\"h\" id=\"145\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"hideOtherApplications:\" target=\"-1\" id=\"368\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Show All\" id=\"150\">\n                                <connections>\n                                    <action selector=\"unhideAllApplications:\" target=\"-1\" id=\"370\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"149\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Quit ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" keyEquivalent=\"q\" id=\"136\">\n                                <connections>\n                                    <action selector=\"terminate:\" target=\"-3\" id=\"449\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"File\" id=\"83\">\n                    <menu key=\"submenu\" title=\"File\" id=\"81\">\n                        <items>\n                            <menuItem title=\"New\" keyEquivalent=\"n\" id=\"82\">\n                                <connections>\n                                    <action selector=\"newDocument:\" target=\"-1\" id=\"373\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open…\" keyEquivalent=\"o\" id=\"72\">\n                                <connections>\n                                    <action selector=\"openDocument:\" target=\"-1\" id=\"374\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Open Recent\" id=\"124\">\n                                <menu key=\"submenu\" title=\"Open Recent\" systemMenu=\"recentDocuments\" id=\"125\">\n                                    <items>\n                                        <menuItem title=\"Clear Menu\" id=\"126\">\n                                            <connections>\n                                                <action selector=\"clearRecentDocuments:\" target=\"-1\" id=\"127\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"79\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Close\" keyEquivalent=\"w\" id=\"73\">\n                                <connections>\n                                    <action selector=\"performClose:\" target=\"-1\" id=\"193\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Save…\" keyEquivalent=\"s\" id=\"75\">\n                                <connections>\n                                    <action selector=\"saveDocument:\" target=\"-1\" id=\"362\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Revert to Saved\" id=\"112\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <connections>\n                                    <action selector=\"revertDocumentToSaved:\" target=\"-1\" id=\"364\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"74\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Page Setup...\" keyEquivalent=\"P\" id=\"77\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"runPageLayout:\" target=\"-1\" id=\"87\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Print…\" keyEquivalent=\"p\" id=\"78\">\n                                <connections>\n                                    <action selector=\"print:\" target=\"-1\" id=\"86\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Edit\" id=\"217\">\n                    <menu key=\"submenu\" title=\"Edit\" id=\"205\">\n                        <items>\n                            <menuItem title=\"Undo\" keyEquivalent=\"z\" id=\"207\">\n                                <connections>\n                                    <action selector=\"undo:\" target=\"-1\" id=\"223\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Redo\" keyEquivalent=\"Z\" id=\"215\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"redo:\" target=\"-1\" id=\"231\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"206\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Cut\" keyEquivalent=\"x\" id=\"199\">\n                                <connections>\n                                    <action selector=\"cut:\" target=\"-1\" id=\"228\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Copy\" keyEquivalent=\"c\" id=\"197\">\n                                <connections>\n                                    <action selector=\"copy:\" target=\"-1\" id=\"224\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste\" keyEquivalent=\"v\" id=\"203\">\n                                <connections>\n                                    <action selector=\"paste:\" target=\"-1\" id=\"226\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Paste and Match Style\" keyEquivalent=\"V\" id=\"485\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"pasteAsPlainText:\" target=\"-1\" id=\"486\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Delete\" id=\"202\">\n                                <connections>\n                                    <action selector=\"delete:\" target=\"-1\" id=\"235\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Select All\" keyEquivalent=\"a\" id=\"198\">\n                                <connections>\n                                    <action selector=\"selectAll:\" target=\"-1\" id=\"232\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"214\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Find\" id=\"218\">\n                                <menu key=\"submenu\" title=\"Find\" id=\"220\">\n                                    <items>\n                                        <menuItem title=\"Find…\" tag=\"1\" keyEquivalent=\"f\" id=\"209\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"241\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find and Replace…\" tag=\"12\" keyEquivalent=\"f\" id=\"534\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"535\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Next\" tag=\"2\" keyEquivalent=\"g\" id=\"208\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"487\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Find Previous\" tag=\"3\" keyEquivalent=\"G\" id=\"213\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"488\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Use Selection for Find\" tag=\"7\" keyEquivalent=\"e\" id=\"221\">\n                                            <connections>\n                                                <action selector=\"performFindPanelAction:\" target=\"-1\" id=\"489\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Jump to Selection\" keyEquivalent=\"j\" id=\"210\">\n                                            <connections>\n                                                <action selector=\"centerSelectionInVisibleArea:\" target=\"-1\" id=\"245\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Spelling and Grammar\" id=\"216\">\n                                <menu key=\"submenu\" title=\"Spelling and Grammar\" id=\"200\">\n                                    <items>\n                                        <menuItem title=\"Show Spelling and Grammar\" keyEquivalent=\":\" id=\"204\">\n                                            <connections>\n                                                <action selector=\"showGuessPanel:\" target=\"-1\" id=\"230\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Document Now\" keyEquivalent=\";\" id=\"201\">\n                                            <connections>\n                                                <action selector=\"checkSpelling:\" target=\"-1\" id=\"225\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"453\"/>\n                                        <menuItem title=\"Check Spelling While Typing\" id=\"219\">\n                                            <connections>\n                                                <action selector=\"toggleContinuousSpellChecking:\" target=\"-1\" id=\"222\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Check Grammar With Spelling\" id=\"346\">\n                                            <connections>\n                                                <action selector=\"toggleGrammarChecking:\" target=\"-1\" id=\"347\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Correct Spelling Automatically\" id=\"454\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticSpellingCorrection:\" target=\"-1\" id=\"456\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Substitutions\" id=\"348\">\n                                <menu key=\"submenu\" title=\"Substitutions\" id=\"349\">\n                                    <items>\n                                        <menuItem title=\"Show Substitutions\" id=\"457\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"orderFrontSubstitutionsPanel:\" target=\"-1\" id=\"458\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"459\"/>\n                                        <menuItem title=\"Smart Copy/Paste\" tag=\"1\" keyEquivalent=\"f\" id=\"350\">\n                                            <connections>\n                                                <action selector=\"toggleSmartInsertDelete:\" target=\"-1\" id=\"355\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Quotes\" tag=\"2\" keyEquivalent=\"g\" id=\"351\">\n                                            <connections>\n                                                <action selector=\"toggleAutomaticQuoteSubstitution:\" target=\"-1\" id=\"356\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Dashes\" id=\"460\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticDashSubstitution:\" target=\"-1\" id=\"461\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smart Links\" tag=\"3\" keyEquivalent=\"G\" id=\"354\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" shift=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticLinkDetection:\" target=\"-1\" id=\"357\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Text Replacement\" id=\"462\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleAutomaticTextReplacement:\" target=\"-1\" id=\"463\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Transformations\" id=\"450\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Transformations\" id=\"451\">\n                                    <items>\n                                        <menuItem title=\"Make Upper Case\" id=\"452\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"uppercaseWord:\" target=\"-1\" id=\"464\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Make Lower Case\" id=\"465\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"lowercaseWord:\" target=\"-1\" id=\"468\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Capitalize\" id=\"466\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"capitalizeWord:\" target=\"-1\" id=\"467\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Speech\" id=\"211\">\n                                <menu key=\"submenu\" title=\"Speech\" id=\"212\">\n                                    <items>\n                                        <menuItem title=\"Start Speaking\" id=\"196\">\n                                            <connections>\n                                                <action selector=\"startSpeaking:\" target=\"-1\" id=\"233\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Stop Speaking\" id=\"195\">\n                                            <connections>\n                                                <action selector=\"stopSpeaking:\" target=\"-1\" id=\"227\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Format\" id=\"375\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Format\" id=\"376\">\n                        <items>\n                            <menuItem title=\"Font\" id=\"377\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Font\" systemMenu=\"font\" id=\"388\">\n                                    <items>\n                                        <menuItem title=\"Show Fonts\" keyEquivalent=\"t\" id=\"389\">\n                                            <connections>\n                                                <action selector=\"orderFrontFontPanel:\" target=\"420\" id=\"424\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Bold\" tag=\"2\" keyEquivalent=\"b\" id=\"390\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"421\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Italic\" tag=\"1\" keyEquivalent=\"i\" id=\"391\">\n                                            <connections>\n                                                <action selector=\"addFontTrait:\" target=\"420\" id=\"422\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Underline\" keyEquivalent=\"u\" id=\"392\">\n                                            <connections>\n                                                <action selector=\"underline:\" target=\"-1\" id=\"432\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"393\"/>\n                                        <menuItem title=\"Bigger\" tag=\"3\" keyEquivalent=\"+\" id=\"394\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"425\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Smaller\" tag=\"4\" keyEquivalent=\"-\" id=\"395\">\n                                            <connections>\n                                                <action selector=\"modifyFont:\" target=\"420\" id=\"423\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"396\"/>\n                                        <menuItem title=\"Kern\" id=\"397\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Kern\" id=\"415\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"416\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardKerning:\" target=\"-1\" id=\"438\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"417\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffKerning:\" target=\"-1\" id=\"441\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Tighten\" id=\"418\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"tightenKerning:\" target=\"-1\" id=\"431\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Loosen\" id=\"419\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"loosenKerning:\" target=\"-1\" id=\"435\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Ligature\" id=\"398\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Ligature\" id=\"411\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"412\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useStandardLigatures:\" target=\"-1\" id=\"439\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use None\" id=\"413\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"turnOffLigatures:\" target=\"-1\" id=\"440\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Use All\" id=\"414\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"useAllLigatures:\" target=\"-1\" id=\"434\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem title=\"Baseline\" id=\"399\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Baseline\" id=\"405\">\n                                                <items>\n                                                    <menuItem title=\"Use Default\" id=\"406\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"unscript:\" target=\"-1\" id=\"437\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Superscript\" id=\"407\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"superscript:\" target=\"-1\" id=\"430\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Subscript\" id=\"408\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"subscript:\" target=\"-1\" id=\"429\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Raise\" id=\"409\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"raiseBaseline:\" target=\"-1\" id=\"426\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem title=\"Lower\" id=\"410\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"lowerBaseline:\" target=\"-1\" id=\"427\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"400\"/>\n                                        <menuItem title=\"Show Colors\" keyEquivalent=\"C\" id=\"401\">\n                                            <connections>\n                                                <action selector=\"orderFrontColorPanel:\" target=\"-1\" id=\"433\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"402\"/>\n                                        <menuItem title=\"Copy Style\" keyEquivalent=\"c\" id=\"403\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyFont:\" target=\"-1\" id=\"428\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Style\" keyEquivalent=\"v\" id=\"404\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteFont:\" target=\"-1\" id=\"436\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                            <menuItem title=\"Text\" id=\"496\">\n                                <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                <menu key=\"submenu\" title=\"Text\" id=\"497\">\n                                    <items>\n                                        <menuItem title=\"Align Left\" keyEquivalent=\"{\" id=\"498\">\n                                            <connections>\n                                                <action selector=\"alignLeft:\" target=\"-1\" id=\"524\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Center\" keyEquivalent=\"|\" id=\"499\">\n                                            <connections>\n                                                <action selector=\"alignCenter:\" target=\"-1\" id=\"518\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Justify\" id=\"500\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"alignJustified:\" target=\"-1\" id=\"523\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Align Right\" keyEquivalent=\"}\" id=\"501\">\n                                            <connections>\n                                                <action selector=\"alignRight:\" target=\"-1\" id=\"521\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"502\"/>\n                                        <menuItem title=\"Writing Direction\" id=\"503\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <menu key=\"submenu\" title=\"Writing Direction\" id=\"508\">\n                                                <items>\n                                                    <menuItem title=\"Paragraph\" enabled=\"NO\" id=\"509\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"510\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionNatural:\" target=\"-1\" id=\"525\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"511\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionLeftToRight:\" target=\"-1\" id=\"526\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"512\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeBaseWritingDirectionRightToLeft:\" target=\"-1\" id=\"527\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem isSeparatorItem=\"YES\" id=\"513\"/>\n                                                    <menuItem title=\"Selection\" enabled=\"NO\" id=\"514\">\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                    </menuItem>\n                                                    <menuItem id=\"515\">\n                                                        <string key=\"title\"> Default</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionNatural:\" target=\"-1\" id=\"528\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"516\">\n                                                        <string key=\"title\"> Left to Right</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionLeftToRight:\" target=\"-1\" id=\"529\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                    <menuItem id=\"517\">\n                                                        <string key=\"title\"> Right to Left</string>\n                                                        <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                                        <connections>\n                                                            <action selector=\"makeTextWritingDirectionRightToLeft:\" target=\"-1\" id=\"530\"/>\n                                                        </connections>\n                                                    </menuItem>\n                                                </items>\n                                            </menu>\n                                        </menuItem>\n                                        <menuItem isSeparatorItem=\"YES\" id=\"504\"/>\n                                        <menuItem title=\"Show Ruler\" id=\"505\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\"/>\n                                            <connections>\n                                                <action selector=\"toggleRuler:\" target=\"-1\" id=\"520\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Copy Ruler\" keyEquivalent=\"c\" id=\"506\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"copyRuler:\" target=\"-1\" id=\"522\"/>\n                                            </connections>\n                                        </menuItem>\n                                        <menuItem title=\"Paste Ruler\" keyEquivalent=\"v\" id=\"507\">\n                                            <modifierMask key=\"keyEquivalentModifierMask\" control=\"YES\" command=\"YES\"/>\n                                            <connections>\n                                                <action selector=\"pasteRuler:\" target=\"-1\" id=\"519\"/>\n                                            </connections>\n                                        </menuItem>\n                                    </items>\n                                </menu>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"View\" id=\"295\">\n                    <menu key=\"submenu\" title=\"View\" id=\"296\">\n                        <items>\n                            <menuItem title=\"Show Toolbar\" keyEquivalent=\"t\" id=\"297\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" option=\"YES\" command=\"YES\"/>\n                                <connections>\n                                    <action selector=\"toggleToolbarShown:\" target=\"-1\" id=\"366\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Customize Toolbar…\" id=\"298\">\n                                <connections>\n                                    <action selector=\"runToolbarCustomizationPalette:\" target=\"-1\" id=\"365\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Window\" id=\"19\">\n                    <menu key=\"submenu\" title=\"Window\" systemMenu=\"window\" id=\"24\">\n                        <items>\n                            <menuItem title=\"Minimize\" keyEquivalent=\"m\" id=\"23\">\n                                <connections>\n                                    <action selector=\"performMiniaturize:\" target=\"-1\" id=\"37\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem title=\"Zoom\" id=\"239\">\n                                <connections>\n                                    <action selector=\"performZoom:\" target=\"-1\" id=\"240\"/>\n                                </connections>\n                            </menuItem>\n                            <menuItem isSeparatorItem=\"YES\" id=\"92\">\n                                <modifierMask key=\"keyEquivalentModifierMask\" command=\"YES\"/>\n                            </menuItem>\n                            <menuItem title=\"Bring All to Front\" id=\"5\">\n                                <connections>\n                                    <action selector=\"arrangeInFront:\" target=\"-1\" id=\"39\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n                <menuItem title=\"Help\" id=\"490\">\n                    <modifierMask key=\"keyEquivalentModifierMask\"/>\n                    <menu key=\"submenu\" title=\"Help\" systemMenu=\"help\" id=\"491\">\n                        <items>\n                            <menuItem title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (" Help\" keyEquivalent=\"\?\" id=\"492\">\n                                <connections>\n                                    <action selector=\"showHelp:\" target=\"-1\" id=\"493\"/>\n                                </connections>\n                            </menuItem>\n                        </items>\n                    </menu>\n                </menuItem>\n            </items>\n        </menu>\n        <window identifier=\"PrefWindow\" title=\"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("\" allowsToolTipsWhenApplicationIsInactive=\"NO\" autorecalculatesKeyViewLoop=\"NO\" releasedWhenClosed=\"NO\" animationBehavior=\"default\" id=\"371\">\n            <windowStyleMask key=\"styleMask\" titled=\"YES\"/>\n            <windowPositionMask key=\"initialPositionMask\" leftStrut=\"YES\" rightStrut=\"YES\" topStrut=\"YES\" bottomStrut=\"YES\"/>\n            <rect key=\"contentRect\" x=\"335\" y=\"390\" width=\"615\" height=\"409\"/>\n            <rect key=\"screenRect\" x=\"0.0\" y=\"0.0\" width=\"2560\" height=\"1418\"/>\n            <view key=\"contentView\" id=\"372\">\n                <rect key=\"frame\" x=\"0.0\" y=\"0.0\" width=\"615\" height=\"409\"/>\n                <autoresizingMask key=\"autoresizingMask\"/>\n            </view>\n        </window>\n        <customObject id=\"536\" userLabel=\"Prefs\" customClass=\"Preferences\">\n            <connections>\n                <outlet property=\"window\" destination=\"371\" id=\"MyW-LM-hi6\"/>\n            </connections>\n        </customObject>\n        <customObject id=\"420\" customClass=\"NSFontManager\"/>\n    </objects>\n</document>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles info_plist'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_info_5F_plist (Compiler * /* inCompiler */,
                                                                   const GGS_string & in_PROJECT_5F_NAME,
                                                                   const GGS_string & in_APPLICATION_5F_BUNDLE_5F_BASE,
                                                                   const GGS_string & in_VERSION_5F_STRING,
                                                                   const GGS_stringset & in_HANDLED_5F_EXTENSION_5F_SET
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("<\?xml version=\"1.0\" encoding=\"UTF-8\"\?>\n<!DOCTYPE plist PUBLIC \"-//Apple//DTD PLIST 1.0//EN\" \"http://www.apple.com/DTDs/PropertyList-1.0.dtd\">\n<plist version=\"1.0\">\n<dict>\n <key>CFBundleDevelopmentRegion</key>\n <string>English</string>\n <key>CFBundleExecutable</key>\n <string>${EXECUTABLE_NAME}</string>\n <key>CFBundleIconFile</key>\n <string>application_icns</string>\n <key>CFBundleIdentifier</key>\n <string>") ;
  result.appendString (in_APPLICATION_5F_BUNDLE_5F_BASE.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("</string>\n <key>CFBundleInfoDictionaryVersion</key>\n <string>6.0</string>\n <key>CFBundleName</key>\n <string>${PRODUCT_NAME}</string>\n <key>CFBundlePackageType</key>\n <string>APPL</string>\n <key>CFBundleSignature</key>\n <string>\?\?\?\?</string>\n <key>LSMinimumSystemVersion</key>\n <string>10.9</string>\n <key>CFBundleShortVersionString</key>\n <string>") ;
  result.appendString (in_VERSION_5F_STRING.stringValue ()) ;
  result.appendString ("</string>\n <key>NSMainNibFile</key>\n <string>MainMenu</string>\n <key>NSPrincipalClass</key>\n <string>EBApplication</string>\n <key>CFBundleDocumentTypes</key>\n <array>\n") ;
  GGS_uint index_1016_ (0) ;
  if (in_HANDLED_5F_EXTENSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_1016 (in_HANDLED_5F_EXTENSION_5F_SET, EnumerationOrder::up) ;
    while (enumerator_1016.hasCurrentObject ()) {
      result.appendString ("  <dict>\n   <key>CFBundleTypeIconFile</key>\n   <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("_icns</string>\n   <key>CFBundleTypeExtensions</key>\n   <array>\n    <string>") ;
      result.appendString (enumerator_1016.current_key (HERE).stringValue ()) ;
      result.appendString ("</string>\n   </array>\n   <key>CFBundleTypeName</key>\n   <string>") ;
      result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
      result.appendString (" Source</string>\n   <key>CFBundleTypeOSTypes</key>\n   <array>\n    <string>TEXT</string>\n   </array>\n   <key>CFBundleTypeRole</key>\n   <string>Editor</string>\n   <key>LSTypeIsPackage</key>\n   <false/>\n   <key>NSDocumentClass</key>\n   <string>OC_GGS_Document</string>\n  </dict>\n") ;
      index_1016_.increment () ;
      enumerator_1016.gotoNextObject () ;
    }
  }
  result.appendString ("\n </array>\n</dict>\n</plist>\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'additionalXcodeFiles build_command'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_additionalXcodeFiles_build_5F_command (Compiler * /* inCompiler */,
                                                                      const GGS_string & in_PROJECT_5F_NAME
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("#! /usr/bin/env python\n# -*- coding: UTF-8 -*-\n\n//-----------------------------------------------------------------------------*\n\nimport subprocess, os, sys, atexit\n\n//-----------------------------------------------------------------------------*\n\ndef cleanup () :\n  if buildProcess.poll () == None :\n    buildProcess.kill ()\n    print 'Build process killed'\n\n//-----------------------------------------------------------------------------*\n\n//------------------ Register a function for killing build subprocess\natexit.register (cleanup)\n//------------------ Get compiler as first argument\ncompiler = \"eb\" # Default compiler\nif len (sys.argv) > 1 :\n  compiler = sys.argv [1]\n//------------------ Get script absolute path\nscriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\nos.chdir (scriptDir)\n//------------------ Build\nprint \"+ \" + compiler + \" ") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"\nbuildProcess = subprocess.Popen ([compiler, \"") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".eb\"])\nbuildProcess.wait ()\n//------------------ Xcode build\nif buildProcess.returncode == 0 :\n  buildProcess = subprocess.Popen ([\"/Applications/Xcode.app/Contents/Developer/usr/bin/xcodebuild\"])\n  buildProcess.wait ()\n//------------------ Result\nif buildProcess.returncode != 0 :\n  sys.exit (buildProcess.returncode)\n\n//-----------------------------------------------------------------------------*\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'xcodeProjectGenerationFilewrapper'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_xcodeProjectGenerationFilewrapper (
  "",
  0,
  gWrapperAllFiles_xcodeProjectGenerationFilewrapper_0,
  0,
  gWrapperAllDirectories_xcodeProjectGenerationFilewrapper_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'xcodeProjectGenerationFilewrapper xcodeproj'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_xcodeProjectGenerationFilewrapper_xcodeproj (Compiler * /* inCompiler */,
                                                                            const GGS_string & in_PROJECT_5F_REF,
                                                                            const GGS_string & in_MAIN_5F_GROUP_5F_REF,
                                                                            const GGS_XCodeGroupList & in_GROUPS,
                                                                            const GGS_stringlist & in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS,
                                                                            const GGS_XCodeToolTargetList & in_TOOL_5F_TARGET_5F_LIST,
                                                                            const GGS_XCodeAppTargetList & in_APP_5F_TARGET_5F_LIST,
                                                                            const GGS__32_stringlist & in_CPP_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_M_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_MM_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_SWIFT_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_FRAMEWORK_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_HEADER_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_PLIST_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_TIFF_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_ICNS_5F_FILE_5F_LIST,
                                                                            const GGS__32_stringlist & in_XIB_5F_FILE_5F_LIST,
                                                                            const GGS_BuildFileList & in_BUILD_5F_FILE_5F_LIST,
                                                                            const GGS_string & in_DEFAULT_5F_CONFIGURATION_5F_REF,
                                                                            const GGS_stringlist & in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST,
                                                                            const GGS_string & in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("// !$*UTF8*$!\n{\n  archiveVersion = 1;\n  classes = {\n  };\n  objectVersion = 42;\n  objects = {\n\n  /*------------------------------------------------------------------ PBXBuildFile */\n") ;
  GGS_uint index_249_ (0) ;
  if (in_BUILD_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator_BuildFileList enumerator_249 (in_BUILD_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_249.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_249.current_mBuildReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_249.current_mFileName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXBuildFile;\n    fileRef = ") ;
      result.appendString (enumerator_249.current_mFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    settings = {ATTRIBUTES = (); };\n  };\n\n") ;
      index_249_.increment () ;
      enumerator_249.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFileReference */\n") ;
  GGS_uint index_554_ (0) ;
  if (in_CPP_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_554 (in_CPP_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_554.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_554.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.cpp;\n    name = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 25)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_554.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 26)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_554_.increment () ;
      enumerator_554.gotoNextObject () ;
    }
  }
  GGS_uint index_901_ (0) ;
  if (in_M_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_901 (in_M_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_901.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_901.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.obj;\n    name = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 35)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_901.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 36)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_901_.increment () ;
      enumerator_901.gotoNextObject () ;
    }
  }
  GGS_uint index_1247_ (0) ;
  if (in_MM_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1247 (in_MM_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1247.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1247.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.cpp.objcpp;\n    name = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 45)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1247.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 46)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_1247_.increment () ;
      enumerator_1247.gotoNextObject () ;
    }
  }
  GGS_uint index_1601_ (0) ;
  if (in_SWIFT_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1601 (in_SWIFT_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1601.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1601.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.swift;\n    name = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 55)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1601.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 56)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_1601_.increment () ;
      enumerator_1601.gotoNextObject () ;
    }
  }
  GGS_uint index_1951_ (0) ;
  if (in_HEADER_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_1951 (in_HEADER_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1951.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_1951.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = sourcecode.c.h;\n    name = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 65)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_1951.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 66)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_1951_.increment () ;
      enumerator_1951.gotoNextObject () ;
    }
  }
  GGS_uint index_2302_ (0) ;
  if (in_FRAMEWORK_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_2302 (in_FRAMEWORK_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2302.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2302.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXFileReference;\n    lastKnownFileType = wrapper.framework;\n    name = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 74)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_2302.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 75)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_2302_.increment () ;
      enumerator_2302.gotoNextObject () ;
    }
  }
  GGS_uint index_2835_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_2835 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_2835.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_2835.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_2835.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 84)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      index_2835_.increment () ;
      enumerator_2835.gotoNextObject () ;
    }
  }
  GGS_uint index_3426_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_3426 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3426.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3426.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    explicitFileType = \"compiled.mach-o.executable\";\n    includeInIndex = 0;\n    path = ") ;
      result.appendString (enumerator_3426.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 93)).stringValue ()) ;
      result.appendString (";\n    sourceTree = BUILT_PRODUCTS_DIR;\n  };\n\n") ;
      index_3426_.increment () ;
      enumerator_3426.gotoNextObject () ;
    }
  }
  GGS_uint index_3735_ (0) ;
  if (in_PLIST_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_3735 (in_PLIST_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_3735.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_3735.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = text.plist;\n    name = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 102)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_3735.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 103)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_3735_.increment () ;
      enumerator_3735.gotoNextObject () ;
    }
  }
  GGS_uint index_4059_ (0) ;
  if (in_XIB_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4059 (in_XIB_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4059.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4059.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    fileEncoding = 4;\n    lastKnownFileType = wrapper.xib;\n    name = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 112)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4059.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 113)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_4059_.increment () ;
      enumerator_4059.gotoNextObject () ;
    }
  }
  GGS_uint index_4385_ (0) ;
  if (in_TIFF_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4385 (in_TIFF_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4385.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4385.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.tiff;\n    name = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 121)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4385.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 122)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_4385_.increment () ;
      enumerator_4385.gotoNextObject () ;
    }
  }
  GGS_uint index_4684_ (0) ;
  if (in_ICNS_5F_FILE_5F_LIST.isValid ()) {
    cEnumerator__32_stringlist enumerator_4684 (in_ICNS_5F_FILE_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_4684.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_4684.current_mValue_30_ (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFileReference;\n    lastKnownFileType = image.icns;\n    name = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_lastPathComponent (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 130)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_4684.current_mValue_31_ (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 131)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n\n") ;
      index_4684_.increment () ;
      enumerator_4684.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXFrameworksBuildPhase */\n\n") ;
  GGS_uint index_5295_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_5295 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5295.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_5295.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_0) {
      case kBoolTrue : {
        result.appendString ("  ") ;
        result.appendString (enumerator_5295.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
        GGS_uint index_5534_ (0) ;
        if (enumerator_5295.current_mFrameworksFileRefList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_5534 (enumerator_5295.current_mFrameworksFileRefList (HERE), EnumerationOrder::up) ;
          while (enumerator_5534.hasCurrentObject ()) {
            result.appendString ("      ") ;
            result.appendString (enumerator_5534.current_mValue (HERE).stringValue ()) ;
            result.appendString (",\n") ;
            index_5534_.increment () ;
            enumerator_5534.gotoNextObject () ;
          }
        }
        result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      index_5295_.increment () ;
      enumerator_5295.gotoNextObject () ;
    }
  }
  GGS_uint index_5987_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_5987 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_5987.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_5987.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" = {\n    isa = PBXFrameworksBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_6171_ (0) ;
      if (enumerator_5987.current_mFrameworksFileRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6171 (enumerator_5987.current_mFrameworksFileRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_6171.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6171.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_6171_.increment () ;
          enumerator_6171.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      index_5987_.increment () ;
      enumerator_5987.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXGroup section */\n") ;
  GGS_uint index_6447_ (0) ;
  if (in_GROUPS.isValid ()) {
    cEnumerator_XCodeGroupList enumerator_6447 (in_GROUPS, EnumerationOrder::up) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_6447.current_mGroupReference (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXGroup;\n    children = (\n") ;
      GGS_uint index_6574_ (0) ;
      if (enumerator_6447.current_mChildrenRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_6574 (enumerator_6447.current_mChildrenRefs (HERE), EnumerationOrder::up) ;
        while (enumerator_6574.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_6574.current_mValue (HERE).stringValue ()) ;
          result.appendString (", \n") ;
          index_6574_.increment () ;
          enumerator_6574.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_6447.current_mGroupName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 174)).stringValue ()) ;
      result.appendString (";\n    path = ") ;
      result.appendString (enumerator_6447.current_mGroupPath (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 175)).stringValue ()) ;
      result.appendString (";\n    sourceTree = \"<group>\";\n  };\n") ;
      index_6447_.increment () ;
      enumerator_6447.gotoNextObject () ;
    }
  }
  result.appendString ("\n  ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (" /* Main Group */ = {\n    isa = PBXGroup;\n    children = (\n") ;
  GGS_uint index_6886_ (0) ;
  if (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS.isValid ()) {
    cEnumerator_stringlist enumerator_6886 (in_MAIN_5F_GROUP_5F_CHILDREN_5F_REFS, EnumerationOrder::up) ;
    while (enumerator_6886.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_6886.current_mValue (HERE).stringValue ()) ;
      result.appendString (",\n") ;
      index_6886_.increment () ;
      enumerator_6886.gotoNextObject () ;
    }
  }
  result.appendString ("    );\n    sourceTree = \"<group>\";\n  };\n\n  /*------------------------------------------------------------------ PBXNativeTarget */\n") ;
  GGS_uint index_7300_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_7300 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_7300.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_7300.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_7300.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_7300.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" ,\n") ;
      const enumGalgasBool test_1 = GGS_bool (ComparisonKind::greaterThan, enumerator_7300.current_mFrameworksFileRefList (HERE).getter_count (SOURCE_FILE ("project.pbxproj.galgasTemplate", 200)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      switch (test_1) {
      case kBoolTrue : {
        result.appendString ("      ") ;
        result.appendString (enumerator_7300.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
        result.appendString (" , /* Frameworks */\n") ;
        } break ;
      case kBoolFalse : {
        } break ;
      default :
        break ;
      }
      result.appendString ("    );\n    buildRules = (\n    );\n    dependencies = (\n    );\n    name = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 208)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_7300.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 210)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_7300.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.tool\";\n  };\n \n") ;
      index_7300_.increment () ;
      enumerator_7300.gotoNextObject () ;
    }
  }
  GGS_uint index_8232_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_8232 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_8232.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_8232.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (" /* ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).stringValue ()) ;
      result.appendString (" */ = {\n    isa = PBXNativeTarget;\n    buildConfigurationList = ") ;
      result.appendString (enumerator_8232.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" ;\n    buildPhases = (\n      ") ;
      result.appendString (enumerator_8232.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" , /* Resources */\n      ") ;
      result.appendString (enumerator_8232.current_mFrameworkBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Frameworks */\n      ") ;
      result.appendString (enumerator_8232.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" , /* Sources */\n    );\n    buildRules = (\n    );\n    dependencies = (\n") ;
      GGS_uint index_8621_ (0) ;
      if (enumerator_8232.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_8621 (enumerator_8232.current_mDependentTargets (HERE), EnumerationOrder::up) ;
        while (enumerator_8621.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_8621.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" ,\n") ;
          index_8621_.increment () ;
          enumerator_8621.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    name = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 234)).stringValue ()) ;
      result.appendString (";\n    productInstallPath = \"$(HOME)/bin\";\n    productName = ") ;
      result.appendString (enumerator_8232.current_mTargetName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 236)).stringValue ()) ;
      result.appendString (";\n    productReference = ") ;
      result.appendString (enumerator_8232.current_mProductFileReference (HERE).stringValue ()) ;
      result.appendString (" ;\n    productType = \"com.apple.product-type.application\";\n  };\n\n") ;
      index_8232_.increment () ;
      enumerator_8232.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXProject */\n  ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */ = {\n   isa = PBXProject;\n   attributes = {\n     LastSwiftUpdateCheck = 0700;\n     LastUpgradeCheck = 0700;\n   };\n   buildConfigurationList = ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */;\n   compatibilityVersion = \"Xcode 2.4\";\n   hasScannedForEncodings = 1;\n   mainGroup = ") ;
  result.appendString (in_MAIN_5F_GROUP_5F_REF.stringValue ()) ;
  result.appendString (";\n   projectDirPath = \"\";\n   projectRoot = \"\";\n   targets = (\n") ;
  GGS_uint index_9693_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_9693 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_9693.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_9693.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      index_9693_.increment () ;
      enumerator_9693.gotoNextObject () ;
    }
  }
  GGS_uint index_10047_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10047 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10047.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_10047.current_mTargetRef (HERE).stringValue ()) ;
      result.appendString (", \n") ;
      index_10047_.increment () ;
      enumerator_10047.gotoNextObject () ;
    }
  }
  result.appendString ("   );\n  };\n\n  /*------------------------------------------------------------------ PBXResourcesBuildPhase */\n\n") ;
  GGS_uint index_10514_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_10514 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_10514.hasCurrentObject ()) {
      result.appendString ("  ") ;
      result.appendString (enumerator_10514.current_mResourceBuildRef (HERE).stringValue ()) ;
      result.appendString (" /* Resources */ = {\n    isa = PBXResourcesBuildPhase;\n    buildActionMask = 2147483647;\n    files = (\n") ;
      GGS_uint index_10697_ (0) ;
      if (enumerator_10514.current_mResourceFileBuildRefs (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_10697 (enumerator_10514.current_mResourceFileBuildRefs (HERE), EnumerationOrder::up) ;
        while (enumerator_10697.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_10697.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_10697_.increment () ;
          enumerator_10697.gotoNextObject () ;
        }
      }
      result.appendString ("    );\n    runOnlyForDeploymentPostprocessing = 0;\n  };\n\n") ;
      index_10514_.increment () ;
      enumerator_10514.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXSourcesBuildPhase */\n") ;
  GGS_uint index_11147_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_11147 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11147.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11147.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11314_ (0) ;
      if (enumerator_11147.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11314 (enumerator_11147.current_mBuildPhaseRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_11314.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11314.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_11314_.increment () ;
          enumerator_11314.gotoNextObject () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      index_11147_.increment () ;
      enumerator_11147.gotoNextObject () ;
    }
  }
  GGS_uint index_11735_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_11735 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_11735.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_11735.current_mBuildPhaseRef (HERE).stringValue ()) ;
      result.appendString (" /* Sources */ = {\n      isa = PBXSourcesBuildPhase;\n      buildActionMask = 2147483647;\n      files = (\n") ;
      GGS_uint index_11902_ (0) ;
      if (enumerator_11735.current_mBuildPhaseRefList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_11902 (enumerator_11735.current_mBuildPhaseRefList (HERE), EnumerationOrder::up) ;
        while (enumerator_11902.hasCurrentObject ()) {
          result.appendString ("        ") ;
          result.appendString (enumerator_11902.current_mValue (HERE).stringValue ()) ;
          result.appendString (",\n") ;
          index_11902_.increment () ;
          enumerator_11902.gotoNextObject () ;
        }
      }
      result.appendString ("      );\n      runOnlyForDeploymentPostprocessing = 0;\n    };\n") ;
      index_11735_.increment () ;
      enumerator_11735.gotoNextObject () ;
    }
  }
  result.appendString ("\n\n  /*------------------------------------------------------------------ PBXTargetDependency */\n \n") ;
  GGS_uint index_12424_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_12424 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12424.hasCurrentObject ()) {
      GGS_uint index_12472_ (0) ;
      if (enumerator_12424.current_mDependentTargets (HERE).isValid ()) {
        cEnumerator__32_stringlist enumerator_12472 (enumerator_12424.current_mDependentTargets (HERE), EnumerationOrder::up) ;
        while (enumerator_12472.hasCurrentObject ()) {
          result.appendString ("  ") ;
          result.appendString (enumerator_12472.current_mValue_30_ (HERE).stringValue ()) ;
          result.appendString (" = {\n    isa = PBXTargetDependency;\n    target = ") ;
          result.appendString (enumerator_12472.current_mValue_31_ (HERE).stringValue ()) ;
          result.appendString (";\n  };\n\n") ;
          index_12472_.increment () ;
          enumerator_12472.gotoNextObject () ;
        }
      }
      index_12424_.increment () ;
      enumerator_12424.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ PBXVariantGroup */\n \n  /*------------------------------------------------------------------ XCBuildConfiguration */\n    ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
  GGS_uint index_12949_ (0) ;
  if (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12949 (in_DEFAULT_5F_CONFIGURATION_5F_SETTING_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_12949.hasCurrentObject ()) {
      result.appendString ("      ") ;
      result.appendString (enumerator_12949.current_mValue (HERE).stringValue ()) ;
      result.appendString (" ;\n") ;
      index_12949_.increment () ;
      enumerator_12949.gotoNextObject () ;
    }
  }
  result.appendString ("    };\n    name = Default;\n  };\n\n") ;
  GGS_uint index_13264_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_13264 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13264.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13264.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_13432_ (0) ;
      if (enumerator_13264.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_13432 (enumerator_13264.current_mBuildConfigurationSettingList (HERE), EnumerationOrder::up) ;
        while (enumerator_13432.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_13432.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_13432_.increment () ;
          enumerator_13432.gotoNextObject () ;
        }
      }
      result.appendString ("      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13264.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 347)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      index_13264_.increment () ;
      enumerator_13264.gotoNextObject () ;
    }
  }
  GGS_uint index_13902_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_13902 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_13902.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_13902.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCBuildConfiguration;\n      buildSettings = {\n") ;
      GGS_uint index_14070_ (0) ;
      if (enumerator_13902.current_mBuildConfigurationSettingList (HERE).isValid ()) {
        cEnumerator_stringlist enumerator_14070 (enumerator_13902.current_mBuildConfigurationSettingList (HERE), EnumerationOrder::up) ;
        while (enumerator_14070.hasCurrentObject ()) {
          result.appendString ("      ") ;
          result.appendString (enumerator_14070.current_mValue (HERE).stringValue ()) ;
          result.appendString (" ;\n") ;
          index_14070_.increment () ;
          enumerator_14070.gotoNextObject () ;
        }
      }
      result.appendString ("      INFOPLIST_FILE = ") ;
      result.appendString (enumerator_13902.current_mInfoPListFile (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 359)).stringValue ()) ;
      result.appendString (";\n      PRODUCT_NAME = ") ;
      result.appendString (enumerator_13902.current_mProductFileName (HERE).getter_utf_38_Representation (SOURCE_FILE ("project.pbxproj.galgasTemplate", 360)).stringValue ()) ;
      result.appendString (" ;\n    };\n    name = Default;\n  };\n\n") ;
      index_13902_.increment () ;
      enumerator_13902.gotoNextObject () ;
    }
  }
  result.appendString ("  /*------------------------------------------------------------------ XCConfigurationList section */\n\n    ") ;
  result.appendString (in_PROJECT_5F_BUILD_5F_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Build configuration list for PBXProject */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
  result.appendString (in_DEFAULT_5F_CONFIGURATION_5F_REF.stringValue ()) ;
  result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
  GGS_uint index_14952_ (0) ;
  if (in_TOOL_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeToolTargetList enumerator_14952 (in_TOOL_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_14952.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_14952.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      index_14952_.increment () ;
      enumerator_14952.gotoNextObject () ;
    }
  }
  GGS_uint index_15549_ (0) ;
  if (in_APP_5F_TARGET_5F_LIST.isValid ()) {
    cEnumerator_XCodeAppTargetList enumerator_15549 (in_APP_5F_TARGET_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_15549.hasCurrentObject ()) {
      result.appendString ("    ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationListRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */ = {\n      isa = XCConfigurationList;\n      buildConfigurations = (\n        ") ;
      result.appendString (enumerator_15549.current_mBuildConfigurationRef (HERE).stringValue ()) ;
      result.appendString (" /* Default */,\n      );\n      defaultConfigurationIsVisible = 0;\n      defaultConfigurationName = Default;\n    };\n\n") ;
      index_15549_.increment () ;
      enumerator_15549.gotoNextObject () ;
    }
  }
  result.appendString ("/*------------------------------------------------------------------ End */\n  };\n\n  rootObject = ") ;
  result.appendString (in_PROJECT_5F_REF.stringValue ()) ;
  result.appendString (" /* Project object */;\n}\n") ;
  return GGS_string (result) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'generateTestFile????'
//
//--------------------------------------------------------------------------------------------------

void routine_generateTestFile_3F__3F__3F__3F_ (const GGS_string constinArgument_inBundleIdentifier,
                                               const GGS_string constinArgument_inProjectName,
                                               const GGS_mainXibDescriptorList constinArgument_inMainXibDescriptorList,
                                               const GGS_string constinArgument_inOutputDirectory,
                                               Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GGS_bool test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inMainXibDescriptorList.getter_count (SOURCE_FILE ("main-xib.ggs", 134)).objectCompare (GGS_uint (uint32_t (0U)))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBundleIdentifier.objectCompare (GGS_string::makeEmptyString ())) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      GGS_stringlist temp_2 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 135)) ;
      GGS_stringlist var_outlet_5F_identifier_5F_list_5083 = temp_2 ;
      cEnumerator_mainXibDescriptorList enumerator_5120 (constinArgument_inMainXibDescriptorList, EnumerationOrder::up) ;
      while (enumerator_5120.hasCurrentObject ()) {
        cEnumerator_mainXibLineDescriptorList enumerator_5168 (enumerator_5120.current_mLine (HERE), EnumerationOrder::up) ;
        while (enumerator_5168.hasCurrentObject ()) {
          switch (enumerator_5168.current_mElement (HERE).enumValue ()) {
          case GGS_mainXibElement::Enumeration::invalid:
            break ;
          case GGS_mainXibElement::Enumeration::enum_text:
            break ;
          case GGS_mainXibElement::Enumeration::enum_outlet:
            {
              GGS_lstring extractedValue_5259__0 ;
              GGS_lstring extractedValue_5262_outletName_1 ;
              enumerator_5168.current_mElement (HERE).getAssociatedValuesFor_outlet (extractedValue_5259__0, extractedValue_5262_outletName_1) ;
              {
              var_outlet_5F_identifier_5F_list_5083.setter_append (extractedValue_5262_outletName_1.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 141)) ;
              }
            }
            break ;
          }
          enumerator_5168.gotoNextObject () ;
        }
        enumerator_5120.gotoNextObject () ;
      }
      GGS_string var_s_5376 = GGS_string (filewrapperTemplate_testFiles_test_5F_py (inCompiler, constinArgument_inBundleIdentifier, constinArgument_inProjectName, var_outlet_5F_identifier_5F_list_5083 COMMA_SOURCE_FILE ("main-xib.ggs", 145))) ;
      GGS_string var_header_5502 = GGS_string ("#!/usr/bin/python3\n// coding=utf-8\n\n// https://pypi.python.org/pypi/atomac\n// https://github.com/pyatom/pyatom/blob/master/atomac/AXClasses.py\n\n") ;
      {
      GGS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, GGS_string ("test.py"), GGS_string ("#"), var_header_5502, GGS_string::makeEmptyString (), var_s_5376, GGS_string ("//    ENTER USER CODE HERE\n"), GGS_string ("\nquitApplication ()\n\n//---------------------------------------------------------------------------*\n"), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("main-xib.ggs", 154)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Filewrapper 'testFiles'
//
//--------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_testFiles_0 [1] = {
  nullptr
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_testFiles_0 [1] = {
  nullptr
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_testFiles (
  "",
  0,
  gWrapperAllFiles_testFiles_0,
  0,
  gWrapperAllDirectories_testFiles_0
) ;


//--------------------------------------------------------------------------------------------------
//
//Filewrapper template 'testFiles test_py'
//
//--------------------------------------------------------------------------------------------------

GGS_string filewrapperTemplate_testFiles_test_5F_py (Compiler * /* inCompiler */,
                                                     const GGS_string & in_BUNDLE_5F_IDENTIFIER,
                                                     const GGS_string & in_PROJECT_5F_NAME,
                                                     const GGS_stringlist & in_OUTLET_5F_IDENTIFIER_5F_LIST
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  String result ;
  result.appendString ("//-----------------------------------------------------------------------------*\n\nimport random, string\n\nimport subprocess, os, sys, atexit\nimport atomac, sys, time, inspect\n\n//-----------------------------------------------------------------------------*\n//   GET SOURCE LINE NUMBER                                                     *\n//-----------------------------------------------------------------------------*\n\ndef lineno():\n  return inspect.currentframe().f_back.f_lineno\n\n//-----------------------------------------------------------------------------*\n//   LAUNCH APPLICATION                                                         *\n//-----------------------------------------------------------------------------*\n\ndef launchApplication ():\n  scriptDir = os.path.dirname (os.path.abspath (sys.argv [0]))\n  atomac.launchAppByBundlePath (scriptDir + \"/build/Default/") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString (".app\")\n  time.sleep (0.5)\n  application = atomac.getAppRefByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  return application\n\n//-----------------------------------------------------------------------------*\n//   QUIT APPLICATION                                                           *\n//-----------------------------------------------------------------------------*\n\ndef quitApplication ():\n  atomac.terminateAppByBundleId ('") ;
  result.appendString (in_BUNDLE_5F_IDENTIFIER.stringValue ()) ;
  result.appendString (".") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   PREFERENCES WINDOW                                                         *\n//-----------------------------------------------------------------------------*\n\ndef setUpPreferencesWindow (application) :\n  time.sleep (0.5)\n  window = application.windows ('") ;
  result.appendString (in_PROJECT_5F_NAME.stringValue ()) ;
  result.appendString ("')[0]\n") ;
  GGS_uint index_1788_ (0) ;
  if (in_OUTLET_5F_IDENTIFIER_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1788 (in_OUTLET_5F_IDENTIFIER_5F_LIST, EnumerationOrder::up) ;
    while (enumerator_1788.hasCurrentObject ()) {
      result.appendString ("  global ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("\n  ") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString (" = window.findFirst (AXIdentifier='") ;
      result.appendString (enumerator_1788.current_mValue (HERE).stringValue ()) ;
      result.appendString ("')\n") ;
      index_1788_.increment () ;
      enumerator_1788.gotoNextObject () ;
    }
  }
  result.appendString ("\n//-----------------------------------------------------------------------------*\n//   CHECK TEXT FIELD VALUE                                                     *\n//-----------------------------------------------------------------------------*\n\ndef checkTextFieldValue (textField, expectedValue, line):\n  if textField.AXValue != expectedValue :\n    print '*** Check error at line ' + str (line) + ' ***'\n    sys.exit (1)\n\n//-----------------------------------------------------------------------------*\n//   SET TEXT FIELD                                                             *\n//-----------------------------------------------------------------------------*\n\ndef setTextFieldValue (textField, value):\n  textField.AXFocused = True\n  textField.AXValue = value\n  textField.Confirm ()\n  time.sleep (0.5)\n\n//-----------------------------------------------------------------------------*\n//   MAIN                                                                       *\n//-----------------------------------------------------------------------------*\n\napplication = launchApplication ()\nsetUpPreferencesWindow (application)\n\n\n") ;
  return GGS_string (result) ;
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "cLexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "eb",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .easyBindings extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "0.0.1" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * /* inCompiler */
                            COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_astDeclarationStruct var_declarationStruct_1070 = GGS_astDeclarationStruct::init (inCompiler COMMA_HERE) ;
  GGS_location joker_1242 ; // Joker input parameter
  cGrammar_easyBindings_5F_grammar::_performSourceStringParsing_ (inCompiler, GGS_string (filewrapperTemplate_predefinedOutletClasses_sourceFile (inCompiler COMMA_SOURCE_FILE ("program.ggs", 25))), GGS_string::makeEmptyString (), var_declarationStruct_1070, joker_1242  COMMA_SOURCE_FILE ("program.ggs", 25)) ;
  GGS_location var_endOfSourceFile_1438 ;
  var_endOfSourceFile_1438.drop () ;
  cGrammar_easyBindings_5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, var_declarationStruct_1070, var_endOfSourceFile_1438  COMMA_SOURCE_FILE ("program.ggs", 27)) ;
  {
  var_declarationStruct_1070.mProperty_mUnifiedDeclarationList.setter_append (GGS_prefsDeclarationAST::init_21__21_ (GGS_lstring::init_21__21_ (function_preferencesName (inCompiler COMMA_SOURCE_FILE ("program.ggs", 30)), GGS_location::class_func_nowhere (SOURCE_FILE ("program.ggs", 30)), inCompiler COMMA_HERE), var_declarationStruct_1070.readProperty_mPreferences (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("program.ggs", 29)) ;
  }
  {
  routine_enterAtomicClassesIn_26_declarationList (var_declarationStruct_1070.mProperty_mUnifiedDeclarationList, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 35)) ;
  }
  GGS_declarationListAST var_sortedDeclarationListAST_1980 ;
  {
  routine_sortProperties_3F__3F__21_ (constinArgument_inSourceFile.readProperty_string (), var_declarationStruct_1070.readProperty_mUnifiedDeclarationList (), var_sortedDeclarationListAST_1980, inCompiler  COMMA_SOURCE_FILE ("program.ggs", 37)) ;
  }
  GGS_semanticContext var_semanticContext_2086 = GGS_semanticContext::init (inCompiler COMMA_HERE) ;
  var_semanticContext_2086.mProperty_mAutoLayoutVStackFunctionMap = var_declarationStruct_1070.readProperty_mAutoLayoutVStackFunctionMap () ;
  var_semanticContext_2086.mProperty_mAutoLayoutHStackFunctionMap = var_declarationStruct_1070.readProperty_mAutoLayoutHStackFunctionMap () ;
  var_semanticContext_2086.mProperty_mEnumerationFunctionListAST = var_declarationStruct_1070.readProperty_mEnumerationFunctionListAST () ;
  GGS_generationStruct var_generation_2416 = GGS_generationStruct::init (inCompiler COMMA_HERE) ;
  cEnumerator_declarationListAST enumerator_2457 (var_sortedDeclarationListAST_1980, EnumerationOrder::up) ;
  bool bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_2457.hasCurrentObject () && bool_0) {
    while (enumerator_2457.hasCurrentObject () && bool_0) {
      callExtensionMethod_firstAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_2457.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 45)) ;
      enumerator_2457.gotoNextObject () ;
      if (enumerator_2457.hasCurrentObject ()) {
        bool_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 44)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 48)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildBindingSpecificationMap_26__3F_ (var_semanticContext_2086, var_declarationStruct_1070.readProperty_mBindingSpecificationListMap (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 49)) ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 54)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      routine_buildAutoLayoutBindingSpecificationMap_26__3F_ (var_semanticContext_2086, var_declarationStruct_1070.readProperty_mAutoLayoutBindingSpecificationList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 55)) ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3092 (var_sortedDeclarationListAST_1980, EnumerationOrder::up) ;
  bool bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3092.hasCurrentObject () && bool_3) {
    while (enumerator_3092.hasCurrentObject () && bool_3) {
      callExtensionMethod_secondAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3092.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 62)) ;
      enumerator_3092.gotoNextObject () ;
      if (enumerator_3092.hasCurrentObject ()) {
        bool_3 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 61)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3321 (var_sortedDeclarationListAST_1980, EnumerationOrder::up) ;
  bool bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3321.hasCurrentObject () && bool_4) {
    while (enumerator_3321.hasCurrentObject () && bool_4) {
      callExtensionMethod_thirdAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3321.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 66)) ;
      enumerator_3321.gotoNextObject () ;
      if (enumerator_3321.hasCurrentObject ()) {
        bool_4 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 65)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_declarationListAST enumerator_3550 (var_sortedDeclarationListAST_1980, EnumerationOrder::up) ;
  bool bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
  if (enumerator_3550.hasCurrentObject () && bool_5) {
    while (enumerator_3550.hasCurrentObject () && bool_5) {
      callExtensionMethod_fourthAnalysisPhase ((cPtr_abstractDeclarationAST *) enumerator_3550.current_mPropertyDeclaration (HERE).ptr (), var_semanticContext_2086, var_generation_2416, inCompiler COMMA_SOURCE_FILE ("program.ggs", 70)) ;
      enumerator_3550.gotoNextObject () ;
      if (enumerator_3550.hasCurrentObject ()) {
        bool_5 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 69)).objectCompare (GGS_uint (uint32_t (0U)))).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 73)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      cEnumerator_enumerationFunctionListAST enumerator_3849 (var_semanticContext_2086.readProperty_mEnumerationFunctionListAST (), EnumerationOrder::up) ;
      while (enumerator_3849.hasCurrentObject ()) {
        GGS_classKind var_type_3964 ;
        GGS_propertyMap joker_3970_3 ; // Joker input parameter
        GGS_actionMap joker_3970_2 ; // Joker input parameter
        GGS_propertyGenerationList joker_3970_1 ; // Joker input parameter
        var_semanticContext_2086.readProperty_mClassMap ().method_searchKey (enumerator_3849.current_mEnumName (HERE), var_type_3964, joker_3970_3, joker_3970_2, joker_3970_1, inCompiler COMMA_SOURCE_FILE ("program.ggs", 75)) ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = var_type_3964.getter_isAtomic (SOURCE_FILE ("program.ggs", 76)).operator_not (SOURCE_FILE ("program.ggs", 76)).boolEnum () ;
          if (kBoolTrue == test_7) {
            TC_Array <FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (enumerator_3849.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray8  COMMA_SOURCE_FILE ("program.ggs", 77)) ;
          }
        }
        if (kBoolFalse == test_7) {
          GGS_typeKind var_typeKind_4120 ;
          var_type_3964.method_extractAtomic (var_typeKind_4120, inCompiler COMMA_SOURCE_FILE ("program.ggs", 79)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_typeKind_4120.getter_isEnumType (SOURCE_FILE ("program.ggs", 80)).operator_not (SOURCE_FILE ("program.ggs", 80)).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_3849.current_mEnumName (HERE).readProperty_location (), GGS_string ("this type should be an enum type"), fixItArray10  COMMA_SOURCE_FILE ("program.ggs", 81)) ;
            }
          }
        }
        enumerator_3849.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 87)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_11) {
      {
      routine_graphvizAnalysis_3F__3F__3F_ (constinArgument_inSourceFile.readProperty_string ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("program.ggs", 88)), var_semanticContext_2086, var_declarationStruct_1070.readProperty_mGraphvizList (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 88)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("program.ggs", 91)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_generateCode_3F__3F__3F_ (var_declarationStruct_1070.readProperty_mXcodeProject ().readProperty_string (), var_generation_2416, constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("program.ggs", 92)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  TC_UniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      cLexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "eb") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_easyBindings_5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_easyBindings_5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_easyBindings_5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

